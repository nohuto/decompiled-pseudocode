/*
 * XREFs of PoNotifyMediaBuffering @ 0x1401326CC
 * Callers:
 *     <none>
 * Callees:
 *     ExQueueWorkItem @ 0x14000D2F0 (ExQueueWorkItem.c)
 *     KxWaitForSpinLockAndAcquire @ 0x1400A4840 (KxWaitForSpinLockAndAcquire.c)
 *     KeQueryPriorityThread @ 0x1400D5D70 (KeQueryPriorityThread.c)
 *     KiAcquireSpinLockInstrumented @ 0x14020103C (KiAcquireSpinLockInstrumented.c)
 *     KiReleaseSpinLockInstrumented @ 0x1402010EC (KiReleaseSpinLockInstrumented.c)
 */

void __fastcall PoNotifyMediaBuffering(char a1)
{
  char v1; // bl
  KPRIORITY PriorityThread; // eax
  void *retaddr; // [rsp+28h] [rbp+0h]

  v1 = 0;
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
  {
    KiAcquireSpinLockInstrumented(&PpmMediaBufferingWork);
  }
  else if ( _interlockedbittestandset64((volatile signed __int32 *)&PpmMediaBufferingWork, 0LL) )
  {
    KxWaitForSpinLockAndAcquire((volatile signed __int32 *)&PpmMediaBufferingWork);
  }
  if ( !byte_14032F208 )
  {
    v1 = 1;
    byte_14032F208 = 1;
  }
  byte_14032F209 = a1;
  if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
    KiReleaseSpinLockInstrumented(&PpmMediaBufferingWork, retaddr);
  else
    _InterlockedAnd64(&PpmMediaBufferingWork, 0LL);
  if ( v1 )
  {
    PriorityThread = KeQueryPriorityThread(KeGetCurrentThread());
    if ( PriorityThread < 31 )
      ++PriorityThread;
    ExQueueWorkItem(&stru_14032F210, (WORK_QUEUE_TYPE)(PriorityThread + 32));
  }
}
