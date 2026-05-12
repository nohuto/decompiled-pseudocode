/*
 * XREFs of StorFreeContiguousMemory @ 0x1C0053D8C
 * Callers:
 *     RaUnitScsiFreeDumpPointersIoctl @ 0x1C0012530 (RaUnitScsiFreeDumpPointersIoctl.c)
 *     RaidDeleteAdapter @ 0x1C0023B14 (RaidDeleteAdapter.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall StorFreeContiguousMemory(__int64 a1)
{
  __int64 result; // rax

  MmFreeContiguousMemory(*(PVOID *)a1);
  result = 0LL;
  *(_QWORD *)a1 = 0LL;
  *(_QWORD *)(a1 + 8) = 0LL;
  *(_DWORD *)(a1 + 16) = 0;
  return result;
}
