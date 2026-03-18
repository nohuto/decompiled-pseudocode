/*
 * XREFs of ProcessTouchInputViaRim @ 0x1C01EDC08
 * Callers:
 *     ProcessHidInputViaRim @ 0x1C0229C44 (ProcessHidInputViaRim.c)
 * Callees:
 *     HoldRimCompleteFrame @ 0x1C01C1F74 (HoldRimCompleteFrame.c)
 *     ?IsTouchpadDevice@@YAHPEAX@Z @ 0x1C01E80CC (-IsTouchpadDevice@@YAHPEAX@Z.c)
 *     ?xxxDoTouchpadProcessing@@YAHPEAXH@Z @ 0x1C01EBE78 (-xxxDoTouchpadProcessing@@YAHPEAXH@Z.c)
 *     xxxGeneratePointerInputMessages @ 0x1C01F33DC (xxxGeneratePointerInputMessages.c)
 */

struct tagPOINTERHOLDINGFRAME *__fastcall ProcessTouchInputViaRim(
        void *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        unsigned int a5)
{
  __int64 v7; // rdx
  __int64 v8; // r8
  struct tagPOINTERHOLDINGFRAME *result; // rax

  if ( !IsTouchpadDevice((unsigned __int64)a1, a2, a3, a4) )
    return (struct tagPOINTERHOLDINGFRAME *)xxxGeneratePointerInputMessages(a1);
  result = HoldRimCompleteFrame(a2, v7, v8);
  if ( result )
    return (struct tagPOINTERHOLDINGFRAME *)xxxDoTouchpadProcessing(a1, a5);
  return result;
}
