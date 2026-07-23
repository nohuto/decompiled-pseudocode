/*
 * XREFs of RtlpHpLfhCacheAddSubsegment @ 0x18004EA78
 * Callers:
 *     RtlpHpLfhSubsegmentFree @ 0x18004F164 (RtlpHpLfhSubsegmentFree.c)
 * Callees:
 *     RtlpHpLfhSubsegmentDecommitPages @ 0x18001DA70 (RtlpHpLfhSubsegmentDecommitPages.c)
 *     RtlEndStrongEnumerationHashTable @ 0x180081AE0 (RtlEndStrongEnumerationHashTable.c)
 *     RtlpInterlockedPushEntrySList @ 0x1800A8930 (RtlpInterlockedPushEntrySList.c)
 */

__int64 __fastcall RtlpHpLfhCacheAddSubsegment(__int64 a1, _RTL_SRWLOCK *a2, __int64 a3, unsigned int a4)
{
  unsigned int v4; // edi
  unsigned int v5; // ebx
  _WORD *v7; // rbx

  v4 = 0;
  _BitScanForward(&v5, *(unsigned __int8 *)(a3 + 45) << *(_BYTE *)(a3 + 44));
  v7 = (_WORD *)(a1 + 16LL * (v5 - 12));
  if ( *v7 )
  {
    ((void (__fastcall *)(unsigned __int64, __int64, _QWORD))((unsigned __int64)a2 ^ RtlpHeapKey ^ a2[2].Value))(
      a2->Value,
      a3,
      a4);
  }
  else
  {
    v4 = 1;
    RtlpHpLfhSubsegmentDecommitPages(a2, a3, -2, 1u, a4);
    RtlpInterlockedPushEntrySList(v7, a3);
  }
  return v4;
}
