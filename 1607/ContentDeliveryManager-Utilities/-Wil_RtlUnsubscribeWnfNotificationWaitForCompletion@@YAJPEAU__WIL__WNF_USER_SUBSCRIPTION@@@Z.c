/*
 * XREFs of ?Wil_RtlUnsubscribeWnfNotificationWaitForCompletion@@YAJPEAU__WIL__WNF_USER_SUBSCRIPTION@@@Z @ 0x180007070
 * Callers:
 *     ??_GFeatureStateManager@details@wil@@QEAAPEAXI@Z @ 0x18000CAF4 (--_GFeatureStateManager@details@wil@@QEAAPEAXI@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Wil_RtlUnsubscribeWnfNotificationWaitForCompletion(struct __WIL__WNF_USER_SUBSCRIPTION *a1)
{
  FARPROC ProcAddress; // rax
  HMODULE Library; // rax

  ProcAddress = (FARPROC)`Wil_RtlUnsubscribeWnfNotificationWaitForCompletion'::`2'::s_pfnRtlUnsubscribeWnfNotificationWaitForCompletion;
  if ( `Wil_RtlUnsubscribeWnfNotificationWaitForCompletion'::`2'::s_pfnRtlUnsubscribeWnfNotificationWaitForCompletion )
    return ((__int64 (__fastcall *)(struct __WIL__WNF_USER_SUBSCRIPTION *))ProcAddress)(a1);
  Library = `wil::details::GetNTDLLModuleHandle'::`2'::s_hmod;
  if ( !`wil::details::GetNTDLLModuleHandle'::`2'::s_hmod )
  {
    Library = LoadLibraryExW(L"ntdll.dll", 0LL, 0x800u);
    `wil::details::GetNTDLLModuleHandle'::`2'::s_hmod = Library;
  }
  ProcAddress = GetProcAddress(Library, "RtlUnsubscribeWnfNotificationWaitForCompletion");
  `Wil_RtlUnsubscribeWnfNotificationWaitForCompletion'::`2'::s_pfnRtlUnsubscribeWnfNotificationWaitForCompletion = (__int64)ProcAddress;
  if ( ProcAddress )
    return ((__int64 (__fastcall *)(struct __WIL__WNF_USER_SUBSCRIPTION *))ProcAddress)(a1);
  else
    return 3221225785LL;
}
