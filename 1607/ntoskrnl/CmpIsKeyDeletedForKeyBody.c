/*
 * XREFs of CmpIsKeyDeletedForKeyBody @ 0x140439400
 * Callers:
 *     CmpLoadKeyCommon @ 0x140087994 (CmpLoadKeyCommon.c)
 *     CmQueryLayeredKey @ 0x1401B3DE4 (CmQueryLayeredKey.c)
 *     CmDeleteLayeredKey @ 0x1401B5DB0 (CmDeleteLayeredKey.c)
 *     CmDeleteValueKey @ 0x1403FAE34 (CmDeleteValueKey.c)
 *     CmDeleteKey @ 0x1403FF378 (CmDeleteKey.c)
 *     NtNotifyChangeMultipleKeys @ 0x1404009C4 (NtNotifyChangeMultipleKeys.c)
 *     CmpNotifyChangeKey @ 0x140401234 (CmpNotifyChangeKey.c)
 *     CmQueryMultipleValueKey @ 0x140402254 (CmQueryMultipleValueKey.c)
 *     CmSetValueKey @ 0x1404037B0 (CmSetValueKey.c)
 *     CmpPerformKeyBodyDeletionCheck @ 0x1404044AC (CmpPerformKeyBodyDeletionCheck.c)
 *     CmEnumerateValueKey @ 0x140437F70 (CmEnumerateValueKey.c)
 *     CmKeyBodyRemapToVirtualForEnum @ 0x140438760 (CmKeyBodyRemapToVirtualForEnum.c)
 *     CmEnumerateKey @ 0x1404390C0 (CmEnumerateKey.c)
 *     CmQueryKey @ 0x14043A810 (CmQueryKey.c)
 *     CmQueryValueKey @ 0x14043F420 (CmQueryValueKey.c)
 *     CmpDoParseKey @ 0x140453D10 (CmpDoParseKey.c)
 *     NtUnloadKeyEx @ 0x14049A1D4 (NtUnloadKeyEx.c)
 *     CmpCloseKeyObject @ 0x14049A770 (CmpCloseKeyObject.c)
 *     NtFlushKey @ 0x1404E88CC (NtFlushKey.c)
 *     NtUnloadKey2 @ 0x140549F84 (NtUnloadKey2.c)
 *     CmLockKeyForWrite @ 0x140574BC8 (CmLockKeyForWrite.c)
 *     NtCompactKeys @ 0x1405F9400 (NtCompactKeys.c)
 *     NtCompressKey @ 0x1405F964C (NtCompressKey.c)
 *     NtQueryOpenSubKeys @ 0x1405F9934 (NtQueryOpenSubKeys.c)
 *     NtQueryOpenSubKeysEx @ 0x1405F9B0C (NtQueryOpenSubKeysEx.c)
 *     CmEnumerateValueFromLayeredKey @ 0x1405FCCF0 (CmEnumerateValueFromLayeredKey.c)
 *     CmMoveKey @ 0x1405FCFA8 (CmMoveKey.c)
 *     CmRenameKey @ 0x1405FD4E8 (CmRenameKey.c)
 *     CmSetKeyFlags @ 0x1405FE35C (CmSetKeyFlags.c)
 *     CmSetLastWriteTimeKey @ 0x1405FE7F4 (CmSetLastWriteTimeKey.c)
 *     CmpIsHiveAlreadyLoaded @ 0x1405FEFD8 (CmpIsHiveAlreadyLoaded.c)
 *     CmpResolveHiveLoadConflict @ 0x1405FF120 (CmpResolveHiveLoadConflict.c)
 *     CmEnumerateValueKeyFromMergedView @ 0x1405FF9F4 (CmEnumerateValueKeyFromMergedView.c)
 *     CmKeyBodyNeedsVirtualImage @ 0x1405FFDCC (CmKeyBodyNeedsVirtualImage.c)
 *     CmKeyBodyRemapToVirtual @ 0x1405FFE48 (CmKeyBodyRemapToVirtual.c)
 *     CmKeyBodyReplicateToVirtual @ 0x140600020 (CmKeyBodyReplicateToVirtual.c)
 *     CmpCheckKeyBodyAccess @ 0x140601F80 (CmpCheckKeyBodyAccess.c)
 *     CmDumpKey @ 0x14060C0B8 (CmDumpKey.c)
 *     CmRestoreKey @ 0x14060C24C (CmRestoreKey.c)
 *     CmSaveKey @ 0x14060CC1C (CmSaveKey.c)
 *     CmSaveMergedKeys @ 0x14060CE74 (CmSaveMergedKeys.c)
 *     CmpLoadHiveVolatile @ 0x14060D2DC (CmpLoadHiveVolatile.c)
 *     CmpRefreshHive @ 0x14060D810 (CmpRefreshHive.c)
 * Callees:
 *     CmEqualTrans @ 0x1403FD9D0 (CmEqualTrans.c)
 *     CmListGetNextElement @ 0x140402E2C (CmListGetNextElement.c)
 */

char __fastcall CmpIsKeyDeletedForKeyBody(__int64 a1, __int64 a2)
{
  int v2; // eax
  __int64 v4; // rdx
  char *NextElement; // rax
  __int64 v6; // r10
  _QWORD *v7; // r11
  int v8; // ecx
  __int64 v10; // [rsp+30h] [rbp+8h] BYREF

  v2 = *(_DWORD *)(a1 + 48);
  v4 = *(_QWORD *)(a1 + 8);
  v10 = 0LL;
  if ( (v2 & 9) != 0 )
  {
    LOBYTE(NextElement) = 1;
  }
  else if ( a2 && (NextElement = CmListGetNextElement((_QWORD *)(v4 + 200), &v10, 32)) != 0LL )
  {
    while ( 1 )
    {
      v8 = *((_DWORD *)NextElement + 17);
      if ( v8 == 2 || v8 == 11 )
        break;
      NextElement = CmListGetNextElement(v7, &v10, 32);
      if ( !NextElement )
        return (char)NextElement;
    }
    LOBYTE(NextElement) = CmEqualTrans(*((_QWORD *)NextElement + 7), v6) != 0;
  }
  else
  {
    LOBYTE(NextElement) = 0;
  }
  return (char)NextElement;
}
