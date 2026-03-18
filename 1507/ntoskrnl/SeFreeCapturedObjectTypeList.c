/*
 * XREFs of SeFreeCapturedObjectTypeList @ 0x14015B31C
 * Callers:
 *     SeAccessCheckByType @ 0x1400CD4D0 (SeAccessCheckByType.c)
 *     SepAccessCheckAndAuditAlarm @ 0x140525750 (SepAccessCheckAndAuditAlarm.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 */

void __fastcall SeFreeCapturedObjectTypeList(void *a1)
{
  if ( a1 )
    ExFreePoolWithTag(a1, 0);
}
