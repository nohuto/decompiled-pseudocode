/*
 * XREFs of AdtpInitializeAuditingCommon @ 0x14052EF34
 * Callers:
 *     SepAdtInitializeAuditingOptions @ 0x140762BBC (SepAdtInitializeAuditingOptions.c)
 * Callees:
 *     AdtpDbInitializePrivilegeObject @ 0x14013673C (AdtpDbInitializePrivilegeObject.c)
 *     AdtpObjsInitialize @ 0x14052EF6C (AdtpObjsInitialize.c)
 *     AdtpInitializeDriveLetters @ 0x14052F430 (AdtpInitializeDriveLetters.c)
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
