/*
 * XREFs of RtlAddRange @ 0x140559B40
 * Callers:
 *     IopPortAddAllocation @ 0x140558230 (IopPortAddAllocation.c)
 *     RtlInvertRangeListEx @ 0x14055929C (RtlInvertRangeListEx.c)
 *     ArbAddAllocation @ 0x140559AF8 (ArbAddAllocation.c)
 *     ArbAddInaccessibleAllocationRange @ 0x14055AC84 (ArbAddInaccessibleAllocationRange.c)
 *     ArbAddMmConfigRangeAsBootReserved @ 0x14055AE90 (ArbAddMmConfigRangeAsBootReserved.c)
 *     IopMemInitialize @ 0x14055B080 (IopMemInitialize.c)
 *     ArbInitializeRangeList @ 0x1406E4E60 (ArbInitializeRangeList.c)
 * Callees:
 *     RtlpAddRange @ 0x140559BDC (RtlpAddRange.c)
 *     RtlpCreateRangeListEntry @ 0x140559C9C (RtlpCreateRangeListEntry.c)
 *     RtlpFreeRangeListEntry @ 0x14055A998 (RtlpFreeRangeListEntry.c)
 */

NTSTATUS __stdcall RtlAddRange(
        PRTL_RANGE_LIST RangeList,
        ULONGLONG Start,
        ULONGLONG End,
        UCHAR Attributes,
        ULONG Flags,
        PVOID UserData,
        PVOID Owner)
{
  int v7; // r10d
  __int64 RangeListEntry; // rax
  void *v10; // rbx
  NTSTATUS v11; // esi

  v7 = End;
  if ( End < Start )
    return -1073741811;
  LOBYTE(End) = Attributes;
  RangeListEntry = RtlpCreateRangeListEntry(Start, v7, End, (_DWORD)UserData, (__int64)Owner);
  v10 = (void *)RangeListEntry;
  if ( !RangeListEntry )
    return -1073741823;
  if ( (Flags & 2) != 0 )
    *(_BYTE *)(RangeListEntry + 33) |= 1u;
  if ( (Flags & 0x10) != 0 )
    *(_BYTE *)(RangeListEntry + 33) |= 0x10u;
  v11 = RtlpAddRange(RangeList, RangeListEntry, Flags);
  if ( v11 < 0 )
  {
    RtlpFreeRangeListEntry(v10);
  }
  else
  {
    ++RangeList->Count;
    ++RangeList->Stamp;
  }
  return v11;
}
