/*
 * XREFs of bPolyPolygon @ 0x1C00690F0
 * Callers:
 *     GreCreatePolyPolygonRgnInternal @ 0x1C0068FF0 (GreCreatePolyPolygonRgnInternal.c)
 * Callees:
 *     EngSetLastError @ 0x1C0013020 (EngSetLastError.c)
 *     ?bCloseFigure@EPATHOBJ@@QEAAHXZ @ 0x1C0025860 (-bCloseFigure@EPATHOBJ@@QEAAHXZ.c)
 *     ?bPolyLineTo@EPATHOBJ@@QEAAHPEAVEXFORMOBJ@@PEAU_POINTL@@K@Z @ 0x1C0025BB0 (-bPolyLineTo@EPATHOBJ@@QEAAHPEAVEXFORMOBJ@@PEAU_POINTL@@K@Z.c)
 *     ?bMoveTo@EPATHOBJ@@QEAAHPEAVEXFORMOBJ@@PEAU_POINTL@@@Z @ 0x1C0025C30 (-bMoveTo@EPATHOBJ@@QEAAHPEAVEXFORMOBJ@@PEAU_POINTL@@@Z.c)
 */

__int64 __fastcall bPolyPolygon(
        EPATHOBJ *this,
        struct EXFORMOBJ *a2,
        struct _POINTL *a3,
        int *a4,
        unsigned int a5,
        int a6)
{
  int *v6; // rbx
  unsigned __int64 v11; // r12
  __int64 v12; // rdi

  v6 = a4;
  if ( !a5 )
    return 1LL;
  v11 = (unsigned __int64)&a4[a5];
  while ( 1 )
  {
    v12 = *v6;
    a6 -= v12;
    if ( a6 < 0 || (int)v12 < 2 )
      break;
    if ( !(unsigned int)EPATHOBJ::bMoveTo(this, a2, a3)
      || !(unsigned int)EPATHOBJ::bPolyLineTo(this, a2, a3 + 1, (int)v12 - 1)
      || !(unsigned int)EPATHOBJ::bCloseFigure(this) )
    {
      return 0LL;
    }
    ++v6;
    a3 += v12;
    if ( (unsigned __int64)v6 >= v11 )
      return 1LL;
  }
  EngSetLastError(0x57u);
  return 0LL;
}
