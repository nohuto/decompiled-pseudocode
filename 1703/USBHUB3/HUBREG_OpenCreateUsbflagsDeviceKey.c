/*
 * XREFs of HUBREG_OpenCreateUsbflagsDeviceKey @ 0x1C006E7C4
 * Callers:
 *     HUBREG_AssignUsbflagsValueForDevice @ 0x1C006EFDC (HUBREG_AssignUsbflagsValueForDevice.c)
 *     HUBREG_QueryUsbflagsValuesForDevice @ 0x1C006F134 (HUBREG_QueryUsbflagsValuesForDevice.c)
 *     HUBREG_QueryHubErrataFlags @ 0x1C006FABC (HUBREG_QueryHubErrataFlags.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C0001950 (WPP_RECORDER_SF_d.c)
 *     RtlUnicodeStringPrintf @ 0x1C0010674 (RtlUnicodeStringPrintf.c)
 *     __security_check_cookie @ 0x1C0037C60 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0038110 (_guard_dispatch_icall_nop.c)
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
  NTSTATUS v14; // eax
  __int64 v16; // [rsp+28h] [rbp-C0h]
  __int64 v17; // [rsp+28h] [rbp-C0h]
  struct _UNICODE_STRING DestinationString; // [rsp+50h] [rbp-98h] BYREF
  char v19; // [rsp+60h] [rbp-88h] BYREF

  DestinationString.Buffer = (wchar_t *)&v19;
  v9 = WdfFunctions_01015;
  *a5 = 0LL;
  *a6 = 0LL;
  HIDWORD(v16) = HIDWORD(a5);
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
    LODWORD(v16) = v13;
    WPP_RECORDER_SF_d(a7, 2u, 5u, 0xAu, (__int64)&WPP_c583747ee8293f01720d1e741a546fd1_Traceguids, v16);
LABEL_11:
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
  v14 = RtlUnicodeStringPrintf(&DestinationString, L"%S%S%S", a1, a2, a3);
  v13 = v14;
  if ( v14 < 0 )
  {
    LODWORD(v16) = v14;
    WPP_RECORDER_SF_d(a7, 2u, 5u, 0xBu, (__int64)&WPP_c583747ee8293f01720d1e741a546fd1_Traceguids, v16);
    goto LABEL_11;
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
    LODWORD(v17) = v13;
    WPP_RECORDER_SF_d(a7, 2u, 5u, 0xCu, (__int64)&WPP_c583747ee8293f01720d1e741a546fd1_Traceguids, v17);
    goto LABEL_11;
  }
  return (unsigned int)v13;
}
