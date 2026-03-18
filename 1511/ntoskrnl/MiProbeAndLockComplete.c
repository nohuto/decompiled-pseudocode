/*
 * XREFs of MiProbeAndLockComplete @ 0x1400E86AC
 * Callers:
 *     MmProbeAndLockSelectedPages @ 0x1400A70B0 (MmProbeAndLockSelectedPages.c)
 * Callees:
 *     MmUnlockPages @ 0x140067610 (MmUnlockPages.c)
 *     MiUnlockProbePacketWorkingSet @ 0x1400E86F4 (MiUnlockProbePacketWorkingSet.c)
 *     MiAddMdlTracker @ 0x1401D2A9C (MiAddMdlTracker.c)
 */

__int64 __fastcall MiProbeAndLockComplete(__int64 a1, int a2)
{
  struct _MDL *v4; // rbx

  MiUnlockProbePacketWorkingSet(a1);
  v4 = *(struct _MDL **)(a1 + 48);
  if ( (MmTrackLockedPages & 1) != 0 )
    MiAddMdlTracker((ULONG_PTR)v4);
  if ( a2 < 0 )
  {
    MmUnlockPages(v4);
    ++dword_1402FED20;
  }
  return (unsigned int)a2;
}
