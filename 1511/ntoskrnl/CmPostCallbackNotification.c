/*
 * XREFs of CmPostCallbackNotification @ 0x140424CB0
 * Callers:
 *     NtDeleteValueKey @ 0x1403D4700 (NtDeleteValueKey.c)
 *     NtDeleteKey @ 0x1403DA844 (NtDeleteKey.c)
 *     NtLoadKeyEx @ 0x1403DB3CC (NtLoadKeyEx.c)
 *     NtSetValueKey @ 0x1403F2FD0 (NtSetValueKey.c)
 *     CmpParseKey @ 0x1404014E0 (CmpParseKey.c)
 *     CmpQueryKeyName @ 0x140420760 (CmpQueryKeyName.c)
 *     CmpSecurityMethod @ 0x140421960 (CmpSecurityMethod.c)
 *     NtEnumerateValueKey @ 0x140423C60 (NtEnumerateValueKey.c)
 *     NtSetInformationKey @ 0x140424400 (NtSetInformationKey.c)
 *     NtFlushKey @ 0x140498460 (NtFlushKey.c)
 *     NtUnloadKeyEx @ 0x1404986A4 (NtUnloadKeyEx.c)
 *     NtQueryMultipleValueKey @ 0x1404A8360 (NtQueryMultipleValueKey.c)
 *     NtUnloadKey2 @ 0x14050ABE0 (NtUnloadKey2.c)
 *     NtRenameKey @ 0x1405DC010 (NtRenameKey.c)
 *     NtReplaceKey @ 0x1405DC458 (NtReplaceKey.c)
 *     NtRestoreKey @ 0x1405DC6C0 (NtRestoreKey.c)
 *     NtSaveKey @ 0x1405DC954 (NtSaveKey.c)
 *     NtSaveKeyEx @ 0x1405DCB94 (NtSaveKeyEx.c)
 * Callees:
 *     ExIsResourceAcquiredSharedLite @ 0x14003DAD0 (ExIsResourceAcquiredSharedLite.c)
 *     memset @ 0x140166CC0 (memset.c)
 *     CmpCallCallBacks @ 0x140409130 (CmpCallCallBacks.c)
 */

__int64 __fastcall CmPostCallbackNotification(unsigned int a1, __int64 a2, unsigned int a3, __int64 a4, _QWORD *a5)
{
  _QWORD v10[8]; // [rsp+30h] [rbp-48h] BYREF

  if ( !CmpCallBackCount || ExIsResourceAcquiredSharedLite(&CmpRegistryLock) || (_QWORD *)*a5 == a5 )
    return a3;
  memset(&v10[1], 0, 0x30uLL);
  v10[0] = a2;
  LODWORD(v10[1]) = a3;
  LODWORD(v10[3]) = a3;
  v10[2] = a4;
  CmpCallCallBacks(a1, (__int64)v10, 0, a1, a2, (__int64)a5);
  return LODWORD(v10[3]);
}
