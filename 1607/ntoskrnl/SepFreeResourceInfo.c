/*
 * XREFs of SepFreeResourceInfo @ 0x14008D8AC
 * Callers:
 *     SeAccessCheckWithHint @ 0x140062B80 (SeAccessCheckWithHint.c)
 *     SepCommonAccessCheckEx @ 0x140135790 (SepCommonAccessCheckEx.c)
 *     SepAccessCheckAndAuditAlarm @ 0x1404B6D30 (SepAccessCheckAndAuditAlarm.c)
 * Callees:
 *     AuthzBasepFreeSecurityAttributesList @ 0x140088740 (AuthzBasepFreeSecurityAttributesList.c)
 */

void __fastcall SepFreeResourceInfo(_DWORD *a1)
{
  if ( a1 )
  {
    AuthzBasepFreeSecurityAttributesList(a1);
    ExFreePoolWithTag(a1, 0);
  }
}
