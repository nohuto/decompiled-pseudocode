/*
 * XREFs of ?AdjustPointToBounds@ControllerProcessor@@CA?AUtagPOINT@@U2@PEAUtagRECT@@@Z @ 0x180034614
 * Callers:
 *     ?UpdateNavigationParameters@ControllerProcessor@@AEAAJPEAUtagRECT@@@Z @ 0x180032D1C (-UpdateNavigationParameters@ControllerProcessor@@AEAAJPEAUtagRECT@@@Z.c)
 *     ?TransitionToEnabled@ControllerProcessor@@AEAAJPEAUtagRECT@@PEAUtagPOINT@@@Z @ 0x180032FA4 (-TransitionToEnabled@ControllerProcessor@@AEAAJPEAUtagRECT@@PEAUtagPOINT@@@Z.c)
 *     ?ApplyNavigationDelta@ControllerProcessor@@AEAAJXZ @ 0x180033F14 (-ApplyNavigationDelta@ControllerProcessor@@AEAAJXZ.c)
 * Callees:
 *     <none>
 */

struct tagPOINT __fastcall ControllerProcessor::AdjustPointToBounds(struct tagPOINT a1, struct tagRECT *a2)
{
  LONG right; // r8d
  LONG left; // edx
  LONG v5; // r8d
  LONG x; // eax
  int v7; // edx
  LONG y; // eax
  __int64 v10; // [rsp+8h] [rbp+8h]

  right = a2->right;
  left = a2->left;
  v5 = right - 1;
  x = v5;
  if ( a1.x < v5 )
    x = a1.x;
  if ( left <= x )
  {
    if ( a1.x < v5 )
      v5 = a1.x;
    LODWORD(v10) = v5;
  }
  else
  {
    LODWORD(v10) = left;
  }
  v7 = a2->bottom - 1;
  y = v7;
  if ( a1.y < v7 )
    y = a1.y;
  if ( a2->top <= y )
  {
    if ( a1.y < v7 )
      v7 = a1.y;
    HIDWORD(v10) = v7;
  }
  else
  {
    HIDWORD(v10) = a2->top;
  }
  return (struct tagPOINT)v10;
}
