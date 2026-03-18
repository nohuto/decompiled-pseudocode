/*
 * XREFs of HUBREG_DeleteUxdDeviceKey @ 0x1C006C408
 * Callers:
 *     HUBREG_DeleteUxdSettings @ 0x1C006CA30 (HUBREG_DeleteUxdSettings.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C00015F4 (WPP_RECORDER_SF_d.c)
 *     RtlUnicodeStringPrintf @ 0x1C000F284 (RtlUnicodeStringPrintf.c)
 *     __security_check_cookie @ 0x1C00341F0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00342F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall HUBREG_DeleteUxdDeviceKey(__int64 a1)
{
  int v2; // ebx
  NTSTATUS v3; // eax
  __int64 v5; // [rsp+20h] [rbp-88h]
  __int64 v6; // [rsp+28h] [rbp-80h]
  __int64 v7; // [rsp+40h] [rbp-68h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+48h] [rbp-60h] BYREF
  __int64 v9; // [rsp+58h] [rbp-50h] BYREF

  *(_DWORD *)&DestinationString.Length = 3407872;
  DestinationString.Buffer = (unsigned __int16 *)&v9;
  v7 = 0LL;
  v2 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, void *, __int64, _QWORD, __int64 *))(WdfFunctions_01015
                                                                                                  + 1832))(
         WdfDriverGlobals,
         0LL,
         &g_UxdDeviceSettingsKey,
         131097LL,
         0LL,
         &v7);
  if ( v2 >= 0 )
  {
    LODWORD(v5) = *(unsigned __int16 *)(a1 + 1984);
    v3 = RtlUnicodeStringPrintf(
           &DestinationString,
           L"%04X%04X%04X",
           *(unsigned __int16 *)(a1 + 1980),
           *(unsigned __int16 *)(a1 + 1982),
           v5);
    v2 = v3;
    if ( v3 >= 0 )
    {
      v2 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, struct _UNICODE_STRING *))(WdfFunctions_01015 + 1872))(
             WdfDriverGlobals,
             v7,
             &DestinationString);
    }
    else
    {
      LODWORD(v6) = v3;
      WPP_RECORDER_SF_d(
        *(_QWORD *)(*(_QWORD *)(a1 + 8) + 1432LL),
        2u,
        5u,
        0x4Cu,
        (__int64)&WPP_f82bbd93e8fe66f2423ffa453a54785f_Traceguids,
        v6);
    }
  }
  if ( v7 )
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS))(WdfFunctions_01015 + 1848))(WdfDriverGlobals);
  return (unsigned int)v2;
}
