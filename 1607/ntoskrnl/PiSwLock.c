/*
 * XREFs of PiSwLock @ 0x1403F0938
 * Callers:
 *     PiSwIrpCancelStartCreate @ 0x1401D0A2C (PiSwIrpCancelStartCreate.c)
 *     PiSwPdoPnPDispatch @ 0x1403F0544 (PiSwPdoPnPDispatch.c)
 *     PipEnumerateCompleted @ 0x1403F1FB0 (PipEnumerateCompleted.c)
 *     PiSwStopDestroy @ 0x140484A6C (PiSwStopDestroy.c)
 *     PiSwProcessParentRemoveIrp @ 0x140484AEC (PiSwProcessParentRemoveIrp.c)
 *     PiSwIrpCleanup @ 0x1404868C8 (PiSwIrpCleanup.c)
 *     PiSwIrpInterfaceRegister @ 0x140487098 (PiSwIrpInterfaceRegister.c)
 *     PiSwIrpSetLifetime @ 0x1404875A8 (PiSwIrpSetLifetime.c)
 *     PiSwCompleteCreate @ 0x140487650 (PiSwCompleteCreate.c)
 *     PiSwIrpStartCreateWorker @ 0x1404880D0 (PiSwIrpStartCreateWorker.c)
 *     PiSwProcessParentStartIrp @ 0x1404CFB84 (PiSwProcessParentStartIrp.c)
 *     PiSwIrpPropertySet @ 0x140543C44 (PiSwIrpPropertySet.c)
 *     PiSwIrpInterfacePropertySet @ 0x140576D70 (PiSwIrpInterfacePropertySet.c)
 *     PiSwIrpInterfaceSetState @ 0x14057EA2C (PiSwIrpInterfaceSetState.c)
 *     PiSwIrpGetLifetime @ 0x140645844 (PiSwIrpGetLifetime.c)
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
