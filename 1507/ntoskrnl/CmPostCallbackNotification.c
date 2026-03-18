/*
 * XREFs of CmPostCallbackNotification @ 0x140478170
 * Callers:
 *     CmLoadKeyHelper @ 0x1401DE79C (CmLoadKeyHelper.c)
 *     CmpQueryKeyName @ 0x140427100 (CmpQueryKeyName.c)
 *     NtEnumerateValueKey @ 0x1404273A0 (NtEnumerateValueKey.c)
 *     NtSetValueKey @ 0x140428350 (NtSetValueKey.c)
 *     CmpSecurityMethod @ 0x14042ABB4 (CmpSecurityMethod.c)
 *     NtDeleteKey @ 0x1404462E0 (NtDeleteKey.c)
 *     NtSetInformationKey @ 0x140477A10 (NtSetInformationKey.c)
 *     CmpParseKey @ 0x1404BEE10 (CmpParseKey.c)
 *     NtUnloadKeyEx @ 0x1404ED38C (NtUnloadKeyEx.c)
 *     NtDeleteValueKey @ 0x1404EF910 (NtDeleteValueKey.c)
 *     NtFlushKey @ 0x1404F3BA8 (NtFlushKey.c)
 *     NtQueryMultipleValueKey @ 0x140542CE4 (NtQueryMultipleValueKey.c)
 *     NtUnloadKey2 @ 0x140580A7C (NtUnloadKey2.c)
 *     NtRenameKey @ 0x140650A88 (NtRenameKey.c)
 *     NtReplaceKey @ 0x140651088 (NtReplaceKey.c)
 *     NtRestoreKey @ 0x140651558 (NtRestoreKey.c)
 *     NtSaveKey @ 0x1406519CC (NtSaveKey.c)
 *     NtSaveKeyEx @ 0x140651DA0 (NtSaveKeyEx.c)
 * Callees:
 *     ExIsResourceAcquiredSharedLite @ 0x1400CA650 (ExIsResourceAcquiredSharedLite.c)
 *     memset @ 0x140195A80 (memset.c)
 *     CmpCallCallBacks @ 0x140496120 (CmpCallCallBacks.c)
 */

__int64 __fastcall CmPostCallbackNotification(int a1, __int64 a2, unsigned int a3, __int64 a4, _QWORD *a5)
{
  _QWORD v10[8]; // [rsp+30h] [rbp-48h] BYREF

  if ( !CmpCallBackCount || ExIsResourceAcquiredSharedLite(&CmpRegistryLock) || (_QWORD *)*a5 == a5 )
    return a3;
  memset(&v10[1], 0, 0x30uLL);
  v10[0] = a2;
  LODWORD(v10[1]) = a3;
  LODWORD(v10[3]) = a3;
  v10[2] = a4;
  CmpCallCallBacks(a1, (unsigned int)v10, 0, a1, a2, (__int64)a5);
  return LODWORD(v10[3]);
}
