/*
 * XREFs of ??_GFeatureStateManager@details@wil@@QEAAPEAXI@Z @ 0x180042DE4
 * Callers:
 *     wil::details::_dynamic_atexit_destructor_for__g_featureStateManager__ @ 0x1800A3E00 (wil--details--_dynamic_atexit_destructor_for__g_featureStateManager__.c)
 * Callees:
 *     ?Release@?$ProcessLocalStorageData@VFeatureStateData@details_abi@wil@@@details_abi@wil@@QEAAXXZ @ 0x1800432E8 (-Release@-$ProcessLocalStorageData@VFeatureStateData@details_abi@wil@@@details_abi@wil@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x18009EB10 (_guard_dispatch_icall_nop.c)
 */

wil::details::FeatureStateManager *__fastcall wil::details::FeatureStateManager::`scalar deleting destructor'(
        wil::details::FeatureStateManager *this)
{
  struct _TP_TIMER *v2; // rsi
  DWORD LastError; // ebx
  void *v4; // rbx
  HANDLE ProcessHeap; // rax
  __int64 v6; // rbx
  int (*ProcAddress)(struct __WIL__WNF_USER_SUBSCRIPTION *); // rax
  HMODULE ModuleHandleW; // rax
  __int64 v9; // rbx
  HMODULE v10; // rax
  struct _TP_TIMER *v11; // rbx
  void *v12; // rcx

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
  v4 = (void *)*((_QWORD *)this + 17);
  if ( v4 )
  {
    ProcessHeap = GetProcessHeap();
    HeapFree(ProcessHeap, 0, v4);
  }
  v6 = *((_QWORD *)this + 13);
  ProcAddress = g_wil_details_pfnRtlUnsubscribeWnfNotificationWaitForCompletion;
  if ( v6 )
  {
    if ( g_wil_details_pfnRtlUnsubscribeWnfNotificationWaitForCompletion )
      goto LABEL_10;
    ModuleHandleW = g_wil_details_ntdllModuleHandle;
    if ( !g_wil_details_ntdllModuleHandle )
    {
      ModuleHandleW = GetModuleHandleW(L"ntdll.dll");
      g_wil_details_ntdllModuleHandle = ModuleHandleW;
    }
    ProcAddress = (int (*)(struct __WIL__WNF_USER_SUBSCRIPTION *))GetProcAddress(
                                                                    ModuleHandleW,
                                                                    "RtlUnsubscribeWnfNotificationWaitForCompletion");
    g_wil_details_pfnRtlUnsubscribeWnfNotificationWaitForCompletion = ProcAddress;
    if ( ProcAddress )
    {
LABEL_10:
      ((void (__fastcall *)(__int64))ProcAddress)(v6);
      ProcAddress = g_wil_details_pfnRtlUnsubscribeWnfNotificationWaitForCompletion;
    }
  }
  v9 = *((_QWORD *)this + 12);
  if ( v9 )
  {
    if ( ProcAddress )
      goto LABEL_16;
    v10 = g_wil_details_ntdllModuleHandle;
    if ( !g_wil_details_ntdllModuleHandle )
    {
      v10 = GetModuleHandleW(L"ntdll.dll");
      g_wil_details_ntdllModuleHandle = v10;
    }
    ProcAddress = (int (*)(struct __WIL__WNF_USER_SUBSCRIPTION *))GetProcAddress(
                                                                    v10,
                                                                    "RtlUnsubscribeWnfNotificationWaitForCompletion");
    g_wil_details_pfnRtlUnsubscribeWnfNotificationWaitForCompletion = ProcAddress;
    if ( ProcAddress )
LABEL_16:
      ((void (__fastcall *)(__int64))ProcAddress)(v9);
  }
  v11 = (struct _TP_TIMER *)*((_QWORD *)this + 10);
  if ( v11 )
  {
    SetThreadpoolTimer(*((PTP_TIMER *)this + 10), 0LL, 0, 0);
    WaitForThreadpoolTimerCallbacks(v11, 1);
    CloseThreadpoolTimer(v11);
  }
  DeleteCriticalSection((LPCRITICAL_SECTION)this + 1);
  v12 = (void *)*((_QWORD *)this + 2);
  if ( v12 )
    wil::details_abi::ProcessLocalStorageData<wil::details_abi::FeatureStateData>::Release(v12);
  return this;
}
