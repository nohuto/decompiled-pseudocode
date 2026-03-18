/*
 * XREFs of ?SetWorldToProjection@CMesh2DEffect@@QEAAJUD2D_MATRIX_4X4_F@@@Z @ 0x18009C32C
 * Callers:
 *     ??$ValueSetter@P8CMesh2DEffect@@EAAJUD2D_MATRIX_4X4_F@@@Z$H?SetWorldToProjection@1@QEAAJ0@ZA@UID2D1EffectImpl@@@@YAJPEAUIUnknown@@PEBEI@Z @ 0x18015AD50 (--$ValueSetter@P8CMesh2DEffect@@EAAJUD2D_MATRIX_4X4_F@@@Z$H-SetWorldToProjection@1@QEAAJ0@ZA@UID.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CMesh2DEffect::SetWorldToProjection(CMesh2DEffect *this, struct D2D_MATRIX_4X4_F *a2)
{
  __int64 result; // rax

  result = 0LL;
  *(struct D2D_MATRIX_4X4_F *)((char *)this + 32) = *a2;
  return result;
}
