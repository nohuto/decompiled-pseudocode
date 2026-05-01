/*
 * XREFs of ?TimerCallback@RMExecServicesProvider@ExecutionModel@@AEAAXPEAVPendingTimerItem@12@@Z @ 0x180047C50
 * Callers:
 *     ?TimerCallbackThunk@RMExecServicesProvider@ExecutionModel@@CAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_TIMER@@@Z @ 0x180047D00 (-TimerCallbackThunk@RMExecServicesProvider@ExecutionModel@@CAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEA.c)
 * Callees:
 *     PsmInitializeServiceExtension2 @ 0x18002B3C0 (PsmInitializeServiceExtension2.c)
 *     ??_GPendingTimerItem@RMExecServicesProvider@ExecutionModel@@QEAAPEAXI@Z @ 0x180047A00 (--_GPendingTimerItem@RMExecServicesProvider@ExecutionModel@@QEAAPEAXI@Z.c)
 *     ?erase@?$list@PEAVPendingTimerItem@RMExecServicesProvider@ExecutionModel@@V?$allocator@PEAVPendingTimerItem@RMExecServicesProvider@ExecutionModel@@@utl@@@utl@@QEAA?AV?$_DlistIt@U?$_DlistNode@PEAVPendingTimerItem@RMExecServicesProvider@ExecutionModel@@@utl@@@2@V?$_DlistConstIt@U?$_DlistNode@PEAVPendingTimerItem@RMExecServicesProvider@ExecutionModel@@@utl@@@2@@Z @ 0x180047D10 (-erase@-$list@PEAVPendingTimerItem@RMExecServicesProvider@ExecutionModel@@V-$allocator@PEAVPendi.c)
 */

void __fastcall ExecutionModel::RMExecServicesProvider::TimerCallback(
        ExecutionModel::RMExecServicesProvider *this,
        struct ExecutionModel::RMExecServicesProvider::PendingTimerItem *a2)
{
  struct _RTL_CRITICAL_SECTION *v2; // rdi
  char *v5; // rcx
  char *i; // r8
  char v7; // [rsp+30h] [rbp+8h] BYREF

  v2 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 32);
  RtlEnterCriticalSection((PRTL_CRITICAL_SECTION)((char *)this + 32));
  v5 = (char *)this + 96;
  for ( i = (char *)*((_QWORD *)this + 12); ; i = *(char **)i )
  {
    if ( i == v5 )
      goto LABEL_6;
    if ( *((struct ExecutionModel::RMExecServicesProvider::PendingTimerItem **)i + 2) == a2 )
      break;
  }
  if ( i == v5 )
  {
LABEL_6:
    RtlLeaveCriticalSection(v2);
    return;
  }
  utl::list<ExecutionModel::RMExecServicesProvider::PendingTimerItem *,utl::allocator<ExecutionModel::RMExecServicesProvider::PendingTimerItem *>>::erase(
    v5,
    &v7,
    i);
  RtlLeaveCriticalSection(v2);
  (*(void (__fastcall **)(_QWORD, __int64, _QWORD))(**(_QWORD **)a2 + 24LL))(*(_QWORD *)a2, 1LL, *((_QWORD *)a2 + 2));
  TpReleaseTimer(*((_QWORD *)a2 + 3));
  *((_QWORD *)a2 + 3) = 0LL;
  ExecutionModel::RMExecServicesProvider::PendingTimerItem::`scalar deleting destructor'(a2);
}
