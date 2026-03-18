/*
 * XREFs of HUBREG_OpenCreateUsbflagsDeviceKey @ 0x1C0069724
 * Callers:
 *     HUBREG_AssignUsbflagsValueForDevice @ 0x1C0069EFC (HUBREG_AssignUsbflagsValueForDevice.c)
 *     HUBREG_QueryUsbflagsValuesForDevice @ 0x1C006A050 (HUBREG_QueryUsbflagsValuesForDevice.c)
 *     HUBREG_QueryHubErrataFlags @ 0x1C006A900 (HUBREG_QueryHubErrataFlags.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C00015F4 (WPP_RECORDER_SF_d.c)
 *     RtlUnicodeStringPrintf @ 0x1C000F284 (RtlUnicodeStringPrintf.c)
 *     __security_check_cookie @ 0x1C00341F0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00342F0 (_guard_dispatch_icall_nop.c)
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
  int v11; // ebx
  unsigned __int16 v12; // r9
  NTSTATUS v13; // eax
  __int64 v15; // [rsp+28h] [rbp-C0h]
  struct _UNICODE_STRING DestinationString; // [rsp+50h] [rbp-98h] BYREF
  char v17; // [rsp+60h] [rbp-88h] BYREF

  DestinationString.Buffer = (unsigned __int16 *)&v17;
  *a5 = 0LL;
  *a6 = 0LL;
  *(_DWORD *)&DestinationString.Length = 3407872;
  HIDWORD(v15) = HIDWORD(a5);
  v11 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, const wchar_t *))(WdfFunctions_01015 + 1832))(
          WdfDriverGlobals,
          0LL,
          L"vx");
  if ( v11 == -1073741772 )
    v11 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, const wchar_t *, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD *))(WdfFunctions_01015 + 1840))(
            WdfDriverGlobals,
            0LL,
            L"vx",
            a4,
            0LL,
            0LL,
            0LL,
            a5);
  if ( v11 < 0 )
  {
    v12 = 10;
LABEL_11:
    LODWORD(v15) = v11;
    goto LABEL_12;
  }
  v13 = RtlUnicodeStringPrintf(&DestinationString, L"%S%S%S", a1, a2, a3);
  v11 = v13;
  if ( v13 < 0 )
  {
    v12 = 11;
    LODWORD(v15) = v13;
LABEL_12:
    WPP_RECORDER_SF_d(a7, 2u, 5u, v12, (__int64)&WPP_f82bbd93e8fe66f2423ffa453a54785f_Traceguids, v15);
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
    return (unsigned int)v11;
  }
  v11 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, struct _UNICODE_STRING *, __int64, _QWORD, _QWORD *))(WdfFunctions_01015 + 1832))(
          WdfDriverGlobals,
          *a5,
          &DestinationString,
          131097LL,
          0LL,
          a6);
  if ( v11 == -1073741772 )
    v11 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, struct _UNICODE_STRING *, __int64, _DWORD, _QWORD, _QWORD, _QWORD *))(WdfFunctions_01015 + 1840))(
            WdfDriverGlobals,
            *a5,
            &DestinationString,
            983103LL,
            0,
            0LL,
            0LL,
            a6);
  if ( v11 < 0 )
  {
    v12 = 12;
    goto LABEL_11;
  }
  return (unsigned int)v11;
}
