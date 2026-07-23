/*
 * XREFs of RtlValidateUnicodeString @ 0x140009BE8
 * Callers:
 *     RtlDuplicateUnicodeString @ 0x1403F6E40 (RtlDuplicateUnicodeString.c)
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
