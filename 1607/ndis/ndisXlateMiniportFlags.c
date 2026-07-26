/*
 * XREFs of ndisXlateMiniportFlags @ 0x1C00D04F0
 * Callers:
 *     ndisGetPowerInfo @ 0x1C005BCF0 (ndisGetPowerInfo.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ndisXlateMiniportFlags(int a1)
{
  __int64 result; // rax

  result = (a1 & 0x8000) != 0;
  if ( (a1 & 0x20000) != 0 )
    result = (unsigned int)result | 2;
  if ( (a1 & 0x40000) != 0 )
    result = (unsigned int)result | 4;
  if ( (a1 & 0x200000) != 0 )
    result = (unsigned int)result | 8;
  if ( (a1 & 0x4000000) != 0 )
    result = (unsigned int)result | 0x10;
  if ( (a1 & 0x20000000) != 0 )
    return (unsigned int)result | 0x20;
  return result;
}
