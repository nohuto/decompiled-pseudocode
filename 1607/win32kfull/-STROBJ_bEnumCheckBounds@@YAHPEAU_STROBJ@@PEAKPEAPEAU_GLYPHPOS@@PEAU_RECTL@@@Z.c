/*
 * XREFs of ?STROBJ_bEnumCheckBounds@@YAHPEAU_STROBJ@@PEAKPEAPEAU_GLYPHPOS@@PEAU_RECTL@@@Z @ 0x1C000AC70
 * Callers:
 *     EngTextOut @ 0x1C0032E10 (EngTextOut.c)
 * Callees:
 *     ?bGlyphOutOfBounds@@YAHPEAVESTROBJ@@PEAU_GLYPHPOS@@PEAU_RECTL@@K@Z @ 0x1C000AD74 (-bGlyphOutOfBounds@@YAHPEAVESTROBJ@@PEAU_GLYPHPOS@@PEAU_RECTL@@K@Z.c)
 *     STROBJ_bEnum @ 0x1C01288F0 (STROBJ_bEnum.c)
 *     vGetPosInfo @ 0x1C02B9A8C (vGetPosInfo.c)
 */

__int64 __fastcall STROBJ_bEnumCheckBounds(struct _STROBJ *a1, ULONG *pc, PGLYPHPOS *ppgpos, struct _RECTL *a4)
{
  PGLYPHPOS *v5; // r13
  ULONG *v6; // r14
  ULONG cGlyphs; // ebp
  BOOL v9; // eax
  PGLYPHPOS v10; // rdx
  __int64 v11; // rbx
  unsigned int v12; // esi
  unsigned int v13; // r15d
  PGLYPHPOS v14; // r13
  __int64 v15; // rsi
  int v16; // r12d
  unsigned int v18; // r13d
  BOOL v19; // [rsp+20h] [rbp-58h]
  PGLYPHPOS v20; // [rsp+28h] [rbp-50h]
  unsigned int v21; // [rsp+80h] [rbp+8h]

  v5 = ppgpos;
  v6 = pc;
  while ( 1 )
  {
    cGlyphs = a1[1].cGlyphs;
    v9 = STROBJ_bEnum(a1, v6, v5);
    v10 = *v5;
    v11 = 0LL;
    v12 = *v6;
    v13 = v9;
    v20 = *v5;
    v19 = v9;
    if ( *v6 )
    {
      v14 = *v5;
      do
      {
        if ( !(unsigned int)bGlyphOutOfBounds((struct ESTROBJ *)a1, &v14[v11], a4, (unsigned int)v11 + cGlyphs) )
          break;
        v11 = (unsigned int)(v11 + 1);
      }
      while ( (unsigned int)v11 < v12 );
      v6 = pc;
      v5 = ppgpos;
      v10 = v20;
    }
    if ( (unsigned int)v11 < v12 )
      break;
    if ( !v13 )
    {
      *v6 = 0;
      return 0LL;
    }
  }
  v15 = (unsigned int)(v11 + 1);
  v21 = *v6;
  v16 = 1;
  if ( (unsigned int)v15 < *v6 )
  {
    v18 = *v6;
    do
    {
      if ( (unsigned int)bGlyphOutOfBounds((struct ESTROBJ *)a1, &v10[v15], a4, (unsigned int)v15 + cGlyphs) )
        break;
      v10 = v20;
      ++v16;
      v15 = (unsigned int)(v15 + 1);
    }
    while ( (unsigned int)v15 < v18 );
    v6 = pc;
    v13 = v19;
    v5 = ppgpos;
  }
  if ( v16 + (int)v11 < v21 )
    v13 = 1;
  a1[1].cGlyphs = cGlyphs + v16 + v11;
  *v5 += v11;
  *v6 = v16;
  if ( (a1[1].rclBkGround.top & 0x1400) == 0 && (cGlyphs || (_DWORD)v11) )
  {
    if ( a1->ulCharInc )
      vGetPosInfo(a1, (unsigned int)v11 + cGlyphs, &(*v5)->ptl);
  }
  return v13;
}
