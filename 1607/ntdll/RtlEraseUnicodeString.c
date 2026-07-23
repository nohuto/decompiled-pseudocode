/*
 * XREFs of RtlEraseUnicodeString @ 0x18008FBC0
 * Callers:
 *     <none>
 * Callees:
 *     memset @ 0x1800ACCC0 (memset.c)
 */

void __cdecl RtlEraseUnicodeString(PUNICODE_STRING String)
{
  wchar_t *Buffer; // rcx

  Buffer = String->Buffer;
  if ( Buffer )
  {
    if ( String->MaximumLength )
    {
      memset(Buffer, 0, String->MaximumLength);
      String->Length = 0;
    }
  }
}
