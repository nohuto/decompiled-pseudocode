/*
 * XREFs of RtlpFreeReadOnlyHeap @ 0x1800F762C
 * Callers:
 *     RtlAddGrowableFunctionTable @ 0x18006F750 (RtlAddGrowableFunctionTable.c)
 * Callees:
 *     <none>
 */

LOGICAL __fastcall RtlpFreeReadOnlyHeap(void *a1)
{
  PVOID ProcessHeap; // rcx

  if ( LdrSystemDllInitBlock.Wow64SharedInformation[9] )
    ProcessHeap = LdrpMrdataHeap;
  else
    ProcessHeap = NtCurrentPeb()->ProcessHeap;
  return RtlFreeHeap(ProcessHeap, 0, a1);
}
