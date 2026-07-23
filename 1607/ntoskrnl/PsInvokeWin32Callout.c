/*
 * XREFs of PsInvokeWin32Callout @ 0x140427EE0
 * Callers:
 *     PopGetConsoleDisplayRequestCount @ 0x140008870 (PopGetConsoleDisplayRequestCount.c)
 *     SeCaptureAtomTableCallout @ 0x140074C74 (SeCaptureAtomTableCallout.c)
 *     PspJobDelete @ 0x14010CAAC (PspJobDelete.c)
 *     PopEventCalloutDispatch @ 0x1401321D4 (PopEventCalloutDispatch.c)
 *     KiSystemCall64 @ 0x14016F500 (KiSystemCall64.c)
 *     PoSessionBuiltinPanelState @ 0x14020D22C (PoSessionBuiltinPanelState.c)
 *     NtSetSystemInformation @ 0x1403EB59C (NtSetSystemInformation.c)
 *     ExpWin32OpenProcedure @ 0x14042A2F8 (ExpWin32OpenProcedure.c)
 *     ExpWin32OkayToCloseProcedure @ 0x14042A3C0 (ExpWin32OkayToCloseProcedure.c)
 *     ExpWin32CloseProcedure @ 0x14042A480 (ExpWin32CloseProcedure.c)
 *     NtSetInformationJobObject @ 0x140463AA8 (NtSetInformationJobObject.c)
 *     PfpQueryGpuUtilization @ 0x1404B93B4 (PfpQueryGpuUtilization.c)
 *     ExpWin32ParseProcedure @ 0x1404BC6C8 (ExpWin32ParseProcedure.c)
 *     ExpWin32DeleteProcedure @ 0x1404BEAE8 (ExpWin32DeleteProcedure.c)
 *     PopDispatchStateCallout @ 0x1404D136C (PopDispatchStateCallout.c)
 *     PopNotifyConsoleUserPresent @ 0x1404D25CC (PopNotifyConsoleUserPresent.c)
 *     PspAssignProcessToJob @ 0x1404D5BEC (PspAssignProcessToJob.c)
 *     PsThawProcess @ 0x140501050 (PsThawProcess.c)
 *     PsFreezeProcess @ 0x140501490 (PsFreezeProcess.c)
 *     PopNotifySessionDisplayRequired @ 0x14052DD2C (PopNotifySessionDisplayRequired.c)
 *     PopBroadcastSessionInfo @ 0x14057C174 (PopBroadcastSessionInfo.c)
 *     PopControlMonitor @ 0x14066FEF4 (PopControlMonitor.c)
 *     PopNotifyCsStateExited @ 0x14066FF6C (PopNotifyCsStateExited.c)
 *     PoSessionPowerControl @ 0x140674E4C (PoSessionPowerControl.c)
 *     PopNotifyConsoleDisplayBurst @ 0x140674ED4 (PopNotifyConsoleDisplayBurst.c)
 *     PopSendSessionInfo @ 0x140674F58 (PopSendSessionInfo.c)
 *     PspShutdownCsrProcess @ 0x14067EB60 (PspShutdownCsrProcess.c)
 *     PspQueryProcessInterferenceCountCallback @ 0x1406807D8 (PspQueryProcessInterferenceCountCallback.c)
 * Callees:
 *     MmSessionGetWin32Callouts @ 0x140013A80 (MmSessionGetWin32Callouts.c)
 *     ExDereferenceCallBackBlock @ 0x140013AC0 (ExDereferenceCallBackBlock.c)
 *     ExReferenceCallBackBlock @ 0x140013B00 (ExReferenceCallBackBlock.c)
 *     MmGetSessionId @ 0x140013CE0 (MmGetSessionId.c)
 *     ExCallSessionCallBack @ 0x140462BD4 (ExCallSessionCallBack.c)
 */

__int64 __fastcall PsInvokeWin32Callout(int a1, __int64 a2, int a3, __int64 a4)
{
  __int64 v4; // rbp
  __int64 v5; // r10
  _RTL_RUN_ONCE *v7; // rdi
  struct _EX_RUNDOWN_REF *v8; // rax
  struct _EX_RUNDOWN_REF *v9; // rbx
  unsigned int v10; // esi
  __int64 result; // rax
  int v12; // r8d
  _KPROCESS *Process; // rcx
  int SessionId; // eax
  _DWORD *v15; // r9
  _RTL_RUN_ONCE *Win32Callouts; // rax
  __int64 v17; // rcx
  unsigned int v18; // [rsp+40h] [rbp+18h] BYREF

  v4 = a1;
  v5 = a4;
  if ( a3 )
  {
    v12 = a3 - 1;
    if ( v12 )
    {
      if ( v12 != 1 )
        return 3221225485LL;
      v17 = 0LL;
    }
    else
    {
      Process = KeGetCurrentThread()->ApcState.Process;
      if ( (Process[1].DirectoryTableBase & 0x1000000000000LL) != 0 )
      {
        SessionId = MmGetSessionId(Process);
        if ( *v15 == SessionId )
        {
          Win32Callouts = MmSessionGetWin32Callouts();
          return ExCallCallBack((signed __int64 *)Win32Callouts, v4, a2);
        }
      }
      v17 = v5;
    }
    result = ExCallSessionCallBack(v17, v4, a2, &v18);
    if ( (int)result >= 0 )
      return v18;
  }
  else
  {
    v7 = MmSessionGetWin32Callouts();
    v8 = ExReferenceCallBackBlock((signed __int64 *)v7);
    v9 = v8;
    if ( v8 )
    {
      v10 = ((__int64 (__fastcall *)(unsigned __int64, __int64, __int64))v8[1].Count)(v8[2].Count, v4, a2);
      ExDereferenceCallBackBlock((signed __int64 *)v7, v9);
    }
    else
    {
      return (unsigned int)-1073741811;
    }
    return v10;
  }
  return result;
}
