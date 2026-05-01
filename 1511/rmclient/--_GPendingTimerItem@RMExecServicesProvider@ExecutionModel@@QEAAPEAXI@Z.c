/*
 * XREFs of ??_GPendingTimerItem@RMExecServicesProvider@ExecutionModel@@QEAAPEAXI@Z @ 0x180015508
 * Callers:
 *     ?CancelOutstandingTimers@RMExecServicesProvider@ExecutionModel@@AEAAXXZ @ 0x1800155D8 (-CancelOutstandingTimers@RMExecServicesProvider@ExecutionModel@@AEAAXXZ.c)
 *     ?StartTimer@RMExecServicesProvider@ExecutionModel@@UEAAJKKPEAUIRMExecServicesProviderCallback@2@PEAXPEAPEAX@Z @ 0x1800157D0 (-StartTimer@RMExecServicesProvider@ExecutionModel@@UEAAJKKPEAUIRMExecServicesProviderCallback@2@.c)
 *     ?StopTimer@RMExecServicesProvider@ExecutionModel@@UEAAJPEAX@Z @ 0x1800159B0 (-StopTimer@RMExecServicesProvider@ExecutionModel@@UEAAJPEAX@Z.c)
 *     ?TimerCallback@RMExecServicesProvider@ExecutionModel@@AEAAXPEAVPendingTimerItem@12@@Z @ 0x180015A40 (-TimerCallback@RMExecServicesProvider@ExecutionModel@@AEAAXPEAVPendingTimerItem@12@@Z.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1800088D8 (--3@YAXPEAX@Z.c)
 *     _guard_check_icall_nop @ 0x180009170 (_guard_check_icall_nop.c)
 */

ExecutionModel::RMExecServicesProvider::PendingTimerItem *__fastcall ExecutionModel::RMExecServicesProvider::PendingTimerItem::`scalar deleting destructor'(
        ExecutionModel::RMExecServicesProvider::PendingTimerItem *this)
{
  __int64 v2; // rcx

  v2 = *((_QWORD *)this + 3);
  if ( v2 )
  {
    TpSetTimer(v2, 0LL, 0LL, 0LL);
    TpWaitForTimer(*((_QWORD *)this + 3), 1LL);
    TpReleaseTimer(*((_QWORD *)this + 3));
  }
  if ( *(_QWORD *)this )
    (*(void (__fastcall **)(_QWORD))(**(_QWORD **)this + 16LL))(*(_QWORD *)this);
  operator delete(this);
  return this;
}
