/*
 * XREFs of RIMIDECheckCurrentProcessForInjectionPermissions @ 0x1C00C4D1C
 * Callers:
 *     NtUserInitializeInputDeviceInjection @ 0x1C00ABD50 (NtUserInitializeInputDeviceInjection.c)
 *     NtUserInitializePointerDeviceInjection @ 0x1C00AC1B0 (NtUserInitializePointerDeviceInjection.c)
 *     NtUserInjectDeviceInput @ 0x1C00AC530 (NtUserInjectDeviceInput.c)
 *     NtUserInjectKeyboardInput @ 0x1C00AC890 (NtUserInjectKeyboardInput.c)
 *     NtUserInjectMouseInput @ 0x1C00ACC30 (NtUserInjectMouseInput.c)
 *     NtUserInjectPointerInput @ 0x1C00ACFB0 (NtUserInjectPointerInput.c)
 *     NtUserSetFeatureReportResponse @ 0x1C00ADB60 (NtUserSetFeatureReportResponse.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RIMIDECheckCurrentProcessForInjectionPermissions(int a1)
{
  int v2; // eax
  unsigned __int8 v3; // di
  struct _UNICODE_STRING DestinationString; // [rsp+20h] [rbp-18h] BYREF
  unsigned __int8 v6; // [rsp+40h] [rbp+8h] BYREF

  v6 = 0;
  RtlInitUnicodeString(&DestinationString, L"inputInjection");
  v2 = RtlCapabilityCheck(0LL, &DestinationString, &v6);
  v3 = 0;
  if ( v2 >= 0 )
    v3 = v6;
  if ( !a1
    && v2 >= 0
    && grpdeskRitInput
    && (*((_QWORD *)gptiCurrent + 52) != grpdeskRitInput
     || (PVOID)PsGetCurrentProcess(grpdeskRitInput, v6) != gpepCSRSS
     && !RtlAreAllAccessesGranted(*((_DWORD *)gptiCurrent + 194), 0x20u)) )
  {
    return 0;
  }
  return v3;
}
