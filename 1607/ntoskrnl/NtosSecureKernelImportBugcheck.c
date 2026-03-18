/*
 * XREFs of NtosSecureKernelImportBugcheck @ 0x14020FC04
 * Callers:
 *     <none>
 * Callees:
 *     KeBugCheckEx @ 0x14015D500 (KeBugCheckEx.c)
 */

void __noreturn NtosSecureKernelImportBugcheck()
{
  KeBugCheckEx(0x123u, 0LL, 0LL, 0LL, 0LL);
}
