/*
 * XREFs of MiUnmapVad @ 0x1404B7570
 * Callers:
 *     MiUnmapLockedPagesInUserSpace @ 0x140133700 (MiUnmapLockedPagesInUserSpace.c)
 *     MiMapViewOfImageSection @ 0x140421990 (MiMapViewOfImageSection.c)
 *     MmCleanProcessAddressSpace @ 0x1404B2FA4 (MmCleanProcessAddressSpace.c)
 *     MiMapViewOfDataSection @ 0x1404B64E0 (MiMapViewOfDataSection.c)
 *     MiUnmapViewOfSection @ 0x1404B72D0 (MiUnmapViewOfSection.c)
 * Callees:
 *     MI_REFERENCE_CONTROL_AREA_FILE @ 0x140088960 (MI_REFERENCE_CONTROL_AREA_FILE.c)
 *     MI_DEREFERENCE_CONTROL_AREA_FILE @ 0x140088A90 (MI_DEREFERENCE_CONTROL_AREA_FILE.c)
 *     PfCheckDeprioritizeFile @ 0x140443ABC (PfCheckDeprioritizeFile.c)
 *     MiLogMapFileEvent @ 0x1406A091C (MiLogMapFileEvent.c)
 */

void __fastcall MiUnmapVad(__int64 a1, int a2, unsigned __int64 a3, unsigned __int64 a4)
{
  __int64 v6; // rdi
  ULONG_PTR v7; // rax
  __int64 v8; // rbp
  _KPROCESS *Process; // rcx

  if ( (*(_DWORD *)(a1 + 64) & 0x2000000) != 0 )
  {
    v6 = **(_QWORD **)(a1 + 72);
    v7 = MI_REFERENCE_CONTROL_AREA_FILE(v6);
    v8 = *(_QWORD *)(v7 + 24);
    MI_DEREFERENCE_CONTROL_AREA_FILE(v6, v7);
    Process = KeGetCurrentThread()->ApcState.Process;
    a4 = *(unsigned int *)(a1 + 24) | ((unsigned __int64)*(unsigned __int8 *)(a1 + 32) << 32);
    a3 = (*(unsigned int *)(a1 + 28) | ((unsigned __int64)*(unsigned __int8 *)(a1 + 33) << 32)) - a4 + 1;
    if ( (Process[1].DirectoryTableBase & 0x400000000000LL) != 0
      && (unsigned int)PfCheckDeprioritizeFile(
                         *(_DWORD *)&Process[1].BasePriority,
                         v8,
                         *(_DWORD *)(a1 + 28) - (int)a4 + 1,
                         a4) == 1 )
    {
      a2 |= 0x80000000;
    }
  }
  if ( (PerfGlobalGroupMask & 0x8000) != 0 && *(_QWORD *)(a1 + 72) )
    MiLogMapFileEvent(a1, 1062LL, a3, a4);
  MiDeleteVad(a1, a2);
}
