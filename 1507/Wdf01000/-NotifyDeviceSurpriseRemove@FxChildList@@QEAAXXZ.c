/*
 * XREFs of ?NotifyDeviceSurpriseRemove@FxChildList@@QEAAXXZ @ 0x1C0067734
 * Callers:
 *     ?NotifyDeviceRemove@FxChildList@@QEAAXPEAJ@Z @ 0x1C00674E4 (-NotifyDeviceRemove@FxChildList@@QEAAXPEAJ@Z.c)
 *     ?PnpEventSurpriseRemovePendingOverload@FxPkgPnp@@MEAAXXZ @ 0x1C009AB00 (-PnpEventSurpriseRemovePendingOverload@FxPkgPnp@@MEAAXXZ.c)
 * Callees:
 *     ?DrainFreeListHead@FxChildList@@IEAAXPEAU_LIST_ENTRY@@@Z @ 0x1C001D78C (-DrainFreeListHead@FxChildList@@IEAAXPEAU_LIST_ENTRY@@@Z.c)
 *     ?ProcessModificationsLocked@FxChildList@@IEAAXPEAU_LIST_ENTRY@@@Z @ 0x1C001D7E0 (-ProcessModificationsLocked@FxChildList@@IEAAXPEAU_LIST_ENTRY@@@Z.c)
 *     ?MxDbgPrint@Mx@@SAXPEBDZZ @ 0x1C0033644 (-MxDbgPrint@Mx@@SAXPEBDZZ.c)
 *     WPP_IFR_SF_dd @ 0x1C005FA30 (WPP_IFR_SF_dd.c)
 *     ?MarkDescriptionNotPresentWorker@FxChildList@@IEAAXPEAUFxDeviceDescriptionEntry@@E@Z @ 0x1C00673E8 (-MarkDescriptionNotPresentWorker@FxChildList@@IEAAXPEAUFxDeviceDescriptionEntry@@E@Z.c)
 *     ?MarkModificationNotPresentWorker@FxChildList@@IEAAXPEAU_LIST_ENTRY@@PEAUFxDeviceDescriptionEntry@@@Z @ 0x1C006742C (-MarkModificationNotPresentWorker@FxChildList@@IEAAXPEAU_LIST_ENTRY@@PEAUFxDeviceDescriptionEntr.c)
 */

void __fastcall FxChildList::NotifyDeviceSurpriseRemove(FxChildList *this)
{
  _FX_DRIVER_GLOBALS *m_Globals; // rdi
  unsigned __int8 CurrentIrql; // al
  KIRQL v4; // al
  _LIST_ENTRY *p_m_ModificationListHead; // r11
  KIRQL v6; // bp
  FxChildList *Flink; // rcx
  FxChildList *v8; // rdi
  _LIST_ENTRY *p_m_DescriptionListHead; // rdi
  _LIST_ENTRY *i; // r10
  _LIST_ENTRY *j; // rax
  unsigned __int8 v12; // r8
  _LIST_ENTRY freeHead; // [rsp+40h] [rbp-18h] BYREF

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
  v4 = KeAcquireSpinLockRaiseToDpc(&this->m_ListLock);
  p_m_ModificationListHead = &this->m_ModificationListHead;
  v6 = v4;
  Flink = (FxChildList *)this->m_ModificationListHead.Flink;
  if ( Flink != (FxChildList *)&this->m_ModificationListHead )
  {
    do
    {
      v8 = (FxChildList *)Flink->__vftable;
      if ( LODWORD(Flink->m_Globals) == 1 )
        FxChildList::MarkModificationNotPresentWorker(
          this,
          &freeHead,
          (FxDeviceDescriptionEntry *)&Flink[-1].m_ScanCount);
      Flink = v8;
    }
    while ( v8 != (FxChildList *)p_m_ModificationListHead );
  }
  p_m_DescriptionListHead = &this->m_DescriptionListHead;
  for ( i = this->m_DescriptionListHead.Flink; i != p_m_DescriptionListHead; i = i->Flink )
  {
    if ( (unsigned int)(LODWORD(i[1].Flink) - 1) <= 1 )
      FxChildList::MarkDescriptionNotPresentWorker(this, (FxDeviceDescriptionEntry *)i, 1u);
  }
  FxChildList::ProcessModificationsLocked(this, &freeHead);
  for ( j = p_m_DescriptionListHead->Flink; j != p_m_DescriptionListHead; j = j->Flink )
  {
    if ( LODWORD(j[1].Flink) == 4 )
      LODWORD(j[1].Flink) = 3;
  }
  KeReleaseSpinLock(&this->m_ListLock, v6);
  FxChildList::DrainFreeListHead(this, &freeHead, v12);
}
