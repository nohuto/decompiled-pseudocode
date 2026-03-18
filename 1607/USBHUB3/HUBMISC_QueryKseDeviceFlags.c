/*
 * XREFs of HUBMISC_QueryKseDeviceFlags @ 0x1C0027738
 * Callers:
 *     HUBREG_QueryUsbflagsValuesForDevice @ 0x1C006BD04 (HUBREG_QueryUsbflagsValuesForDevice.c)
 *     HUBREG_QueryHubErrataFlags @ 0x1C006C5B4 (HUBREG_QueryHubErrataFlags.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C0001904 (WPP_RECORDER_SF_d.c)
 *     RtlStringCbPrintfW @ 0x1C000F65C (RtlStringCbPrintfW.c)
 *     __security_check_cookie @ 0x1C0034DE0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0035240 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall HUBMISC_QueryKseDeviceFlags(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        _QWORD *a4,
        _QWORD *a5,
        char a6,
        __int64 a7)
{
  __int64 result; // rax
  const wchar_t *v11; // r8
  NTSTATUS v12; // eax
  unsigned __int16 v13; // r9
  const wchar_t *v14; // r8
  __int64 v16; // [rsp+28h] [rbp-B0h]
  wchar_t pszDest[56]; // [rsp+30h] [rbp-A8h] BYREF

  *a4 = 0LL;
  result = a3;
  *a5 = 0LL;
  if ( !WPP_MAIN_CB.Queue.ListEntry.Flink )
  {
    *a4 = 0LL;
    *a5 = 0LL;
    return result;
  }
  v11 = L"USB:USB\\VID_%S&PID_%S&REV_%S";
  if ( a6 )
    v11 = L"USB:ROOT_HUB\\VID_%S&PID_%S&REV_%S";
  v12 = RtlStringCbPrintfW(pszDest, 0x64uLL, v11, a1, a2, a3);
  if ( v12 < 0 )
  {
    v13 = 85;
LABEL_7:
    LODWORD(v16) = v12;
    return WPP_RECORDER_SF_d(a7, 2u, 5u, v13, (__int64)&WPP_ad6d99566eff37ab7f3364317bcf702c_Traceguids, v16);
  }
  ((void (__fastcall *)(wchar_t *, const wchar_t *, _QWORD *))WPP_MAIN_CB.Queue.ListEntry.Flink)(pszDest, L"USB", a4);
  v14 = L"USB:USB\\VID_%S&PID_%S";
  if ( a6 )
    v14 = L"USB:ROOT_HUB\\VID_%S&PID_%S";
  v12 = RtlStringCbPrintfW(pszDest, 0x64uLL, v14, a1, a2);
  if ( v12 < 0 )
  {
    v13 = 86;
    goto LABEL_7;
  }
  return ((__int64 (__fastcall *)(wchar_t *, const wchar_t *, _QWORD *))WPP_MAIN_CB.Queue.ListEntry.Flink)(
           pszDest,
           L"USB",
           a5);
}
