/*
 * XREFs of EditionMouseCaptureHitTest @ 0x140243E70
 * Callers:
 *     <none>
 * Callees:
 *     ?IsThreadDesktopComposed@@YAHPEBUtagTHREADINFO@@@Z @ 0x1400197A4 (-IsThreadDesktopComposed@@YAHPEBUtagTHREADINFO@@@Z.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036890 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     TransformVectorWithInputTargetPrecedence @ 0x14004C3E8 (TransformVectorWithInputTargetPrecedence.c)
 */

__int64 __fastcall EditionMouseCaptureHitTest(const struct tagWND *a1, int a2, int a3)
{
  struct tagTHREADINFO *v6; // rax
  __int64 result; // rax

  v6 = PtiCurrent((__int64)a1);
  result = IsThreadDesktopComposed(v6);
  if ( (_DWORD)result )
    return TransformVectorWithInputTargetPrecedence(a1, a2, a3);
  return result;
}
