/*
 * XREFs of SepQueryTypeString @ 0x1406D3C14
 * Callers:
 *     SeOpenObjectAuditAlarmWithTransaction @ 0x1404D3F80 (SeOpenObjectAuditAlarmWithTransaction.c)
 *     SeSecurityDescriptorChangedAuditAlarm @ 0x1404D4748 (SeSecurityDescriptorChangedAuditAlarm.c)
 *     SeTokenDefaultDaclChangedAuditAlarm @ 0x1405574D0 (SeTokenDefaultDaclChangedAuditAlarm.c)
 *     SepAdtObjectReferenceAuditAlarm @ 0x1406D2EF8 (SepAdtObjectReferenceAuditAlarm.c)
 *     SeOpenObjectForDeleteAuditAlarmWithTransaction @ 0x1406D4BDC (SeOpenObjectForDeleteAuditAlarmWithTransaction.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140288E60 (ExAllocatePoolWithTag.c)
 *     ObQueryTypeName @ 0x1406ACFC0 (ObQueryTypeName.c)
 */

__int64 __fastcall SepQueryTypeString(__int64 a1, PVOID *a2)
{
  __int64 result; // rax
  PVOID PoolWithTag; // rax
  __int16 v6; // [rsp+20h] [rbp-18h] BYREF
  __int64 v7; // [rsp+22h] [rbp-16h]
  int v8; // [rsp+2Ah] [rbp-Eh]
  __int16 v9; // [rsp+2Eh] [rbp-Ah]
  SIZE_T NumberOfBytes; // [rsp+48h] [rbp+10h] BYREF

  v6 = 0;
  v7 = 0LL;
  *a2 = 0LL;
  v8 = 0;
  v9 = 0;
  result = ObQueryTypeName(a1, (__int64)&v6, 0, &NumberOfBytes);
  if ( (_DWORD)result == -1073741820 )
  {
    PoolWithTag = ExAllocatePoolWithTag(PagedPool, (unsigned int)NumberOfBytes, 0x6E546553u);
    *a2 = PoolWithTag;
    if ( PoolWithTag )
    {
      result = ObQueryTypeName(a1, (__int64)PoolWithTag, NumberOfBytes, &NumberOfBytes);
      if ( (int)result < 0 )
      {
        ExFreePoolWithTag(*a2, 0);
        result = 0LL;
        *a2 = 0LL;
      }
    }
    else
    {
      return 3221225626LL;
    }
  }
  return result;
}
