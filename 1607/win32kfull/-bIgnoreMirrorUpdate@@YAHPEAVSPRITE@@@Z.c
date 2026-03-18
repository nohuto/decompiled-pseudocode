/*
 * XREFs of ?bIgnoreMirrorUpdate@@YAHPEAVSPRITE@@@Z @ 0x1C026C8B0
 * Callers:
 *     ?vSpComposite@@YAXPEAVSPRITE@@PEAU_POINTL@@PEAU_SURFOBJ@@PEAU_RECTL@@@Z @ 0x1C0271C40 (-vSpComposite@@YAXPEAVSPRITE@@PEAU_POINTL@@PEAU_SURFOBJ@@PEAU_RECTL@@@Z.c)
 *     ?vSpRedrawSprite@@YAXPEAVSPRITE@@@Z @ 0x1C0275738 (-vSpRedrawSprite@@YAXPEAVSPRITE@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall bIgnoreMirrorUpdate(struct SPRITE *a1)
{
  unsigned int v1; // r8d
  __int64 v2; // rax

  v1 = 0;
  v2 = **((_QWORD **)a1 + 2);
  if ( v2 && (*(_DWORD *)(v2 + 1848) & 0x8000000) != 0 && (*(_DWORD *)(v2 + 2152) & 0x800) != 0 )
    return (*(_DWORD *)a1 & 0x100) != 0;
  return v1;
}
