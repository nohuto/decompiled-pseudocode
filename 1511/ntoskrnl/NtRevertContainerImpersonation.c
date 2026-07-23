/*
 * XREFs of NtRevertContainerImpersonation @ 0x1401F5930
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// attributes: thunk
NTSTATUS NtRevertContainerImpersonation(void)
{
  return PspRevertContainerImpersonation();
}
