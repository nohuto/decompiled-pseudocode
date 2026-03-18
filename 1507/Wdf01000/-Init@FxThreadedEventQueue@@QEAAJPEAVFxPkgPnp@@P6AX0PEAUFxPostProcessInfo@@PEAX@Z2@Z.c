/*
 * XREFs of ?Init@FxThreadedEventQueue@@QEAAJPEAVFxPkgPnp@@P6AX0PEAUFxPostProcessInfo@@PEAX@Z2@Z @ 0x1C005CFEC
 * Callers:
 *     ?CreateWakeInterruptMachine@FxInterrupt@@QEAAJXZ @ 0x1C00A1C18 (-CreateWakeInterruptMachine@FxInterrupt@@QEAAJXZ.c)
 *     ?CreateDevicePowerRequirementMachine@FxPoxInterface@@QEAAJXZ @ 0x1C00A3BEC (-CreateDevicePowerRequirementMachine@FxPoxInterface@@QEAAJXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall FxThreadedEventQueue::Init(
        FxThreadedEventQueue *this,
        FxPkgPnp *Pnp,
        void (__fastcall *WorkerRoutine)(FxPkgPnp *, FxPostProcessInfo *, void *),
        void *WorkerContext)
{
  struct _IO_WORKITEM *WorkItem; // rax
  unsigned int v6; // ecx

  this->m_PkgPnp = Pnp;
  this->m_EventWorker = WorkerRoutine;
  this->m_EventWorkerContext = WorkerContext;
  WorkItem = IoAllocateWorkItem(Pnp->m_DeviceBase->m_DeviceObject.m_DeviceObject);
  v6 = 0;
  this->m_WorkItem.m_WorkItem = WorkItem;
  if ( !WorkItem )
    return (unsigned int)-1073741670;
  return v6;
}
