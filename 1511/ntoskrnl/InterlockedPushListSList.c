/*
 * XREFs of InterlockedPushListSList @ 0x14015BA10
 * Callers:
 *     MiReplenishPageSlist @ 0x140012870 (MiReplenishPageSlist.c)
 *     MiReplenishNonPagedSlists @ 0x1400E3284 (MiReplenishNonPagedSlists.c)
 *     HvlpSetupCachedHypercallPages @ 0x1401AFDE4 (HvlpSetupCachedHypercallPages.c)
 * Callees:
 *     <none>
 */

PSLIST_ENTRY __stdcall InterlockedPushListSList(
        PSLIST_HEADER ListHead,
        PSLIST_ENTRY List,
        PSLIST_ENTRY ListEnd,
        ULONG Count)
{
  __int128 v6; // rax
  _SLIST_ENTRY *v7; // r10
  signed __int64 v8; // rbx
  __int128 v9; // rt0
  unsigned __int8 v10; // tt

  _m_prefetchw(ListHead);
  *(_QWORD *)&v6 = ListHead->Alignment;
  *((_QWORD *)&v6 + 1) = ListHead->Region;
  do
  {
    v7 = (_SLIST_ENTRY *)*((_QWORD *)&v6 + 1);
    LOBYTE(v7) = BYTE8(v6) & 0xF0;
    ListEnd->Next = v7;
    v8 = v6 + 0x10000;
    LOWORD(v8) = Count + v6;
    v9 = v6;
    v10 = _InterlockedCompareExchange128(
            (volatile signed __int64 *)ListHead,
            (signed __int64)List,
            v8,
            (signed __int64 *)&v9);
    v6 = v9;
  }
  while ( !v10 );
  return v7;
}
