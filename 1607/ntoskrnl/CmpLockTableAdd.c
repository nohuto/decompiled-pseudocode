/*
 * XREFs of CmpLockTableAdd @ 0x1401B50E8
 * Callers:
 *     CmpLockKcbExclusive @ 0x140420F10 (CmpLockKcbExclusive.c)
 *     CmpLockKcbStackShared @ 0x140431E30 (CmpLockKcbStackShared.c)
 *     CmpCreateKeyControlBlock @ 0x1404334E0 (CmpCreateKeyControlBlock.c)
 *     CmpLockKcbShared @ 0x140434310 (CmpLockKcbShared.c)
 *     CmpDereferenceKeyControlBlock @ 0x140436C80 (CmpDereferenceKeyControlBlock.c)
 *     CmEnumerateValueKey @ 0x140436E40 (CmEnumerateValueKey.c)
 *     CmpLockTwoKcbsShared @ 0x140437AF0 (CmpLockTwoKcbsShared.c)
 *     CmQueryKey @ 0x1404396E0 (CmQueryKey.c)
 *     CmQueryValueKey @ 0x14043E2F0 (CmQueryValueKey.c)
 *     CmpDoParseKey @ 0x140452BE0 (CmpDoParseKey.c)
 *     CmpTryToLockKcbExclusive @ 0x140603DE8 (CmpTryToLockKcbExclusive.c)
 * Callees:
 *     KeBugCheckEx @ 0x14015DA70 (KeBugCheckEx.c)
 *     RtlpInterlockedPopEntrySList @ 0x140167370 (RtlpInterlockedPopEntrySList.c)
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
