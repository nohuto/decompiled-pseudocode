/*
 * XREFs of ?IsDeviceRemoved@FxDeviceDescriptionEntry@@QEAAEXZ @ 0x1C0067274
 * Callers:
 *     ?PnpEventCheckForDevicePresenceOverload@FxPkgPdo@@EEAA?AW4_WDF_DEVICE_PNP_STATE@@XZ @ 0x1C0099430 (-PnpEventCheckForDevicePresenceOverload@FxPkgPdo@@EEAA-AW4_WDF_DEVICE_PNP_STATE@@XZ.c)
 * Callees:
 *     ?MxDbgPrint@Mx@@SAXPEBDZZ @ 0x1C0033644 (-MxDbgPrint@Mx@@SAXPEBDZZ.c)
 *     WPP_IFR_SF_dd @ 0x1C005FA30 (WPP_IFR_SF_dd.c)
 */

char __fastcall FxDeviceDescriptionEntry::IsDeviceRemoved(FxDeviceDescriptionEntry *this)
{
  FxChildList *m_DeviceList; // rbp
  char v2; // di
  _FX_DRIVER_GLOBALS *m_Globals; // rsi
  unsigned __int8 CurrentIrql; // al
  KIRQL v6; // al
  bool v7; // zf
  KIRQL v8; // dl
  _LIST_ENTRY *Flink; // rcx
  _LIST_ENTRY *Blink; // rax
  FxDevice *m_Pdo; // rax

  m_DeviceList = this->m_DeviceList;
  v2 = 0;
  m_Globals = m_DeviceList->m_Globals;
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
  v6 = KeAcquireSpinLockRaiseToDpc(&this->m_DeviceList->m_ListLock);
  v7 = this->m_DescriptionState == DescriptionReportedMissing;
  v8 = v6;
  this->m_ProcessingSurpriseRemove = 0;
  if ( v7 )
  {
    this->m_DescriptionState = DescriptionUnspecified;
    if ( m_DeviceList->m_ScanCount )
    {
      m_Pdo = this->m_Pdo;
      this->m_PendingDeleteOnScanEnd = 1;
      if ( m_Pdo )
        m_Pdo->m_PkgPnp[1].m_Globals = 0LL;
    }
    else
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
      this->m_DescriptionLink.Blink = (_LIST_ENTRY *)this;
      this->m_DescriptionLink.Flink = (_LIST_ENTRY *)this;
    }
    v2 = 1;
  }
  KeReleaseSpinLock(&this->m_DeviceList->m_ListLock, v8);
  return v2;
}
