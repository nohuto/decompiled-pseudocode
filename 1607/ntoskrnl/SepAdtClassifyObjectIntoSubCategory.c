/*
 * XREFs of SepAdtClassifyObjectIntoSubCategory @ 0x140690AA4
 * Callers:
 *     SeOpenObjectAuditAlarmWithTransaction @ 0x140405F60 (SeOpenObjectAuditAlarmWithTransaction.c)
 *     ObpCreateHandle @ 0x140418AE0 (ObpCreateHandle.c)
 *     SepAdtAuditObjectAccessWithContext @ 0x1404A2230 (SepAdtAuditObjectAccessWithContext.c)
 *     SeAuditHandleCreation @ 0x1404CB264 (SeAuditHandleCreation.c)
 *     SeOperationAuditAlarm @ 0x14068E9CC (SeOperationAuditAlarm.c)
 * Callees:
 *     SepAuditingEnabledForSubcategory @ 0x14000F0C0 (SepAuditingEnabledForSubcategory.c)
 *     RtlCompareUnicodeString @ 0x1404E27E0 (RtlCompareUnicodeString.c)
 *     SepIsRemovableStorageDevice @ 0x1406957EC (SepIsRemovableStorageDevice.c)
 */

__int64 __fastcall SepAdtClassifyObjectIntoSubCategory(__int64 a1, const UNICODE_STRING *a2, char a3, char a4)
{
  __int64 v5; // r11
  __int64 result; // rax
  __int64 v7; // r10
  unsigned __int16 v8; // r9
  __int64 v9; // r10
  bool v10; // zf

  if ( a1 )
  {
    v5 = a1 - 48;
    if ( (POBJECT_TYPE *)ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ *(unsigned __int8 *)(a1 - 48 + 24) ^ (unsigned __int64)(unsigned __int8)((unsigned __int16)(a1 - 48) >> 8)] == CmKeyObjectType )
      return 118LL;
    if ( (POBJECT_TYPE *)ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ *(unsigned __int8 *)(v5 + 24) ^ (unsigned __int64)BYTE1(v5)] == IoFileObjectType )
    {
      if ( SepAuditingEnabledForSubcategory(129, a3, a4)
        && (unsigned __int8)SepIsRemovableStorageDevice(*(_QWORD *)(v7 + 8)) == 1 )
      {
        return v8;
      }
      return 117LL;
    }
    if ( ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ *(unsigned __int8 *)(v5 + 24) ^ (unsigned __int64)BYTE1(v5)] == IoDeviceObjectType
      && SepAuditingEnabledForSubcategory(129, a3, a4)
      && (unsigned __int8)SepIsRemovableStorageDevice(v9) == 1 )
    {
      return v8;
    }
    return 119LL;
  }
  if ( !a2 )
    return 119LL;
  if ( !RtlCompareUnicodeString(a2, &SepFileTypeName, 0) )
    return 117LL;
  v10 = RtlCompareUnicodeString(a2, &SepRegistryTypeName, 0) == 0;
  result = 118LL;
  if ( !v10 )
    return 119LL;
  return result;
}
