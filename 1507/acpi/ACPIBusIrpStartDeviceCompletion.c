/*
 * XREFs of ACPIBusIrpStartDeviceCompletion @ 0x1C0022260
 * Callers:
 *     <none>
 * Callees:
 *     ACPICheckModuleStarted @ 0x1C003DD58 (ACPICheckModuleStarted.c)
 */

void __fastcall ACPIBusIrpStartDeviceCompletion(__int64 a1, IRP *a2, int a3)
{
  struct _WORK_QUEUE_ITEM *v4; // rdi
  _QWORD *v7; // rcx
  __int64 v8; // rdx
  KIRQL v9; // al
  _QWORD *i; // r8

  a2->IoStatus.Status = a3;
  v4 = (struct _WORK_QUEUE_ITEM *)(a1 + 24);
  if ( a3 >= 0 )
  {
    *(_QWORD *)(a1 + 904) |= 0x80000uLL;
    *(_DWORD *)(a1 + 312) = 2;
  }
  if ( (*(_QWORD *)a1 & 0x2000000000LL) != 0 )
  {
    v9 = KeAcquireSpinLockRaiseToDpc(&AcpiDeviceTreeLock);
    if ( !*(_BYTE *)(a1 + 177) )
    {
      for ( i = *(_QWORD **)(a1 + 744); i != (_QWORD *)(a1 + 744); i = (_QWORD *)*i )
      {
        if ( (*(i - 95) & 0x2000000000LL) != 0 )
          *((_BYTE *)i - 583) = 0;
      }
    }
    KeReleaseSpinLock(&AcpiDeviceTreeLock, v9);
    v8 = (unsigned int)a3;
    v7 = (_QWORD *)a1;
  }
  else
  {
    v7 = *(_QWORD **)(a1 + 736);
    if ( (*v7 & 0x2000000000LL) == 0 )
      goto LABEL_5;
    v8 = (unsigned int)a3;
  }
  ACPICheckModuleStarted(v7, v8);
LABEL_5:
  if ( a3 < 0 )
  {
    IofCompleteRequest(a2, 0);
  }
  else
  {
    v4->List.Flink = 0LL;
    v4->WorkerRoutine = (void (__fastcall *)(void *))ACPIBusIrpStartDeviceWorker;
    v4->Parameter = v4;
    v4[1].List.Flink = *(_LIST_ENTRY **)(a1 + 712);
    v4[1].List.Blink = (_LIST_ENTRY *)a2;
    ExQueueWorkItem(v4, DelayedWorkQueue);
  }
}
