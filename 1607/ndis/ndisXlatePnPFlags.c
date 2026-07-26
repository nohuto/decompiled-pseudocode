/*
 * XREFs of ndisXlatePnPFlags @ 0x1C00D052C
 * Callers:
 *     ndisGetPowerInfo @ 0x1C005BCF0 (ndisGetPowerInfo.c)
 * Callees:
 *     <none>
 */

int __fastcall ndisXlatePnPFlags(int a1)
{
  int result; // eax

  result = 0;
  if ( (a1 & 1) != 0 )
    result = 256;
  if ( (a1 & 8) != 0 )
    result |= 0x200u;
  if ( (a1 & 0x10) != 0 )
    result |= 0x400u;
  if ( (a1 & 0x20) != 0 )
    result |= 0x800u;
  if ( (a1 & 0x40) != 0 )
    result |= 0x1000u;
  if ( (a1 & 0x100) != 0 )
    result |= 0x2000u;
  if ( (a1 & 0x4000) != 0 )
    result |= 0x4000u;
  if ( (a1 & 0x4000000) != 0 )
    return result | 0x400000;
  return result;
}
