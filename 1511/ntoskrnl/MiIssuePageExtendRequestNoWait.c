/*
 * XREFs of MiIssuePageExtendRequestNoWait @ 0x1401DCE50
 * Callers:
 *     MmResourcesAvailable @ 0x140041CA0 (MmResourcesAvailable.c)
 *     MiAllocatePagedPoolPages @ 0x14005F630 (MiAllocatePagedPoolPages.c)
 *     MiChargeCommit @ 0x140063610 (MiChargeCommit.c)
 *     MiPageFileNoFreeSpace @ 0x1401DCEA8 (MiPageFileNoFreeSpace.c)
 * Callees:
 *     MiQueuePageFileExtension @ 0x1401DD024 (MiQueuePageFileExtension.c)
 */

__int64 __fastcall MiIssuePageExtendRequestNoWait(__int64 a1, __int64 a2, int a3)
{
  __int64 v4; // rcx
  __int64 result; // rax

  v4 = a1 + 344;
  result = (unsigned int)_InterlockedCompareExchange((volatile signed __int32 *)(v4 + 72), 1, 0);
  if ( !(_DWORD)result )
  {
    *(_QWORD *)(v4 + 40) = 0LL;
    *(_QWORD *)(v4 + 24) = a1;
    *(_QWORD *)(v4 + 32) = (a2 + 4095) & 0xFFFFFFFFFFFFF000uLL;
    if ( a3 == 1 )
      *(_BYTE *)(v4 + 79) |= 1u;
    else
      *(_BYTE *)(v4 + 79) &= ~1u;
    *(_QWORD *)(v4 + 80) = 0LL;
    return MiQueuePageFileExtension(v4, 0LL);
  }
  return result;
}
