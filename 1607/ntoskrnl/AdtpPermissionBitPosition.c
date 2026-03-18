/*
 * XREFs of AdtpPermissionBitPosition @ 0x140239194
 * Callers:
 *     AdtpBuildAccessReasonAuditString @ 0x140237DBC (AdtpBuildAccessReasonAuditString.c)
 *     AdtpBuildStagingReasonAuditStringInternal @ 0x140238CF4 (AdtpBuildStagingReasonAuditStringInternal.c)
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
