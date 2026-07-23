/*
 * XREFs of MiProbeAndLockComplete @ 0x140099F54
 * Callers:
 *     MmProbeAndLockSelectedPages @ 0x140099DD4 (MmProbeAndLockSelectedPages.c)
 * Callees:
 *     MmUnlockPages @ 0x140051600 (MmUnlockPages.c)
 *     MiUnlockProbePacketWorkingSet @ 0x140099F9C (MiUnlockProbePacketWorkingSet.c)
 *     MiAddMdlTracker @ 0x1401E298C (MiAddMdlTracker.c)
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
    ++dword_140327130;
  }
  return (unsigned int)v2;
}
