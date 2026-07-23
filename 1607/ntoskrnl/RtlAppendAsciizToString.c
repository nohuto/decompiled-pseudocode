/*
 * XREFs of RtlAppendAsciizToString @ 0x140685FF8
 * Callers:
 *     <none>
 * Callees:
 *     memmove @ 0x140171780 (memmove.c)
 */

NTSTATUS __stdcall RtlAppendAsciizToString(PSTRING Destination, PCSZ Source)
{
  size_t v3; // rbx
  __int64 Length; // r8

  if ( !Source )
    return 0;
  v3 = -1LL;
  do
    ++v3;
  while ( Source[v3] );
  if ( v3 <= 0xFFFF )
  {
    Length = Destination->Length;
    if ( Length + v3 <= Destination->MaximumLength )
    {
      memmove(&Destination->Buffer[Length], Source, v3);
      Destination->Length += v3;
      return 0;
    }
  }
  return -1073741789;
}
