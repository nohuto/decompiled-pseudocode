/*
 * XREFs of ?NotifyDeviceRemove@FxChildList@@QEAAXPEAJ@Z @ 0x1C00674E4
 * Callers:
 *     ?PnpEventRemoved@FxPkgPnp@@KA?AW4_WDF_DEVICE_PNP_STATE@@PEAV1@@Z @ 0x1C009A630 (-PnpEventRemoved@FxPkgPnp@@KA-AW4_WDF_DEVICE_PNP_STATE@@PEAV1@@Z.c)
 * Callees:
 *     WPP_IFR_SF_q @ 0x1C000B530 (WPP_IFR_SF_q.c)
 *     ?PnpProcessEvent@FxPkgPnp@@QEAAXW4FxPnpEvent@@E@Z @ 0x1C00187A0 (-PnpProcessEvent@FxPkgPnp@@QEAAXW4FxPnpEvent@@E@Z.c)
 *     ?DrainFreeListHead@FxChildList@@IEAAXPEAU_LIST_ENTRY@@@Z @ 0x1C001D78C (-DrainFreeListHead@FxChildList@@IEAAXPEAU_LIST_ENTRY@@@Z.c)
 *     ?ProcessModificationsLocked@FxChildList@@IEAAXPEAU_LIST_ENTRY@@@Z @ 0x1C001D7E0 (-ProcessModificationsLocked@FxChildList@@IEAAXPEAU_LIST_ENTRY@@@Z.c)
 *     ?MxDbgPrint@Mx@@SAXPEBDZZ @ 0x1C0033644 (-MxDbgPrint@Mx@@SAXPEBDZZ.c)
 *     WPP_IFR_SF_dd @ 0x1C005FA30 (WPP_IFR_SF_dd.c)
 *     WPP_IFR_SF_qqq @ 0x1C006437C (WPP_IFR_SF_qqq.c)
 *     ?NotifyDeviceSurpriseRemove@FxChildList@@QEAAXXZ @ 0x1C0067734 (-NotifyDeviceSurpriseRemove@FxChildList@@QEAAXXZ.c)
 */

void __fastcall FxChildList::NotifyDeviceRemove(FxChildList *this, int *ChildCount)
{
  const void *_a1; // rax
  _FX_DRIVER_GLOBALS *m_Globals; // rdi
  unsigned __int8 CurrentIrql; // al
  KIRQL v7; // r14
  _LIST_ENTRY *p_m_DescriptionListHead; // rsi
  _LIST_ENTRY *Flink; // rcx
  _LIST_ENTRY *v10; // rdi
  _LIST_ENTRY *v11; // rax
  _LIST_ENTRY *_a3; // rcx
  const void *_a2; // rax
  _LIST_ENTRY *v14; // rcx
  _LIST_ENTRY *Blink; // rax
  unsigned __int8 v16; // r8
  unsigned __int8 v17; // r8
  _LIST_ENTRY freeHead; // [rsp+40h] [rbp-38h] BYREF

  if ( this->m_ObjectSize )
    _a1 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
  else
    _a1 = 0LL;
  WPP_IFR_SF_q(this->m_Globals, 4u, 0xCu, 0x32u, WPP_FxChildList_cpp_Traceguids, _a1);
  m_Globals = this->m_Globals;
  freeHead.Blink = &freeHead;
  freeHead.Flink = &freeHead;
  if ( m_Globals->FxVerifierOn )
  {
    CurrentIrql = KeGetCurrentIrql();
    if ( CurrentIrql )
    {
      WPP_IFR_SF_dd(m_Globals, 2u, 0x12u, 0xAu, WPP_fxverifier_h_Traceguids, CurrentIrql, 0);
      Mx::MxDbgPrint(
        "WDF detected potentially invalid operation by %s.%s Dump the driver log (!wdflogdump %s.%s) for more information.\n");
      if ( m_Globals->FxVerifierDbgBreakOnError )
        DbgBreakPoint();
    }
  }
  FxChildList::NotifyDeviceSurpriseRemove(this);
  v7 = KeAcquireSpinLockRaiseToDpc(&this->m_ListLock);
  FxChildList::ProcessModificationsLocked(this, &freeHead);
  this->m_State = ListLockedForParentRemove;
  p_m_DescriptionListHead = &this->m_DescriptionListHead;
  while ( 1 )
  {
    Flink = p_m_DescriptionListHead->Flink;
    if ( p_m_DescriptionListHead->Flink == p_m_DescriptionListHead )
      break;
    do
    {
      v10 = Flink;
      if ( !BYTE1(Flink[5].Flink) )
        break;
      Flink = Flink->Flink;
    }
    while ( Flink != p_m_DescriptionListHead );
    if ( Flink == p_m_DescriptionListHead )
      break;
    v11 = v10[4].Flink;
    _a3 = v11[10].Flink;
    if ( WORD1(v11->Blink) )
      _a2 = (const void *)((unsigned __int64)v11 ^ 0xFFFFFFFFFFFFFFF8uLL);
    else
      _a2 = 0LL;
    WPP_IFR_SF_qqq(this->m_Globals, 4u, 0xCu, 0x33u, WPP_FxChildList_cpp_Traceguids, v10, _a2, _a3);
    v14 = v10->Flink;
    Blink = v10->Blink;
    if ( v10->Flink->Blink != v10 || Blink->Flink != v10 )
      __fastfail(3u);
    Blink->Flink = v14;
    v14->Blink = Blink;
    v10->Blink = v10;
    v10->Flink = v10;
    KeReleaseSpinLock(&this->m_ListLock, v7);
    BYTE3(v10[4].Flink[13].Blink) = 1;
    _InterlockedIncrement(ChildCount);
    FxPkgPnp::PnpProcessEvent((FxPkgPnp *)v10[4].Flink[40].Blink, PnpEventParentRemoved, v16);
    v7 = KeAcquireSpinLockRaiseToDpc(&this->m_ListLock);
  }
  this->m_State = ListUnlocked;
  FxChildList::ProcessModificationsLocked(this, &freeHead);
  KeReleaseSpinLock(&this->m_ListLock, v7);
  FxChildList::DrainFreeListHead(this, &freeHead, v17);
}
