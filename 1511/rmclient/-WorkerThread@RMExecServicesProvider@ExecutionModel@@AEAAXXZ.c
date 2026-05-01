/*
 * XREFs of ?WorkerThread@RMExecServicesProvider@ExecutionModel@@AEAAXXZ @ 0x180015B00
 * Callers:
 *     ?WorkerThreadThunk@RMExecServicesProvider@ExecutionModel@@CAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z @ 0x180015BD0 (-WorkerThreadThunk@RMExecServicesProvider@ExecutionModel@@CAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU.c)
 * Callees:
 *     _guard_check_icall_nop @ 0x180009170 (_guard_check_icall_nop.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x180009384 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??_GWorkerThreadItem@RMExecServicesProvider@ExecutionModel@@QEAAPEAXI@Z @ 0x180015588 (--_GWorkerThreadItem@RMExecServicesProvider@ExecutionModel@@QEAAPEAXI@Z.c)
 */

void __fastcall ExecutionModel::RMExecServicesProvider::WorkerThread(ExecutionModel::RMExecServicesProvider *this)
{
  struct _RTL_CRITICAL_SECTION *v1; // r15
  __int64 **v3; // r14
  __int64 *v4; // rcx
  _QWORD *v5; // rdx
  ExecutionModel::RMExecServicesProvider::WorkerThreadItem *v6; // rsi
  __int64 v7; // rax

  v1 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 32);
  RtlEnterCriticalSection((PRTL_CRITICAL_SECTION)((char *)this + 32));
  v3 = (__int64 **)((char *)this + 72);
  while ( *v3 != (__int64 *)v3 )
  {
    v4 = *v3;
    v5 = (_QWORD *)(*v3)[1];
    v6 = (ExecutionModel::RMExecServicesProvider::WorkerThreadItem *)(*v3)[2];
    v7 = **v3;
    *v5 = v7;
    *(_QWORD *)(v7 + 8) = v5;
    operator delete(v4);
    --*((_QWORD *)this + 11);
    RtlLeaveCriticalSection(v1);
    (*(void (__fastcall **)(_QWORD, __int64, _QWORD))(**(_QWORD **)v6 + 24LL))(*(_QWORD *)v6, 2LL, *((_QWORD *)v6 + 1));
    ExecutionModel::RMExecServicesProvider::WorkerThreadItem::`scalar deleting destructor'(v6);
    RtlEnterCriticalSection(v1);
  }
  *((_BYTE *)this + 25) = 0;
  RtlLeaveCriticalSection(v1);
}
