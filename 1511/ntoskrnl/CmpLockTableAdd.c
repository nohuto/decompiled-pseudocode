/*
 * XREFs of CmpLockTableAdd @ 0x1401A9FF0
 * Callers:
 *     CmpLockKcbExclusive @ 0x1403F9950 (CmpLockKcbExclusive.c)
 *     CmpCreateKeyControlBlock @ 0x1403FA0D0 (CmpCreateKeyControlBlock.c)
 *     CmpDereferenceKeyControlBlock @ 0x1403FB8A0 (CmpDereferenceKeyControlBlock.c)
 *     CmpGetSymbolicLink @ 0x1403FBEB0 (CmpGetSymbolicLink.c)
 *     CmpLockTwoKcbsShared @ 0x1403FD8E0 (CmpLockTwoKcbsShared.c)
 *     CmpDoOpen @ 0x1403FEFA0 (CmpDoOpen.c)
 *     CmQueryKey @ 0x1403FF980 (CmQueryKey.c)
 *     CmpParseKey @ 0x1404014E0 (CmpParseKey.c)
 *     CmpDeleteKeyObject @ 0x1404036E0 (CmpDeleteKeyObject.c)
 *     CmQueryValueKey @ 0x140405E20 (CmQueryValueKey.c)
 *     CmpKcbCacheLookup @ 0x140407660 (CmpKcbCacheLookup.c)
 *     CmpBuildHashStackAndLookupCache @ 0x140408290 (CmpBuildHashStackAndLookupCache.c)
 *     CmpLockKcbShared @ 0x140423B90 (CmpLockKcbShared.c)
 * Callees:
 *     KeBugCheckEx @ 0x140153DC0 (KeBugCheckEx.c)
 *     RtlpInterlockedPopEntrySList @ 0x14015B960 (RtlpInterlockedPopEntrySList.c)
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
