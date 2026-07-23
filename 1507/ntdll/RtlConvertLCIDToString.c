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

NTSTATUS __cdecl RtlConvertLCIDToString(LCID LcidValue, ULONG Base, ULONG Padding, PWSTR pResultBuf, ULONG Size)
{
  NTSTATUS v6; // esi
  ULONG v8; // ebx
  NTSTATUS result; // eax
  ULONG i; // eax
  _UNICODE_STRING String; // [rsp+20h] [rbp-438h] BYREF
  _WORD v12[512]; // [rsp+30h] [rbp-428h] BYREF

  v6 = 0;
  memset(v12, 0, sizeof(v12));
  v8 = Size;
  if ( Size >= 0x200 )
    return -2147483643;
  String.Length = 2 * Size;
  String.MaximumLength = 2 * Size;
  String.Buffer = v12;
  result = RtlIntegerToUnicodeString(LcidValue, Base, &String);
  if ( result >= 0 )
  {
    for ( i = String.Length >> 1; i < Padding; ++i )
    {
      if ( !v8 )
        return -1073741823;
      *pResultBuf++ = 48;
      --v8;
    }
    if ( (int)RtlStringCchCopyW(pResultBuf, v8, String.Buffer) < 0 )
      return -1073741823;
    return v6;
  }
  return result;
}
