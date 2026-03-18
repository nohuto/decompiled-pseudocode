/*
 * XREFs of MiProbeAndLockComplete @ 0x14009A754
 * Callers:
 *     MmProbeAndLockSelectedPages @ 0x14009A5D4 (MmProbeAndLockSelectedPages.c)
 * Callees:
 *     MmUnlockPages @ 0x140051A80 (MmUnlockPages.c)
 *     MiUnlockProbePacketWorkingSet @ 0x14009A79C (MiUnlockProbePacketWorkingSet.c)
 *     MiAddMdlTracker @ 0x1401E2B60 (MiAddMdlTracker.c)
 */

__int64 __fastcall MiProbeAndLockComplete(__int64 a1, __int64 a2)
{
  int v2; // edi
  struct _MDL *v4; // rbx

  v2 = a2;
  MiUnlockProbePacketWorkingSet(a1, a2);
  v4 = *(struct _MDL **)(a1 + 48);
  if ( (MmTrackLockedPages & 1) != 0 )
    MiAddMdlTracker((ULONG_PTR)v4);
  if ( v2 < 0 )
  {
    MmUnlockPages(v4);
    ++dword_1403270F0;
  }
  return (unsigned int)v2;
}
