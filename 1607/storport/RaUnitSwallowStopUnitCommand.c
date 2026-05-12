/*
 * XREFs of RaUnitSwallowStopUnitCommand @ 0x1C003682C
 * Callers:
 *     RaUnitScsiIrp @ 0x1C0003BC0 (RaUnitScsiIrp.c)
 * Callees:
 *     <none>
 */

bool __fastcall RaUnitSwallowStopUnitCommand(__int64 a1)
{
  char v2; // dl
  __int64 v3; // rcx
  int v4; // eax

  v2 = 0;
  v3 = *(_QWORD *)(a1 + 24);
  if ( (*(_DWORD *)(v3 + 524) & 2) != 0 )
  {
    if ( (*(_BYTE *)(a1 + 153) & 4) == 0 && (*(_BYTE *)(v3 + 108) & 8) == 0 )
    {
      v4 = *(_DWORD *)(a1 + 192);
      if ( v4 == 5 )
      {
        if ( *(_DWORD *)(a1 + 660) )
          return 1;
      }
      else if ( v4 == 6 )
      {
        return *(_DWORD *)(a1 + 200) == 5;
      }
    }
  }
  else if ( *(int *)(a1 + 192) >= 5 )
  {
    return 1;
  }
  return v2;
}
