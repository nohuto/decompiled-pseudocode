/*
 * XREFs of SepFreeResourceInfo @ 0x14008D00C
 * Callers:
 *     SeAccessCheckWithHint @ 0x140062700 (SeAccessCheckWithHint.c)
 *     SepCommonAccessCheckEx @ 0x140135D00 (SepCommonAccessCheckEx.c)
 *     SepAccessCheckAndAuditAlarm @ 0x1404A1110 (SepAccessCheckAndAuditAlarm.c)
 * Callees:
 *     AuthzBasepFreeSecurityAttributesList @ 0x14010C930 (AuthzBasepFreeSecurityAttributesList.c)
 */

void __fastcall SepFreeResourceInfo(void *a1)
{
  if ( a1 )
  {
    AuthzBasepFreeSecurityAttributesList(a1);
    ExFreePoolWithTag(a1, 0);
  }
}
