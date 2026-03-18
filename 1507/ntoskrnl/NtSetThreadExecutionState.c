/*
 * XREFs of NtSetThreadExecutionState @ 0x14056371C
 * Callers:
 *     <none>
 * Callees:
 *     MmGetSessionIdEx @ 0x140089328 (MmGetSessionIdEx.c)
 *     PoDestroyReasonContext @ 0x1400D10E8 (PoDestroyReasonContext.c)
 *     PoCaptureReasonContext @ 0x1400D1330 (PoCaptureReasonContext.c)
 *     PopApplyLegacyPowerRequestFlags @ 0x1401335A8 (PopApplyLegacyPowerRequestFlags.c)
 *     PopGetLegacyPowerRequestFlags @ 0x140138B78 (PopGetLegacyPowerRequestFlags.c)
 *     PopSystemRequiredSet @ 0x14015A758 (PopSystemRequiredSet.c)
 *     PopReleasePolicyLock @ 0x1403EB86C (PopReleasePolicyLock.c)
 *     PopAcquirePolicyLock @ 0x1403EB8DC (PopAcquirePolicyLock.c)
 *     PopCreateUserPowerRequest @ 0x1404EA9B8 (PopCreateUserPowerRequest.c)
 *     PopNotifyConsoleUserPresent @ 0x14055BFCC (PopNotifyConsoleUserPresent.c)
 *     PopDiagTraceSetThreadExecutionState @ 0x1405638BC (PopDiagTraceSetThreadExecutionState.c)
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
  __int64 v11; // rdx
  __int64 v12; // rcx
  int SessionId; // eax
  char v14; // dl
  struct _LIST_ENTRY *v15; // [rsp+30h] [rbp-28h] BYREF
  EXECUTION_STATE v16; // [rsp+70h] [rbp+18h] BYREF
  _QWORD *v17; // [rsp+78h] [rbp+20h] BYREF

  v2 = PreviousFlags;
  v17 = 0LL;
  v15 = 0LL;
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
  v15 = Blink;
  if ( Blink || (esFlags & 0x80000000) == 0 )
    goto LABEL_7;
  UserPowerRequest = PoCaptureReasonContext(0LL, (char *)PreviousFlags, 0LL, 1, 0LL, (PVOID *)&v17);
  if ( UserPowerRequest < 0 )
    return UserPowerRequest;
  UserPowerRequest = PopCreateUserPowerRequest((__int64 *)&v15, 0, (__int64)v17);
  if ( UserPowerRequest >= 0 )
  {
    Blink = v15;
    CurrentThread[1].ApcState.ApcListHead[1].Blink = v15;
LABEL_7:
    LegacyPowerRequestFlags = PopGetLegacyPowerRequestFlags(Blink, esFlags, &v16);
    *v2 = v16;
    if ( (esFlags & 0x80000000) == 0 )
    {
      PopDiagTraceSetThreadExecutionState(CurrentThread, esFlags);
      if ( (esFlags & 1) != 0 )
      {
        PopAcquirePolicyLock();
        PopSystemRequiredSet(v12, v11);
        PopReleasePolicyLock();
      }
      if ( (esFlags & 2) != 0 )
      {
        SessionId = MmGetSessionIdEx(KeGetCurrentThread()->ApcState.Process);
        v14 = 0;
        if ( ((SessionId + 1) & 0xFFFFFFFE) != 0 || !SessionId && !MEMORY[0xFFFFF780000002D8] )
          v14 = 1;
        if ( v14 )
          PopNotifyConsoleUserPresent(1, v14, 8);
      }
    }
    else
    {
      PopApplyLegacyPowerRequestFlags(v8, esFlags, LegacyPowerRequestFlags);
    }
    return 0;
  }
  if ( v17 )
    PoDestroyReasonContext(v17);
  return UserPowerRequest;
}
