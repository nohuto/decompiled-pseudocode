/*
 * XREFs of KeyboardClassCreateWaitWakeIrpWorker @ 0x1C000E5D0
 * Callers:
 *     <none>
 * Callees:
 *     KeyboardClassCreateWaitWakeIrp @ 0x1C000CF90 (KeyboardClassCreateWaitWakeIrp.c)
 */

void __fastcall KeyboardClassCreateWaitWakeIrpWorker(PDEVICE_OBJECT DeviceObject, PVOID Context)
{
  KeyboardClassCreateWaitWakeIrp(*((char **)Context + 1));
  IoReleaseRemoveLockEx((PIO_REMOVE_LOCK)(*((_QWORD *)Context + 1) + 32LL), Context, 0x20u);
  IoFreeWorkItem(*((PIO_WORKITEM *)Context + 2));
  ExFreePoolWithTag(Context, 0);
}
