/*
 * XREFs of DxgkUnload @ 0x1C0142B60
 * Callers:
 *     <none>
 * Callees:
 *     DxgkEtwShutdown @ 0x1C001DD0C (DxgkEtwShutdown.c)
 *     DxgkDiagShutdown @ 0x1C001E260 (DxgkDiagShutdown.c)
 *     MonitorCleanupGlobal @ 0x1C002C750 (MonitorCleanupGlobal.c)
 *     ??3@YAXPEAX@Z @ 0x1C0065F88 (--3@YAXPEAX@Z.c)
 *     DxgkSqmShutdown @ 0x1C01507D4 (DxgkSqmShutdown.c)
 *     DpiCleanUpGlobalState @ 0x1C017154C (DpiCleanUpGlobalState.c)
 *     DxgkCleanupPower @ 0x1C0171938 (DxgkCleanupPower.c)
 *     ??1CCD_BTL@@AEAA@XZ @ 0x1C01830A8 (--1CCD_BTL@@AEAA@XZ.c)
 */

void __fastcall DxgkUnload(__int64 a1)
{
  __int64 v1; // rax
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // r8
  __int64 v5; // r9
  CCD_BTL *v6; // rbx
  ULONGLONG *v7; // rcx

  v1 = WdLogNewEntry5_WdError(a1);
  *(_QWORD *)(v1 + 24) = 852LL;
  WdLogEvent5_WdError(v1);
  SMgrUnregisterSessionChangeCallout(DxgkNotifySessionStateChange);
  MonitorCleanupGlobal(v3, v2, v4, v5);
  v6 = CCD_BTL::m_pGlobalBtl;
  if ( CCD_BTL::m_pGlobalBtl )
  {
    CCD_BTL::~CCD_BTL(CCD_BTL::m_pGlobalBtl);
    operator delete(v6);
    CCD_BTL::m_pGlobalBtl = 0LL;
  }
  DxgkCleanupPower();
  DxgkSqmShutdown();
  DpiCleanUpGlobalState();
  if ( byte_1C0047101 )
    KeDeregisterBugCheckReasonCallback(&CallbackRecord);
  DxgkEtwShutdown(v7);
  EtwUnregister(RegHandle);
  RegHandle = 0LL;
  LODWORD(hProvider) = 0;
  DxgkDiagShutdown();
  if ( g_pDeviceObject )
  {
    IoDeleteDevice(g_pDeviceObject);
    g_pDeviceObject = 0LL;
  }
  DXGGLOBAL::DestroyGlobal();
}
