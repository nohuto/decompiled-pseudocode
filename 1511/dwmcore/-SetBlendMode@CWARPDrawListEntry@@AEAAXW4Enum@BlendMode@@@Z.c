/*
 * XREFs of ?SetBlendMode@CWARPDrawListEntry@@AEAAXW4Enum@BlendMode@@@Z @ 0x1801182A8
 * Callers:
 *     ?Initialize@CWARPDrawListEntry@@AEAAJAEBUWARPAlphaBltParameters@@_N@Z @ 0x180118018 (-Initialize@CWARPDrawListEntry@@AEAAJAEBUWARPAlphaBltParameters@@_N@Z.c)
 *     ?SetUncachedState@CWARPDrawListEntry@@QEAAXAEBUD2D_MATRIX_4X4_F@@W4D2D1_ANTIALIAS_MODE@@W4Enum@BlendMode@@W4D2D1_INTERPOLATION_MODE@@M@Z @ 0x1801183A8 (-SetUncachedState@CWARPDrawListEntry@@QEAAXAEBUD2D_MATRIX_4X4_F@@W4D2D1_ANTIALIAS_MODE@@W4Enum@B.c)
 * Callees:
 *     <none>
 */

void __fastcall CWARPDrawListEntry::SetBlendMode(__int64 a1, int a2)
{
  if ( a2 > 17 )
  {
    if ( a2 >= 19 )
    {
      if ( a2 <= 20 )
      {
        *(_DWORD *)(a1 + 68) = 2;
      }
      else if ( a2 == 22 )
      {
        *(_DWORD *)(a1 + 68) = 9;
      }
      else if ( a2 == 23 )
      {
        *(_DWORD *)(a1 + 68) = 10;
      }
    }
  }
  else
  {
    if ( a2 == 17 )
    {
LABEL_8:
      *(_DWORD *)(a1 + 68) = 4;
      return;
    }
    if ( !a2 || a2 == 4 )
    {
      *(_DWORD *)(a1 + 68) = 1;
    }
    else
    {
      if ( a2 <= 4 )
        return;
      if ( a2 > 6 )
      {
        if ( a2 != 15 )
          return;
        goto LABEL_8;
      }
      *(_DWORD *)(a1 + 68) = 0;
    }
  }
}
