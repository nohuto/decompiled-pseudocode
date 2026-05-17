/*
 * XREFs of AlpcGetHeaderSize @ 0x18006AF70
 * Callers:
 *     AlpcInitializeMessageAttribute @ 0x18006AED0 (AlpcInitializeMessageAttribute.c)
 *     AlpcGetMessageAttribute @ 0x18006AF30 (AlpcGetMessageAttribute.c)
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
