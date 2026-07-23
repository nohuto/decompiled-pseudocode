/*
 * XREFs of IovpCheckIrpForCriticalTracking @ 0x14070B074
 * Callers:
 *     VfIrpAllocateCallDriverData @ 0x14070BED8 (VfIrpAllocateCallDriverData.c)
 * Callees:
 *     VfIrpDatabaseEntryFindAndLock @ 0x140716A10 (VfIrpDatabaseEntryFindAndLock.c)
 *     VfIrpDatabaseEntryReleaseLock @ 0x140716B8C (VfIrpDatabaseEntryReleaseLock.c)
 */

__int64 __fastcall IovpCheckIrpForCriticalTracking(__int64 a1)
{
  unsigned int v1; // edi
  __int64 v4; // rax

  v1 = 0;
  if ( (*(_DWORD *)(a1 + 16) & 0xC0000000) != 0 )
  {
    if ( (*(_DWORD *)(a1 + 16) & 0xC0000000) != 0x40000000 )
      return v1;
    v4 = VfIrpDatabaseEntryFindAndLock(a1);
LABEL_7:
    if ( *(_QWORD *)(v4 + 240) )
      v1 = 1;
    else
      *(_DWORD *)(v4 + 56) |= 0x80000u;
    VfIrpDatabaseEntryReleaseLock(v4);
    return v1;
  }
  v4 = VfIrpDatabaseEntryFindAndLock(a1);
  if ( v4 )
  {
    *(_DWORD *)(a1 + 16) |= 0x40000000u;
    goto LABEL_7;
  }
  *(_DWORD *)(a1 + 16) |= 0x80000000;
  return 0LL;
}
