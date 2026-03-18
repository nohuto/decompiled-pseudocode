/*
 * XREFs of PsLookupThreadByThreadId @ 0x1405115F0
 * Callers:
 *     PsLookupProcessThreadByCid @ 0x14051145C (PsLookupProcessThreadByCid.c)
 *     NtAlertThreadByThreadId @ 0x140511594 (NtAlertThreadByThreadId.c)
 *     PfpServiceMainThreadBoostPrep @ 0x140569A28 (PfpServiceMainThreadBoostPrep.c)
 *     PspFindThreadForTeb @ 0x1406C36DC (PspFindThreadForTeb.c)
 *     PspRundownUmsThreadForApcDelivery @ 0x1406C6990 (PspRundownUmsThreadForApcDelivery.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14004E900 (KeAbPreAcquire.c)
 *     ObfDereferenceObject @ 0x14004ED50 (ObfDereferenceObject.c)
 *     KeAbPostRelease @ 0x14004FA40 (KeAbPostRelease.c)
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400F30E0 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfReleasePushLockExclusive @ 0x1400F36C0 (ExfReleasePushLockExclusive.c)
 *     PspDereferenceSiloObject @ 0x140127C98 (PspDereferenceSiloObject.c)
 *     PsIsThreadInSilo @ 0x140243ECC (PsIsThreadInSilo.c)
 *     PspReferenceCidTableEntry @ 0x140511690 (PspReferenceCidTableEntry.c)
 *     PsGetCurrentSilo @ 0x140511880 (PsGetCurrentSilo.c)
 */

NTSTATUS __stdcall PsLookupThreadByThreadId(HANDLE ThreadId, PETHREAD *Thread)
{
  PETHREAD *v2; // r14
  struct _KTHREAD *CurrentThread; // rbx
  __int64 v4; // rdi
  void *CurrentSilo; // rsi
  __int64 v6; // r9
  __int16 v7; // ax
  __int64 v9; // rbp
  __int64 v10; // r9
  signed __int32 v11[8]; // [rsp+0h] [rbp-38h] BYREF

  v2 = Thread;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->SpecialApcDisable;
  LOBYTE(Thread) = 6;
  v4 = PspReferenceCidTableEntry(ThreadId, Thread);
  if ( v4 )
  {
    CurrentSilo = (void *)PsGetCurrentSilo();
    if ( (*(_DWORD *)(v4 + 1724) & 2) == 0 )
    {
      _InterlockedOr(v11, 0);
      if ( (*(_QWORD *)(v4 + 1704) & 1) != 0 )
      {
        v9 = KeAbPreAcquire(v4 + 1704, 0LL, 0LL, v6);
        ExfAcquirePushLockExclusiveEx((unsigned __int64 *)(v4 + 1704), v9, v4 + 1704, v10);
        if ( v9 )
          *(_BYTE *)(v9 + 26) |= 1u;
        ExfReleasePushLockExclusive((volatile signed __int64 *)(v4 + 1704));
        if ( v9 )
          KeAbPostRelease(v4 + 1704);
      }
      if ( (*(_DWORD *)(v4 + 1724) & 2) == 0 || !PsIsThreadInSilo(v4, (__int64)CurrentSilo) )
      {
        ObfDereferenceObject((PVOID)v4);
        v4 = 0LL;
      }
    }
    if ( CurrentSilo )
      PspDereferenceSiloObject(CurrentSilo);
  }
  v7 = CurrentThread->SpecialApcDisable + 1;
  CurrentThread->SpecialApcDisable = v7;
  if ( !v7 && ($CD287064E7C9F7953DE243E927CFCB99 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
    KiCheckForKernelApcDelivery();
  if ( !v4 )
    return -1073741813;
  *v2 = (PETHREAD)v4;
  return 0;
}
