/*
 * XREFs of MagInputTransform @ 0x1C01FAEF4
 * Callers:
 *     ApplyMagInputTransform @ 0x1C01C3270 (ApplyMagInputTransform.c)
 *     TransformForInputMagnification @ 0x1C01C3680 (TransformForInputMagnification.c)
 *     ?GetMouseCoord@@YAXJJK_K0PEAUtagPOINT@@PEAU_SUBPIXELS@@HHH@Z @ 0x1C01CF6B4 (-GetMouseCoord@@YAXJJK_K0PEAUtagPOINT@@PEAU_SUBPIXELS@@HHH@Z.c)
 *     ?MagnifyScreenLocation@@YAXPEAUtagPOINT@@@Z @ 0x1C01E80FC (-MagnifyScreenLocation@@YAXPEAUtagPOINT@@@Z.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0044EEC (W32GetThreadWin32Thread.c)
 */

__int64 __fastcall MagInputTransform(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rax
  __int64 result; // rax

  v4 = *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), a2, a3, a4) + 408);
  if ( !v4 )
    return 0LL;
  result = *(_QWORD *)(v4 + 208);
  if ( !result )
    return 0LL;
  return result;
}
