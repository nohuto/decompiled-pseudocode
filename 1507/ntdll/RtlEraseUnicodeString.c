/*
 * XREFs of RtlEraseUnicodeString @ 0x180083A10
 * Callers:
 *     <none>
 * Callees:
 *     memset @ 0x180098540 (memset.c)
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
