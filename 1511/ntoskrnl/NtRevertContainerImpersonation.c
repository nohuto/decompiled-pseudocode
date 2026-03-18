/*
 * XREFs of NtRevertContainerImpersonation @ 0x1401F5930
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 NtRevertContainerImpersonation()
{
  return PspRevertContainerImpersonation();
}
