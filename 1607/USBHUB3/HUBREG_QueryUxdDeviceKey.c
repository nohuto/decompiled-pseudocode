/*
 * XREFs of HUBREG_QueryUxdDeviceKey @ 0x1C006DF50
 * Callers:
 *     HUBREG_UpdateUxdSettings @ 0x1C006E208 (HUBREG_UpdateUxdSettings.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C0001904 (WPP_RECORDER_SF_d.c)
 *     RtlUnicodeStringPrintf @ 0x1C000F8F4 (RtlUnicodeStringPrintf.c)
 *     __security_check_cookie @ 0x1C0034DE0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0035240 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall HUBREG_QueryUxdDeviceKey(__int64 a1, __int64 a2)
{
  __int64 (__fastcall *v4)(PWDF_DRIVER_GLOBALS, _QWORD, void *, __int64, _QWORD, __int64 *); // rax
  int v5; // ebx
  NTSTATUS v6; // eax
  __int64 v8; // [rsp+20h] [rbp-98h]
  __int64 v9; // [rsp+28h] [rbp-90h]
  __int64 v10; // [rsp+40h] [rbp-78h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+48h] [rbp-70h] BYREF
  __int64 v12; // [rsp+58h] [rbp-60h] BYREF

  *(_DWORD *)&DestinationString.Length = 3407872;
  DestinationString.Buffer = (wchar_t *)&v12;
  v4 = *(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, void *, __int64, _QWORD, __int64 *))(WdfFunctions_01015
                                                                                                 + 1832);
  v10 = 0LL;
  v5 = v4(WdfDriverGlobals, 0LL, &g_UxdDeviceSettingsKey, 131097LL, 0LL, &v10);
  if ( v5 >= 0 )
  {
    LODWORD(v8) = *(unsigned __int16 *)(a1 + 1984);
    v6 = RtlUnicodeStringPrintf(
           &DestinationString,
           L"%04X%04X%04X",
           *(unsigned __int16 *)(a1 + 1980),
           *(unsigned __int16 *)(a1 + 1982),
           v8);
    v5 = v6;
    if ( v6 >= 0 )
    {
      v5 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, struct _UNICODE_STRING *, __int64, __int64, _QWORD, _QWORD))(WdfFunctions_01015 + 1880))(
             WdfDriverGlobals,
             v10,
             &DestinationString,
             68LL,
             a2,
             0LL,
             0LL);
    }
    else
    {
      LODWORD(v9) = v6;
      WPP_RECORDER_SF_d(
        *(_QWORD *)(*(_QWORD *)(a1 + 8) + 1432LL),
        2u,
        5u,
        0x4Bu,
        (__int64)&WPP_d9e6b8ce2d2d3a2fc161dd0ed8437b42_Traceguids,
        v9);
    }
  }
  if ( v10 )
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS))(WdfFunctions_01015 + 1848))(WdfDriverGlobals);
  return (unsigned int)v5;
}
