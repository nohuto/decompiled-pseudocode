/*
 * XREFs of MagInputTransform @ 0x1C0203834
 * Callers:
 *     ApplyMagInputTransform @ 0x1C01C1E60 (ApplyMagInputTransform.c)
 *     TransformForInputMagnification @ 0x1C01C2810 (TransformForInputMagnification.c)
 *     ?GetMouseCoord@@YAXJJK_K0PEAUtagPOINT@@PEAU_SUBPIXELS@@HHH@Z @ 0x1C01D6BB0 (-GetMouseCoord@@YAXJJK_K0PEAUtagPOINT@@PEAU_SUBPIXELS@@HHH@Z.c)
 *     ?MagnifyScreenLocation@@YAXPEAUtagPOINT@@@Z @ 0x1C01F1CBC (-MagnifyScreenLocation@@YAXPEAUtagPOINT@@@Z.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C001A694 (W32GetThreadWin32Thread.c)
 */

__int64 MagInputTransform()
{
  __int64 v0; // rax
  __int64 result; // rax

  v0 = *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416);
  if ( !v0 )
    return 0LL;
  result = *(_QWORD *)(v0 + 208);
  if ( !result )
    return 0LL;
  return result;
}
