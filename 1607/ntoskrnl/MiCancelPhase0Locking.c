/*
 * XREFs of MiCancelPhase0Locking @ 0x14047CA7C
 * Callers:
 *     MmResetDriverPaging @ 0x14047C8AC (MmResetDriverPaging.c)
 *     MmPageEntireDriver @ 0x14047C9C8 (MmPageEntireDriver.c)
 * Callees:
 *     MiReleaseResourceLite @ 0x140082D74 (MiReleaseResourceLite.c)
 *     MiAcquireResourceExclusiveLite @ 0x140082D98 (MiAcquireResourceExclusiveLite.c)
 *     MiLockPagableSections @ 0x1407A41E0 (MiLockPagableSections.c)
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
