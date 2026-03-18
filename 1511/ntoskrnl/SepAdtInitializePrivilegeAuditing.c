/*
 * XREFs of SepAdtInitializePrivilegeAuditing @ 0x14049B5D8
 * Callers:
 *     SepAdtRegNotificationCallback @ 0x140497FF8 (SepAdtRegNotificationCallback.c)
 *     SepAdtInitializeAuditingOptions @ 0x140762BBC (SepAdtInitializeAuditingOptions.c)
 * Callees:
 *     SepRegQueryValue @ 0x1403BEC3C (SepRegQueryValue.c)
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
