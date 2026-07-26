/*
 * XREFs of ndisXlatePnPFlags @ 0x1C00CAB14
 * Callers:
 *     ndisGetPowerInfo @ 0x1C0057550 (ndisGetPowerInfo.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ndisXlatePnPFlags(int a1)
{
  unsigned int v1; // edx

  v1 = 0;
  if ( (a1 & 1) != 0 )
    v1 = 256;
  if ( (a1 & 8) != 0 )
    v1 |= 0x200u;
  if ( (a1 & 0x10) != 0 )
    v1 |= 0x400u;
  if ( (a1 & 0x20) != 0 )
    v1 |= 0x800u;
  if ( (a1 & 0x40) != 0 )
    v1 |= 0x1000u;
  if ( (a1 & 0x100) != 0 )
    v1 |= 0x2000u;
  if ( (a1 & 0x4000) != 0 )
    v1 |= 0x4000u;
  if ( (a1 & 0x4000000) != 0 )
    v1 |= 0x400000u;
  return v1;
}
