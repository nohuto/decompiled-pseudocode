/*
 * XREFs of ?Src@BLTRECORD@@QEAAHHHHH@Z @ 0x1C0047F48
 * Callers:
 *     GreMaskBlt @ 0x1C00F0648 (GreMaskBlt.c)
 *     GrePlgBlt @ 0x1C028000C (GrePlgBlt.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall BLTRECORD::Src(struct _POINTL *this, LONG a2, LONG a3, int a4, int a5)
{
  this[22].y = a3;
  this[23].y = a5 + a3;
  this[22].x = a2;
  this[23].x = a2 + a4;
  return EXFORMOBJ::bXform((EXFORMOBJ *)&this[2], this + 22);
}
