/*
 * XREFs of ?vSpRemoveShapeHint@@YAXPEAVSPRITE@@H@Z @ 0x140213358
 * Callers:
 *     ?pSpHintSpriteShape@@YAHPEAVSPRITE@@PEAUHBITMAP__@@H@Z @ 0x1402130C0 (-pSpHintSpriteShape@@YAHPEAVSPRITE@@PEAUHBITMAP__@@H@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall vSpRemoveShapeHint(SURFOBJ **a1, int a2)
{
  unsigned int v4; // eax
  SURFOBJ *v5; // [rsp+30h] [rbp+8h] BYREF
  SURFOBJ *v6; // [rsp+40h] [rbp+18h] BYREF

  if ( (*(_DWORD *)a1 & 0x40) != 0 )
  {
    EngUnlockSurface(a1[16]);
    v4 = *(_DWORD *)a1 & 0xFFFFFFBF;
    a1[16] = 0LL;
    a1[30] = 0LL;
    *(_DWORD *)a1 = v4;
    if ( a2 )
      *(_DWORD *)a1 = v4 & 0xFFFFFF7F;
    v5 = a1[24];
    RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v5);
    v6 = a1[18];
    a1[24] = 0LL;
    XEPALOBJ::vUnrefPalette((XEPALOBJ *)&v6);
    a1[18] = 0LL;
  }
}
