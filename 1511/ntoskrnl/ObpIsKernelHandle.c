/*
 * XREFs of ObpIsKernelHandle @ 0x140038748
 * Callers:
 *     ObIsKernelHandle @ 0x140107604 (ObIsKernelHandle.c)
 *     ObCloseHandle @ 0x1403F6F34 (ObCloseHandle.c)
 *     ObpCloseHandle @ 0x1403F6F6C (ObpCloseHandle.c)
 *     ObWaitForMultipleObjects @ 0x14040B380 (ObWaitForMultipleObjects.c)
 *     ObQueryObjectAuditingByHandle @ 0x140483618 (ObQueryObjectAuditingByHandle.c)
 *     ObSetHandleAttributes @ 0x1404AA8BC (ObSetHandleAttributes.c)
 *     NtClose @ 0x1404DAF00 (NtClose.c)
 *     ObNormalizeHandleValue @ 0x14062DFC4 (ObNormalizeHandleValue.c)
 * Callees:
 *     <none>
 */

bool __fastcall ObpIsKernelHandle(unsigned __int64 a1, char a2)
{
  return !a2 && (a1 & 0xFFFFFFFF80000000uLL) == 0xFFFFFFFF80000000uLL && a1 <= 0xFFFFFFFFFFFFFFFDuLL;
}
