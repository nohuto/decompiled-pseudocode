/*
 * XREFs of PopCreateUserPowerRequest @ 0x1404EA9B8
 * Callers:
 *     PopPowerRequestCreateInfo @ 0x1404EA904 (PopPowerRequestCreateInfo.c)
 *     NtSetThreadExecutionState @ 0x14056371C (NtSetThreadExecutionState.c)
 * Callees:
 *     ObFastDereferenceObject @ 0x14004E3E0 (ObFastDereferenceObject.c)
 *     KeAbPostRelease @ 0x14004FA40 (KeAbPostRelease.c)
 *     MmGetSessionIdEx @ 0x140089328 (MmGetSessionIdEx.c)
 *     PopUmpoSendPowerRequestOverrideQuery @ 0x1400D0A84 (PopUmpoSendPowerRequestOverrideQuery.c)
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 *     ExfReleasePushLock @ 0x1400F35E0 (ExfReleasePushLock.c)
 *     EvaluateCurrentState @ 0x140233034 (EvaluateCurrentState.c)
 *     PopDiagTracePowerRequestCreate @ 0x1404E5984 (PopDiagTracePowerRequestCreate.c)
 *     PopCreatePowerRequestObject @ 0x1404E5E2C (PopCreatePowerRequestObject.c)
 *     PopAcquirePowerRequestPushLock @ 0x1404E6210 (PopAcquirePowerRequestPushLock.c)
 *     PopInsertPowerRequestObject @ 0x1404E6410 (PopInsertPowerRequestObject.c)
 *     PsReferencePrimaryToken @ 0x14050D730 (PsReferencePrimaryToken.c)
 *     SeSecurityAttributePresent @ 0x14050D910 (SeSecurityAttributePresent.c)
 */

__int64 __fastcall PopCreateUserPowerRequest(__int64 *a1, char a2, __int64 a3)
{
  struct _KTHREAD *CurrentThread; // rax
  _KPROCESS *Process; // r14
  PACCESS_TOKEN v8; // rdi
  char v9; // bl
  __int64 result; // rax
  __int64 v11; // rbx
  int v12; // eax
  __int64 v13; // rdx
  __int64 v14; // r8
  __int64 v15; // r9
  int SessionId; // ecx
  __int64 v17; // rdx
  __int64 v18; // r8
  __int64 v19; // r9
  signed __int64 v20; // rcx
  ULONG_PTR v21; // rtt
  struct _KTHREAD *v22; // rcx
  __int16 v23; // ax
  __int64 v24; // rbx
  __int64 v25; // [rsp+68h] [rbp+20h] BYREF

  CurrentThread = KeGetCurrentThread();
  Process = CurrentThread->ApcState.Process;
  if ( a2 )
  {
    v8 = PsReferencePrimaryToken(CurrentThread->ApcState.Process);
    v9 = SeSecurityAttributePresent(v8, &PspSysAppIdClaim);
    ObFastDereferenceObject((signed __int64 *)&Process[1].Affinity.Bitmap[5], (unsigned __int64)v8);
    if ( v9 )
      return 3221225659LL;
  }
  result = PopCreatePowerRequestObject(&v25, (_DWORD *)a3);
  if ( (int)result >= 0 )
  {
    v11 = v25;
    *(_BYTE *)(v25 + 104) = a2;
    if ( !a2 )
      *(_QWORD *)(v11 + 96) = Process;
    LOBYTE(v12) = EvaluateCurrentState((int **)&g_Feature_4274317627_57077665_FeatureDescriptorDetails);
    if ( v12 )
      SessionId = *(_DWORD *)(a3 + 36);
    else
      SessionId = MmGetSessionIdEx(*(struct _KPROCESS **)(a3 + 8));
    if ( a2 )
    {
      *(_DWORD *)(v11 + 20) = 8;
    }
    else if ( ((SessionId + 1) & 0xFFFFFFFE) == 0 && (SessionId || (v11 = v25, MEMORY[0xFFFFF780000002D8])) )
    {
      *(_DWORD *)(v11 + 20) = 30;
    }
    else
    {
      *(_DWORD *)(v11 + 20) = 31;
    }
    PopAcquirePowerRequestPushLock(1, v13, v14, v15);
    PopInsertPowerRequestObject((__int64 *)v11, a2);
    if ( !a2 )
      PopUmpoSendPowerRequestOverrideQuery(v11, v17, v18, v19);
    if ( qword_14032F7D8 )
      qword_14032F7D8 = 0LL;
    _m_prefetchw(&PopPowerRequestLock);
    v20 = PopPowerRequestLock - 16;
    if ( (PopPowerRequestLock & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
      v20 = 0LL;
    if ( (PopPowerRequestLock & 2) != 0
      || (v21 = PopPowerRequestLock,
          v21 != _InterlockedCompareExchange64(
                   (volatile signed __int64 *)&PopPowerRequestLock,
                   v20,
                   PopPowerRequestLock)) )
    {
      ExfReleasePushLock(&PopPowerRequestLock, v17);
    }
    KeAbPostRelease((ULONG_PTR)&PopPowerRequestLock);
    v22 = KeGetCurrentThread();
    v23 = v22->KernelApcDisable + 1;
    v22->KernelApcDisable = v23;
    if ( !v23
      && ($CD287064E7C9F7953DE243E927CFCB99 *)v22->ApcState.ApcListHead[0].Flink != &v22->152
      && !v22->SpecialApcDisable )
    {
      KiCheckForKernelApcDelivery();
    }
    v24 = v25;
    PopDiagTracePowerRequestCreate(0, v25);
    result = 0LL;
    *a1 = v24;
  }
  return result;
}
