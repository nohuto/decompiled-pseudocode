/*
 * XREFs of RIMIDEBuildRawButtonsFromMouseInputStruct @ 0x1C00D5084
 * Callers:
 *     RIMIDEInjectMouseFromMouseInputStruct @ 0x1C00D6AF8 (RIMIDEInjectMouseFromMouseInputStruct.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RIMIDEBuildRawButtonsFromMouseInputStruct(int a1, __int64 a2)
{
  int v2; // r9d
  int v3; // r8d
  unsigned int v5; // eax
  int v6; // ecx
  int v7; // ecx

  v2 = *(_DWORD *)(a2 + 12);
  v3 = 0;
  v5 = (v2 & 2) != 0;
  if ( (v2 & 8) != 0 )
    v5 |= 2u;
  if ( (v2 & 0x20) != 0 )
    v5 |= 4u;
  if ( (v2 & 0x80u) != 0 )
  {
    v6 = *(_DWORD *)(a2 + 8);
    if ( v6 == 1 )
      v5 |= 8u;
    if ( v6 == 2 )
      v5 |= 0x10u;
  }
  if ( (v2 & 4) != 0 )
    v3 = 1;
  if ( (v2 & 0x10) != 0 )
    v3 |= 2u;
  if ( (v2 & 0x40) != 0 )
    v3 |= 4u;
  if ( (v2 & 0x100) != 0 )
  {
    v7 = *(_DWORD *)(a2 + 8);
    if ( v7 == 1 )
      v3 |= 8u;
    if ( v7 == 2 )
      v3 |= 0x10u;
  }
  return ~v3 & (a1 | v5);
}
