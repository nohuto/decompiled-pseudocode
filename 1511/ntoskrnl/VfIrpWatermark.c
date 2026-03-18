/*
 * XREFs of VfIrpWatermark @ 0x1406C0020
 * Callers:
 *     IovUtilWatermarkIrp @ 0x14001AE3C (IovUtilWatermarkIrp.c)
 *     PopAllocateIrp @ 0x140121CF4 (PopAllocateIrp.c)
 * Callees:
 *     VfIrpDatabaseEntryFindAndLock @ 0x1406C806C (VfIrpDatabaseEntryFindAndLock.c)
 *     VfIrpDatabaseEntryReleaseLock @ 0x1406C81E4 (VfIrpDatabaseEntryReleaseLock.c)
 */

__int64 __fastcall VfIrpWatermark(__int64 a1, char a2)
{
  __int64 result; // rax

  result = VfIrpDatabaseEntryFindAndLock(a1);
  if ( result )
  {
    if ( (a2 & 1) != 0 )
      *(_DWORD *)(result + 56) |= 0x100000u;
    if ( (a2 & 2) != 0 )
      *(_DWORD *)(result + 56) |= 0x20u;
    return VfIrpDatabaseEntryReleaseLock(result);
  }
  return result;
}
