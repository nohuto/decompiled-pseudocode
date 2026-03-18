/*
 * XREFs of SepQueryNameString @ 0x1404754CC
 * Callers:
 *     SeOpenObjectAuditAlarmWithTransaction @ 0x1404070A0 (SeOpenObjectAuditAlarmWithTransaction.c)
 *     SepValidateReferencedLowBoxHandles @ 0x14047513C (SepValidateReferencedLowBoxHandles.c)
 *     SeSecurityDescriptorChangedAuditAlarm @ 0x140520EA8 (SeSecurityDescriptorChangedAuditAlarm.c)
 *     SeAdtRegistryValueChangedAuditAlarm @ 0x14068D508 (SeAdtRegistryValueChangedAuditAlarm.c)
 *     SeOperationAuditAlarm @ 0x14068E8E8 (SeOperationAuditAlarm.c)
 *     SepAdtObjectReferenceAuditAlarm @ 0x14068F304 (SepAdtObjectReferenceAuditAlarm.c)
 *     SeOpenObjectForDeleteAuditAlarmWithTransaction @ 0x14069180C (SeOpenObjectForDeleteAuditAlarmWithTransaction.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 *     PsGetAllocatedFullProcessImageNameEx @ 0x1403E6A00 (PsGetAllocatedFullProcessImageNameEx.c)
 *     ObQueryNameStringMode @ 0x140434B90 (ObQueryNameStringMode.c)
 */

__int64 __fastcall SepQueryNameString(char *a1, PVOID *a2)
{
  int v4; // eax
  int v5; // ebx
  PVOID PoolWithTag; // rax
  SIZE_T NumberOfBytes; // [rsp+48h] [rbp+10h] BYREF

  *a2 = 0LL;
  LODWORD(NumberOfBytes) = 0;
  v4 = ObQueryNameStringMode(a1, 0LL, 0, &NumberOfBytes, 0);
  v5 = v4;
  if ( v4 == -1073741820 || v4 == -1073741789 )
  {
    PoolWithTag = ExAllocatePoolWithTag(PagedPool, (unsigned int)NumberOfBytes, 0x6E4F6553u);
    *a2 = PoolWithTag;
    if ( PoolWithTag )
    {
      v5 = ObQueryNameStringMode(a1, (__int64)PoolWithTag, NumberOfBytes, &NumberOfBytes, 0);
      if ( v5 < 0 || !*(_WORD *)*a2 )
      {
        ExFreePoolWithTag(*a2, 0);
        *a2 = 0LL;
        if ( v5 >= 0
          && (POBJECT_TYPE *)ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ (unsigned __int8)*(a1 - 24) ^ (unsigned __int64)(unsigned __int8)((unsigned __int16)((_WORD)a1 - 48) >> 8)] == PsProcessType )
        {
          PsGetAllocatedFullProcessImageNameEx((__int64)a1, (__int64)a2);
        }
        return 0;
      }
    }
    else
    {
      return (unsigned int)-1073741670;
    }
  }
  return (unsigned int)v5;
}
