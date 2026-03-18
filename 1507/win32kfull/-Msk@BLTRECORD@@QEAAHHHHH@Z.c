/*
 * XREFs of ?Msk@BLTRECORD@@QEAAHHHHH@Z @ 0x1C0286A24
 * Callers:
 *     GreMaskBlt @ 0x1C00A1D64 (GreMaskBlt.c)
 * Callees:
 *     ?bXform@EXFORMOBJ@@QEAAHPEAU_POINTL@@_K@Z @ 0x1C0032CFC (-bXform@EXFORMOBJ@@QEAAHPEAU_POINTL@@_K@Z.c)
 */

__int64 __fastcall BLTRECORD::Msk(struct _POINTL *this, LONG a2, LONG a3, LONG a4, LONG a5)
{
  struct _POINTL *v5; // rsi
  __int64 result; // rax
  int v10; // ecx

  v5 = this + 22;
  this[22].y = 0;
  this[22].x = 0;
  this[24].x = a2;
  this[24].y = a3;
  this[23].y = a5;
  this[23].x = a4;
  result = EXFORMOBJ::bXform((EXFORMOBJ *)&this[2], this + 22, 2LL);
  if ( (_DWORD)result )
  {
    result = 1LL;
    v10 = this[23].y - this[22].y;
    this[25].x = this[23].x + a2 - v5->x;
    this[25].y = a3 + v10;
  }
  return result;
}
