/*
 * XREFs of ?bCheckDestSurfaceOverlap@@YAHPEAU_SURFOBJ@@PEAU_RECTL@@@Z @ 0x1C02ABA78
 * Callers:
 *     NtGdiEngStretchBlt @ 0x1C02AE9C0 (NtGdiEngStretchBlt.c)
 *     NtGdiEngStretchBltROP @ 0x1C02AEE10 (NtGdiEngStretchBltROP.c)
 * Callees:
 *     ??XERECTL@@QEAAAEAV0@AEAU_RECTL@@@Z @ 0x1C00354E4 (--XERECTL@@QEAAAEAV0@AEAU_RECTL@@@Z.c)
 *     ?bEmpty@ERECTL@@QEAAHXZ @ 0x1C0035578 (-bEmpty@ERECTL@@QEAAHXZ.c)
 */

__int64 __fastcall bCheckDestSurfaceOverlap(struct _SURFOBJ *a1, struct _RECTL *a2)
{
  LONG top; // r10d
  LONG bottom; // r9d
  LONG left; // r8d
  LONG right; // eax
  LONG cy; // eax
  unsigned int v7; // r8d
  LONG v9; // [rsp+20h] [rbp-20h] BYREF
  LONG v10; // [rsp+24h] [rbp-1Ch]
  LONG v11; // [rsp+28h] [rbp-18h]
  LONG v12; // [rsp+2Ch] [rbp-14h]
  __int64 v13; // [rsp+30h] [rbp-10h] BYREF
  LONG cx; // [rsp+38h] [rbp-8h]
  LONG v15; // [rsp+3Ch] [rbp-4h]

  top = a2->top;
  bottom = a2->bottom;
  left = a2->left;
  right = a2->right;
  v9 = a2->left;
  v10 = top;
  v11 = right;
  v12 = bottom;
  if ( bottom < top )
  {
    v10 = bottom;
    v12 = top;
  }
  if ( right < left )
  {
    v9 = right;
    v11 = left;
  }
  cx = a1->sizlBitmap.cx;
  cy = a1->sizlBitmap.cy;
  v13 = 0LL;
  v15 = cy;
  ERECTL::operator*=(&v9, &v13);
  LOBYTE(v7) = !ERECTL::bEmpty((ERECTL *)&v9);
  return v7;
}
