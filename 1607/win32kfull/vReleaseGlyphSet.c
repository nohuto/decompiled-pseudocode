/*
 * XREFs of vReleaseGlyphSet @ 0x1C0122B14
 * Callers:
 *     ttfdQueryFontTree @ 0x1C001C338 (ttfdQueryFontTree.c)
 *     ttfdFreeGlyphset @ 0x1C0122AC4 (ttfdFreeGlyphset.c)
 * Callees:
 *     <none>
 */

void __fastcall vReleaseGlyphSet(__int64 a1, int a2)
{
  bool v3; // zf

  if ( a2 == 1 )
  {
    v3 = (*(_DWORD *)(a1 + 104))-- == 1;
    if ( v3 )
    {
      EngFreeMem(*(PVOID *)(a1 + 88));
      *(_QWORD *)(a1 + 88) = 0LL;
    }
  }
  else
  {
    v3 = (*(_DWORD *)(a1 + 108))-- == 1;
    if ( v3 )
    {
      EngFreeMem(*(PVOID *)(a1 + 96));
      *(_QWORD *)(a1 + 96) = 0LL;
    }
  }
}
