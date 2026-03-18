/*
 * XREFs of ProcessTouchInputViaRim @ 0x1C01F6554
 * Callers:
 *     ProcessHidInputViaRim @ 0x1C022DE3C (ProcessHidInputViaRim.c)
 * Callees:
 *     ?IsTouchpadDevice@@YAHPEAX@Z @ 0x1C01F1C8C (-IsTouchpadDevice@@YAHPEAX@Z.c)
 *     ?xxxDoTouchpadProcessing@@YAHPEAXH@Z @ 0x1C01F4B44 (-xxxDoTouchpadProcessing@@YAHPEAXH@Z.c)
 *     xxxGeneratePointerInputMessages @ 0x1C01FBBC8 (xxxGeneratePointerInputMessages.c)
 *     HoldRimCompleteFrame @ 0x1C02309FC (HoldRimCompleteFrame.c)
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
