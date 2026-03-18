/*
 * XREFs of MiUnmapVad @ 0x14042EEF0
 * Callers:
 *     MiUnmapLockedPagesInUserSpace @ 0x14010E8C4 (MiUnmapLockedPagesInUserSpace.c)
 *     MiMapViewOfImageSection @ 0x140429AC0 (MiMapViewOfImageSection.c)
 *     MiUnmapViewOfSection @ 0x14042E400 (MiUnmapViewOfSection.c)
 *     MiMapViewOfDataSection @ 0x1404354C0 (MiMapViewOfDataSection.c)
 *     MmCleanProcessAddressSpace @ 0x14045EDFC (MmCleanProcessAddressSpace.c)
 * Callees:
 *     MiDereferenceControlAreaFile @ 0x140026640 (MiDereferenceControlAreaFile.c)
 *     MiReferenceControlAreaFile @ 0x140026690 (MiReferenceControlAreaFile.c)
 *     PfCheckDeprioritizeFile @ 0x1403E5730 (PfCheckDeprioritizeFile.c)
 *     MiLogMapFileEvent @ 0x140657130 (MiLogMapFileEvent.c)
 */

__int64 __fastcall MiUnmapVad(__int64 a1, int a2)
{
  __int64 v5; // rdi
  ULONG_PTR v6; // rax
  __int64 v7; // rbp
  _KPROCESS *Process; // rcx

  if ( (*(_DWORD *)(a1 + 64) & 0x2000000) != 0 )
  {
    v5 = **(_QWORD **)(a1 + 72);
    v6 = MiReferenceControlAreaFile(v5);
    v7 = *(_QWORD *)(v6 + 24);
    MiDereferenceControlAreaFile(v5, v6);
    Process = KeGetCurrentThread()->ApcState.Process;
    if ( (Process[1].DirectoryTableBase & 0x400000000000LL) != 0
      && (unsigned int)PfCheckDeprioritizeFile(
                         Process[1].ThreadSeed[1],
                         v7,
                         *(_DWORD *)(a1 + 28) - *(_DWORD *)(a1 + 24) + 1) == 1 )
    {
      a2 |= 0x80000000;
    }
  }
  if ( (PerfGlobalGroupMask & 0x8000) != 0 && *(_QWORD *)(a1 + 72) )
    MiLogMapFileEvent(a1, 1062LL);
  return MiDeleteVad(a1, a2);
}
