/*
 * XREFs of ndisXlateMiniportFlags @ 0x1C00CAAD0
 * Callers:
 *     ndisGetPowerInfo @ 0x1C0057550 (ndisGetPowerInfo.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ndisXlateMiniportFlags(int a1)
{
  unsigned int v1; // edx

  v1 = (a1 & 0x8000u) != 0;
  if ( (a1 & 0x20000) != 0 )
    v1 |= 2u;
  if ( (a1 & 0x40000) != 0 )
    v1 |= 4u;
  if ( (a1 & 0x200000) != 0 )
    v1 |= 8u;
  if ( (a1 & 0x4000000) != 0 )
    v1 |= 0x10u;
  if ( (a1 & 0x20000000) != 0 )
    v1 |= 0x20u;
  return v1;
}
