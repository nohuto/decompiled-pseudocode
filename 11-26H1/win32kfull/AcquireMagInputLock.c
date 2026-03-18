/*
 * XREFs of AcquireMagInputLock @ 0x140198D88
 * Callers:
 *     ApplyMagInputTransform @ 0x140198AD0 (ApplyMagInputTransform.c)
 *     EditionMagnificationMousePosition @ 0x140198C60 (EditionMagnificationMousePosition.c)
 *     TransformForInputMagnification @ 0x140198CB0 (TransformForInputMagnification.c)
 *     _SetMagnificationInputTransform @ 0x14023BFDC (_SetMagnificationInputTransform.c)
 * Callees:
 *     <none>
 */

signed __int64 __fastcall AcquireMagInputLock(__int64 a1, __int64 a2)
{
  struct _KTHREAD *CurrentThread; // rbx
  signed __int64 result; // rax

  CurrentThread = KeGetCurrentThread();
  while ( 1 )
  {
    result = _InterlockedCompareExchange64(
               (volatile signed __int64 *)(W32GetUserSessionState(a1, a2) + 66048),
               (signed __int64)CurrentThread,
               0LL);
    if ( !result )
      break;
    UserSleep(1LL);
  }
  return result;
}
