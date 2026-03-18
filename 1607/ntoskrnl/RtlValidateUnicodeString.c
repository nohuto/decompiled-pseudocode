/*
 * XREFs of RtlValidateUnicodeString @ 0x14000A068
 * Callers:
 *     RtlDuplicateUnicodeString @ 0x1403F7F80 (RtlDuplicateUnicodeString.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall RtlValidateUnicodeString(ULONG Flags, PCUNICODE_STRING String)
{
  if ( Flags )
    return -1073741811;
  else
    return RtlUnicodeStringValidateEx(String, (ULONG)String);
}
