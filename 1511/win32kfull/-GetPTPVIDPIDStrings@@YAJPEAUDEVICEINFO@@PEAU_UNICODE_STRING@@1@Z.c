/*
 * XREFs of ?GetPTPVIDPIDStrings@@YAJPEAUDEVICEINFO@@PEAU_UNICODE_STRING@@1@Z @ 0x1C01D00F8
 * Callers:
 *     GetTelemDeviceData @ 0x1C01D1530 (GetTelemDeviceData.c)
 *     _TelemPTPConfigUpdateEx @ 0x1C01D1964 (_TelemPTPConfigUpdateEx.c)
 * Callees:
 *     <none>
 */

int __fastcall GetPTPVIDPIDStrings(struct DEVICEINFO *a1, struct _UNICODE_STRING *a2, struct _UNICODE_STRING *a3)
{
  int result; // eax

  result = RtlIntegerToUnicodeString(*(unsigned __int16 *)(*((_QWORD *)a1 + 50) + 110LL), 0x10u, a2);
  if ( result >= 0 )
    return RtlIntegerToUnicodeString(*(unsigned __int16 *)(*((_QWORD *)a1 + 50) + 112LL), 0x10u, a3);
  return result;
}
