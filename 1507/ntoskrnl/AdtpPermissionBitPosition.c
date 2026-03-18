/*
 * XREFs of AdtpPermissionBitPosition @ 0x14026DEEC
 * Callers:
 *     AdtpBuildAccessReasonAuditString @ 0x14015AEB8 (AdtpBuildAccessReasonAuditString.c)
 *     AdtpBuildStagingReasonAuditStringInternal @ 0x14026DA4C (AdtpBuildStagingReasonAuditStringInternal.c)
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
