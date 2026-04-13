/*
 * XREFs of ??_GFeatureStateManager@details@wil@@QEAAPEAXI@Z @ 0x18000CAF4
 * Callers:
 *     wil::details::_dynamic_atexit_destructor_for__g_featureStateManager__ @ 0x18005CE20 (wil--details--_dynamic_atexit_destructor_for__g_featureStateManager__.c)
 * Callees:
 *     ?Wil_RtlUnsubscribeWnfNotificationWaitForCompletion@@YAJPEAU__WIL__WNF_USER_SUBSCRIPTION@@@Z @ 0x180007070 (-Wil_RtlUnsubscribeWnfNotificationWaitForCompletion@@YAJPEAU__WIL__WNF_USER_SUBSCRIPTION@@@Z.c)
 *     ?Release@?$ProcessLocalStorageData@VFeatureStateData@details_abi@wil@@@details_abi@wil@@QEAAXXZ @ 0x18000CF8C (-Release@-$ProcessLocalStorageData@VFeatureStateData@details_abi@wil@@@details_abi@wil@@QEAAXXZ.c)
 */

wil::details::FeatureStateManager *__fastcall wil::details::FeatureStateManager::`scalar deleting destructor'(
        wil::details::FeatureStateManager *this)
{
  struct _TP_TIMER *v2; // rsi
  DWORD LastError; // ebx
  void *v4; // rbx
  HANDLE ProcessHeap; // rax
  struct __WIL__WNF_USER_SUBSCRIPTION *v6; // rcx
  struct _TP_TIMER *v7; // rbx
  void *v8; // rcx

  *(_BYTE *)this = 0;
  v2 = (struct _TP_TIMER *)*((_QWORD *)this + 10);
  if ( v2 )
  {
    LastError = GetLastError();
    SetThreadpoolTimer(v2, 0LL, 0, 0);
    WaitForThreadpoolTimerCallbacks(v2, 1);
    CloseThreadpoolTimer(v2);
    SetLastError(LastError);
  }
  *((_QWORD *)this + 10) = 0LL;
  v4 = (void *)*((_QWORD *)this + 16);
  if ( v4 )
  {
    ProcessHeap = GetProcessHeap();
    HeapFree(ProcessHeap, 0, v4);
  }
  v6 = (struct __WIL__WNF_USER_SUBSCRIPTION *)*((_QWORD *)this + 12);
  if ( v6 )
    Wil_RtlUnsubscribeWnfNotificationWaitForCompletion(v6);
  v7 = (struct _TP_TIMER *)*((_QWORD *)this + 10);
  if ( v7 )
  {
    SetThreadpoolTimer(*((PTP_TIMER *)this + 10), 0LL, 0, 0);
    WaitForThreadpoolTimerCallbacks(v7, 1);
    CloseThreadpoolTimer(v7);
  }
  DeleteCriticalSection((LPCRITICAL_SECTION)this + 1);
  v8 = (void *)*((_QWORD *)this + 2);
  if ( v8 )
    wil::details_abi::ProcessLocalStorageData<wil::details_abi::FeatureStateData>::Release(v8);
  return this;
}
