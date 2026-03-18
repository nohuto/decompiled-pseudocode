/*
 * XREFs of ?bGlyphOutOfBounds@@YAHPEAVESTROBJ@@PEAU_GLYPHPOS@@PEAU_RECTL@@K@Z @ 0x1C02B542C
 * Callers:
 *     ?STROBJ_bEnumCheckBounds@@YAHPEAU_STROBJ@@PEAKPEAPEAU_GLYPHPOS@@PEAU_RECTL@@@Z @ 0x1C02B4DC4 (-STROBJ_bEnumCheckBounds@@YAHPEAU_STROBJ@@PEAKPEAPEAU_GLYPHPOS@@PEAU_RECTL@@@Z.c)
 * Callees:
 *     vGetPosInfo @ 0x1C02B688C (vGetPosInfo.c)
 */

__int64 __fastcall bGlyphOutOfBounds(struct ESTROBJ *a1, struct _GLYPHPOS *a2, struct _RECTL *a3, unsigned int a4)
{
  LONG y; // r10d
  unsigned int v5; // r11d
  bool v6; // zf
  LONG x; // r8d
  GLYPHDEF *pgdf; // rax
  LONG v11; // edx
  LONG v12; // r8d
  LONG v14; // [rsp+30h] [rbp+8h] BYREF
  LONG v15; // [rsp+34h] [rbp+Ch]

  y = a2->ptl.y;
  v5 = 0;
  v6 = (*((_DWORD *)a1 + 16) & 0x1400) == 0;
  x = a2->ptl.x;
  v14 = x;
  v15 = y;
  if ( v6 && a4 && *((_DWORD *)a1 + 2) )
  {
    vGetPosInfo(a1, a4, &v14);
    y = v15;
    x = v14;
  }
  pgdf = a2->pgdf;
  v11 = x + pgdf->pgb->ptlOrigin.x;
  v12 = y + pgdf->pgb->ptlOrigin.y;
  if ( v11 < a3->left
    || v11 + pgdf->pgb->sizlBitmap.cx > a3->right
    || v12 < a3->top
    || v12 + pgdf->pgb->sizlBitmap.cy > a3->bottom )
  {
    return 1;
  }
  return v5;
}
