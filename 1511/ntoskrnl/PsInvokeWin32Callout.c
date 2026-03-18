/*
 * XREFs of PsInvokeWin32Callout @ 0x1403F6790
 * Callers:
 *     SeCaptureAtomTableCallout @ 0x140091E20 (SeCaptureAtomTableCallout.c)
 *     PspJobDelete @ 0x1400C49F4 (PspJobDelete.c)
 *     PopEventCalloutDispatch @ 0x14011B894 (PopEventCalloutDispatch.c)
 *     KiSystemCall64 @ 0x140165400 (KiSystemCall64.c)
 *     PopGetConsoleDisplayRequestCount @ 0x1401F392C (PopGetConsoleDisplayRequestCount.c)
 *     PspExitThread @ 0x1403F0588 (PspExitThread.c)
 *     PsConvertToGuiThread @ 0x140448CAC (PsConvertToGuiThread.c)
 *     PsThawProcess @ 0x1404529E8 (PsThawProcess.c)
 *     PsFreezeProcess @ 0x140452D70 (PsFreezeProcess.c)
 *     NtDeleteAtom @ 0x14045FBA8 (NtDeleteAtom.c)
 *     NtSetInformationJobObject @ 0x1404855D8 (NtSetInformationJobObject.c)
 *     PspAssignProcessToJob @ 0x140486CD0 (PspAssignProcessToJob.c)
 *     ExpWin32OpenProcedure @ 0x1404A99FC (ExpWin32OpenProcedure.c)
 *     ExpWin32OkayToCloseProcedure @ 0x1404A9AB4 (ExpWin32OkayToCloseProcedure.c)
 *     ExpWin32CloseProcedure @ 0x1404AACE4 (ExpWin32CloseProcedure.c)
 *     PfpQueryGpuUtilization @ 0x1404B0D74 (PfpQueryGpuUtilization.c)
 *     ExpWin32ParseProcedure @ 0x1404B2DB0 (ExpWin32ParseProcedure.c)
 *     ExpWin32DeleteProcedure @ 0x1404B47F4 (ExpWin32DeleteProcedure.c)
 *     PopDispatchStateCallout @ 0x1404C427C (PopDispatchStateCallout.c)
 *     PopNotifyConsoleUserPresent @ 0x1404C5578 (PopNotifyConsoleUserPresent.c)
 *     NtSetSystemInformation @ 0x1404D4654 (NtSetSystemInformation.c)
 *     PopNotifySessionDisplayRequired @ 0x1404EAE80 (PopNotifySessionDisplayRequired.c)
 *     PopBroadcastSessionInfo @ 0x140547F2C (PopBroadcastSessionInfo.c)
 *     PdcPoControlInput @ 0x1406375DC (PdcPoControlInput.c)
 *     PdcPoControlMonitor @ 0x140637658 (PdcPoControlMonitor.c)
 *     PopNotifyConsoleDisplayBurst @ 0x14063C74C (PopNotifyConsoleDisplayBurst.c)
 *     PopSendSessionInfo @ 0x14063C7BC (PopSendSessionInfo.c)
 *     PspShutdownCsrProcess @ 0x140640950 (PspShutdownCsrProcess.c)
 *     PspQueryProcessInterferenceCountCallback @ 0x1406422E4 (PspQueryProcessInterferenceCountCallback.c)
 * Callees:
 *     ExDereferenceCallBackBlock @ 0x1400384D0 (ExDereferenceCallBackBlock.c)
 *     ExReferenceCallBackBlock @ 0x140038510 (ExReferenceCallBackBlock.c)
 *     MmGetSessionId @ 0x140038610 (MmGetSessionId.c)
 *     ExCallSessionCallBack @ 0x140445140 (ExCallSessionCallBack.c)
 */

__int64 __fastcall PsInvokeWin32Callout(_KPROCESS *Process, __int64 a2, int a3, int a4)
{
  __int64 v4; // rsi
  int v5; // r10d
  struct _EX_RUNDOWN_REF *v7; // rax
  struct _EX_RUNDOWN_REF *v8; // rbx
  unsigned int v9; // edi
  __int64 result; // rax
  int v11; // r8d
  int SessionId; // eax
  _DWORD *v13; // r9
  int v14; // r9d
  int v15; // edx
  unsigned int v16; // [rsp+50h] [rbp+18h] BYREF

  v4 = (int)Process;
  v5 = a4;
  if ( a3 )
  {
    v11 = a3 - 1;
    if ( v11 )
    {
      if ( v11 != 1 )
        return 3221225485LL;
      v14 = a2;
      v15 = 0;
    }
    else
    {
      Process = KeGetCurrentThread()->ApcState.Process;
      if ( (Process[1].DirectoryTableBase & 0x1000000000000LL) != 0 )
      {
        SessionId = MmGetSessionId(Process);
        if ( *v13 == SessionId )
          return ExCallCallBack((__int64)Process, v4, a2);
      }
      v14 = a2;
      v15 = v5;
    }
    result = ExCallSessionCallBack((_DWORD)Process, v15, v4, v14, (__int64)&v16);
    if ( (int)result >= 0 )
      return v16;
  }
  else
  {
    v7 = ExReferenceCallBackBlock((signed __int64 *)&PsWin32CallBack);
    v8 = v7;
    if ( v7 )
    {
      v9 = ((__int64 (__fastcall *)(unsigned __int64, __int64, __int64))v7[1].Count)(v7[2].Count, v4, a2);
      ExDereferenceCallBackBlock((signed __int64 *)&PsWin32CallBack, v8);
    }
    else
    {
      return (unsigned int)-1073741811;
    }
    return v9;
  }
  return result;
}
