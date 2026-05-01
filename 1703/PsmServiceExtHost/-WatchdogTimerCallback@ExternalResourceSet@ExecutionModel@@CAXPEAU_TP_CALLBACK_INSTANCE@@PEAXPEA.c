/*
 * XREFs of ?WatchdogTimerCallback@ExternalResourceSet@ExecutionModel@@CAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_TIMER@@@Z @ 0x180035080
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180021800 (_guard_dispatch_icall_nop.c)
 *     ?RunWatchdog@ExternalResourceSet@ExecutionModel@@AEAAXXZ @ 0x180034D20 (-RunWatchdog@ExternalResourceSet@ExecutionModel@@AEAAXXZ.c)
 */

void __fastcall ExecutionModel::ExternalResourceSet::WatchdogTimerCallback(
        struct _TP_CALLBACK_INSTANCE *a1,
        ExecutionModel::ExternalResourceSet *a2,
        struct _TP_TIMER *a3)
{
  __int64 v4; // rax

  RtlEnterCriticalSection(&RmpGlobalLock);
  ExecutionModel::ExternalResourceSet::RunWatchdog(a2);
  v4 = *(_QWORD *)a2;
  *((_DWORD *)a2 + 356) &= ~8u;
  (*(void (__fastcall **)(ExecutionModel::ExternalResourceSet *))(v4 + 16))(a2);
  RtlLeaveCriticalSection(&RmpGlobalLock);
}
