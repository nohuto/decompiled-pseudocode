/*
 * XREFs of ?NotifyDeviceRemove@FxChildList@@QEAAXPEAJ@Z @ 0x1C0071444
 * Callers:
 *     ?PnpEventRemoved@FxPkgPnp@@KA?AW4_WDF_DEVICE_PNP_STATE@@PEAV1@@Z @ 0x1C00975D0 (-PnpEventRemoved@FxPkgPnp@@KA-AW4_WDF_DEVICE_PNP_STATE@@PEAV1@@Z.c)
 * Callees:
 *     ?FxVerifierCheckIrqlLevel@@YAJPEAU_FX_DRIVER_GLOBALS@@E@Z @ 0x1C00030C8 (-FxVerifierCheckIrqlLevel@@YAJPEAU_FX_DRIVER_GLOBALS@@E@Z.c)
 *     WPP_IFR_SF_q @ 0x1C0022210 (WPP_IFR_SF_q.c)
 *     ?PnpProcessEvent@FxPkgPnp@@QEAAXW4FxPnpEvent@@E@Z @ 0x1C0023450 (-PnpProcessEvent@FxPkgPnp@@QEAAXW4FxPnpEvent@@E@Z.c)
 *     ?DrainFreeListHead@FxChildList@@IEAAXPEAU_LIST_ENTRY@@@Z @ 0x1C002D3A0 (-DrainFreeListHead@FxChildList@@IEAAXPEAU_LIST_ENTRY@@@Z.c)
 *     ?ProcessModificationsLocked@FxChildList@@IEAAXPEAU_LIST_ENTRY@@@Z @ 0x1C002D3F0 (-ProcessModificationsLocked@FxChildList@@IEAAXPEAU_LIST_ENTRY@@@Z.c)
 *     WPP_IFR_SF_qqq @ 0x1C006AA34 (WPP_IFR_SF_qqq.c)
 *     ?NotifyDeviceSurpriseRemove@FxChildList@@QEAAXXZ @ 0x1C0071624 (-NotifyDeviceSurpriseRemove@FxChildList@@QEAAXXZ.c)
 */

void __fastcall FxChildList::NotifyDeviceRemove(FxChildList *this, int *ChildCount)
{
  unsigned __int16 m_ObjectSize; // ax
  _FX_DRIVER_GLOBALS *m_Globals; // rcx
  const void *_a1; // r8
  _FX_DRIVER_GLOBALS *v8; // rcx
  _LIST_ENTRY *v9; // rbx
  KIRQL v10; // r14
  _LIST_ENTRY *p_m_DescriptionListHead; // rsi
  _LIST_ENTRY *i; // rcx
  _LIST_ENTRY *Flink; // rdx
  _LIST_ENTRY *_a3; // rcx
  __int16 v15; // ax
  const void *_a2; // rdx
  _LIST_ENTRY *v17; // rcx
  _LIST_ENTRY *Blink; // rax
  unsigned __int8 v19; // r8
  unsigned __int8 v20; // r8
  _LIST_ENTRY freeHead; // [rsp+40h] [rbp-28h] BYREF

  m_ObjectSize = this->m_ObjectSize;
  m_Globals = this->m_Globals;
  _a1 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
  if ( !m_ObjectSize )
    _a1 = 0LL;
  WPP_IFR_SF_q(m_Globals, 4u, 0xCu, 0x32u, WPP_FxChildList_cpp_Traceguids, _a1);
  v8 = this->m_Globals;
  freeHead.Blink = &freeHead;
  v9 = 0LL;
  freeHead.Flink = &freeHead;
  FxVerifierCheckIrqlLevel(v8, 0);
  FxChildList::NotifyDeviceSurpriseRemove(this);
  v10 = KeAcquireSpinLockRaiseToDpc(&this->m_ListLock);
  FxChildList::ProcessModificationsLocked(this, &freeHead);
  this->m_State = ListLockedForParentRemove;
  p_m_DescriptionListHead = &this->m_DescriptionListHead;
  while ( 1 )
  {
    for ( i = p_m_DescriptionListHead->Flink; i != p_m_DescriptionListHead; i = i->Flink )
    {
      v9 = i;
      if ( !BYTE1(i[5].Flink) )
        break;
    }
    if ( i == p_m_DescriptionListHead )
      break;
    Flink = v9[4].Flink;
    _a3 = Flink[10].Flink;
    v15 = WORD1(Flink->Blink);
    _a2 = (const void *)((unsigned __int64)Flink ^ 0xFFFFFFFFFFFFFFF8uLL);
    if ( !v15 )
      _a2 = 0LL;
    WPP_IFR_SF_qqq(this->m_Globals, 4u, 0xCu, 0x33u, WPP_FxChildList_cpp_Traceguids, v9, _a2, _a3);
    v17 = v9->Flink;
    Blink = v9->Blink;
    if ( v9->Flink->Blink != v9 || Blink->Flink != v9 )
      __fastfail(3u);
    Blink->Flink = v17;
    v17->Blink = Blink;
    v9->Blink = v9;
    v9->Flink = v9;
    KeReleaseSpinLock(&this->m_ListLock, v10);
    BYTE3(v9[4].Flink[13].Blink) = 1;
    _InterlockedIncrement(ChildCount);
    FxPkgPnp::PnpProcessEvent((FxPkgPnp *)v9[4].Flink[40].Blink, PnpEventParentRemoved, v19);
    v10 = KeAcquireSpinLockRaiseToDpc(&this->m_ListLock);
  }
  this->m_State = ListUnlocked;
  FxChildList::ProcessModificationsLocked(this, &freeHead);
  KeReleaseSpinLock(&this->m_ListLock, v10);
  FxChildList::DrainFreeListHead(this, &freeHead, v20);
}
