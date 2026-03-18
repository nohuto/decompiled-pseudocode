/*
 * XREFs of HUBREG_DeleteUxdDeviceKey @ 0x1C0071710
 * Callers:
 *     HUBREG_DeleteUxdSettings @ 0x1C0071D54 (HUBREG_DeleteUxdSettings.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C0001950 (WPP_RECORDER_SF_d.c)
 *     RtlUnicodeStringPrintf @ 0x1C0010674 (RtlUnicodeStringPrintf.c)
 *     __security_check_cookie @ 0x1C0037C60 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0038110 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall HUBREG_DeleteUxdDeviceKey(__int64 a1)
{
  __int64 (__fastcall *v2)(PWDF_DRIVER_GLOBALS, _QWORD, void *, __int64, _QWORD, __int64 *); // rax
  int v3; // ebx
  NTSTATUS v4; // eax
  __int64 v6; // [rsp+20h] [rbp-88h]
  __int64 v7; // [rsp+28h] [rbp-80h]
  __int64 v8; // [rsp+40h] [rbp-68h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+48h] [rbp-60h] BYREF
  __int64 v10; // [rsp+58h] [rbp-50h] BYREF

  *(_DWORD *)&DestinationString.Length = 3407872;
  DestinationString.Buffer = (wchar_t *)&v10;
  v2 = *(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, void *, __int64, _QWORD, __int64 *))(WdfFunctions_01015
                                                                                                 + 1832);
  v8 = 0LL;
  v3 = v2(WdfDriverGlobals, 0LL, &g_UxdDeviceSettingsKey, 131097LL, 0LL, &v8);
  if ( v3 >= 0 )
  {
    LODWORD(v6) = *(unsigned __int16 *)(a1 + 1984);
    v4 = RtlUnicodeStringPrintf(
           &DestinationString,
           L"%04X%04X%04X",
           *(unsigned __int16 *)(a1 + 1980),
           *(unsigned __int16 *)(a1 + 1982),
           v6);
    v3 = v4;
    if ( v4 >= 0 )
    {
      v3 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, struct _UNICODE_STRING *))(WdfFunctions_01015 + 1872))(
             WdfDriverGlobals,
             v8,
             &DestinationString);
    }
    else
    {
      LODWORD(v7) = v4;
      WPP_RECORDER_SF_d(
        *(_QWORD *)(*(_QWORD *)(a1 + 8) + 1432LL),
        2u,
        5u,
        0x4Eu,
        (__int64)&WPP_c583747ee8293f01720d1e741a546fd1_Traceguids,
        v7);
    }
  }
  if ( v8 )
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS))(WdfFunctions_01015 + 1848))(WdfDriverGlobals);
  return (unsigned int)v3;
}
