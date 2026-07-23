/*
 * XREFs of RtlAppendStringToString @ 0x1800DAA10
 * Callers:
 *     <none>
 * Callees:
 *     memmove @ 0x1800AB5C0 (memmove.c)
 */

NTSTATUS __cdecl RtlAppendStringToString(PSTRING Destination, PSTRING Source)
{
  unsigned __int16 Length; // di
  __int64 v4; // rcx

  Length = Source->Length;
  if ( Source->Length )
  {
    v4 = Destination->Length;
    if ( (int)(v4 + Length) > Destination->MaximumLength )
      return -1073741789;
    memmove(&Destination->Buffer[v4], Source->Buffer, Length);
    Destination->Length += Length;
  }
  return 0;
}
