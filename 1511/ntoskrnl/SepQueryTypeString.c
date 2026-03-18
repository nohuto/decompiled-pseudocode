/*
 * XREFs of SepQueryTypeString @ 0x140651514
 * Callers:
 *     SeOpenObjectAuditAlarmWithTransaction @ 0x140470A30 (SeOpenObjectAuditAlarmWithTransaction.c)
 *     SeSecurityDescriptorChangedAuditAlarm @ 0x140495460 (SeSecurityDescriptorChangedAuditAlarm.c)
 *     SeTokenDefaultDaclChangedAuditAlarm @ 0x1404C0094 (SeTokenDefaultDaclChangedAuditAlarm.c)
 *     SepAdtObjectReferenceAuditAlarm @ 0x14064FCDC (SepAdtObjectReferenceAuditAlarm.c)
 *     SeOpenObjectForDeleteAuditAlarmWithTransaction @ 0x14065252C (SeOpenObjectForDeleteAuditAlarmWithTransaction.c)
 * Callees:
 *     ExAllocatePoolWithTag @ 0x140238380 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
 *     ObQueryTypeName @ 0x14062F0C8 (ObQueryTypeName.c)
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
