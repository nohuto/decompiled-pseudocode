/*
 * XREFs of fs_SetUpKey @ 0x1C00C50AC
 * Callers:
 *     fs__NewTransformation @ 0x1C001AE3C (fs__NewTransformation.c)
 *     fs_WinNTGetGlyphIDs @ 0x1C001C6A0 (fs_WinNTGetGlyphIDs.c)
 *     fs_NewSfnt @ 0x1C001D7E0 (fs_NewSfnt.c)
 *     fs_ContourScan @ 0x1C00C142C (fs_ContourScan.c)
 *     fs_FindBitMapSize @ 0x1C00C408C (fs_FindBitMapSize.c)
 *     fs_NewGlyph @ 0x1C00C4E04 (fs_NewGlyph.c)
 *     fs__Contour @ 0x1C00C7348 (fs__Contour.c)
 *     fs_GetGlyphIDs @ 0x1C02DC8DC (fs_GetGlyphIDs.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall fs_SetUpKey(__int64 a1, int a2, _DWORD *a3)
{
  __int64 v3; // r9
  int v4; // eax
  int v5; // eax
  __int64 v6; // rcx
  __int64 result; // rax

  v3 = *(_QWORD *)(a1 + 8);
  if ( v3 )
  {
    *(_QWORD *)(v3 + 232) = a1 + 8;
    if ( a1 == -8 )
    {
      *a3 = 4099;
    }
    else
    {
      v4 = *(_DWORD *)(a1 + 88);
      *(_DWORD *)(v3 + 8) = v4;
      if ( v4 )
      {
        v5 = *(_DWORD *)(a1 + 92);
        if ( !v5 )
          v5 = 2;
        *(_DWORD *)(v3 + 12) = v5;
        if ( (a2 & *(_DWORD *)(v3 + 420)) == a2 )
        {
          v6 = *(_QWORD *)(a1 + 96);
          result = v3;
          *a3 = 0;
          *(_QWORD *)v3 = v6;
          return result;
        }
        *a3 = 4101;
      }
      else
      {
        *a3 = 4104;
      }
    }
  }
  else
  {
    *a3 = 4097;
  }
  return 0LL;
}
