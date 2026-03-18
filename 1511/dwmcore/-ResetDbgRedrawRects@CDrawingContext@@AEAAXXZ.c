/*
 * XREFs of ?ResetDbgRedrawRects@CDrawingContext@@AEAAXXZ @ 0x1800371D4
 * Callers:
 *     ?Initialize@CDrawingContext@@MEAAJXZ @ 0x1800437C0 (-Initialize@CDrawingContext@@MEAAJXZ.c)
 *     ?AssignDbgRedrawRects@CDrawingContext@@QEAAXPEBUMilRectF@@I@Z @ 0x18010B318 (-AssignDbgRedrawRects@CDrawingContext@@QEAAXPEBUMilRectF@@I@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall CDrawingContext::ResetDbgRedrawRects(CDrawingContext *this)
{
  _QWORD *v1; // rcx
  __int64 v2; // rax

  v1 = (_QWORD *)((char *)this + 5840);
  v2 = 8LL;
  do
  {
    *v1 = 0LL;
    *(v1 - 1) = 0LL;
    v1 += 2;
    --v2;
  }
  while ( v2 );
}
