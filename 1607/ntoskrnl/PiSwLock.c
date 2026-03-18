/*
 * XREFs of PiSwLock @ 0x1403F1A74
 * Callers:
 *     PiSwIrpCancelStartCreate @ 0x1401D0C00 (PiSwIrpCancelStartCreate.c)
 *     PiSwPdoPnPDispatch @ 0x1403F1680 (PiSwPdoPnPDispatch.c)
 *     PipEnumerateCompleted @ 0x1403F30EC (PipEnumerateCompleted.c)
 *     PiSwIrpCleanup @ 0x1404C3820 (PiSwIrpCleanup.c)
 *     PiSwStopDestroy @ 0x1404C6264 (PiSwStopDestroy.c)
 *     PiSwProcessParentRemoveIrp @ 0x1404C62E4 (PiSwProcessParentRemoveIrp.c)
 *     PiSwIrpInterfaceRegister @ 0x1404C648C (PiSwIrpInterfaceRegister.c)
 *     PiSwCompleteCreate @ 0x1404C6A1C (PiSwCompleteCreate.c)
 *     PiSwIrpStartCreateWorker @ 0x1404C6CB4 (PiSwIrpStartCreateWorker.c)
 *     PiSwProcessParentStartIrp @ 0x1404C8128 (PiSwProcessParentStartIrp.c)
 *     PiSwIrpSetLifetime @ 0x1404EF718 (PiSwIrpSetLifetime.c)
 *     PiSwIrpPropertySet @ 0x140543704 (PiSwIrpPropertySet.c)
 *     PiSwIrpInterfacePropertySet @ 0x140576830 (PiSwIrpInterfacePropertySet.c)
 *     PiSwIrpInterfaceSetState @ 0x14057E580 (PiSwIrpInterfaceSetState.c)
 *     PiSwIrpGetLifetime @ 0x140645760 (PiSwIrpGetLifetime.c)
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
