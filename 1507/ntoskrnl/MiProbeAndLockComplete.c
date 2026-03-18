/*
 * XREFs of MiProbeAndLockComplete @ 0x140120768
 * Callers:
 *     MmProbeAndLockSelectedPages @ 0x140033EA4 (MmProbeAndLockSelectedPages.c)
 * Callees:
 *     MmUnlockPages @ 0x1400B0D00 (MmUnlockPages.c)
 *     MiUnlockProbePacketWorkingSet @ 0x1401207B0 (MiUnlockProbePacketWorkingSet.c)
 *     MiAddMdlTracker @ 0x140213DCC (MiAddMdlTracker.c)
 */

__int64 __fastcall MiProbeAndLockComplete(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  int v4; // edi
  struct _MDL *v6; // rbx

  v4 = a2;
  MiUnlockProbePacketWorkingSet(a1, a2, a3, a4);
  v6 = *(struct _MDL **)(a1 + 48);
  if ( (MmTrackLockedPages & 1) != 0 )
    MiAddMdlTracker((ULONG_PTR)v6);
  if ( v4 < 0 )
  {
    MmUnlockPages(v6);
    ++dword_14034F1D8;
  }
  return (unsigned int)v4;
}
