/*
 * XREFs of IoInitializeTimer @ 0x14057FB9C
 * Callers:
 *     <none>
 * Callees:
 *     ExInterlockedInsertTailList @ 0x14008B840 (ExInterlockedInsertTailList.c)
 *     memset @ 0x140171AC0 (memset.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 */

NTSTATUS __stdcall IoInitializeTimer(PDEVICE_OBJECT DeviceObject, PIO_TIMER_ROUTINE TimerRoutine, PVOID Context)
{
  PIO_TIMER Timer; // rbx
  struct _IO_TIMER *PoolWithTag; // rax

  Timer = DeviceObject->Timer;
  if ( Timer )
    goto LABEL_4;
  PoolWithTag = (struct _IO_TIMER *)ExAllocatePoolWithTag(NonPagedPoolNx, 0x30uLL, 0x69546F49u);
  Timer = PoolWithTag;
  if ( PoolWithTag )
  {
    memset(PoolWithTag, 0, sizeof(struct _IO_TIMER));
    Timer->DeviceObject = DeviceObject;
    Timer->Type = 9;
    DeviceObject->Timer = Timer;
LABEL_4:
    Timer->TimerRoutine = (void (__fastcall *)(_DEVICE_OBJECT *, void *))TimerRoutine;
    Timer->Context = Context;
    ExInterlockedInsertTailList(&IopTimerQueueHead, &Timer->TimerList, &IopTimerLock);
    return 0;
  }
  return -1073741670;
}
