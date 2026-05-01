/*
 * XREFs of ?erase@?$list@PEAVPendingTimerItem@RMExecServicesProvider@ExecutionModel@@V?$allocator@PEAVPendingTimerItem@RMExecServicesProvider@ExecutionModel@@@utl@@@utl@@QEAA?AV?$_DlistIt@U?$_DlistNode@PEAVPendingTimerItem@RMExecServicesProvider@ExecutionModel@@@utl@@@2@V?$_DlistConstIt@U?$_DlistNode@PEAVPendingTimerItem@RMExecServicesProvider@ExecutionModel@@@utl@@@2@@Z @ 0x180047D10
 * Callers:
 *     ?CancelOutstandingTimers@RMExecServicesProvider@ExecutionModel@@AEAAXXZ @ 0x180047A80 (-CancelOutstandingTimers@RMExecServicesProvider@ExecutionModel@@AEAAXXZ.c)
 *     ?StopTimer@RMExecServicesProvider@ExecutionModel@@UEAAJPEAX@Z @ 0x180047BC0 (-StopTimer@RMExecServicesProvider@ExecutionModel@@UEAAJPEAX@Z.c)
 *     ?TimerCallback@RMExecServicesProvider@ExecutionModel@@AEAAXPEAVPendingTimerItem@12@@Z @ 0x180047C50 (-TimerCallback@RMExecServicesProvider@ExecutionModel@@AEAAXPEAVPendingTimerItem@12@@Z.c)
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18002BB10 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

_QWORD *__fastcall utl::list<ExecutionModel::RMExecServicesProvider::PendingTimerItem *,utl::allocator<ExecutionModel::RMExecServicesProvider::PendingTimerItem *>>::erase(
        __int64 a1,
        _QWORD *a2,
        __int64 *a3)
{
  __int64 *v3; // rax
  __int64 v5; // rbx
  _QWORD *result; // rax

  v3 = (__int64 *)a3[1];
  v5 = *a3;
  *v3 = *a3;
  *(_QWORD *)(v5 + 8) = v3;
  operator delete(a3);
  --*(_QWORD *)(a1 + 16);
  result = a2;
  *a2 = v5;
  return result;
}
