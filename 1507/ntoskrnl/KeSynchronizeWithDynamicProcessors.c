/*
 * XREFs of KeSynchronizeWithDynamicProcessors @ 0x14053B960
 * Callers:
 *     ExpWorkerHotAddProcessor @ 0x1404045E4 (ExpWorkerHotAddProcessor.c)
 *     NtSetSystemInformation @ 0x140453DF8 (NtSetSystemInformation.c)
 *     ExpGetProcessInformation @ 0x140497410 (ExpGetProcessInformation.c)
 *     PspInitializeQuotaBlock @ 0x1405BE3DC (PspInitializeQuotaBlock.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14004E900 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14004FA40 (KeAbPostRelease.c)
 *     ExpAcquireFastMutexContended @ 0x1400F2E54 (ExpAcquireFastMutexContended.c)
 *     ExpReleaseFastMutexContended @ 0x1400F3D1C (ExpReleaseFastMutexContended.c)
 */

void __fastcall KeSynchronizeWithDynamicProcessors(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rax
  __int64 v5; // rbx
  unsigned __int8 CurrentIrql; // di
  signed __int32 v7; // eax
  signed __int32 v8[10]; // [rsp+0h] [rbp-28h] BYREF

  if ( KeDynamicPartitioningSupported )
  {
    _InterlockedOr(v8, 0);
    if ( (KiDynamicProcessorLock & 1) == 0 )
    {
      v4 = KeAbPreAcquire((ULONG_PTR)&KiDynamicProcessorLock, 0LL, 0LL, a4);
      v5 = v4;
      CurrentIrql = KeGetCurrentIrql();
      __writecr8(1uLL);
      if ( !_interlockedbittestandreset((volatile signed __int32 *)&KiDynamicProcessorLock, 0) )
        ExpAcquireFastMutexContended((ULONG_PTR)&KiDynamicProcessorLock, v4);
      if ( v5 )
        *(_BYTE *)(v5 + 26) |= 1u;
      qword_140338E48 = 0LL;
      dword_140338E70 = CurrentIrql;
      v7 = _InterlockedCompareExchange((volatile signed __int32 *)&KiDynamicProcessorLock, 1, 0);
      if ( v7 )
        ExpReleaseFastMutexContended((volatile signed __int32 *)&KiDynamicProcessorLock, v7);
      __writecr8(CurrentIrql);
      KeAbPostRelease((ULONG_PTR)&KiDynamicProcessorLock);
    }
  }
}
