/*
 * XREFs of SeFreeCapturedObjectTypeList @ 0x1402004C0
 * Callers:
 *     SeAccessCheckByType @ 0x14008CBF0 (SeAccessCheckByType.c)
 *     SepAccessCheckAndAuditAlarm @ 0x14046E620 (SepAccessCheckAndAuditAlarm.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
 */

void __fastcall SeFreeCapturedObjectTypeList(void *a1)
{
  if ( a1 )
    ExFreePoolWithTag(a1, 0);
}
