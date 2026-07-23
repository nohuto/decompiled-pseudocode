/*
 * XREFs of WmipQueryWmiRegInfo @ 0x1405C2B14
 * Callers:
 *     IoWMISystemControl @ 0x14052D8A8 (IoWMISystemControl.c)
 * Callees:
 *     RtlInitAnsiString @ 0x1400F001C (RtlInitAnsiString.c)
 *     RtlAnsiStringToUnicodeString @ 0x1404FE988 (RtlAnsiStringToUnicodeString.c)
 */

NTSTATUS __fastcall WmipQueryWmiRegInfo(__int64 a1, __int64 a2, UNICODE_STRING *a3, _QWORD *a4)
{
  _STRING DestinationString; // [rsp+20h] [rbp-18h] BYREF

  *a4 = &WmipRegistryPath;
  RtlInitAnsiString(&DestinationString, "SMBiosData");
  return RtlAnsiStringToUnicodeString(a3, &DestinationString, 1u);
}
