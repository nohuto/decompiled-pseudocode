/*
 * XREFs of HUBREG_QueryUxdPortKey @ 0x1C006CCDC
 * Callers:
 *     HUBREG_UpdateUxdSettings @ 0x1C006D1C8 (HUBREG_UpdateUxdSettings.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C0001904 (WPP_RECORDER_SF_d.c)
 *     RtlUnicodeStringPrintf @ 0x1C000F844 (RtlUnicodeStringPrintf.c)
 *     __security_check_cookie @ 0x1C0034B70 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0034FF0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0035340 (memset.c)
 */

__int64 __fastcall HUBREG_QueryUxdPortKey(__int64 a1, unsigned int a2, void *a3)
{
  NTSTATUS v6; // eax
  unsigned int v7; // ebx
  unsigned __int16 v8; // r9
  __int64 v10; // [rsp+28h] [rbp-51h]
  __int64 v11; // [rsp+50h] [rbp-29h] BYREF
  __int64 v12; // [rsp+58h] [rbp-21h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+60h] [rbp-19h] BYREF
  char v14; // [rsp+70h] [rbp-9h] BYREF

  *(_DWORD *)&DestinationString.Length = 3670016;
  v12 = 0LL;
  v11 = 0LL;
  DestinationString.Buffer = (unsigned __int16 *)&v14;
  memset(a3, 0, 0x44uLL);
  v6 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, __int64, __int64, _QWORD, __int64 *))(WdfFunctions_01015 + 384))(
         WdfDriverGlobals,
         *(_QWORD *)(a1 + 16),
         1LL,
         983103LL,
         0LL,
         &v12);
  v7 = v6;
  if ( v6 < 0 )
  {
    v8 = 71;
LABEL_3:
    LODWORD(v10) = v6;
    WPP_RECORDER_SF_d(
      *(_QWORD *)(a1 + 2464),
      2u,
      3u,
      v8,
      (__int64)&WPP_488b6272cf1c0d12ea361b5ad05fb8f5_Traceguids,
      v10);
    goto LABEL_12;
  }
  v6 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *, __int64, _QWORD, __int64 *))(WdfFunctions_01015 + 1832))(
         WdfDriverGlobals,
         v12,
         &g_UxdPortSettingsKey,
         131097LL,
         0LL,
         &v11);
  v7 = v6;
  if ( v6 == -1073741772 )
  {
    v6 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *, __int64, _DWORD, _QWORD, _QWORD, __int64 *))(WdfFunctions_01015 + 1840))(
           WdfDriverGlobals,
           v12,
           &g_UxdPortSettingsKey,
           131097LL,
           0,
           0LL,
           0LL,
           &v11);
    v7 = v6;
    if ( v6 < 0 )
    {
      v8 = 72;
      goto LABEL_3;
    }
  }
  else
  {
    if ( v6 < 0 )
    {
      v8 = 73;
      goto LABEL_3;
    }
    v6 = RtlUnicodeStringPrintf(&DestinationString, L"uxd_port_%3.3d", a2);
    v7 = v6;
    if ( v6 < 0 )
    {
      v8 = 74;
      goto LABEL_3;
    }
    v7 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, struct _UNICODE_STRING *, __int64, void *, _QWORD, _QWORD))(WdfFunctions_01015 + 1880))(
           WdfDriverGlobals,
           v11,
           &DestinationString,
           68LL,
           a3,
           0LL,
           0LL);
  }
LABEL_12:
  if ( v12 )
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS))(WdfFunctions_01015 + 1848))(WdfDriverGlobals);
  if ( v11 )
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS))(WdfFunctions_01015 + 1848))(WdfDriverGlobals);
  return v7;
}
