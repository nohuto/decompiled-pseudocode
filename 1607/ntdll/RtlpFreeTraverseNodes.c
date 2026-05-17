/*
 * XREFs of RtlpFreeTraverseNodes @ 0x18006A7E0
 * Callers:
 *     LdrpMergeParentBaseLanguagesToList @ 0x180067188 (LdrpMergeParentBaseLanguagesToList.c)
 *     RtlpIsQualifiedLanguage @ 0x18006A700 (RtlpIsQualifiedLanguage.c)
 * Callees:
 *     RtlFreeHeap @ 0x1800466F0 (RtlFreeHeap.c)
 */

__int64 __fastcall RtlpFreeTraverseNodes(unsigned __int64 a1)
{
  unsigned int v1; // ebx

  v1 = 0;
  if ( a1 )
    RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, a1);
  else
    return (unsigned int)-1073741811;
  return v1;
}
