/*
 * XREFs of ObpIsKernelHandle @ 0x1400CFD28
 * Callers:
 *     ObIsKernelHandle @ 0x140126C74 (ObIsKernelHandle.c)
 *     ObWaitForMultipleObjects @ 0x14044EDD0 (ObWaitForMultipleObjects.c)
 *     ObQueryObjectAuditingByHandle @ 0x14045E358 (ObQueryObjectAuditingByHandle.c)
 *     ObSetHandleAttributes @ 0x14045E6E8 (ObSetHandleAttributes.c)
 *     NtClose @ 0x14050B0E0 (NtClose.c)
 *     ObCloseHandle @ 0x14050C73C (ObCloseHandle.c)
 *     ObpCloseHandle @ 0x14050C774 (ObpCloseHandle.c)
 *     ObNormalizeHandleValue @ 0x14066609C (ObNormalizeHandleValue.c)
 * Callees:
 *     <none>
 */

bool __fastcall ObpIsKernelHandle(unsigned __int64 a1, char a2)
{
  return !a2 && (a1 & 0xFFFFFFFF80000000uLL) == 0xFFFFFFFF80000000uLL && a1 <= 0xFFFFFFFFFFFFFFFDuLL;
}
