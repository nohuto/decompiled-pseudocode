/*
 * XREFs of CmpLockTableAdd @ 0x1401DFF3C
 * Callers:
 *     CmpLockKcbShared @ 0x140427A50 (CmpLockKcbShared.c)
 *     CmpKcbCacheLookup @ 0x1404993B0 (CmpKcbCacheLookup.c)
 *     CmpBuildHashStackAndLookupCache @ 0x14049A140 (CmpBuildHashStackAndLookupCache.c)
 *     CmpParseKey @ 0x1404BEE10 (CmpParseKey.c)
 *     CmQueryValueKey @ 0x1404C21A0 (CmQueryValueKey.c)
 *     CmQueryKey @ 0x1404C3F30 (CmQueryKey.c)
 *     CmpGetSymbolicLink @ 0x1404C5480 (CmpGetSymbolicLink.c)
 *     CmpLockTwoKcbsShared @ 0x1404C6EF0 (CmpLockTwoKcbsShared.c)
 *     CmpDoOpen @ 0x1404C78D0 (CmpDoOpen.c)
 *     CmpDereferenceKeyControlBlock @ 0x1404C8650 (CmpDereferenceKeyControlBlock.c)
 *     CmpCreateKeyControlBlock @ 0x1404CB480 (CmpCreateKeyControlBlock.c)
 *     CmpLockKcbExclusive @ 0x1404CCB10 (CmpLockKcbExclusive.c)
 * Callees:
 *     KeBugCheckEx @ 0x140182750 (KeBugCheckEx.c)
 *     RtlpInterlockedPopEntrySList @ 0x14018B440 (RtlpInterlockedPopEntrySList.c)
 */

__int64 __fastcall CmpLockTableAdd(__int64 a1, char a2)
{
  PSLIST_ENTRY v4; // rax
  int v5; // r9d
  __int64 v6; // r8
  __int64 v7; // r8
  signed __int32 v8; // eax

  v4 = RtlpInterlockedPopEntrySList(CmpLockTable);
  v5 = 0;
  if ( !v4 )
    KeBugCheckEx(0x51u, 0x14uLL, 0LL, 0LL, 0LL);
  v6 = (char *)v4 - (char *)CmpLockTable - 32;
  v4->Next = (_SLIST_ENTRY *)KeGetCurrentThread();
  v7 = v6 >> 4;
  LOBYTE(v5) = a2 != 0;
  *((_QWORD *)&v4->Next + 1) = a1 | v5;
  do
    v8 = *((_DWORD *)&CmpLockTable[1].HeaderX64 + 1);
  while ( v8 < (int)v7
       && _InterlockedCompareExchange((volatile signed __int32 *)&CmpLockTable[1].HeaderX64 + 1, v7, v8) < (int)v7 );
  return (unsigned int)v7;
}
