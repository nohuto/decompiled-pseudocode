/*
 * XREFs of DxgkUnload @ 0x1C0165770
 * Callers:
 *     <none>
 * Callees:
 *     DxgkEtwShutdown @ 0x1C0022E1C (DxgkEtwShutdown.c)
 *     DxgkDiagShutdown @ 0x1C0023370 (DxgkDiagShutdown.c)
 *     MonitorCleanupGlobal @ 0x1C0034F80 (MonitorCleanupGlobal.c)
 *     TlgUnregisterAggregateProvider @ 0x1C00353F8 (TlgUnregisterAggregateProvider.c)
 *     ??3@YAXPEAX@Z @ 0x1C007F918 (--3@YAXPEAX@Z.c)
 *     ?LPMStop@LPMDisplayCtrl@@QEAAJXZ @ 0x1C016AFD8 (-LPMStop@LPMDisplayCtrl@@QEAAJXZ.c)
 *     DpiCleanUpGlobalState @ 0x1C019A104 (DpiCleanUpGlobalState.c)
 *     DxgkCleanupPower @ 0x1C019A4C8 (DxgkCleanupPower.c)
 *     ??1CCD_BTL@@AEAA@XZ @ 0x1C01AC264 (--1CCD_BTL@@AEAA@XZ.c)
 */

void DxgkUnload()
{
  __int64 v0; // rcx
  __int64 v1; // rax
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // r8
  __int64 v5; // r9
  PVOID *v6; // rbx
  CCD_BTL *v7; // rbx
  ULONGLONG *v8; // rcx

  PsSetCreateProcessNotifyRoutineEx((PCREATE_PROCESS_NOTIFY_ROUTINE_EX)DxgkProcessNotify, 1u);
  v1 = WdLogNewEntry5_WdError(v0);
  *(_QWORD *)(v1 + 24) = 973LL;
  WdLogEvent5_WdError(v1);
  SMgrUnregisterSessionChangeCallout(DxgkNotifySessionStateChange);
  MonitorCleanupGlobal(v3, v2, v4, v5);
  v6 = (PVOID *)FileObject;
  if ( FileObject )
  {
    if ( *((_DWORD *)FileObject + 9) )
      LPMDisplayCtrl::LPMStop(FileObject);
    if ( *v6 )
      ObfDereferenceObject(*v6);
    operator delete(v6);
    FileObject = 0LL;
  }
  if ( Resource )
  {
    ExDeleteResourceLite(Resource);
    operator delete(Resource);
    Resource = 0LL;
  }
  qword_1C00573B8 = 0LL;
  v7 = CCD_BTL::m_pGlobalBtl;
  if ( CCD_BTL::m_pGlobalBtl )
  {
    CCD_BTL::~CCD_BTL(CCD_BTL::m_pGlobalBtl);
    operator delete(v7);
    CCD_BTL::m_pGlobalBtl = 0LL;
  }
  DxgkCleanupPower();
  DpiCleanUpGlobalState();
  if ( byte_1C0057305 )
    KeDeregisterBugCheckReasonCallback(&CallbackRecord);
  DxgkEtwShutdown(v8);
  EtwUnregister(qword_1C00568A0);
  qword_1C00568A0 = 0LL;
  hProvider = 0;
  TlgUnregisterAggregateProvider();
  DxgkDiagShutdown();
  if ( g_pDeviceObject )
  {
    IoDeleteDevice((PDEVICE_OBJECT)g_pDeviceObject);
    g_pDeviceObject = 0LL;
  }
  DXGGLOBAL::DestroyGlobal();
}
