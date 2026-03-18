/*
 * XREFs of NtSetThreadExecutionState @ 0x1404E9D00
 * Callers:
 *     <none>
 * Callees:
 *     MmGetSessionIdEx @ 0x14003AFB0 (MmGetSessionIdEx.c)
 *     SessionIsInteractive @ 0x140096EAC (SessionIsInteractive.c)
 *     PoCaptureReasonContext @ 0x1400979A8 (PoCaptureReasonContext.c)
 *     PoDestroyReasonContext @ 0x140098D20 (PoDestroyReasonContext.c)
 *     PopApplyLegacyPowerRequestFlags @ 0x140103798 (PopApplyLegacyPowerRequestFlags.c)
 *     PopGetLegacyPowerRequestFlags @ 0x140106540 (PopGetLegacyPowerRequestFlags.c)
 *     PopSystemRequiredSet @ 0x14012723C (PopSystemRequiredSet.c)
 *     PopAcquirePolicyLock @ 0x14039C560 (PopAcquirePolicyLock.c)
 *     PopReleasePolicyLock @ 0x14039CE60 (PopReleasePolicyLock.c)
 *     PopCreateUserPowerRequest @ 0x140452BD8 (PopCreateUserPowerRequest.c)
 *     PopNotifyConsoleUserPresent @ 0x1404C5578 (PopNotifyConsoleUserPresent.c)
 *     PopDiagTraceSetThreadExecutionState @ 0x1404E9E94 (PopDiagTraceSetThreadExecutionState.c)
 */

NTSTATUS __stdcall NtSetThreadExecutionState(EXECUTION_STATE esFlags, EXECUTION_STATE *PreviousFlags)
{
  EXECUTION_STATE *v2; // r12
  struct _KTHREAD *CurrentThread; // r15
  _DWORD *v5; // rcx
  struct _LIST_ENTRY *Blink; // r11
  char LegacyPowerRequestFlags; // al
  void *v8; // r11
  NTSTATUS UserPowerRequest; // ebx
  int SessionId; // eax
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
  v5 = v2;
  if ( (unsigned __int64)v2 >= MmUserProbeAddress )
    v5 = (_DWORD *)MmUserProbeAddress;
  *v5 = *v5;
  Blink = CurrentThread[1].ApcState.ApcListHead[1].Blink;
  v13 = Blink;
  if ( Blink || (esFlags & 0x80000000) == 0 )
    goto LABEL_7;
  UserPowerRequest = PoCaptureReasonContext(0LL, (char *)PreviousFlags, 0LL, 1, 0LL, &v15);
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
          PopNotifyConsoleUserPresent(1, v12, 8);
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
