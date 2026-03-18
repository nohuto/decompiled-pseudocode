/*
 * XREFs of ProcessTouchInputViaRim @ 0x1C01F6A24
 * Callers:
 *     ProcessHidInputViaRim @ 0x1C022E268 (ProcessHidInputViaRim.c)
 * Callees:
 *     ?IsTouchpadDevice@@YAHPEAX@Z @ 0x1C01F1E44 (-IsTouchpadDevice@@YAHPEAX@Z.c)
 *     ?xxxDoTouchpadProcessing@@YAHPEAXH@Z @ 0x1C01F4F58 (-xxxDoTouchpadProcessing@@YAHPEAXH@Z.c)
 *     xxxGeneratePointerInputMessages @ 0x1C01FC05C (xxxGeneratePointerInputMessages.c)
 *     HoldRimCompleteFrame @ 0x1C0230E2C (HoldRimCompleteFrame.c)
 */

__int64 __fastcall ProcessTouchInputViaRim(void *a1, __int64 a2, __int64 a3, __int64 a4, unsigned int a5)
{
  __int64 result; // rax

  if ( !IsTouchpadDevice((unsigned __int64)a1) )
    return xxxGeneratePointerInputMessages(a1);
  result = HoldRimCompleteFrame(a2);
  if ( result )
    return xxxDoTouchpadProcessing(a1, a5);
  return result;
}
