/*
 * XREFs of DxgkProcessLockScreen @ 0x1C017F490
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0012450 (_guard_dispatch_icall_nop.c)
 *     ?FindRemoteOutputDuplMgr@@YAPEAVOUTPUTDUPL_MGR@@XZ @ 0x1C0078654 (-FindRemoteOutputDuplMgr@@YAPEAVOUTPUTDUPL_MGR@@XZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00A7710 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?ProcessLockScreenActive@OUTPUTDUPL_MGR@@QEAAXXZ @ 0x1C017DC40 (-ProcessLockScreenActive@OUTPUTDUPL_MGR@@QEAAXXZ.c)
 */

void __fastcall DxgkProcessLockScreen(__int64 a1)
{
  __int64 CurrentProcess; // rax
  __int64 v2; // rdx
  __int64 ProcessDxgProcess; // rax
  __int64 v4; // rcx
  __int64 v5; // rax
  __int64 v6; // rcx
  struct DXGGLOBAL *Global; // rax
  OUTPUTDUPL_CONTEXT **RemoteOutputDuplMgr; // rax

  CurrentProcess = PsGetCurrentProcess(a1);
  ProcessDxgProcess = PsGetProcessDxgProcess(CurrentProcess, v2);
  if ( ProcessDxgProcess )
  {
    if ( (*(unsigned int (__fastcall **)(_QWORD))(*(_QWORD *)(ProcessDxgProcess + 72) + 224LL))(0LL) )
    {
      RemoteOutputDuplMgr = (OUTPUTDUPL_CONTEXT **)FindRemoteOutputDuplMgr();
      if ( RemoteOutputDuplMgr )
        OUTPUTDUPL_MGR::ProcessLockScreenActive(RemoteOutputDuplMgr);
    }
    else
    {
      Global = DXGGLOBAL::GetGlobal(v6);
      DXGGLOBAL::IterateAdaptersWithCallback(
        (__int64)Global,
        (__int64 (__fastcall *)(_QWORD *, __int64))ProcessLockScreenAdapterCallback,
        0LL,
        1);
    }
  }
  else
  {
    v5 = WdLogNewEntry5_WdError(v4);
    *(_QWORD *)(v5 + 24) = 3641LL;
    WdLogEvent5_WdError(v5);
  }
}
