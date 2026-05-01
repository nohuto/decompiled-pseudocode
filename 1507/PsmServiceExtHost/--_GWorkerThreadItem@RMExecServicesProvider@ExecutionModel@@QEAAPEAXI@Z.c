/*
 * XREFs of ??_GWorkerThreadItem@RMExecServicesProvider@ExecutionModel@@QEAAPEAXI@Z @ 0x18002F364
 * Callers:
 *     ?CancelOutstandingWorkItems@RMExecServicesProvider@ExecutionModel@@AEAAXXZ @ 0x180042B54 (-CancelOutstandingWorkItems@RMExecServicesProvider@ExecutionModel@@AEAAXXZ.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x180023DC0 (--3@YAXPEAX@Z.c)
 *     PsmInitializeServiceExtension2 @ 0x180024620 (PsmInitializeServiceExtension2.c)
 */

ExecutionModel::RMExecServicesProvider::WorkerThreadItem *__fastcall ExecutionModel::RMExecServicesProvider::WorkerThreadItem::`scalar deleting destructor'(
        ExecutionModel::RMExecServicesProvider::WorkerThreadItem *this)
{
  if ( *(_QWORD *)this )
    (*(void (__fastcall **)(_QWORD))(**(_QWORD **)this + 16LL))(*(_QWORD *)this);
  operator delete(this);
  return this;
}
