/*
 * XREFs of MmUnmapLockedRestartPages @ 0x14065756C
 * Callers:
 *     <none>
 * Callees:
 *     MiGetPteAddress @ 0x14002B5E4 (MiGetPteAddress.c)
 *     MiUnmapMdlCommon @ 0x1401E3B1C (MiUnmapMdlCommon.c)
 */

void __fastcall MmUnmapLockedRestartPages(__int64 a1)
{
  ULONG_PTR v2; // rdi
  unsigned __int64 v3; // rbx
  unsigned __int64 PteAddress; // rax

  v2 = *(_QWORD *)(a1 + 24);
  v3 = (((*(_DWORD *)(a1 + 32) + *(_DWORD *)(a1 + 44)) & 0xFFF) + (unsigned __int64)*(unsigned int *)(a1 + 40) + 4095) >> 12;
  MiUnmapMdlCommon(v2, 0, a1, v3);
  *(_WORD *)(a1 + 10) &= 0xFFDEu;
  PteAddress = MiGetPteAddress(v2);
  MiReleaseDriverPtes(0, PteAddress, v3);
}
