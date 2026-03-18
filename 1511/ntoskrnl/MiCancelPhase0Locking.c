/*
 * XREFs of MiCancelPhase0Locking @ 0x1403CFE00
 * Callers:
 *     MmResetDriverPaging @ 0x1403CF258 (MmResetDriverPaging.c)
 *     MmPageEntireDriver @ 0x1403CF37C (MmPageEntireDriver.c)
 * Callees:
 *     MiReleaseResourceLite @ 0x14001A338 (MiReleaseResourceLite.c)
 *     MiAcquireResourceExclusiveLite @ 0x14001A35C (MiAcquireResourceExclusiveLite.c)
 *     MiLockPagableSections @ 0x14074CDD0 (MiLockPagableSections.c)
 */

__int64 __fastcall MiCancelPhase0Locking(__int64 a1)
{
  struct _KTHREAD *CurrentThread; // rdi
  __int64 result; // rax

  if ( (*(_DWORD *)(a1 + 104) & 0x400000) != 0 )
  {
    CurrentThread = KeGetCurrentThread();
    MiAcquireResourceExclusiveLite((__int64)CurrentThread);
    if ( (*(_DWORD *)(a1 + 104) & 0x400000) != 0 )
    {
      MiLockPagableSections(a1, 0LL);
      *(_DWORD *)(a1 + 104) &= ~0x400000u;
    }
    return MiReleaseResourceLite((__int64)CurrentThread);
  }
  return result;
}
