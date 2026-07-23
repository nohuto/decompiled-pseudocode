/*
 * XREFs of AlpcGetHeaderSize @ 0x180076F00
 * Callers:
 *     AlpcInitializeMessageAttribute @ 0x180076E60 (AlpcInitializeMessageAttribute.c)
 *     AlpcGetMessageAttribute @ 0x180076EC0 (AlpcGetMessageAttribute.c)
 * Callees:
 *     <none>
 */

ULONG __cdecl AlpcGetHeaderSize(ULONG Flags)
{
  ULONG result; // eax

  result = 8;
  if ( (Flags & 0x80000000) != 0 )
    result = 32;
  if ( (Flags & 0x40000000) != 0 )
    result += 32;
  if ( (Flags & 0x20000000) != 0 )
    result += 32;
  if ( (Flags & 0x10000000) != 0 )
    result += 24;
  if ( (Flags & 0x8000000) != 0 )
    result += 24;
  if ( (Flags & 0x4000000) != 0 )
    result += 8;
  if ( (Flags & 0x2000000) != 0 )
    result += 8;
  return result;
}
