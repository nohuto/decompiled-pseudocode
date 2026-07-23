/*
 * XREFs of RtlpFreeTraverseNodes @ 0x180040660
 * Callers:
 *     RtlpIsQualifiedLanguage @ 0x180040580 (RtlpIsQualifiedLanguage.c)
 *     LdrpMergeParentBaseLanguagesToList @ 0x18008599C (LdrpMergeParentBaseLanguagesToList.c)
 * Callees:
 *     RtlFreeHeap @ 0x1800207C0 (RtlFreeHeap.c)
 */

__int64 __fastcall RtlpFreeTraverseNodes(PVOID BaseAddress)
{
  unsigned int v1; // ebx

  v1 = 0;
  if ( BaseAddress )
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, BaseAddress);
  else
    return (unsigned int)-1073741811;
  return v1;
}
