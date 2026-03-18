/*
 * XREFs of AlpcGetHeaderSize @ 0x1400922C4
 * Callers:
 *     AlpcGetMessageAttribute @ 0x140092160 (AlpcGetMessageAttribute.c)
 *     AlpcInitializeMessageAttribute @ 0x14009226C (AlpcInitializeMessageAttribute.c)
 *     AlpcpInitializeCompletionList @ 0x140485028 (AlpcpInitializeCompletionList.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall AlpcGetHeaderSize(int a1)
{
  unsigned int v1; // edx

  v1 = 8;
  if ( a1 < 0 )
    v1 = 32;
  if ( (a1 & 0x40000000) != 0 )
    v1 += 32;
  if ( (a1 & 0x20000000) != 0 )
    v1 += 32;
  if ( (a1 & 0x10000000) != 0 )
    v1 += 24;
  if ( (a1 & 0x8000000) != 0 )
    v1 += 24;
  if ( (a1 & 0x4000000) != 0 )
    v1 += 8;
  return v1;
}
