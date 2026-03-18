/*
 * XREFs of AdtpInitializeAuditingCommon @ 0x140592AF0
 * Callers:
 *     SepAdtInitializeAuditingOptions @ 0x1407BC3AC (SepAdtInitializeAuditingOptions.c)
 * Callees:
 *     AdtpDbInitializePrivilegeObject @ 0x14015EB90 (AdtpDbInitializePrivilegeObject.c)
 *     AdtpObjsInitialize @ 0x140592B28 (AdtpObjsInitialize.c)
 *     AdtpInitializeDriveLetters @ 0x140592FEC (AdtpInitializeDriveLetters.c)
 */

__int64 AdtpInitializeAuditingCommon()
{
  __int64 result; // rax
  unsigned int v1; // ebx

  AdtpNullSid = 257;
  AdtpRegisteredWithEtw = 1;
  result = AdtpInitializeDriveLetters();
  if ( (int)result >= 0 )
  {
    result = AdtpObjsInitialize();
    v1 = result;
    if ( (int)result >= 0 )
    {
      AdtpDbInitializePrivilegeObject();
      return v1;
    }
  }
  return result;
}
