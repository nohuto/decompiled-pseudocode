/*
 * XREFs of CmpLockTableAdd @ 0x1401B5204
 * Callers:
 *     CmpLockKcbExclusive @ 0x140422050 (CmpLockKcbExclusive.c)
 *     CmpLockKcbStackShared @ 0x140432F60 (CmpLockKcbStackShared.c)
 *     CmpCreateKeyControlBlock @ 0x140434610 (CmpCreateKeyControlBlock.c)
 *     CmpLockKcbShared @ 0x140435440 (CmpLockKcbShared.c)
 *     CmpDereferenceKeyControlBlock @ 0x140437DB0 (CmpDereferenceKeyControlBlock.c)
 *     CmEnumerateValueKey @ 0x140437F70 (CmEnumerateValueKey.c)
 *     CmpLockTwoKcbsShared @ 0x140438C20 (CmpLockTwoKcbsShared.c)
 *     CmQueryKey @ 0x14043A810 (CmQueryKey.c)
 *     CmQueryValueKey @ 0x14043F420 (CmQueryValueKey.c)
 *     CmpDoParseKey @ 0x140453D10 (CmpDoParseKey.c)
 *     CmpTryToLockKcbExclusive @ 0x140603D34 (CmpTryToLockKcbExclusive.c)
 * Callees:
 *     KeBugCheckEx @ 0x14015D500 (KeBugCheckEx.c)
 *     RtlpInterlockedPopEntrySList @ 0x140166E00 (RtlpInterlockedPopEntrySList.c)
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
