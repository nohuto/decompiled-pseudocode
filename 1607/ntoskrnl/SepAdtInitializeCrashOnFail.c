/*
 * XREFs of SepAdtInitializeCrashOnFail @ 0x14056FFA4
 * Callers:
 *     SepAdtRegNotificationCallback @ 0x14056FE74 (SepAdtRegNotificationCallback.c)
 *     SepAdtInitializeAuditingOptions @ 0x1407B2FB4 (SepAdtInitializeAuditingOptions.c)
 * Callees:
 *     SepRegQueryValue @ 0x14047527C (SepRegQueryValue.c)
 */

__int64 SepAdtInitializeCrashOnFail()
{
  __int64 result; // rax
  unsigned int v1; // [rsp+40h] [rbp+8h] BYREF

  result = 0LL;
  v1 = 0;
  if ( !SepAdtRegNotifyHandle
    || (result = SepRegQueryValue(SepAdtRegNotifyHandle, L"CrashOnAuditFail", 4, 4u, &v1), v1 <= 2)
    && (SepCrashOnAuditFail = 1, v1 != 1) )
  {
    SepCrashOnAuditFail = 0;
  }
  return result;
}
