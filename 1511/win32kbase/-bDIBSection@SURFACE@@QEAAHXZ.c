/*
 * XREFs of ?bDIBSection@SURFACE@@QEAAHXZ @ 0x1C0035A9C
 * Callers:
 *     GreMakeBitmapNonStock @ 0x1C005DB10 (GreMakeBitmapNonStock.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall SURFACE::bDIBSection(SURFACE *this)
{
  __int64 result; // rax

  result = 0LL;
  if ( !*((_WORD *)this + 50) )
  {
    if ( *((_QWORD *)this + 23) )
      return 1LL;
  }
  return result;
}
