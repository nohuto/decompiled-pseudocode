/*
 * XREFs of RtlImpersonateSelf @ 0x18007D5A0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl RtlImpersonateSelf(SECURITY_IMPERSONATION_LEVEL ImpersonationLevel)
{
  return RtlImpersonateSelfEx(ImpersonationLevel, 0, 0LL);
}
