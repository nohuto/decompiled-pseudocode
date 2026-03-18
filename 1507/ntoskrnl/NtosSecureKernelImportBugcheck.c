/*
 * XREFs of NtosSecureKernelImportBugcheck @ 0x1402446F0
 * Callers:
 *     <none>
 * Callees:
 *     KeBugCheckEx @ 0x140182750 (KeBugCheckEx.c)
 */

void __noreturn NtosSecureKernelImportBugcheck()
{
  KeBugCheckEx(0x123u, 0LL, 0LL, 0LL, 0LL);
}
