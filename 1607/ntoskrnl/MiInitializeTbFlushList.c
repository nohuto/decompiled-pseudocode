/*
 * XREFs of MiInitializeTbFlushList @ 0x1400B5A30
 * Callers:
 *     MiInitializeDynamicBitmap @ 0x140535E80 (MiInitializeDynamicBitmap.c)
 *     MiReleaseDriverPtes @ 0x140544938 (MiReleaseDriverPtes.c)
 *     MmDeleteShadowMapping @ 0x14065BE04 (MmDeleteShadowMapping.c)
 *     MiProtectAweRegion @ 0x14065C4E0 (MiProtectAweRegion.c)
 *     MiRemoveUserPhysicalPagesVad @ 0x14065C694 (MiRemoveUserPhysicalPagesVad.c)
 *     NtMapUserPhysicalPages @ 0x14065D72C (NtMapUserPhysicalPages.c)
 *     NtMapUserPhysicalPagesScatter @ 0x14065DBA8 (NtMapUserPhysicalPagesScatter.c)
 *     MiDeleteEnclavePages @ 0x14065F308 (MiDeleteEnclavePages.c)
 *     MiProtectEnclavePages @ 0x14065F614 (MiProtectEnclavePages.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiInitializeTbFlushList(__int64 a1, int a2, int a3)
{
  __int64 result; // rax

  result = 0LL;
  *(_DWORD *)a1 = a2;
  *(_DWORD *)(a1 + 12) = 0;
  *(_WORD *)(a1 + 4) = 0;
  *(_QWORD *)(a1 + 16) = 0LL;
  *(_DWORD *)(a1 + 8) = a3;
  *(_QWORD *)(a1 + 24) = 0LL;
  return result;
}
