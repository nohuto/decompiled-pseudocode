/*
 * XREFs of MiUnlinkUnusedControlArea @ 0x1401DF460
 * Callers:
 *     MiRemoveUnusedSegment @ 0x140026D14 (MiRemoveUnusedSegment.c)
 *     MiDeleteCachedSegment @ 0x1401DE4D8 (MiDeleteCachedSegment.c)
 *     MiProcessDeleteOnClose @ 0x1401DEEB8 (MiProcessDeleteOnClose.c)
 * Callees:
 *     MiPartitionIdToPointer @ 0x1400680A0 (MiPartitionIdToPointer.c)
 *     MiComputePagedPoolSegmentBytes @ 0x1401DE460 (MiComputePagedPoolSegmentBytes.c)
 */

signed __int64 __fastcall MiUnlinkUnusedControlArea(__int64 a1)
{
  __int64 v1; // r9
  __int64 v2; // rax
  __int64 v3; // r8
  __int64 v4; // r9
  _QWORD *v5; // rcx
  __int64 v6; // r10
  _QWORD *v7; // rdx

  MiPartitionIdToPointer(*(_WORD *)(a1 + 60) & 0x3FF);
  v2 = MiComputePagedPoolSegmentBytes(v1);
  if ( (*(_DWORD *)(v4 + 56) & 0x40000) != 0 )
    --*(_DWORD *)(v3 + 1524);
  v5 = (_QWORD *)(v4 + 8);
  v6 = *(_QWORD *)(v4 + 8);
  v7 = *(_QWORD **)(v4 + 16);
  if ( *(_QWORD *)(v6 + 8) != v4 + 8 || (_QWORD *)*v7 != v5 )
    __fastfail(3u);
  *v7 = v6;
  *(_QWORD *)(v6 + 8) = v7;
  *(_DWORD *)(v4 + 56) &= ~0x8000000u;
  *(_QWORD *)(v4 + 16) = v4 + 8;
  *v5 = v5;
  *(_QWORD *)(v3 + 1536) -= v2;
  return _InterlockedExchangeAdd64(&qword_140326568, -v2);
}
