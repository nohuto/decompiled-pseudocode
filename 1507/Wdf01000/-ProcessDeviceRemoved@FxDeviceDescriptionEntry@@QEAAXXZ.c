/*
 * XREFs of ?ProcessDeviceRemoved@FxDeviceDescriptionEntry@@QEAAXXZ @ 0x1C00678A0
 * Callers:
 *     ?PnpEventPdoRemovedOverload@FxPkgPdo@@EEAA?AW4_WDF_DEVICE_PNP_STATE@@XZ @ 0x1C00996A0 (-PnpEventPdoRemovedOverload@FxPkgPdo@@EEAA-AW4_WDF_DEVICE_PNP_STATE@@XZ.c)
 * Callees:
 *     ?DrainFreeListHead@FxChildList@@IEAAXPEAU_LIST_ENTRY@@@Z @ 0x1C001D78C (-DrainFreeListHead@FxChildList@@IEAAXPEAU_LIST_ENTRY@@@Z.c)
 *     ?MxDbgPrint@Mx@@SAXPEBDZZ @ 0x1C0033644 (-MxDbgPrint@Mx@@SAXPEBDZZ.c)
 *     WPP_IFR_SF_dd @ 0x1C005FA30 (WPP_IFR_SF_dd.c)
 */

void __fastcall FxDeviceDescriptionEntry::ProcessDeviceRemoved(FxDeviceDescriptionEntry *this)
{
  _FX_DRIVER_GLOBALS *m_Globals; // rbx
  unsigned __int8 CurrentIrql; // al
  FxChildList *m_DeviceList; // rbx
  KIRQL v5; // dl
  _LIST_ENTRY *Flink; // rcx
  _LIST_ENTRY *Blink; // rax
  _LIST_ENTRY *v8; // rax
  unsigned __int8 v9; // r8
  _LIST_ENTRY freeHead; // [rsp+40h] [rbp-10h] BYREF

  m_Globals = this->m_DeviceList->m_Globals;
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
  m_DeviceList = this->m_DeviceList;
  freeHead.Blink = &freeHead;
  freeHead.Flink = &freeHead;
  v5 = KeAcquireSpinLockRaiseToDpc(&m_DeviceList->m_ListLock);
  if ( !m_DeviceList->m_ScanCount || (FxDeviceDescriptionEntry *)this->m_DescriptionLink.Flink == this )
  {
    Flink = this->m_DescriptionLink.Flink;
    Blink = this->m_DescriptionLink.Blink;
    if ( (FxDeviceDescriptionEntry *)this->m_DescriptionLink.Flink->Blink != this
      || (FxDeviceDescriptionEntry *)Blink->Flink != this )
    {
      __fastfail(3u);
    }
    Blink->Flink = Flink;
    Flink->Blink = Blink;
    this->m_DescriptionLink.Flink = &freeHead;
    v8 = freeHead.Blink;
    this->m_DescriptionLink.Blink = freeHead.Blink;
    if ( v8->Flink != &freeHead )
      __fastfail(3u);
    v8->Flink = (_LIST_ENTRY *)this;
    freeHead.Blink = (_LIST_ENTRY *)this;
  }
  else
  {
    this->m_PendingDeleteOnScanEnd = 1;
  }
  KeReleaseSpinLock(&this->m_DeviceList->m_ListLock, v5);
  FxChildList::DrainFreeListHead(this->m_DeviceList, &freeHead, v9);
}
