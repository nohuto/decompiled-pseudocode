/*
 * XREFs of ??1RMExecServicesProvider@ExecutionModel@@QEAA@XZ @ 0x180015450
 * Callers:
 *     ?Release@RMExecServicesProvider@ExecutionModel@@UEAAKXZ @ 0x1800080B0 (-Release@RMExecServicesProvider@ExecutionModel@@UEAAKXZ.c)
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x180009384 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ?CancelOutstandingTimers@RMExecServicesProvider@ExecutionModel@@AEAAXXZ @ 0x1800155D8 (-CancelOutstandingTimers@RMExecServicesProvider@ExecutionModel@@AEAAXXZ.c)
 *     ?CancelOutstandingWorkItems@RMExecServicesProvider@ExecutionModel@@AEAAXXZ @ 0x180015658 (-CancelOutstandingWorkItems@RMExecServicesProvider@ExecutionModel@@AEAAXXZ.c)
 */

void __fastcall ExecutionModel::RMExecServicesProvider::~RMExecServicesProvider(
        ExecutionModel::RMExecServicesProvider *this)
{
  bool v1; // zf
  __int64 **v3; // rdi
  __int64 *v4; // rcx
  __int64 *v5; // rdx
  __int64 v6; // rax
  char *v7; // rbx
  __int64 *v8; // rcx
  __int64 *v9; // rdx
  __int64 v10; // rax

  v1 = *((_BYTE *)this + 24) == 0;
  *(_QWORD *)this = &ExecutionModel::RMExecServicesProvider::`vftable';
  if ( !v1 )
  {
    ExecutionModel::RMExecServicesProvider::CancelOutstandingWorkItems(this);
    ExecutionModel::RMExecServicesProvider::CancelOutstandingTimers(this);
    TpWaitForWork(*((_QWORD *)this + 2), 1LL);
    TpReleaseWork(*((_QWORD *)this + 2));
    RtlDeleteCriticalSection((PRTL_CRITICAL_SECTION)((char *)this + 32));
  }
  v3 = (__int64 **)((char *)this + 96);
  while ( 1 )
  {
    v4 = *v3;
    if ( *v3 == (__int64 *)v3 )
      break;
    v5 = (__int64 *)v4[1];
    v6 = *v4;
    *v5 = *v4;
    *(_QWORD *)(v6 + 8) = v5;
    operator delete(v4);
  }
  *((_QWORD *)this + 14) = 0LL;
  v7 = (char *)this + 72;
  while ( 1 )
  {
    v8 = *(__int64 **)v7;
    if ( *(char **)v7 == v7 )
      break;
    v9 = (__int64 *)v8[1];
    v10 = *v8;
    *v9 = *v8;
    *(_QWORD *)(v10 + 8) = v9;
    operator delete(v8);
  }
  *((_QWORD *)v7 + 2) = 0LL;
}
