/*
 * XREFs of RtlImpersonateSelf @ 0x18006E850
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl RtlImpersonateSelf(SECURITY_IMPERSONATION_LEVEL ImpersonationLevel)
{
  return RtlImpersonateSelfEx(ImpersonationLevel, 0, 0LL);
}
