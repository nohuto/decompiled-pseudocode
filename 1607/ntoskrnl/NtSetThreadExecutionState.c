/*
 * XREFs of NtSetThreadExecutionState @ 0x14052D240
 * Callers:
 *     <none>
 * Callees:
 *     MmGetSessionIdEx @ 0x140024B6C (MmGetSessionIdEx.c)
 *     PoDestroyReasonContext @ 0x1400F9654 (PoDestroyReasonContext.c)
 *     SessionIsInteractive @ 0x1400F9DE0 (SessionIsInteractive.c)
 *     PoCaptureReasonContext @ 0x1400F9E3C (PoCaptureReasonContext.c)
 *     PopApplyLegacyPowerRequestFlags @ 0x14010EF9C (PopApplyLegacyPowerRequestFlags.c)
 *     PopGetLegacyPowerRequestFlags @ 0x140111720 (PopGetLegacyPowerRequestFlags.c)
 *     PopSystemRequiredSet @ 0x140132498 (PopSystemRequiredSet.c)
 *     PopAcquirePolicyLock @ 0x1403C87E0 (PopAcquirePolicyLock.c)
 *     PopReleasePolicyLock @ 0x1403C8828 (PopReleasePolicyLock.c)
 *     PopNotifyConsoleUserPresent @ 0x1404D25CC (PopNotifyConsoleUserPresent.c)
 *     PopCreateUserPowerRequest @ 0x1405017B8 (PopCreateUserPowerRequest.c)
 *     PopDiagTraceSetThreadExecutionState @ 0x14052D3D4 (PopDiagTraceSetThreadExecutionState.c)
 */

NTSTATUS __stdcall NtSetThreadExecutionState(EXECUTION_STATE esFlags, EXECUTION_STATE *PreviousFlags)
{
  EXECUTION_STATE *v2; // r12
  struct _KTHREAD *CurrentThread; // r15
  __int64 v5; // rcx
  struct _LIST_ENTRY *Blink; // r11
  char LegacyPowerRequestFlags; // al
  void *v8; // r11
  NTSTATUS UserPowerRequest; // ebx
  unsigned int SessionId; // eax
  char v12; // dl
  struct _LIST_ENTRY *v13; // [rsp+30h] [rbp-28h] BYREF
  EXECUTION_STATE v14; // [rsp+70h] [rbp+18h] BYREF
  _QWORD *v15; // [rsp+78h] [rbp+20h] BYREF

  v2 = PreviousFlags;
  v15 = 0LL;
  v13 = 0LL;
  LOBYTE(PreviousFlags) = KeGetCurrentThread()->PreviousMode;
  if ( !(_BYTE)PreviousFlags )
    return -1073741637;
  CurrentThread = KeGetCurrentThread();
  if ( (esFlags & 0x7FFFFFBC) != 0 || (esFlags & 0x80000040) == 0x40 )
    return -1073741811;
  v5 = (__int64)v2;
  if ( (unsigned __int64)v2 >= 0x7FFFFFFF0000LL )
    v5 = 0x7FFFFFFF0000LL;
  *(_DWORD *)v5 = *(_DWORD *)v5;
  Blink = CurrentThread[1].ApcState.ApcListHead[1].Blink;
  v13 = Blink;
  if ( Blink || (esFlags & 0x80000000) == 0 )
    goto LABEL_7;
  UserPowerRequest = PoCaptureReasonContext(0LL, (__int64)PreviousFlags, 0LL, 1, 0LL, (PVOID *)&v15);
  if ( UserPowerRequest < 0 )
    return UserPowerRequest;
  UserPowerRequest = PopCreateUserPowerRequest((__int64 *)&v13, 0, (__int64)v15);
  if ( UserPowerRequest >= 0 )
  {
    Blink = v13;
    CurrentThread[1].ApcState.ApcListHead[1].Blink = v13;
LABEL_7:
    LegacyPowerRequestFlags = PopGetLegacyPowerRequestFlags(Blink, esFlags, &v14);
    *v2 = v14;
    if ( (esFlags & 0x80000000) == 0 )
    {
      PopDiagTraceSetThreadExecutionState(CurrentThread, esFlags);
      if ( (esFlags & 1) != 0 )
      {
        PopAcquirePolicyLock();
        PopSystemRequiredSet();
        PopReleasePolicyLock();
      }
      if ( (esFlags & 2) != 0 )
      {
        SessionId = MmGetSessionIdEx(KeGetCurrentThread()->ApcState.Process);
        if ( SessionIsInteractive(SessionId) )
          PopNotifyConsoleUserPresent(1, v12, 8u);
      }
    }
    else
    {
      PopApplyLegacyPowerRequestFlags(v8, esFlags, LegacyPowerRequestFlags);
    }
    return 0;
  }
  if ( v15 )
    PoDestroyReasonContext(v15);
  return UserPowerRequest;
}
