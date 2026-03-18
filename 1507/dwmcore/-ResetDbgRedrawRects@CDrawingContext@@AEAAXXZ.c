/*
 * XREFs of ?ResetDbgRedrawRects@CDrawingContext@@AEAAXXZ @ 0x180022E80
 * Callers:
 *     ?Initialize@CDrawingContext@@MEAAJXZ @ 0x18002E2E0 (-Initialize@CDrawingContext@@MEAAJXZ.c)
 *     ?AssignDbgRedrawRects@CDrawingContext@@QEAAXPEBUMilRectF@@I@Z @ 0x1800F1408 (-AssignDbgRedrawRects@CDrawingContext@@QEAAXPEBUMilRectF@@I@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall CDrawingContext::ResetDbgRedrawRects(CDrawingContext *this)
{
  _QWORD *v1; // rcx
  __int64 v2; // rax

  v1 = (_QWORD *)((char *)this + 5808);
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
