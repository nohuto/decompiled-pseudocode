/*
 * XREFs of RtlpInterlockedPopEntrySList @ 0x1800A9D30
 * Callers:
 *     RtlpLowFragHeapAllocFromContext @ 0x1800240B0 (RtlpLowFragHeapAllocFromContext.c)
 *     EtwpAllocateRegistration @ 0x18002A644 (EtwpAllocateRegistration.c)
 *     RtlpAllocateDebugInfo @ 0x18002B230 (RtlpAllocateDebugInfo.c)
 *     RtlpHpLfhSubsegmentCreate @ 0x180041EFC (RtlpHpLfhSubsegmentCreate.c)
 *     RtlpFreeUserBlock @ 0x180045F38 (RtlpFreeUserBlock.c)
 *     RtlpLocalInfoAllocFromCache @ 0x18004EFA0 (RtlpLocalInfoAllocFromCache.c)
 *     RtlpStdGetSpaceForTrace @ 0x1800F2D24 (RtlpStdGetSpaceForTrace.c)
 *     RtlAllocateMemoryBlockLookaside @ 0x180107010 (RtlAllocateMemoryBlockLookaside.c)
 * Callees:
 *     <none>
 */

PSLIST_ENTRY __stdcall RtlpInterlockedPopEntrySList(PSLIST_HEADER ListHead)
{
  _SLIST_ENTRY *v1; // r8
  unsigned __int64 Alignment; // rbx
  _SLIST_HEADER v3; // rt0

  _m_prefetchw(ListHead);
  while ( 1 )
  {
    v1 = (_SLIST_ENTRY *)(ListHead->Region & 0xFFFFFFFFFFFFFFF0uLL);
    if ( !v1 )
      break;
    Alignment = ListHead->Alignment;
    v3 = *ListHead;
    LOWORD(Alignment) = ListHead->Alignment - 1;
    if ( _InterlockedCompareExchange128(
           (volatile signed __int64 *)ListHead,
           (signed __int64)v1->Next,
           Alignment,
           (signed __int64 *)&v3) )
    {
      return v1;
    }
  }
  _InterlockedOr64((volatile signed __int64 *)ListHead, 0LL);
  return v1;
}
