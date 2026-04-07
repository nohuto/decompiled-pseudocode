/*
 * XREFs of ?GetBeginRect@CAnimatedTransitionVisual@@UEAAJPEAUtagRECT@@@Z @ 0x180014BE0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CAnimatedTransitionVisual::GetBeginRect(CAnimatedTransitionVisual *this, struct tagRECT *a2)
{
  __int64 result; // rax

  result = 0LL;
  *a2 = *(struct tagRECT *)((char *)this + 840);
  return result;
}
