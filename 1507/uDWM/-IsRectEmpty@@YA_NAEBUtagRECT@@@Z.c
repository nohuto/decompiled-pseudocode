/*
 * XREFs of ?IsRectEmpty@@YA_NAEBUtagRECT@@@Z @ 0x1800393C4
 * Callers:
 *     ?UpdateAccentBlurRect@CAccent@@QEAAXAEBUtagRECT@@@Z @ 0x1800024C4 (-UpdateAccentBlurRect@CAccent@@QEAAXAEBUtagRECT@@@Z.c)
 *     ?_AddOcclusionInstruction@CAnimatedTransitionVisual@@IEAAJAEBUtagRECT@@@Z @ 0x180037DB0 (-_AddOcclusionInstruction@CAnimatedTransitionVisual@@IEAAJAEBUtagRECT@@@Z.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall IsRectEmpty(const struct tagRECT *a1)
{
  return a1->right <= a1->left || a1->bottom <= a1->top;
}
