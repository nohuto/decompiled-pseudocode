/*
 * XREFs of GetHidVidPidStrings @ 0x1C00E5F34
 * Callers:
 *     GetHidTelemetryData @ 0x1C00E5E08 (GetHidTelemetryData.c)
 *     GetTelemDeviceData @ 0x1C01C9258 (GetTelemDeviceData.c)
 *     _TelemPTPConfigUpdateEx @ 0x1C01C9584 (_TelemPTPConfigUpdateEx.c)
 * Callees:
 *     <none>
 */

int __fastcall GetHidVidPidStrings(__int64 a1, struct _UNICODE_STRING *a2, struct _UNICODE_STRING *a3)
{
  int result; // eax

  result = RtlIntegerToUnicodeString(*(unsigned __int16 *)(*(_QWORD *)(a1 + 464) + 110LL), 0x10u, a2);
  if ( result >= 0 )
    return RtlIntegerToUnicodeString(*(unsigned __int16 *)(*(_QWORD *)(a1 + 464) + 112LL), 0x10u, a3);
  return result;
}
