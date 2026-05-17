/*
 * XREFs of RtlpCreateTraverseNodes @ 0x180040730
 * Callers:
 *     RtlpIsQualifiedLanguage @ 0x180040580 (RtlpIsQualifiedLanguage.c)
 *     LdrpMergeParentBaseLanguagesToList @ 0x18008599C (LdrpMergeParentBaseLanguagesToList.c)
 * Callees:
 *     RtlAllocateHeap @ 0x1800255D0 (RtlAllocateHeap.c)
 */

__int64 __fastcall RtlpCreateTraverseNodes(__int64 *a1)
{
  unsigned int v1; // ebx
  __int64 v3; // r8
  __int64 Heap; // rax

  v1 = 0;
  if ( a1 )
  {
    v3 = 0LL;
    if ( is_mul_ok(8uLL, 0x2AuLL) )
      v3 = 336LL;
    if ( v3 )
    {
      Heap = RtlAllocateHeap((__int64)NtCurrentPeb()->ProcessHeap, 8u, v3);
      if ( Heap )
        *a1 = Heap;
      else
        return (unsigned int)-1073741801;
    }
    else
    {
      return (unsigned int)-1073741675;
    }
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return v1;
}
