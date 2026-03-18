/*
 * XREFs of SeFreeCapturedObjectTypeList @ 0x1402199A8
 * Callers:
 *     SeAccessCheckByType @ 0x14005FEF0 (SeAccessCheckByType.c)
 *     SepAccessCheckAndAuditAlarm @ 0x1404B6D30 (SepAccessCheckAndAuditAlarm.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 */

void __fastcall SeFreeCapturedObjectTypeList(void *a1)
{
  if ( a1 )
    ExFreePoolWithTag(a1, 0);
}
