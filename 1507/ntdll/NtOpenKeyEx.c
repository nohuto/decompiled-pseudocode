/*
 * XREFs of NtOpenKeyEx @ 0x1800949C0
 * Callers:
 *     LdrpAppxGetRemediationRegistryKey @ 0x1800BB2B0 (LdrpAppxGetRemediationRegistryKey.c)
 *     LdrpIsCODServiceEnabled @ 0x1800BD000 (LdrpIsCODServiceEnabled.c)
 * Callees:
 *     <none>
 */

__int64 NtOpenKeyEx()
{
  __int64 result; // rax

  result = 268LL;
  __asm { syscall; Low latency system call }
  return result;
}
