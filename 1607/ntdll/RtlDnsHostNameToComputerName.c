/*
 * XREFs of RtlDnsHostNameToComputerName @ 0x18007C3D0
 * Callers:
 *     <none>
 * Callees:
 *     RtlOemStringToUnicodeString @ 0x18007C4D0 (RtlOemStringToUnicodeString.c)
 *     RtlpDidUnicodeToOemWork @ 0x18007C8A8 (RtlpDidUnicodeToOemWork.c)
 *     RtlUpcaseUnicodeToOemN @ 0x18007C940 (RtlUpcaseUnicodeToOemN.c)
 *     __security_check_cookie @ 0x180096C30 (__security_check_cookie.c)
 */

NTSTATUS __cdecl RtlDnsHostNameToComputerName(
        PUNICODE_STRING ComputerNameString,
        PUNICODE_STRING DnsHostNameString,
        BOOLEAN AllocateComputerNameString)
{
  _UNICODE_STRING v3; // xmm0
  NTSTATUS v5; // ebx
  int v7; // ecx
  unsigned __int16 v8; // dx
  NTSTATUS result; // eax
  int v10; // eax
  ULONG BytesInOemString; // [rsp+30h] [rbp-40h] BYREF
  PCWCH UnicodeString[2]; // [rsp+38h] [rbp-38h] BYREF
  _STRING SourceString; // [rsp+48h] [rbp-28h] BYREF
  CHAR OemString[16]; // [rsp+58h] [rbp-18h] BYREF

  v3 = *DnsHostNameString;
  v5 = 0;
  v7 = 0;
  v8 = _mm_cvtsi128_si32(*(__m128i *)DnsHostNameString);
  *(_UNICODE_STRING *)UnicodeString = v3;
  LOWORD(UnicodeString[0]) = v8;
  if ( v8 >> 1 )
  {
    while ( v3.Buffer[v7] != 46 )
    {
      if ( ++v7 >= (unsigned int)(v8 >> 1) )
        goto LABEL_6;
    }
    v8 = 2 * v7;
    LOWORD(UnicodeString[0]) = 2 * v7;
  }
LABEL_6:
  if ( v8 < 2u )
    return -1073741534;
  result = RtlUpcaseUnicodeToOemN(OemString, 0xFu, &BytesInOemString, v3.Buffer, v8);
  if ( result < 0 && result != -2147483643 )
    return result;
  SourceString.Buffer = OemString;
  SourceString.MaximumLength = 16;
  SourceString.Length = BytesInOemString;
  if ( !(unsigned __int8)RtlpDidUnicodeToOemWork(&SourceString, UnicodeString) )
    return -1073741534;
  v10 = RtlOemStringToUnicodeString(ComputerNameString, &SourceString, AllocateComputerNameString);
  if ( v10 < 0 )
    return v10;
  return v5;
}
