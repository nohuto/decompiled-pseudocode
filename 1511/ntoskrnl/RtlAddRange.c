/*
 * XREFs of RtlAddRange @ 0x14052D680
 * Callers:
 *     IopPortAddAllocation @ 0x14052C69C (IopPortAddAllocation.c)
 *     RtlInvertRangeListEx @ 0x14052CDDC (RtlInvertRangeListEx.c)
 *     ArbAddAllocation @ 0x14052D638 (ArbAddAllocation.c)
 *     ArbAddInaccessibleAllocationRange @ 0x14052E7CC (ArbAddInaccessibleAllocationRange.c)
 *     ArbAddMmConfigRangeAsBootReserved @ 0x14052E9CC (ArbAddMmConfigRangeAsBootReserved.c)
 *     IopMemInitialize @ 0x14052EBBC (IopMemInitialize.c)
 *     ArbInitializeRangeList @ 0x14069E2A0 (ArbInitializeRangeList.c)
 * Callees:
 *     RtlpAddRange @ 0x14052D71C (RtlpAddRange.c)
 *     RtlpCreateRangeListEntry @ 0x14052D7DC (RtlpCreateRangeListEntry.c)
 *     RtlpFreeRangeListEntry @ 0x14052E4C8 (RtlpFreeRangeListEntry.c)
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
  v11 = RtlpAddRange(RangeList, RangeListEntry);
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
