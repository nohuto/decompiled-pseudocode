/*
 * XREFs of PopCreateUserPowerRequest @ 0x14051E750
 * Callers:
 *     PopPowerRequestCreateInfo @ 0x14051E69C (PopPowerRequestCreateInfo.c)
 *     NtSetThreadExecutionState @ 0x14052CD00 (NtSetThreadExecutionState.c)
 * Callees:
 *     PopReleaseRwLock @ 0x14000DCD8 (PopReleaseRwLock.c)
 *     PopUmpoSendPowerRequestOverrideQuery @ 0x1400FB2FC (PopUmpoSendPowerRequestOverrideQuery.c)
 *     SessionIsInteractive @ 0x1400FC060 (SessionIsInteractive.c)
 *     PsQueryProcessAttributes @ 0x140471DC0 (PsQueryProcessAttributes.c)
 *     PopDiagTracePowerRequestCreate @ 0x14052000C (PopDiagTracePowerRequestCreate.c)
 *     PopCreatePowerRequestObject @ 0x140520558 (PopCreatePowerRequestObject.c)
 *     PopAcquirePowerRequestPushLock @ 0x140520750 (PopAcquirePowerRequestPushLock.c)
 *     PopInsertPowerRequestObject @ 0x1405209B8 (PopInsertPowerRequestObject.c)
 */

__int64 __fastcall PopCreateUserPowerRequest(__int64 *a1, char a2, __int64 a3)
{
  struct _KTHREAD *CurrentThread; // rax
  _KPROCESS *Process; // rsi
  __int64 result; // rax
  __int64 v9; // rbx
  __int64 v10; // rcx
  __int64 v11; // rdx
  __int64 v12; // rdx
  __int64 v13; // r8
  __int64 v14; // r9
  char v15; // [rsp+48h] [rbp+10h] BYREF
  __int64 v16; // [rsp+58h] [rbp+20h] BYREF

  CurrentThread = KeGetCurrentThread();
  Process = CurrentThread->ApcState.Process;
  if ( a2 )
  {
    PsQueryProcessAttributes(CurrentThread->ApcState.Process, &v15, 0LL);
    if ( v15 )
      return 3221225659LL;
  }
  result = PopCreatePowerRequestObject(&v16);
  if ( (int)result >= 0 )
  {
    v9 = v16;
    *(_BYTE *)(v16 + 104) = a2;
    if ( !a2 )
      *(_QWORD *)(v9 + 96) = Process;
    v10 = *(unsigned int *)(a3 + 36);
    if ( a2 )
    {
      *(_DWORD *)(v9 + 20) = 8;
    }
    else
    {
      v10 = SessionIsInteractive(v10) ? 63 : 30;
      *(_DWORD *)(v9 + 20) = v10;
    }
    LOBYTE(v10) = 1;
    PopAcquirePowerRequestPushLock(v10);
    LOBYTE(v11) = a2;
    PopInsertPowerRequestObject(v9, v11);
    if ( !a2 )
      PopUmpoSendPowerRequestOverrideQuery(v9, v12, v13, v14);
    PopReleaseRwLock(&PopPowerRequestLock);
    PopDiagTracePowerRequestCreate(0LL, v9);
    result = 0LL;
    *a1 = v9;
  }
  return result;
}
