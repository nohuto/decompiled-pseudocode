/*
 * XREFs of PsLookupThreadByThreadId @ 0x140436060
 * Callers:
 *     NtAlertThreadByThreadId @ 0x140435FF8 (NtAlertThreadByThreadId.c)
 *     PsOpenThread @ 0x140470C60 (PsOpenThread.c)
 *     PsLookupProcessThreadByCid @ 0x1404AFDB0 (PsLookupProcessThreadByCid.c)
 *     PfpServiceMainThreadBoostPrep @ 0x1404F555C (PfpServiceMainThreadBoostPrep.c)
 *     PspFindThreadForTeb @ 0x14064116C (PspFindThreadForTeb.c)
 *     PspRundownUmsThreadForApcDelivery @ 0x140643C78 (PspRundownUmsThreadForApcDelivery.c)
 * Callees:
 *     KiCheckForKernelApcDelivery @ 0x140020550 (KiCheckForKernelApcDelivery.c)
 *     ObfDereferenceObject @ 0x140042920 (ObfDereferenceObject.c)
 *     ObfReferenceObject @ 0x140042AA0 (ObfReferenceObject.c)
 *     PspGetJobSilo @ 0x1400776E8 (PspGetJobSilo.c)
 *     PsIsThreadInSilo @ 0x14008E2F0 (PsIsThreadInSilo.c)
 *     ExfAcquireReleasePushLockExclusive @ 0x1400F45B8 (ExfAcquireReleasePushLockExclusive.c)
 *     PspReferenceCidTableEntry @ 0x140436CB0 (PspReferenceCidTableEntry.c)
 */

NTSTATUS __stdcall PsLookupThreadByThreadId(HANDLE ThreadId, PETHREAD *Thread)
{
  PETHREAD *v2; // r14
  struct _KTHREAD *CurrentThread; // rdi
  __int64 v4; // rcx
  __int64 v5; // rbx
  struct _KTHREAD *v6; // rsi
  void *JobSilo; // rsi
  __int16 v8; // ax
  signed __int32 v10[10]; // [rsp+0h] [rbp-28h] BYREF

  v2 = Thread;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->SpecialApcDisable;
  LOBYTE(Thread) = 6;
  v5 = PspReferenceCidTableEntry(ThreadId, Thread);
  if ( !v5 )
    goto LABEL_10;
  v6 = KeGetCurrentThread();
  if ( *(_QWORD *)&v6[1].WaitBlockFill11[160] == -3LL )
    JobSilo = (void *)PspGetJobSilo(v6->Process[1].Affinity.Bitmap[16]);
  else
    JobSilo = *(void **)&v6[1].WaitBlockFill11[160];
  if ( JobSilo )
    ObfReferenceObject(JobSilo);
  if ( (*(_DWORD *)(v5 + 1724) & 2) != 0 )
  {
    if ( PsIsThreadInSilo(v5, (__int64)JobSilo) )
      goto LABEL_8;
  }
  else
  {
    _InterlockedOr(v10, 0);
    if ( (*(_QWORD *)(v5 + 1704) & 1) != 0 )
      ExfAcquireReleasePushLockExclusive((unsigned __int64 *)(v5 + 1704));
    if ( (*(_DWORD *)(v5 + 1724) & 2) != 0 && PsIsThreadInSilo(v5, (__int64)JobSilo) )
      goto LABEL_8;
  }
  ObfDereferenceObject((PVOID)v5);
  v5 = 0LL;
LABEL_8:
  if ( JobSilo )
    ObfDereferenceObject(JobSilo);
LABEL_10:
  v8 = CurrentThread->SpecialApcDisable + 1;
  CurrentThread->SpecialApcDisable = v8;
  if ( !v8 && ($E81C3296F15336D9BF9B2D43BB137B25 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
    KiCheckForKernelApcDelivery(v4);
  if ( !v5 )
    return -1073741813;
  *v2 = (PETHREAD)v5;
  return 0;
}
