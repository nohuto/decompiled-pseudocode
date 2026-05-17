/*
 * XREFs of RtlpHpLfhCacheAddSubsegment @ 0x18000922C
 * Callers:
 *     RtlpHpLfhSubsegmentFree @ 0x180009190 (RtlpHpLfhSubsegmentFree.c)
 * Callees:
 *     RtlpHpLfhSubsegmentDecommitPages @ 0x18002752C (RtlpHpLfhSubsegmentDecommitPages.c)
 *     RtlEndStrongEnumerationHashTable @ 0x180075B10 (RtlEndStrongEnumerationHashTable.c)
 *     RtlpInterlockedPushEntrySList @ 0x1800955A0 (RtlpInterlockedPushEntrySList.c)
 */

__int64 __fastcall RtlpHpLfhCacheAddSubsegment(__int64 a1, unsigned __int64 a2, __int64 a3, unsigned int a4)
{
  unsigned int v4; // edi
  unsigned int v5; // ebx
  _WORD *v7; // rbx

  v4 = 0;
  _BitScanForward(&v5, *(unsigned __int8 *)(a3 + 45) << *(_BYTE *)(a3 + 44));
  v7 = (_WORD *)(a1 + 16LL * (v5 - 12));
  if ( *v7 )
  {
    ((void (__fastcall *)(_QWORD, __int64, _QWORD))(a2 ^ RtlpHeapKey ^ *(_QWORD *)(a2 + 16)))(*(_QWORD *)a2, a3, a4);
  }
  else
  {
    v4 = 1;
    RtlpHpLfhSubsegmentDecommitPages(a2, a3, -2, 1, a4);
    RtlpInterlockedPushEntrySList(v7, a3);
  }
  return v4;
}
