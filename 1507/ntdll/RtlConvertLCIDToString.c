/*
 * XREFs of RtlConvertLCIDToString @ 0x1800D4690
 * Callers:
 *     RtlpConvertCultureNamesToLCIDs @ 0x1800D59A0 (RtlpConvertCultureNamesToLCIDs.c)
 * Callees:
 *     RtlIntegerToUnicodeString @ 0x180021780 (RtlIntegerToUnicodeString.c)
 *     __security_check_cookie @ 0x180084090 (__security_check_cookie.c)
 *     memset @ 0x180098540 (memset.c)
 *     RtlStringCchCopyW @ 0x1800D4E70 (RtlStringCchCopyW.c)
 */

NTSTATUS __fastcall RtlConvertLCIDToString(
        unsigned int a1,
        unsigned int a2,
        unsigned int a3,
        _WORD *a4,
        unsigned int a5)
{
  int v6; // esi
  unsigned int v8; // ebx
  NTSTATUS result; // eax
  unsigned int i; // eax
  UNICODE_STRING v11; // [rsp+20h] [rbp-438h] BYREF
  _WORD v12[512]; // [rsp+30h] [rbp-428h] BYREF

  v6 = 0;
  memset(v12, 0, sizeof(v12));
  v8 = a5;
  if ( a5 >= 0x200 )
    return -2147483643;
  v11.Length = 2 * a5;
  v11.MaximumLength = 2 * a5;
  v11.Buffer = v12;
  result = RtlIntegerToUnicodeString(a1, a2, &v11);
  if ( result >= 0 )
  {
    for ( i = v11.Length >> 1; i < a3; ++i )
    {
      if ( !v8 )
        return -1073741823;
      *a4++ = 48;
      --v8;
    }
    if ( (int)RtlStringCchCopyW(a4, v8, v11.Buffer) < 0 )
      return -1073741823;
    return v6;
  }
  return result;
}
