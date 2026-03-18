/*
 * XREFs of PopCreateUserPowerRequest @ 0x140452BD8
 * Callers:
 *     PopPowerRequestCreateInfo @ 0x140452B24 (PopPowerRequestCreateInfo.c)
 *     NtSetThreadExecutionState @ 0x1404E9D00 (NtSetThreadExecutionState.c)
 * Callees:
 *     MmGetSessionIdEx @ 0x14003AFB0 (MmGetSessionIdEx.c)
 *     SessionIsInteractive @ 0x140096EAC (SessionIsInteractive.c)
 *     PopUmpoSendPowerRequestOverrideQuery @ 0x1400981B4 (PopUmpoSendPowerRequestOverrideQuery.c)
 *     PopReleaseRwLock @ 0x14009D768 (PopReleaseRwLock.c)
 *     PopInsertPowerRequestObject @ 0x140454C94 (PopInsertPowerRequestObject.c)
 *     PopDiagTracePowerRequestCreate @ 0x140454D34 (PopDiagTracePowerRequestCreate.c)
 *     PopCreatePowerRequestObject @ 0x14045519C (PopCreatePowerRequestObject.c)
 *     PopAcquirePowerRequestPushLock @ 0x140455DB0 (PopAcquirePowerRequestPushLock.c)
 *     PsQueryProcessAttributes @ 0x14046DFC4 (PsQueryProcessAttributes.c)
 */

__int64 __fastcall PopCreateUserPowerRequest(__int64 *a1, char a2, __int64 a3)
{
  struct _KTHREAD *CurrentThread; // rax
  _KPROCESS *Process; // rsi
  __int64 result; // rax
  __int64 v9; // rbx
  int SessionId; // eax
  __int64 v11; // rcx
  __int64 v12; // rdx
  __int64 v13; // rdx
  __int64 v14; // r8
  __int64 v15; // r9
  char v16; // [rsp+48h] [rbp+10h] BYREF
  __int64 v17; // [rsp+58h] [rbp+20h] BYREF

  CurrentThread = KeGetCurrentThread();
  Process = CurrentThread->ApcState.Process;
  if ( a2 )
  {
    PsQueryProcessAttributes(CurrentThread->ApcState.Process, &v16);
    if ( v16 )
      return 3221225659LL;
  }
  result = PopCreatePowerRequestObject(&v17, a3);
  if ( (int)result >= 0 )
  {
    v9 = v17;
    *(_BYTE *)(v17 + 104) = a2;
    if ( !a2 )
      *(_QWORD *)(v9 + 96) = Process;
    SessionId = MmGetSessionIdEx(*(struct _KPROCESS **)(a3 + 8));
    if ( a2 )
    {
      *(_DWORD *)(v9 + 20) = 8;
    }
    else
    {
      v11 = (unsigned int)(SessionIsInteractive(SessionId) != 0) + 30;
      *(_DWORD *)(v9 + 20) = v11;
    }
    LOBYTE(v11) = 1;
    PopAcquirePowerRequestPushLock(v11);
    LOBYTE(v12) = a2;
    PopInsertPowerRequestObject(v9, v12);
    if ( !a2 )
      PopUmpoSendPowerRequestOverrideQuery(v9, v13, v14, v15);
    PopReleaseRwLock((signed __int64 *)&PopPowerRequestLock);
    PopDiagTracePowerRequestCreate(0LL, v9);
    result = 0LL;
    *a1 = v9;
  }
  return result;
}
