/*
 * XREFs of RtlAddRange @ 0x1405A0000
 * Callers:
 *     IopPortAddAllocation @ 0x14059F01C (IopPortAddAllocation.c)
 *     RtlInvertRangeListEx @ 0x14059F75C (RtlInvertRangeListEx.c)
 *     ArbAddAllocation @ 0x14059FFB8 (ArbAddAllocation.c)
 *     ArbAddInaccessibleAllocationRange @ 0x1405A114C (ArbAddInaccessibleAllocationRange.c)
 *     ArbAddMmConfigRangeAsBootReserved @ 0x1405A134C (ArbAddMmConfigRangeAsBootReserved.c)
 *     IopMemInitialize @ 0x1405A153C (IopMemInitialize.c)
 *     ArbInitializeRangeList @ 0x14071E8FC (ArbInitializeRangeList.c)
 * Callees:
 *     RtlpAddRange @ 0x1405A009C (RtlpAddRange.c)
 *     RtlpCreateRangeListEntry @ 0x1405A015C (RtlpCreateRangeListEntry.c)
 *     RtlpFreeRangeListEntry @ 0x1405A0E48 (RtlpFreeRangeListEntry.c)
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
