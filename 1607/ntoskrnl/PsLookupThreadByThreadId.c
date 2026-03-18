/*
 * XREFs of PsLookupThreadByThreadId @ 0x1404207F0
 * Callers:
 *     PsOpenThread @ 0x140405210 (PsOpenThread.c)
 *     NtAlertThreadByThreadId @ 0x1404BBC14 (NtAlertThreadByThreadId.c)
 *     PsLookupProcessThreadByCid @ 0x1404D30D8 (PsLookupProcessThreadByCid.c)
 *     NtSetInformationThread @ 0x14050E5D0 (NtSetInformationThread.c)
 *     PfpServiceMainThreadBoostPrep @ 0x1405345E0 (PfpServiceMainThreadBoostPrep.c)
 *     PspFindThreadForTeb @ 0x14067F550 (PspFindThreadForTeb.c)
 *     PspRundownUmsThreadForApcDelivery @ 0x1406826F4 (PspRundownUmsThreadForApcDelivery.c)
 * Callees:
 *     PsIsThreadInSilo @ 0x140013600 (PsIsThreadInSilo.c)
 *     PsGetCurrentServerSilo @ 0x140013620 (PsGetCurrentServerSilo.c)
 *     ObfDereferenceObject @ 0x14006AC00 (ObfDereferenceObject.c)
 *     ExfAcquireReleasePushLockExclusive @ 0x1400AA9EC (ExfAcquireReleasePushLockExclusive.c)
 *     KiCheckForKernelApcDelivery @ 0x1400C7DE0 (KiCheckForKernelApcDelivery.c)
 *     PspReferenceCidTableEntry @ 0x1404208A0 (PspReferenceCidTableEntry.c)
 */

NTSTATUS __stdcall PsLookupThreadByThreadId(HANDLE ThreadId, PETHREAD *Thread)
{
  PETHREAD *v2; // rsi
  struct _KTHREAD *CurrentThread; // rdi
  __int64 v4; // rcx
  __int64 v5; // rbx
  __int64 CurrentServerSilo; // rax
  __int64 v7; // rbp
  __int16 v8; // ax
  signed __int32 v10[10]; // [rsp+0h] [rbp-28h] BYREF

  v2 = Thread;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->SpecialApcDisable;
  LOBYTE(Thread) = 6;
  v5 = PspReferenceCidTableEntry(ThreadId, Thread);
  if ( v5 )
  {
    CurrentServerSilo = PsGetCurrentServerSilo();
    v7 = CurrentServerSilo;
    if ( (*(_DWORD *)(v5 + 1728) & 2) != 0 )
    {
      if ( PsIsThreadInSilo(v5, CurrentServerSilo) )
        goto LABEL_4;
LABEL_14:
      ObfDereferenceObject((PVOID)v5);
      v5 = 0LL;
      goto LABEL_4;
    }
    _InterlockedOr(v10, 0);
    if ( (*(_QWORD *)(v5 + 1712) & 1) != 0 )
      ExfAcquireReleasePushLockExclusive(v5 + 1712);
    if ( (*(_DWORD *)(v5 + 1728) & 2) == 0 || !PsIsThreadInSilo(v5, v7) )
      goto LABEL_14;
  }
LABEL_4:
  v8 = CurrentThread->SpecialApcDisable + 1;
  CurrentThread->SpecialApcDisable = v8;
  if ( !v8 && ($2B8565053CDC740D4E4887693DD8AC9E *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
    KiCheckForKernelApcDelivery(v4);
  if ( !v5 )
    return -1073741813;
  *v2 = (PETHREAD)v5;
  return 0;
}
