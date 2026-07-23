/*
 * XREFs of AlpcGetHeaderSize @ 0x180075F50
 * Callers:
 *     AlpcInitializeMessageAttribute @ 0x180075EB0 (AlpcInitializeMessageAttribute.c)
 *     AlpcGetMessageAttribute @ 0x180075F10 (AlpcGetMessageAttribute.c)
 * Callees:
 *     <none>
 */

ULONG __cdecl AlpcGetHeaderSize(ULONG Flags)
{
  ULONG v1; // edx

  v1 = 8;
  if ( (Flags & 0x80000000) != 0 )
    v1 = 32;
  if ( (Flags & 0x40000000) != 0 )
    v1 += 32;
  if ( (Flags & 0x20000000) != 0 )
    v1 += 32;
  if ( (Flags & 0x10000000) != 0 )
    v1 += 24;
  if ( (Flags & 0x8000000) != 0 )
    v1 += 24;
  if ( (Flags & 0x4000000) != 0 )
    v1 += 8;
  return v1;
}
