/*
 * XREFs of VfIoCompletionCheckState @ 0x140739F84
 * Callers:
 *     IovpLocalCompletionRoutine @ 0x1407358A8 (IovpLocalCompletionRoutine.c)
 * Callees:
 *     VerifierBugCheckIfAppropriate @ 0x140741A80 (VerifierBugCheckIfAppropriate.c)
 */

void __fastcall VfIoCompletionCheckState(unsigned int *Entry, int a2)
{
  unsigned __int8 v4; // cl

  v4 = *(_BYTE *)Entry;
  if ( v4 != KeGetCurrentIrql() )
    VerifierBugCheckIfAppropriate(196, 250, a2, v4, KeGetCurrentIrql());
  if ( Entry[1] != KeGetCurrentThread()->WaitBlock[3].SpareLong )
    VerifierBugCheckIfAppropriate(196, 251, a2, KeGetCurrentThread()->WaitBlock[3].SpareLong, Entry[1]);
  ExFreeToNPagedLookasideList(&ViIoCallbackStateLookaside, Entry);
}
