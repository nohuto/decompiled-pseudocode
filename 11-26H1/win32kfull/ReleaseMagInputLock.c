/*
 * XREFs of ReleaseMagInputLock @ 0x140198DD4
 * Callers:
 *     ApplyMagInputTransform @ 0x140198AD0 (ApplyMagInputTransform.c)
 *     EditionMagnificationMousePosition @ 0x140198C60 (EditionMagnificationMousePosition.c)
 *     TransformForInputMagnification @ 0x140198CB0 (TransformForInputMagnification.c)
 *     _SetMagnificationInputTransform @ 0x14023BFDC (_SetMagnificationInputTransform.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ReleaseMagInputLock(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  result = W32GetUserSessionState(a1, a2);
  _InterlockedExchange64((volatile __int64 *)(result + 66048), 0LL);
  return result;
}
