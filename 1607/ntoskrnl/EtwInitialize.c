/*
 * XREFs of EtwInitialize @ 0x1405531AC
 * Callers:
 *     NtInitializeRegistry @ 0x1405476A4 (NtInitializeRegistry.c)
 *     IoInitSystemPreDrivers @ 0x14079EDEC (IoInitSystemPreDrivers.c)
 * Callees:
 *     ExIsSoftBoot @ 0x14013D4E8 (ExIsSoftBoot.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 *     EtwpInitialize @ 0x1407A0D3C (EtwpInitialize.c)
 */

void __fastcall EtwInitialize(unsigned int a1)
{
  struct _WORK_QUEUE_ITEM *PoolWithTag; // rax

  if ( a1 >= 2 )
  {
    if ( a1 == 2 )
    {
      EtwpFileSystemReady = 1;
      if ( (unsigned __int8)ExIsSoftBoot() )
      {
        EtwpLoggerSaveInProgress = 1;
        PoolWithTag = (struct _WORK_QUEUE_ITEM *)ExAllocatePoolWithTag(NonPagedPoolNx, 0x20uLL, 0x4B777445u);
        if ( PoolWithTag )
        {
          PoolWithTag->List.Flink = 0LL;
          PoolWithTag->WorkerRoutine = (void (__fastcall *)(void *))EtwpSavePersistedLoggersWorker;
          PoolWithTag->Parameter = PoolWithTag;
          ExQueueWorkItem(PoolWithTag, NormalWorkQueue);
        }
        else
        {
          EtwpSavePersistedLoggersWorker(0LL);
        }
      }
    }
  }
  else
  {
    EtwpInitialize();
  }
}
