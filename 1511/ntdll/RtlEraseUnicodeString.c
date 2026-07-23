/*
 * XREFs of RtlEraseUnicodeString @ 0x18008B3F0
 * Callers:
 *     <none>
 * Callees:
 *     memset @ 0x1800AB900 (memset.c)
 */

void __cdecl RtlEraseUnicodeString(PUNICODE_STRING String)
{
  unsigned __int16 *Buffer; // rcx

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
