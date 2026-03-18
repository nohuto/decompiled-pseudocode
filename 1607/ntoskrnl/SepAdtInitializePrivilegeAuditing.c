/*
 * XREFs of SepAdtInitializePrivilegeAuditing @ 0x14056FA0C
 * Callers:
 *     SepAdtRegNotificationCallback @ 0x14056F934 (SepAdtRegNotificationCallback.c)
 *     SepAdtInitializeAuditingOptions @ 0x1407B2FB4 (SepAdtInitializeAuditingOptions.c)
 * Callees:
 *     SepRegQueryValue @ 0x1404763AC (SepRegQueryValue.c)
 */

char SepAdtInitializePrivilegeAuditing()
{
  int v1; // [rsp+40h] [rbp+8h] BYREF

  LOBYTE(v1) = 0;
  if ( SepAdtRegNotifyHandle
    && (SepRegQueryValue(SepAdtRegNotifyHandle, L"FullPrivilegeAuditing", 3, 1u, &v1), (_BYTE)v1) )
  {
    SepFilterPrivileges = SepFilterPrivilegesShort;
  }
  else
  {
    SepFilterPrivileges = SepFilterPrivilegesLong;
  }
  return 1;
}
