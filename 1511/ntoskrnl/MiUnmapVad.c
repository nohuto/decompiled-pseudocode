/*
 * XREFs of MiUnmapVad @ 0x14041B2F0
 * Callers:
 *     MiUnmapLockedPagesInUserSpace @ 0x1401072A0 (MiUnmapLockedPagesInUserSpace.c)
 *     MmCleanProcessAddressSpace @ 0x1403E7980 (MmCleanProcessAddressSpace.c)
 *     MiMapViewOfImageSection @ 0x1403F5860 (MiMapViewOfImageSection.c)
 *     MiMapViewOfDataSection @ 0x140416C00 (MiMapViewOfDataSection.c)
 *     MiUnmapViewOfSection @ 0x14041BC60 (MiUnmapViewOfSection.c)
 * Callees:
 *     MI_REFERENCE_CONTROL_AREA_FILE @ 0x14003ABE0 (MI_REFERENCE_CONTROL_AREA_FILE.c)
 *     MI_DEREFERENCE_CONTROL_AREA_FILE @ 0x14003AD10 (MI_DEREFERENCE_CONTROL_AREA_FILE.c)
 *     PfCheckDeprioritizeFile @ 0x1403E7394 (PfCheckDeprioritizeFile.c)
 *     MiLogMapFileEvent @ 0x140621288 (MiLogMapFileEvent.c)
 */

void __fastcall MiUnmapVad(__int64 a1, int a2, __int64 a3)
{
  __int64 v5; // rdi
  ULONG_PTR v6; // rax
  __int64 v7; // rbp
  _KPROCESS *Process; // rcx

  if ( (*(_DWORD *)(a1 + 64) & 0x2000000) != 0 )
  {
    v5 = **(_QWORD **)(a1 + 72);
    v6 = MI_REFERENCE_CONTROL_AREA_FILE(v5);
    v7 = *(_QWORD *)(v6 + 24);
    MI_DEREFERENCE_CONTROL_AREA_FILE(v5, v6);
    Process = KeGetCurrentThread()->ApcState.Process;
    a3 = (*(unsigned int *)(a1 + 28) | ((unsigned __int64)*(unsigned __int8 *)(a1 + 33) << 32))
       - (*(unsigned int *)(a1 + 24) | ((unsigned __int64)*(unsigned __int8 *)(a1 + 32) << 32))
       + 1;
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
    MiLogMapFileEvent(a1, 1062LL, a3);
  MiDeleteVad(a1, a2, a3);
}
