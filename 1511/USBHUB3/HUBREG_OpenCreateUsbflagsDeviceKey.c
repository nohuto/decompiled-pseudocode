/*
 * XREFs of HUBREG_OpenCreateUsbflagsDeviceKey @ 0x1C006A394
 * Callers:
 *     HUBREG_AssignUsbflagsValueForDevice @ 0x1C006AB6C (HUBREG_AssignUsbflagsValueForDevice.c)
 *     HUBREG_QueryUsbflagsValuesForDevice @ 0x1C006ACC0 (HUBREG_QueryUsbflagsValuesForDevice.c)
 *     HUBREG_QueryHubErrataFlags @ 0x1C006B570 (HUBREG_QueryHubErrataFlags.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C0001904 (WPP_RECORDER_SF_d.c)
 *     RtlUnicodeStringPrintf @ 0x1C000F844 (RtlUnicodeStringPrintf.c)
 *     __security_check_cookie @ 0x1C0034B70 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0034FF0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall HUBREG_OpenCreateUsbflagsDeviceKey(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        unsigned int a4,
        _QWORD *a5,
        _QWORD *a6,
        __int64 a7)
{
  __int64 v9; // rax
  __int64 (__fastcall *v12)(PWDF_DRIVER_GLOBALS, _QWORD, const wchar_t *); // rax
  int v13; // ebx
  unsigned __int16 v14; // r9
  NTSTATUS v15; // eax
  __int64 v17; // [rsp+28h] [rbp-C0h]
  struct _UNICODE_STRING DestinationString; // [rsp+50h] [rbp-98h] BYREF
  char v19; // [rsp+60h] [rbp-88h] BYREF

  DestinationString.Buffer = (unsigned __int16 *)&v19;
  v9 = WdfFunctions_01015;
  *a5 = 0LL;
  *a6 = 0LL;
  HIDWORD(v17) = HIDWORD(a5);
  v12 = *(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, const wchar_t *))(v9 + 1832);
  *(_DWORD *)&DestinationString.Length = 3407872;
  v13 = v12(WdfDriverGlobals, 0LL, L"vx");
  if ( v13 == -1073741772 )
    v13 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, const wchar_t *, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD *))(WdfFunctions_01015 + 1840))(
            WdfDriverGlobals,
            0LL,
            L"vx",
            a4,
            0LL,
            0LL,
            0LL,
            a5);
  if ( v13 < 0 )
  {
    v14 = 10;
LABEL_11:
    LODWORD(v17) = v13;
    goto LABEL_12;
  }
  v15 = RtlUnicodeStringPrintf(&DestinationString, L"%S%S%S", a1, a2, a3);
  v13 = v15;
  if ( v15 < 0 )
  {
    v14 = 11;
    LODWORD(v17) = v15;
LABEL_12:
    WPP_RECORDER_SF_d(a7, 2u, 5u, v14, (__int64)&WPP_488b6272cf1c0d12ea361b5ad05fb8f5_Traceguids, v17);
    if ( *a6 )
    {
      (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS))(WdfFunctions_01015 + 1848))(WdfDriverGlobals);
      *a6 = 0LL;
    }
    if ( *a5 )
    {
      (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS))(WdfFunctions_01015 + 1848))(WdfDriverGlobals);
      *a5 = 0LL;
    }
    return (unsigned int)v13;
  }
  v13 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, struct _UNICODE_STRING *, __int64, _QWORD, _QWORD *))(WdfFunctions_01015 + 1832))(
          WdfDriverGlobals,
          *a5,
          &DestinationString,
          131097LL,
          0LL,
          a6);
  if ( v13 == -1073741772 )
    v13 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, struct _UNICODE_STRING *, __int64, _DWORD, _QWORD, _QWORD, _QWORD *))(WdfFunctions_01015 + 1840))(
            WdfDriverGlobals,
            *a5,
            &DestinationString,
            983103LL,
            0,
            0LL,
            0LL,
            a6);
  if ( v13 < 0 )
  {
    v14 = 12;
    goto LABEL_11;
  }
  return (unsigned int)v13;
}
