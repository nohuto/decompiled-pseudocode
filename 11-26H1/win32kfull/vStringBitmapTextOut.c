/*
 * XREFs of vStringBitmapTextOut @ 0x1403251AC
 * Callers:
 *     ?GrepGetStringBitmapW@@YAIAEAVDCOBJ@@PEAGIPEAUSTRINGBITMAP@@I@Z @ 0x14028A034 (-GrepGetStringBitmapW@@YAIAEAVDCOBJ@@PEAGIPEAUSTRINGBITMAP@@I@Z.c)
 * Callees:
 *     STROBJ_bEnum @ 0x1400DA160 (STROBJ_bEnum.c)
 *     vDrawGlyph @ 0x140324D54 (vDrawGlyph.c)
 */

char __fastcall vStringBitmapTextOut(__int64 a1, unsigned int *a2, unsigned int a3)
{
  int v3; // eax
  int v4; // ebx
  int v5; // ebp
  PGLYPHPOS v7; // r8
  char result; // al
  GLYPHBITS *pgb; // rcx
  ULONG v11; // [rsp+40h] [rbp+8h] BYREF
  PGLYPHPOS v12; // [rsp+58h] [rbp+20h] BYREF

  v3 = *(_DWORD *)(a1 + 12);
  v4 = 0;
  v5 = *(_DWORD *)(a1 + 16);
  v12 = 0LL;
  v7 = *(PGLYPHPOS *)(a1 + 32);
  if ( v3 <= 0 )
    v4 = v3;
  *(_QWORD *)(a1 + 48) = 0LL;
  if ( v7 || (result = STROBJ_bEnum((STROBJ *)a1, &v11, &v12), (v7 = v12) != 0LL) )
  {
    pgb = v7->pgdf->pgb;
    v7->ptl.x += pgb->ptlOrigin.x - v4;
    v7->ptl.y += pgb->ptlOrigin.y - v5;
    return vDrawGlyph(a2, a3, (__int64)v7);
  }
  return result;
}
