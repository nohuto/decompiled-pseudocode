/*
 * XREFs of CmPostCallbackNotification @ 0x140439490
 * Callers:
 *     NtDeleteValueKey @ 0x1403FA9B8 (NtDeleteValueKey.c)
 *     NtDeleteKey @ 0x1403FBA58 (NtDeleteKey.c)
 *     NtSetValueKey @ 0x140403098 (NtSetValueKey.c)
 *     CmpSecurityMethod @ 0x1404042B0 (CmpSecurityMethod.c)
 *     CmpQueryKeyName @ 0x1404044D0 (CmpQueryKeyName.c)
 *     CmpParseKey @ 0x14043BF00 (CmpParseKey.c)
 *     NtUnloadKeyEx @ 0x14049A1D4 (NtUnloadKeyEx.c)
 *     CmLoadDifferencingKey @ 0x14049B648 (CmLoadDifferencingKey.c)
 *     NtQueryMultipleValueKey @ 0x1404DD5F8 (NtQueryMultipleValueKey.c)
 *     NtFlushKey @ 0x1404E88CC (NtFlushKey.c)
 *     NtSetInformationKey @ 0x14050FD50 (NtSetInformationKey.c)
 *     NtUnloadKey2 @ 0x140549F84 (NtUnloadKey2.c)
 *     NtRenameKey @ 0x1405F9DF0 (NtRenameKey.c)
 *     NtReplaceKey @ 0x1405FA30C (NtReplaceKey.c)
 *     NtRestoreKey @ 0x1405FA570 (NtRestoreKey.c)
 *     NtSaveKey @ 0x1405FA800 (NtSaveKey.c)
 *     NtSaveKeyEx @ 0x1405FAA3C (NtSaveKeyEx.c)
 * Callees:
 *     ExIsResourceAcquiredSharedLite @ 0x14002D250 (ExIsResourceAcquiredSharedLite.c)
 *     memset @ 0x1401715C0 (memset.c)
 *     CmpCallCallBacks @ 0x140452A00 (CmpCallCallBacks.c)
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
