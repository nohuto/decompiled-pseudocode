/*
 * XREFs of ViIoCallbackSnapState @ 0x14073A014
 * Callers:
 *     IovpLocalCompletionRoutine @ 0x1407358A8 (IovpLocalCompletionRoutine.c)
 *     VfFastIoSnapState @ 0x140739F38 (VfFastIoSnapState.c)
 * Callees:
 *     ExAllocateFromNPagedLookasideList @ 0x140030738 (ExAllocateFromNPagedLookasideList.c)
 */

_DWORD *ViIoCallbackSnapState()
{
  _DWORD *result; // rax
  unsigned __int8 CurrentIrql; // cl

  result = ExAllocateFromNPagedLookasideList(&ViIoCallbackStateLookaside);
  if ( result )
  {
    CurrentIrql = KeGetCurrentIrql();
    *(_BYTE *)result = CurrentIrql;
    result[1] = KeGetCurrentThread()->WaitBlock[3].SpareLong;
  }
  return result;
}
