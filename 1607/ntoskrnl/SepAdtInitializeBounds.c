/*
 * XREFs of SepAdtInitializeBounds @ 0x14056F990
 * Callers:
 *     SepAdtRegNotificationCallback @ 0x14056F934 (SepAdtRegNotificationCallback.c)
 *     SepAdtInitializeAuditingOptions @ 0x1407B2FB4 (SepAdtInitializeAuditingOptions.c)
 * Callees:
 *     __security_check_cookie @ 0x14014CA50 (__security_check_cookie.c)
 *     SepRegQueryValue @ 0x1404763AC (SepRegQueryValue.c)
 */

void SepAdtInitializeBounds()
{
  unsigned int v0; // [rsp+30h] [rbp-18h] BYREF
  unsigned int v1; // [rsp+34h] [rbp-14h]

  if ( SepAdtRegNotifyHandle
    && (int)SepRegQueryValue(SepAdtRegNotifyHandle, L"Bounds", 3, 8u, &v0) >= 0
    && v1 < v0
    && v1 >= 0x10
    && v0 - v1 >= 0x10 )
  {
    SepAdtMinListLength = v1;
    SepAdtMaxListLength = v0;
  }
}
