/*
 * XREFs of ?CancelOutstandingWorkItems@RMExecServicesProvider@ExecutionModel@@AEAAXXZ @ 0x180015658
 * Callers:
 *     ??1RMExecServicesProvider@ExecutionModel@@QEAA@XZ @ 0x180015450 (--1RMExecServicesProvider@ExecutionModel@@QEAA@XZ.c)
 *     ?Stop@RMExecServicesProvider@ExecutionModel@@UEAAJXZ @ 0x180015980 (-Stop@RMExecServicesProvider@ExecutionModel@@UEAAJXZ.c)
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x180009384 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??_GWorkerThreadItem@RMExecServicesProvider@ExecutionModel@@QEAAPEAXI@Z @ 0x180015588 (--_GWorkerThreadItem@RMExecServicesProvider@ExecutionModel@@QEAAPEAXI@Z.c)
 */

void __fastcall ExecutionModel::RMExecServicesProvider::CancelOutstandingWorkItems(
        ExecutionModel::RMExecServicesProvider *this)
{
  __int64 **v2; // rbx
  ExecutionModel::RMExecServicesProvider::WorkerThreadItem *v3; // rcx
  __int64 *v4; // rcx
  _QWORD *v5; // rdx
  __int64 v6; // rax

  RtlEnterCriticalSection((PRTL_CRITICAL_SECTION)((char *)this + 32));
  v2 = (__int64 **)((char *)this + 72);
  while ( *v2 != (__int64 *)v2 )
  {
    v3 = (ExecutionModel::RMExecServicesProvider::WorkerThreadItem *)(*v2)[2];
    if ( v3 )
      ExecutionModel::RMExecServicesProvider::WorkerThreadItem::`scalar deleting destructor'(v3);
    v4 = *v2;
    v5 = (_QWORD *)(*v2)[1];
    v6 = **v2;
    *v5 = v6;
    *(_QWORD *)(v6 + 8) = v5;
    operator delete(v4);
    --*((_QWORD *)this + 11);
  }
  RtlLeaveCriticalSection((PRTL_CRITICAL_SECTION)((char *)this + 32));
  TpWaitForWork(*((_QWORD *)this + 2), 1LL);
}
