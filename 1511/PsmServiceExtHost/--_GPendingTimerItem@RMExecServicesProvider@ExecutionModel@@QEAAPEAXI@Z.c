/*
 * XREFs of ??_GPendingTimerItem@RMExecServicesProvider@ExecutionModel@@QEAAPEAXI@Z @ 0x180047A00
 * Callers:
 *     ?StartTimer@RMExecServicesProvider@ExecutionModel@@UEAAJKKPEAUIRMExecServicesProviderCallback@2@PEAXPEAPEAX@Z @ 0x180024840 (-StartTimer@RMExecServicesProvider@ExecutionModel@@UEAAJKKPEAUIRMExecServicesProviderCallback@2@.c)
 *     ?CancelOutstandingTimers@RMExecServicesProvider@ExecutionModel@@AEAAXXZ @ 0x180047A80 (-CancelOutstandingTimers@RMExecServicesProvider@ExecutionModel@@AEAAXXZ.c)
 *     ?StopTimer@RMExecServicesProvider@ExecutionModel@@UEAAJPEAX@Z @ 0x180047BC0 (-StopTimer@RMExecServicesProvider@ExecutionModel@@UEAAJPEAX@Z.c)
 *     ?TimerCallback@RMExecServicesProvider@ExecutionModel@@AEAAXPEAVPendingTimerItem@12@@Z @ 0x180047C50 (-TimerCallback@RMExecServicesProvider@ExecutionModel@@AEAAXPEAVPendingTimerItem@12@@Z.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x18002AB64 (--3@YAXPEAX@Z.c)
 *     PsmInitializeServiceExtension2 @ 0x18002B3C0 (PsmInitializeServiceExtension2.c)
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
