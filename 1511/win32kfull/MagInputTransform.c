/*
 * XREFs of MagInputTransform @ 0x1C0203BD4
 * Callers:
 *     ?GetMouseCoord@@YAXJJKJ_KPEAUtagPOINT@@PEAU_SUBPIXELS@@HHH@Z @ 0x1C0088738 (-GetMouseCoord@@YAXJJKJ_KPEAUtagPOINT@@PEAU_SUBPIXELS@@HHH@Z.c)
 *     ApplyMagInputTransform @ 0x1C01C3A20 (ApplyMagInputTransform.c)
 *     TransformForInputMagnification @ 0x1C01C43D0 (TransformForInputMagnification.c)
 *     ?MagnifyScreenLocation@@YAXPEAUtagPOINT@@@Z @ 0x1C01F1E74 (-MagnifyScreenLocation@@YAXPEAUtagPOINT@@@Z.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C005592C (W32GetThreadWin32Thread.c)
 */

__int64 MagInputTransform()
{
  __int64 v0; // rax
  __int64 result; // rax

  v0 = *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408);
  if ( !v0 )
    return 0LL;
  result = *(_QWORD *)(v0 + 208);
  if ( !result )
    return 0LL;
  return result;
}
