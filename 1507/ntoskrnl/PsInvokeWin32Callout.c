/*
 * XREFs of PsInvokeWin32Callout @ 0x140422750
 * Callers:
 *     SeCaptureAtomTableCallout @ 0x1400EFDC0 (SeCaptureAtomTableCallout.c)
 *     PspJobDelete @ 0x140120A58 (PspJobDelete.c)
 *     PopEventCalloutDispatch @ 0x14014FBB8 (PopEventCalloutDispatch.c)
 *     KiSystemCall64 @ 0x140193800 (KiSystemCall64.c)
 *     PopGetConsoleDisplayRequestCount @ 0x140241B68 (PopGetConsoleDisplayRequestCount.c)
 *     NtSetInformationJobObject @ 0x140417C04 (NtSetInformationJobObject.c)
 *     PspAssignProcessToJob @ 0x14041A524 (PspAssignProcessToJob.c)
 *     ExpWin32CloseProcedure @ 0x140421738 (ExpWin32CloseProcedure.c)
 *     ExpWin32OkayToCloseProcedure @ 0x1404217D8 (ExpWin32OkayToCloseProcedure.c)
 *     ExpWin32OpenProcedure @ 0x14042188C (ExpWin32OpenProcedure.c)
 *     PspExitThread @ 0x140422830 (PspExitThread.c)
 *     PsFreezeProcess @ 0x1404EB390 (PsFreezeProcess.c)
 *     PsThawProcess @ 0x1404EBD04 (PsThawProcess.c)
 *     NtDeleteAtom @ 0x1405046E4 (NtDeleteAtom.c)
 *     PsConvertToGuiThread @ 0x1405091AC (PsConvertToGuiThread.c)
 *     NtAddAtomEx @ 0x14053A594 (NtAddAtomEx.c)
 *     PfpQueryGpuUtilization @ 0x140545A28 (PfpQueryGpuUtilization.c)
 *     ExpWin32ParseProcedure @ 0x140546AC4 (ExpWin32ParseProcedure.c)
 *     ExpWin32DeleteProcedure @ 0x14054B6CC (ExpWin32DeleteProcedure.c)
 *     PopNotifyConsoleUserPresent @ 0x14055BFCC (PopNotifyConsoleUserPresent.c)
 *     PopDispatchStateCallout @ 0x14055E27C (PopDispatchStateCallout.c)
 *     PopNotifySessionDisplayRequired @ 0x140564224 (PopNotifySessionDisplayRequired.c)
 *     PopBroadcastSessionInfo @ 0x1405BC948 (PopBroadcastSessionInfo.c)
 *     PdcPoControlInput @ 0x1406B743C (PdcPoControlInput.c)
 *     PdcPoControlMonitor @ 0x1406B74B8 (PdcPoControlMonitor.c)
 *     PopSendSessionInfo @ 0x1406BCDBC (PopSendSessionInfo.c)
 *     CsrShutdownSynchronization @ 0x1406C094C (CsrShutdownSynchronization.c)
 *     PspQueryProcessInterferenceCountCallback @ 0x1406C4860 (PspQueryProcessInterferenceCountCallback.c)
 * Callees:
 *     ExDereferenceCallBackBlock @ 0x1400100E0 (ExDereferenceCallBackBlock.c)
 *     ExReferenceCallBackBlock @ 0x140010130 (ExReferenceCallBackBlock.c)
 *     MmGetSessionId @ 0x140050140 (MmGetSessionId.c)
 *     ExCallSessionCallBack @ 0x14051C2F8 (ExCallSessionCallBack.c)
 */

__int64 __fastcall PsInvokeWin32Callout(_KPROCESS *Process, __int64 a2, int a3, int a4)
{
  __int64 v4; // rdi
  int v5; // r10d
  struct _EX_RUNDOWN_REF *v7; // rax
  struct _EX_RUNDOWN_REF *v8; // rsi
  unsigned int v9; // ebx
  __int64 result; // rax
  int v11; // r8d
  int SessionId; // eax
  _DWORD *v13; // r9
  int v14; // r9d
  int v15; // edx
  unsigned int v16; // [rsp+50h] [rbp+18h] BYREF

  v4 = (int)Process;
  v5 = a4;
  if ( !a3 )
  {
LABEL_2:
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
        goto LABEL_2;
    }
    v14 = a2;
    v15 = v5;
  }
  result = ExCallSessionCallBack((_DWORD)Process, v15, v4, v14, (__int64)&v16);
  if ( (int)result >= 0 )
    return v16;
  return result;
}
