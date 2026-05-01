/*
 * XREFs of ??_GWorkerThreadItem@RMExecServicesProvider@ExecutionModel@@QEAAPEAXI@Z @ 0x180015588
 * Callers:
 *     ?CancelOutstandingWorkItems@RMExecServicesProvider@ExecutionModel@@AEAAXXZ @ 0x180015658 (-CancelOutstandingWorkItems@RMExecServicesProvider@ExecutionModel@@AEAAXXZ.c)
 *     ?WorkerThread@RMExecServicesProvider@ExecutionModel@@AEAAXXZ @ 0x180015B00 (-WorkerThread@RMExecServicesProvider@ExecutionModel@@AEAAXXZ.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1800088D8 (--3@YAXPEAX@Z.c)
 *     _guard_check_icall_nop @ 0x180009170 (_guard_check_icall_nop.c)
 */

ExecutionModel::RMExecServicesProvider::WorkerThreadItem *__fastcall ExecutionModel::RMExecServicesProvider::WorkerThreadItem::`scalar deleting destructor'(
        ExecutionModel::RMExecServicesProvider::WorkerThreadItem *this)
{
  if ( *(_QWORD *)this )
    (*(void (__fastcall **)(_QWORD))(**(_QWORD **)this + 16LL))(*(_QWORD *)this);
  operator delete(this);
  return this;
}
