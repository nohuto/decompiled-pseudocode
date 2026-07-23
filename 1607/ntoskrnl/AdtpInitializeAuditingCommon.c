/*
 * XREFs of AdtpInitializeAuditingCommon @ 0x1405700F8
 * Callers:
 *     SepAdtInitializeAuditingOptions @ 0x1407B2FB4 (SepAdtInitializeAuditingOptions.c)
 * Callees:
 *     AdtpDbInitializePrivilegeObject @ 0x140146614 (AdtpDbInitializePrivilegeObject.c)
 *     AdtpObjsInitialize @ 0x140570130 (AdtpObjsInitialize.c)
 *     AdtpInitializeDriveLetters @ 0x1405705F8 (AdtpInitializeDriveLetters.c)
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
