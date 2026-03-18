/*
 * XREFs of MiInitializeTbFlushList @ 0x1401088BC
 * Callers:
 *     MiReleaseDriverPtes @ 0x140521ACC (MiReleaseDriverPtes.c)
 *     MmUnmapLockedRestartPages @ 0x1406A0550 (MmUnmapLockedRestartPages.c)
 *     MiRemoveUserPhysicalPagesVad @ 0x1406A6148 (MiRemoveUserPhysicalPagesVad.c)
 *     NtMapUserPhysicalPages @ 0x1406A703C (NtMapUserPhysicalPages.c)
 *     NtMapUserPhysicalPagesScatter @ 0x1406A75B4 (NtMapUserPhysicalPagesScatter.c)
 *     MmDeleteShadowMapping @ 0x1406A84B8 (MmDeleteShadowMapping.c)
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
