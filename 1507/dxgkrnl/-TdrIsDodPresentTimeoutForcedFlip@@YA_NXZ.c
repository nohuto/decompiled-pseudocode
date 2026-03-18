/*
 * XREFs of ?TdrIsDodPresentTimeoutForcedFlip@@YA_NXZ @ 0x1C013DFA4
 * Callers:
 *     ?PresentDisplayOnly@BLTQUEUE@@QEAAJPEAU_DXGKARG_PRESENT_DISPLAYONLY@@@Z @ 0x1C015A498 (-PresentDisplayOnly@BLTQUEUE@@QEAAJPEAU_DXGKARG_PRESENT_DISPLAYONLY@@@Z.c)
 * Callees:
 *     <none>
 */

_BOOL8 TdrIsDodPresentTimeoutForcedFlip(void)
{
  return _InterlockedExchange(&g_TdrForceDodPresentTimeout, 0) != 0;
}
