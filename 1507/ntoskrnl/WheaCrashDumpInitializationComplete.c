/*
 * XREFs of WheaCrashDumpInitializationComplete @ 0x1405C10BC
 * Callers:
 *     NtSetSystemInformation @ 0x140453DF8 (NtSetSystemInformation.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14004E900 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14004FA40 (KeAbPostRelease.c)
 *     ExpAcquireFastMutexContended @ 0x1400F2E54 (ExpAcquireFastMutexContended.c)
 *     ExpReleaseFastMutexContended @ 0x1400F3D1C (ExpReleaseFastMutexContended.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 *     WheapWriteTriageDump @ 0x1406FD2E4 (WheapWriteTriageDump.c)
 */

__int64 __fastcall WheaCrashDumpInitializationComplete(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  char v4; // si
  unsigned int v5; // edi
  __int64 v6; // rax
  __int64 v7; // rbx
  unsigned __int8 CurrentIrql; // bp
  unsigned __int8 BufferChainingDpc; // bl
  signed __int32 v10; // eax

  v4 = 0;
  v5 = 0;
  v6 = KeAbPreAcquire((ULONG_PTR)&WheapDispatchPtr.Queue.Wcb.NumberOfChannels, 0LL, 0LL, a4);
  v7 = v6;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(1uLL);
  if ( !_interlockedbittestandreset((volatile signed __int32 *)&WheapDispatchPtr.Queue.Wcb.WaitQueueEntry.SortKey, 0) )
    ExpAcquireFastMutexContended((ULONG_PTR)&WheapDispatchPtr.Queue.Wcb.NumberOfChannels, v6);
  if ( v7 )
    *(_BYTE *)(v7 + 26) |= 1u;
  WheapDispatchPtr.Queue.Wcb.DeviceRoutine = (PDRIVER_CONTROL)KeGetCurrentThread();
  LODWORD(WheapDispatchPtr.Queue.Wcb.BufferChainingDpc) = CurrentIrql;
  WheapCrashDumpInitialized = 1;
  if ( WheapTriageDumpGenerated && !WheapTriageDumpReported )
  {
    v4 = 1;
    WheapTriageDumpReported = 1;
  }
  WheapDispatchPtr.Queue.Wcb.DeviceRoutine = 0LL;
  BufferChainingDpc = (unsigned __int8)WheapDispatchPtr.Queue.Wcb.BufferChainingDpc;
  v10 = _InterlockedCompareExchange((volatile signed __int32 *)&WheapDispatchPtr.Queue.Wcb.WaitQueueEntry.SortKey, 1, 0);
  if ( v10 )
    ExpReleaseFastMutexContended((volatile signed __int32 *)&WheapDispatchPtr.Queue.Wcb.WaitQueueEntry.SortKey, v10);
  __writecr8(BufferChainingDpc);
  KeAbPostRelease((ULONG_PTR)&WheapDispatchPtr.Queue.Wcb.NumberOfChannels);
  if ( v4 )
  {
    v5 = WheapWriteTriageDump();
    ExFreePoolWithTag(WheapTriageDump, 0x61656857u);
    WheapTriageDump = 0LL;
    WheapTriageDumpLength = 0;
  }
  return v5;
}
