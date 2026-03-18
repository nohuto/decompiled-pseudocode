/*
 * XREFs of AdtpPermissionBitPosition @ 0x14021EAC4
 * Callers:
 *     AdtpBuildAccessReasonAuditString @ 0x14021D6EC (AdtpBuildAccessReasonAuditString.c)
 *     AdtpBuildStagingReasonAuditStringInternal @ 0x14021E624 (AdtpBuildStagingReasonAuditStringInternal.c)
 * Callees:
 *     <none>
 */

char __fastcall AdtpPermissionBitPosition(unsigned int a1)
{
  char result; // al

  for ( result = 0; ; ++result )
  {
    a1 >>= 1;
    if ( !a1 )
      break;
  }
  return result;
}
