/*
 * XREFs of RIMIDEBuildButtonFlagsFromRawButtonsAndMouseInputStruct @ 0x1C00D4FE8
 * Callers:
 *     RIMIDEInjectMouseFromMouseInputStruct @ 0x1C00D6AF8 (RIMIDEInjectMouseFromMouseInputStruct.c)
 * Callees:
 *     <none>
 */

__int16 __fastcall RIMIDEBuildButtonFlagsFromRawButtonsAndMouseInputStruct(int a1, int a2, __int64 a3)
{
  __int16 result; // ax
  int v4; // ecx
  __int16 v5; // cx
  int v6; // ecx

  result = 0;
  v4 = a2 ^ a1;
  if ( v4 )
  {
    if ( (v4 & 1) != 0 )
    {
      result = 1;
      if ( (a2 & 1) == 0 )
        result = 2;
    }
    if ( (v4 & 2) != 0 )
    {
      if ( (a2 & 2) != 0 )
        result |= 4u;
      else
        result |= 8u;
    }
    if ( (v4 & 4) != 0 )
    {
      if ( (a2 & 4) != 0 )
        result |= 0x10u;
      else
        result |= 0x20u;
    }
    if ( (v4 & 8) != 0 )
    {
      if ( (a2 & 8) != 0 )
        result |= 0x40u;
      else
        result |= 0x80u;
    }
    if ( (v4 & 0x10) != 0 )
    {
      v5 = 256;
      if ( (a2 & 0x10) == 0 )
        v5 = 512;
      result |= v5;
    }
  }
  v6 = *(_DWORD *)(a3 + 12);
  if ( (v6 & 0x800) != 0 )
    result |= 0x400u;
  if ( (v6 & 0x1000) != 0 )
    return result | 0x800;
  return result;
}
