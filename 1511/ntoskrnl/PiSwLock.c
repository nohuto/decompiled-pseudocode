/*
 * XREFs of PiSwLock @ 0x140494B8C
 * Callers:
 *     PiSwIrpCancelStartCreate @ 0x1401C16BC (PiSwIrpCancelStartCreate.c)
 *     PipEnumerateCompleted @ 0x140457A40 (PipEnumerateCompleted.c)
 *     PiSwIrpCleanup @ 0x1404946BC (PiSwIrpCleanup.c)
 *     PiSwPdoPnPDispatch @ 0x14049479C (PiSwPdoPnPDispatch.c)
 *     PiSwStopDestroy @ 0x1404967A0 (PiSwStopDestroy.c)
 *     PiSwProcessParentRemoveIrp @ 0x140496838 (PiSwProcessParentRemoveIrp.c)
 *     PiSwIrpInterfaceRegister @ 0x1404E3ABC (PiSwIrpInterfaceRegister.c)
 *     PiSwCompleteCreate @ 0x1404E4050 (PiSwCompleteCreate.c)
 *     PiSwIrpStartCreateWorker @ 0x1404E42CC (PiSwIrpStartCreateWorker.c)
 *     PiSwProcessParentStartIrp @ 0x1404EA410 (PiSwProcessParentStartIrp.c)
 *     PiSwIrpSetLifetime @ 0x1404EBEC8 (PiSwIrpSetLifetime.c)
 *     PiSwIrpPropertySet @ 0x1404F9230 (PiSwIrpPropertySet.c)
 *     PiSwIrpInterfacePropertySet @ 0x14054D0A0 (PiSwIrpInterfacePropertySet.c)
 *     PiSwIrpInterfaceSetState @ 0x14054E7AC (PiSwIrpInterfaceSetState.c)
 *     PiSwIrpGetLifetime @ 0x140611354 (PiSwIrpGetLifetime.c)
 * Callees:
 *     <none>
 */

BOOLEAN PiSwLock()
{
  struct _KTHREAD *CurrentThread; // rax

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  return ExAcquireResourceExclusiveLite(&PiSwLockObj, 1u);
}
