/*
 * XREFs of NtRevertContainerImpersonation @ 0x14020F784
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 NtRevertContainerImpersonation()
{
  return PspRevertContainerImpersonation((__int64)KeGetCurrentThread());
}
