/*
 * XREFs of UsbhBuildUxdDeviceKey @ 0x1C0056604
 * Callers:
 *     UsbhDeleteUxdDeviceKey @ 0x1C005677C (UsbhDeleteUxdDeviceKey.c)
 *     UsbhGetUxdDeviceKey @ 0x1C0056C6C (UsbhGetUxdDeviceKey.c)
 * Callees:
 *     RtlStringCbPrintfW @ 0x1C0008850 (RtlStringCbPrintfW.c)
 *     PdoExt @ 0x1C000D6E0 (PdoExt.c)
 */

NTSTATUS __fastcall UsbhBuildUxdDeviceKey(__int64 a1, __int64 a2, wchar_t *a3, __int64 a4)
{
  unsigned __int16 *v5; // rax
  int v7; // [rsp+20h] [rbp-18h]
  int v8; // [rsp+28h] [rbp-10h]

  v5 = (unsigned __int16 *)PdoExt(a2, a2, (__int64)a3, a4);
  v8 = v5[702];
  v7 = v5[701];
  return RtlStringCbPrintfW(a3, 0x1AuLL, L"%4.4x%4.4x%4.4x", v5[700], v7, v8);
}
