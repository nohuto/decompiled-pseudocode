/*
 * XREFs of RtlpFreeTraverseNodes @ 0x18006A7D0
 * Callers:
 *     LdrpMergeParentBaseLanguagesToList @ 0x180067178 (LdrpMergeParentBaseLanguagesToList.c)
 *     RtlpIsQualifiedLanguage @ 0x18006A6F0 (RtlpIsQualifiedLanguage.c)
 * Callees:
 *     RtlFreeHeap @ 0x1800466E0 (RtlFreeHeap.c)
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
