/*
 * XREFs of RtlpHpLfhCacheAddSubsegment @ 0x180051C3C
 * Callers:
 *     RtlpHpLfhSubsegmentFree @ 0x1800528C4 (RtlpHpLfhSubsegmentFree.c)
 * Callees:
 *     RtlpHpLfhSubsegmentDecommitPages @ 0x18004B97C (RtlpHpLfhSubsegmentDecommitPages.c)
 *     _guard_dispatch_icall_nop @ 0x1800A9C80 (_guard_dispatch_icall_nop.c)
 *     RtlpInterlockedPushEntrySList @ 0x1800A9D70 (RtlpInterlockedPushEntrySList.c)
 */

__int64 __fastcall RtlpHpLfhCacheAddSubsegment(__int64 a1, __int64 a2, __int64 a3, unsigned int a4)
{
  unsigned int v4; // ebx
  unsigned int v6; // ebp
  _WORD *v7; // rbp

  v4 = 0;
  _BitScanForward(&v6, *(unsigned __int8 *)(a3 + 45) << *(_BYTE *)(a3 + 44));
  v7 = (_WORD *)(a1 + 16LL * (v6 - 12));
  if ( *v7 )
  {
    ((void (__fastcall *)(_QWORD, __int64, _QWORD))(a2 ^ RtlpHeapKey ^ *(_QWORD *)(a2 + 16)))(*(_QWORD *)a2, a3, a4);
  }
  else
  {
    v4 = 1;
    RtlpHpLfhSubsegmentDecommitPages(a2, a3, -2, 1LL, a4);
    RtlpInterlockedPushEntrySList(v7, a3);
  }
  return v4;
}
