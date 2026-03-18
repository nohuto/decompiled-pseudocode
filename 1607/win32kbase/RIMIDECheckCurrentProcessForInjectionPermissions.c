/*
 * XREFs of RIMIDECheckCurrentProcessForInjectionPermissions @ 0x1C00D510C
 * Callers:
 *     NtUserInitializeInputDeviceInjection @ 0x1C00B9ED0 (NtUserInitializeInputDeviceInjection.c)
 *     NtUserInitializePointerDeviceInjection @ 0x1C00BA280 (NtUserInitializePointerDeviceInjection.c)
 *     NtUserInjectDeviceInput @ 0x1C00BA550 (NtUserInjectDeviceInput.c)
 *     NtUserInjectKeyboardInput @ 0x1C00BA7F0 (NtUserInjectKeyboardInput.c)
 *     NtUserInjectMouseInput @ 0x1C00BAAC0 (NtUserInjectMouseInput.c)
 *     NtUserInjectPointerInput @ 0x1C00BAD80 (NtUserInjectPointerInput.c)
 *     NtUserSetFeatureReportResponse @ 0x1C00BBA90 (NtUserSetFeatureReportResponse.c)
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
    && (*((_QWORD *)gptiCurrent + 51) != grpdeskRitInput
     || (PVOID)PsGetCurrentProcess(grpdeskRitInput) != gpepCSRSS
     && !RtlAreAllAccessesGranted(*((_DWORD *)gptiCurrent + 194), 0x20u)) )
  {
    return 0;
  }
  return v3;
}
