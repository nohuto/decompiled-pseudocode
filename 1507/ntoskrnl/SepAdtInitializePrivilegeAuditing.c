/*
 * XREFs of SepAdtInitializePrivilegeAuditing @ 0x14055C110
 * Callers:
 *     SepAdtRegNotificationCallback @ 0x14055C038 (SepAdtRegNotificationCallback.c)
 *     SepAdtInitializeAuditingOptions @ 0x1407BC3AC (SepAdtInitializeAuditingOptions.c)
 * Callees:
 *     SepRegQueryValue @ 0x14041103C (SepRegQueryValue.c)
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
