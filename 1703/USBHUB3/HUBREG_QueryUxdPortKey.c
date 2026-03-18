/*
 * XREFs of HUBREG_QueryUxdPortKey @ 0x1C007136C
 * Callers:
 *     HUBREG_UpdateUxdSettings @ 0x1C0071868 (HUBREG_UpdateUxdSettings.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C0001950 (WPP_RECORDER_SF_d.c)
 *     RtlUnicodeStringPrintf @ 0x1C0010674 (RtlUnicodeStringPrintf.c)
 *     __security_check_cookie @ 0x1C0037C60 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0038110 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0038540 (memset.c)
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
  v11 = 0LL;
  v12 = 0LL;
  DestinationString.Buffer = (wchar_t *)&v14;
  memset(a3, 0, 0x44uLL);
  v6 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, __int64, __int64, _QWORD, __int64 *))(WdfFunctions_01015 + 384))(
         WdfDriverGlobals,
         *(_QWORD *)(a1 + 16),
         1LL,
         983103LL,
         0LL,
         &v11);
  v7 = v6;
  if ( v6 < 0 )
  {
    v8 = 73;
LABEL_3:
    LODWORD(v10) = v6;
    WPP_RECORDER_SF_d(
      *(_QWORD *)(a1 + 2488),
      2u,
      3u,
      v8,
      (__int64)&WPP_c583747ee8293f01720d1e741a546fd1_Traceguids,
      v10);
    goto LABEL_12;
  }
  v6 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *, __int64, _QWORD, __int64 *))(WdfFunctions_01015 + 1832))(
         WdfDriverGlobals,
         v11,
         &g_UxdPortSettingsKey,
         131097LL,
         0LL,
         &v12);
  v7 = v6;
  if ( v6 == -1073741772 )
  {
    v6 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *, __int64, _DWORD, _QWORD, _QWORD, __int64 *))(WdfFunctions_01015 + 1840))(
           WdfDriverGlobals,
           v11,
           &g_UxdPortSettingsKey,
           131097LL,
           0,
           0LL,
           0LL,
           &v12);
    v7 = v6;
    if ( v6 < 0 )
    {
      v8 = 74;
      goto LABEL_3;
    }
  }
  else
  {
    if ( v6 < 0 )
    {
      v8 = 75;
      goto LABEL_3;
    }
    v6 = RtlUnicodeStringPrintf(&DestinationString, L"uxd_port_%3.3d", a2);
    v7 = v6;
    if ( v6 < 0 )
    {
      v8 = 76;
      goto LABEL_3;
    }
    v7 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, struct _UNICODE_STRING *, __int64, void *, _QWORD, _QWORD))(WdfFunctions_01015 + 1880))(
           WdfDriverGlobals,
           v12,
           &DestinationString,
           68LL,
           a3,
           0LL,
           0LL);
  }
LABEL_12:
  if ( v11 )
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS))(WdfFunctions_01015 + 1848))(WdfDriverGlobals);
  if ( v12 )
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS))(WdfFunctions_01015 + 1848))(WdfDriverGlobals);
  return v7;
}
