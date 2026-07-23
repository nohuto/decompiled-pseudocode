/*
 * XREFs of ObpIsKernelHandle @ 0x1400CDBC8
 * Callers:
 *     ObIsKernelHandle @ 0x1401271E4 (ObIsKernelHandle.c)
 *     ObWaitForMultipleObjects @ 0x14044DCA0 (ObWaitForMultipleObjects.c)
 *     ObQueryObjectAuditingByHandle @ 0x14045D228 (ObQueryObjectAuditingByHandle.c)
 *     ObSetHandleAttributes @ 0x14045D5B8 (ObSetHandleAttributes.c)
 *     NtClose @ 0x1404EE070 (NtClose.c)
 *     ObCloseHandle @ 0x1404EF6CC (ObCloseHandle.c)
 *     ObpCloseHandle @ 0x1404EF704 (ObpCloseHandle.c)
 *     ObNormalizeHandleValue @ 0x140666180 (ObNormalizeHandleValue.c)
 * Callees:
 *     <none>
 */

bool __fastcall ObpIsKernelHandle(unsigned __int64 a1, char a2)
{
  return !a2 && (a1 & 0xFFFFFFFF80000000uLL) == 0xFFFFFFFF80000000uLL && a1 <= 0xFFFFFFFFFFFFFFFDuLL;
}
