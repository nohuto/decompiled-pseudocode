/*
 * XREFs of SepQueryNameString @ 0x1403BF450
 * Callers:
 *     SepValidateReferencedLowBoxHandles @ 0x1403BF0B8 (SepValidateReferencedLowBoxHandles.c)
 *     SeOpenObjectAuditAlarmWithTransaction @ 0x140470A30 (SeOpenObjectAuditAlarmWithTransaction.c)
 *     SeSecurityDescriptorChangedAuditAlarm @ 0x140495460 (SeSecurityDescriptorChangedAuditAlarm.c)
 *     SeAdtRegistryValueChangedAuditAlarm @ 0x14064DE24 (SeAdtRegistryValueChangedAuditAlarm.c)
 *     SeOperationAuditAlarm @ 0x14064F278 (SeOperationAuditAlarm.c)
 *     SepAdtObjectReferenceAuditAlarm @ 0x14064FCDC (SepAdtObjectReferenceAuditAlarm.c)
 *     SeOpenObjectForDeleteAuditAlarmWithTransaction @ 0x14065252C (SeOpenObjectForDeleteAuditAlarmWithTransaction.c)
 * Callees:
 *     ExAllocatePoolWithTag @ 0x140238380 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
 *     ObQueryNameStringMode @ 0x14041FE90 (ObQueryNameStringMode.c)
 *     SeLocateProcessImageName @ 0x1404D6CDC (SeLocateProcessImageName.c)
 */

__int64 __fastcall SepQueryNameString(PEPROCESS Process, PUNICODE_STRING *pImageFileName)
{
  int NameStringMode; // eax
  int v5; // ebx
  UNICODE_STRING *PoolWithTag; // rax
  SIZE_T NumberOfBytes; // [rsp+48h] [rbp+10h] BYREF

  *pImageFileName = 0LL;
  LODWORD(NumberOfBytes) = 0;
  NameStringMode = ObQueryNameStringMode((_DWORD)Process, 0, 0, (unsigned int)&NumberOfBytes, 0);
  v5 = NameStringMode;
  if ( NameStringMode == -1073741820 || NameStringMode == -1073741789 )
  {
    PoolWithTag = (UNICODE_STRING *)ExAllocatePoolWithTag(PagedPool, (unsigned int)NumberOfBytes, 0x6E4F6553u);
    *pImageFileName = PoolWithTag;
    if ( PoolWithTag )
    {
      v5 = ObQueryNameStringMode((_DWORD)Process, (_DWORD)PoolWithTag, NumberOfBytes, (unsigned int)&NumberOfBytes, 0);
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
