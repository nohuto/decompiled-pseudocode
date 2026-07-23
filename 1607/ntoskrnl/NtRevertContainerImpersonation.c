/*
 * XREFs of NtRevertContainerImpersonation @ 0x14020F5B0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS NtRevertContainerImpersonation(void)
{
  return PspRevertContainerImpersonation((__int64)KeGetCurrentThread());
}
