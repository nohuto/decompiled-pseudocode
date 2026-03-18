/*
 * XREFs of ?SetTextureTransform@CMesh2DEffect@@QEAAJUD2D_MATRIX_3X2_F@@@Z @ 0x1800C2AFC
 * Callers:
 *     ??$ValueSetter@P8CMesh2DEffect@@EAAJUD2D_MATRIX_3X2_F@@@Z$H?SetTextureTransform@1@QEAAJ0@ZA@UID2D1EffectImpl@@@@YAJPEAUIUnknown@@PEBEI@Z @ 0x18019AED0 (--$ValueSetter@P8CMesh2DEffect@@EAAJUD2D_MATRIX_3X2_F@@@Z$H-SetTextureTransform@1@QEAAJ0@ZA@UID2.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CMesh2DEffect::SetTextureTransform(CMesh2DEffect *this, struct D2D_MATRIX_3X2_F *a2)
{
  FLOAT dx; // eax
  FLOAT dy; // eax

  *((_DWORD *)this + 24) = LODWORD(a2->m11);
  *((_DWORD *)this + 25) = LODWORD(a2->m21);
  dx = a2->dx;
  *((_DWORD *)this + 27) = 0;
  *((FLOAT *)this + 26) = dx;
  *((_DWORD *)this + 28) = LODWORD(a2->m12);
  *((_DWORD *)this + 29) = LODWORD(a2->m22);
  dy = a2->dy;
  *((_DWORD *)this + 31) = 0;
  *((FLOAT *)this + 30) = dy;
  return 0LL;
}
