/*
 * XREFs of AlpcGetHeaderSize @ 0x1400922C4
 * Callers:
 *     AlpcGetMessageAttribute @ 0x140092160 (AlpcGetMessageAttribute.c)
 *     AlpcInitializeMessageAttribute @ 0x14009226C (AlpcInitializeMessageAttribute.c)
 *     AlpcpInitializeCompletionList @ 0x140485028 (AlpcpInitializeCompletionList.c)
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
