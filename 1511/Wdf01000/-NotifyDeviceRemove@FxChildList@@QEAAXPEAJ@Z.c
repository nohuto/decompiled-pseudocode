/*
 * XREFs of ?NotifyDeviceRemove@FxChildList@@QEAAXPEAJ@Z @ 0x1C005FDA0
 * Callers:
 *     ?PnpEventRemoved@FxPkgPnp@@KA?AW4_WDF_DEVICE_PNP_STATE@@PEAV1@@Z @ 0x1C00854C0 (-PnpEventRemoved@FxPkgPnp@@KA-AW4_WDF_DEVICE_PNP_STATE@@PEAV1@@Z.c)
 * Callees:
 *     ?FxVerifierCheckIrqlLevel@@YAJPEAU_FX_DRIVER_GLOBALS@@E@Z @ 0x1C0001E40 (-FxVerifierCheckIrqlLevel@@YAJPEAU_FX_DRIVER_GLOBALS@@E@Z.c)
 *     ?PnpProcessEvent@FxPkgPnp@@QEAAXW4FxPnpEvent@@E@Z @ 0x1C0013AF0 (-PnpProcessEvent@FxPkgPnp@@QEAAXW4FxPnpEvent@@E@Z.c)
 *     WPP_IFR_SF_q @ 0x1C001E184 (WPP_IFR_SF_q.c)
 *     ?DrainFreeListHead@FxChildList@@IEAAXPEAU_LIST_ENTRY@@@Z @ 0x1C0026988 (-DrainFreeListHead@FxChildList@@IEAAXPEAU_LIST_ENTRY@@@Z.c)
 *     ?ProcessModificationsLocked@FxChildList@@IEAAXPEAU_LIST_ENTRY@@@Z @ 0x1C00269E0 (-ProcessModificationsLocked@FxChildList@@IEAAXPEAU_LIST_ENTRY@@@Z.c)
 *     WPP_IFR_SF_qqq @ 0x1C005D374 (WPP_IFR_SF_qqq.c)
 *     ?NotifyDeviceSurpriseRemove@FxChildList@@QEAAXXZ @ 0x1C005FF80 (-NotifyDeviceSurpriseRemove@FxChildList@@QEAAXXZ.c)
 */

void __fastcall FxChildList::NotifyDeviceRemove(FxChildList *this, int *ChildCount)
{
  const void *_a1; // rax
  _FX_DRIVER_GLOBALS *m_Globals; // rcx
  KIRQL v6; // r14
  _LIST_ENTRY *p_m_DescriptionListHead; // rsi
  _LIST_ENTRY *Flink; // rcx
  _LIST_ENTRY *v9; // rdi
  _LIST_ENTRY *v10; // rax
  _LIST_ENTRY *_a3; // rcx
  const void *_a2; // rax
  _LIST_ENTRY *v13; // rcx
  _LIST_ENTRY *Blink; // rax
  unsigned __int8 v15; // r8
  unsigned __int8 v16; // r8
  _LIST_ENTRY freeHead; // [rsp+40h] [rbp-28h] BYREF

  if ( this->m_ObjectSize )
    _a1 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
  else
    _a1 = 0LL;
  WPP_IFR_SF_q(this->m_Globals, 4u, 0xCu, 0x32u, WPP_FxChildList_cpp_Traceguids, _a1);
  m_Globals = this->m_Globals;
  freeHead.Blink = &freeHead;
  freeHead.Flink = &freeHead;
  FxVerifierCheckIrqlLevel(m_Globals, 0);
  FxChildList::NotifyDeviceSurpriseRemove(this);
  v6 = KeAcquireSpinLockRaiseToDpc(&this->m_ListLock);
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
      v9 = Flink;
      if ( !BYTE1(Flink[5].Flink) )
        break;
      Flink = Flink->Flink;
    }
    while ( Flink != p_m_DescriptionListHead );
    if ( Flink == p_m_DescriptionListHead )
      break;
    v10 = v9[4].Flink;
    _a3 = v10[10].Flink;
    if ( WORD1(v10->Blink) )
      _a2 = (const void *)((unsigned __int64)v10 ^ 0xFFFFFFFFFFFFFFF8uLL);
    else
      _a2 = 0LL;
    WPP_IFR_SF_qqq(this->m_Globals, 4u, 0xCu, 0x33u, WPP_FxChildList_cpp_Traceguids, v9, _a2, _a3);
    v13 = v9->Flink;
    Blink = v9->Blink;
    if ( v9->Flink->Blink != v9 || Blink->Flink != v9 )
      __fastfail(3u);
    Blink->Flink = v13;
    v13->Blink = Blink;
    v9->Blink = v9;
    v9->Flink = v9;
    KeReleaseSpinLock(&this->m_ListLock, v6);
    BYTE3(v9[4].Flink[13].Blink) = 1;
    _InterlockedIncrement(ChildCount);
    FxPkgPnp::PnpProcessEvent((FxPkgPnp *)v9[4].Flink[40].Blink, PnpEventParentRemoved, v15);
    v6 = KeAcquireSpinLockRaiseToDpc(&this->m_ListLock);
  }
  this->m_State = ListUnlocked;
  FxChildList::ProcessModificationsLocked(this, &freeHead);
  KeReleaseSpinLock(&this->m_ListLock, v6);
  FxChildList::DrainFreeListHead(this, &freeHead, v16);
}
