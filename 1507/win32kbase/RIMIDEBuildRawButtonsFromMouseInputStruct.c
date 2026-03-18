/*
 * XREFs of RIMIDEBuildRawButtonsFromMouseInputStruct @ 0x1C00C4C90
 * Callers:
 *     RIMIDEInjectMouseFromMouseInputStruct @ 0x1C00C652C (RIMIDEInjectMouseFromMouseInputStruct.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RIMIDEBuildRawButtonsFromMouseInputStruct(int a1, __int64 a2)
{
  int v2; // r10d
  int v3; // r9d
  unsigned int v4; // r8d
  int v5; // eax
  int v6; // eax

  v2 = *(_DWORD *)(a2 + 12);
  v3 = 0;
  v4 = (v2 & 2) != 0;
  if ( (v2 & 8) != 0 )
    v4 |= 2u;
  if ( (v2 & 0x20) != 0 )
    v4 |= 4u;
  if ( (v2 & 0x80u) != 0 )
  {
    v5 = *(_DWORD *)(a2 + 8);
    if ( v5 == 1 )
      v4 |= 8u;
    if ( v5 == 2 )
      v4 |= 0x10u;
  }
  if ( (v2 & 4) != 0 )
    v3 = 1;
  if ( (v2 & 0x10) != 0 )
    v3 |= 2u;
  if ( (v2 & 0x40) != 0 )
    v3 |= 4u;
  if ( (v2 & 0x100) != 0 )
  {
    v6 = *(_DWORD *)(a2 + 8);
    if ( v6 == 1 )
      v3 |= 8u;
    if ( v6 == 2 )
      v3 |= 0x10u;
  }
  return ~v3 & (a1 | v4);
}
