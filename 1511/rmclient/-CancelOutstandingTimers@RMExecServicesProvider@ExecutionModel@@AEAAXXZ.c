/*
 * XREFs of ?CancelOutstandingTimers@RMExecServicesProvider@ExecutionModel@@AEAAXXZ @ 0x1800155D8
 * Callers:
 *     ??1RMExecServicesProvider@ExecutionModel@@QEAA@XZ @ 0x180015450 (--1RMExecServicesProvider@ExecutionModel@@QEAA@XZ.c)
 *     ?Stop@RMExecServicesProvider@ExecutionModel@@UEAAJXZ @ 0x180015980 (-Stop@RMExecServicesProvider@ExecutionModel@@UEAAJXZ.c)
 * Callees:
 *     ??_GPendingTimerItem@RMExecServicesProvider@ExecutionModel@@QEAAPEAXI@Z @ 0x180015508 (--_GPendingTimerItem@RMExecServicesProvider@ExecutionModel@@QEAAPEAXI@Z.c)
 *     ?erase@?$list@PEAVPendingTimerItem@RMExecServicesProvider@ExecutionModel@@V?$allocator@PEAVPendingTimerItem@RMExecServicesProvider@ExecutionModel@@@utl@@@utl@@QEAA?AV?$_DlistIt@U?$_DlistNode@PEAVPendingTimerItem@RMExecServicesProvider@ExecutionModel@@@utl@@@2@V?$_DlistConstIt@U?$_DlistNode@PEAVPendingTimerItem@RMExecServicesProvider@ExecutionModel@@@utl@@@2@@Z @ 0x180015BE0 (-erase@-$list@PEAVPendingTimerItem@RMExecServicesProvider@ExecutionModel@@V-$allocator@PEAVPendi.c)
 */

void __fastcall ExecutionModel::RMExecServicesProvider::CancelOutstandingTimers(
        ExecutionModel::RMExecServicesProvider *this)
{
  struct _RTL_CRITICAL_SECTION *v1; // rdi
  _QWORD *v3; // rbx
  ExecutionModel::RMExecServicesProvider::PendingTimerItem *v4; // rsi
  char v5; // [rsp+30h] [rbp+8h] BYREF

  v1 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 32);
  RtlEnterCriticalSection((PRTL_CRITICAL_SECTION)((char *)this + 32));
  v3 = (_QWORD *)((char *)this + 96);
  while ( (_QWORD *)*v3 != v3 )
  {
    v4 = *(ExecutionModel::RMExecServicesProvider::PendingTimerItem **)(*v3 + 16LL);
    utl::list<ExecutionModel::RMExecServicesProvider::PendingTimerItem *,utl::allocator<ExecutionModel::RMExecServicesProvider::PendingTimerItem *>>::erase(
      v3,
      &v5,
      *v3);
    RtlLeaveCriticalSection(v1);
    if ( v4 )
      ExecutionModel::RMExecServicesProvider::PendingTimerItem::`scalar deleting destructor'(v4);
    RtlEnterCriticalSection(v1);
  }
  RtlLeaveCriticalSection(v1);
}
