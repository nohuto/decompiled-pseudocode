/*
 * XREFs of WheapCreateTriageDumpFromPreviousSession @ 0x140404E68
 * Callers:
 *     WheapProcessWorkQueueItem @ 0x140266DAC (WheapProcessWorkQueueItem.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14004E900 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14004FA40 (KeAbPostRelease.c)
 *     ExpAcquireFastMutexContended @ 0x1400F2E54 (ExpAcquireFastMutexContended.c)
 *     ExpReleaseFastMutexContended @ 0x1400F3D1C (ExpReleaseFastMutexContended.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 *     WheapCreateLiveTriageDump @ 0x1406FD08C (WheapCreateLiveTriageDump.c)
 *     WheapWriteTriageDump @ 0x1406FD2E4 (WheapWriteTriageDump.c)
 */

__int64 WheapCreateTriageDumpFromPreviousSession()
{
  char v0; // si
  int LiveTriageDump; // ebx
  __int64 v2; // r9
  __int64 v3; // rax
  __int64 v4; // rdi
  unsigned __int8 CurrentIrql; // bp
  unsigned __int8 BufferChainingDpc; // di
  signed __int32 v7; // eax

  v0 = 0;
  if ( _InterlockedIncrement(&WheapTriageDumpCreation) <= 1 )
  {
    LiveTriageDump = WheapCreateLiveTriageDump();
    if ( LiveTriageDump >= 0 )
    {
      v3 = KeAbPreAcquire((ULONG_PTR)&WheapDispatchPtr.Queue.Wcb.NumberOfChannels, 0LL, 0LL, v2);
      v4 = v3;
      CurrentIrql = KeGetCurrentIrql();
      __writecr8(1uLL);
      if ( !_interlockedbittestandreset(
              (volatile signed __int32 *)&WheapDispatchPtr.Queue.Wcb.WaitQueueEntry.SortKey,
              0) )
        ExpAcquireFastMutexContended((ULONG_PTR)&WheapDispatchPtr.Queue.Wcb.NumberOfChannels, v3);
      if ( v4 )
        *(_BYTE *)(v4 + 26) |= 1u;
      WheapDispatchPtr.Queue.Wcb.DeviceRoutine = (PDRIVER_CONTROL)KeGetCurrentThread();
      LODWORD(WheapDispatchPtr.Queue.Wcb.BufferChainingDpc) = CurrentIrql;
      WheapTriageDumpGenerated = 1;
      if ( WheapCrashDumpInitialized )
      {
        v0 = 1;
        WheapTriageDumpReported = 1;
      }
      WheapDispatchPtr.Queue.Wcb.DeviceRoutine = 0LL;
      BufferChainingDpc = (unsigned __int8)WheapDispatchPtr.Queue.Wcb.BufferChainingDpc;
      v7 = _InterlockedCompareExchange(
             (volatile signed __int32 *)&WheapDispatchPtr.Queue.Wcb.WaitQueueEntry.SortKey,
             1,
             0);
      if ( v7 )
        ExpReleaseFastMutexContended((volatile signed __int32 *)&WheapDispatchPtr.Queue.Wcb.WaitQueueEntry.SortKey, v7);
      __writecr8(BufferChainingDpc);
      KeAbPostRelease((ULONG_PTR)&WheapDispatchPtr.Queue.Wcb.NumberOfChannels);
      if ( v0 )
      {
        LiveTriageDump = WheapWriteTriageDump();
        ExFreePoolWithTag(WheapTriageDump, 0x61656857u);
        WheapTriageDump = 0LL;
        WheapTriageDumpLength = 0;
      }
    }
  }
  else
  {
    return (unsigned int)-1073741823;
  }
  return (unsigned int)LiveTriageDump;
}
