/*
 * XREFs of HUBPDO_MakePdoName @ 0x1C00668E8
 * Callers:
 *     HUBPDO_CreatePdoInternal @ 0x1C0066BA4 (HUBPDO_CreatePdoInternal.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C00015F4 (WPP_RECORDER_SF_d.c)
 *     RtlUnicodeStringPrintf @ 0x1C000F284 (RtlUnicodeStringPrintf.c)
 *     __security_check_cookie @ 0x1C00341F0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00342F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall HUBPDO_MakePdoName(__int64 a1, __int64 a2)
{
  NTSTATUS v4; // eax
  unsigned int v5; // ebx
  unsigned __int16 v6; // r9
  NTSTATUS v8; // [rsp+28h] [rbp-100h]
  struct _UNICODE_STRING DestinationString; // [rsp+30h] [rbp-F8h] BYREF
  char v10; // [rsp+40h] [rbp-E8h] BYREF

  *(_DWORD *)&DestinationString.Length = 12582912;
  DestinationString.Buffer = (unsigned __int16 *)&v10;
  v4 = RtlUnicodeStringPrintf(&DestinationString, L"\\Device\\USBPDO-%d");
  v5 = v4;
  if ( v4 < 0 )
  {
    v6 = 81;
LABEL_5:
    v8 = v4;
    WPP_RECORDER_SF_d(
      *(_QWORD *)(*(_QWORD *)(a1 + 8) + 1432LL),
      2u,
      5u,
      v6,
      (__int64)&WPP_14d924a2bc5654d18a61d41b78717f36_Traceguids,
      v8);
    return v5;
  }
  v4 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, struct _UNICODE_STRING *))(WdfFunctions_01015 + 536))(
         WdfDriverGlobals,
         a2,
         &DestinationString);
  v5 = v4;
  if ( v4 < 0 )
  {
    v6 = 82;
    goto LABEL_5;
  }
  return v5;
}
