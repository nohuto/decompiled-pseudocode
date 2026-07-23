/*
 * XREFs of SepQueryNameString @ 0x1406D3B24
 * Callers:
 *     SeOpenObjectAuditAlarmWithTransaction @ 0x1404D3F80 (SeOpenObjectAuditAlarmWithTransaction.c)
 *     SeSecurityDescriptorChangedAuditAlarm @ 0x1404D4748 (SeSecurityDescriptorChangedAuditAlarm.c)
 *     SeAdtRegistryValueChangedAuditAlarm @ 0x1406D143C (SeAdtRegistryValueChangedAuditAlarm.c)
 *     SeOperationAuditAlarm @ 0x1406D2494 (SeOperationAuditAlarm.c)
 *     SepAdtObjectReferenceAuditAlarm @ 0x1406D2EF8 (SepAdtObjectReferenceAuditAlarm.c)
 *     SeOpenObjectForDeleteAuditAlarmWithTransaction @ 0x1406D4BDC (SeOpenObjectForDeleteAuditAlarmWithTransaction.c)
 *     SepValidateReferencedLowBoxHandles @ 0x1406D8790 (SepValidateReferencedLowBoxHandles.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140288E60 (ExAllocatePoolWithTag.c)
 *     SeLocateProcessImageName @ 0x140443A20 (SeLocateProcessImageName.c)
 *     ObQueryNameString @ 0x14054C280 (ObQueryNameString.c)
 */

__int64 __fastcall SepQueryNameString(PEPROCESS Process, PUNICODE_STRING *pImageFileName)
{
  NTSTATUS NameString; // eax
  NTSTATUS v5; // ebx
  _OBJECT_NAME_INFORMATION *PoolWithTag; // rax
  SIZE_T NumberOfBytes; // [rsp+38h] [rbp+10h] BYREF

  *pImageFileName = 0LL;
  LODWORD(NumberOfBytes) = 0;
  NameString = ObQueryNameString(Process, 0LL, 0, (PULONG)&NumberOfBytes);
  v5 = NameString;
  if ( NameString == -1073741820 || NameString == -1073741789 )
  {
    PoolWithTag = (_OBJECT_NAME_INFORMATION *)ExAllocatePoolWithTag(PagedPool, (unsigned int)NumberOfBytes, 0x6E4F6553u);
    *pImageFileName = &PoolWithTag->Name;
    if ( PoolWithTag )
    {
      v5 = ObQueryNameString(Process, PoolWithTag, NumberOfBytes, (PULONG)&NumberOfBytes);
      if ( v5 < 0 || !(*pImageFileName)->Length )
      {
        ExFreePoolWithTag(*pImageFileName, 0);
        *pImageFileName = 0LL;
        if ( v5 >= 0
          && (POBJECT_TYPE *)ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ Process[-1].Spare2[63] ^ (unsigned __int64)(unsigned __int8)((unsigned __int16)((_WORD)Process - 48) >> 8)] == PsProcessType )
        {
          SeLocateProcessImageName(Process, pImageFileName);
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
