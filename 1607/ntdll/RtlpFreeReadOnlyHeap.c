/*
 * XREFs of RtlpFreeReadOnlyHeap @ 0x1800F762C
 * Callers:
 *     RtlAddGrowableFunctionTable @ 0x18006F760 (RtlAddGrowableFunctionTable.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlpFreeReadOnlyHeap(unsigned __int64 a1)
{
  void *ProcessHeap; // rcx

  if ( qword_180163310 )
    ProcessHeap = (void *)LdrpMrdataHeap;
  else
    ProcessHeap = NtCurrentPeb()->ProcessHeap;
  return RtlFreeHeap((__int64)ProcessHeap, 0, a1);
}
