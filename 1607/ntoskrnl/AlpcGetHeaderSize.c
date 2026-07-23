/*
 * XREFs of AlpcGetHeaderSize @ 0x140009B98
 * Callers:
 *     AlpcGetMessageAttribute @ 0x140009A34 (AlpcGetMessageAttribute.c)
 *     AlpcInitializeMessageAttribute @ 0x140009B40 (AlpcInitializeMessageAttribute.c)
 *     AlpcpInitializeCompletionList @ 0x1404C1114 (AlpcpInitializeCompletionList.c)
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
