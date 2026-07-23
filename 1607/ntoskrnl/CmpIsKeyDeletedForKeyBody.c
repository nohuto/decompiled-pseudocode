/*
 * XREFs of CmpIsKeyDeletedForKeyBody @ 0x1404382D0
 * Callers:
 *     CmpLoadKeyCommon @ 0x14010BB8C (CmpLoadKeyCommon.c)
 *     CmQueryLayeredKey @ 0x1401B3CC8 (CmQueryLayeredKey.c)
 *     CmDeleteLayeredKey @ 0x1401B5C94 (CmDeleteLayeredKey.c)
 *     NtUnloadKeyEx @ 0x1403E3100 (NtUnloadKeyEx.c)
 *     CmpCloseKeyObject @ 0x1403E3690 (CmpCloseKeyObject.c)
 *     CmDeleteValueKey @ 0x1403F9CF4 (CmDeleteValueKey.c)
 *     CmDeleteKey @ 0x1403FE238 (CmDeleteKey.c)
 *     NtNotifyChangeMultipleKeys @ 0x1403FF884 (NtNotifyChangeMultipleKeys.c)
 *     CmpNotifyChangeKey @ 0x1404000F4 (CmpNotifyChangeKey.c)
 *     CmQueryMultipleValueKey @ 0x140401114 (CmQueryMultipleValueKey.c)
 *     CmSetValueKey @ 0x140402670 (CmSetValueKey.c)
 *     CmpPerformKeyBodyDeletionCheck @ 0x14040336C (CmpPerformKeyBodyDeletionCheck.c)
 *     CmEnumerateValueKey @ 0x140436E40 (CmEnumerateValueKey.c)
 *     CmKeyBodyRemapToVirtualForEnum @ 0x140437630 (CmKeyBodyRemapToVirtualForEnum.c)
 *     CmEnumerateKey @ 0x140437F90 (CmEnumerateKey.c)
 *     CmQueryKey @ 0x1404396E0 (CmQueryKey.c)
 *     CmQueryValueKey @ 0x14043E2F0 (CmQueryValueKey.c)
 *     CmpDoParseKey @ 0x140452BE0 (CmpDoParseKey.c)
 *     NtFlushKey @ 0x1404CAC58 (NtFlushKey.c)
 *     NtUnloadKey2 @ 0x14054A4C4 (NtUnloadKey2.c)
 *     CmLockKeyForWrite @ 0x140575108 (CmLockKeyForWrite.c)
 *     NtCompactKeys @ 0x1405F94B4 (NtCompactKeys.c)
 *     NtCompressKey @ 0x1405F9700 (NtCompressKey.c)
 *     NtQueryOpenSubKeys @ 0x1405F99E8 (NtQueryOpenSubKeys.c)
 *     NtQueryOpenSubKeysEx @ 0x1405F9BC0 (NtQueryOpenSubKeysEx.c)
 *     CmEnumerateValueFromLayeredKey @ 0x1405FCDA4 (CmEnumerateValueFromLayeredKey.c)
 *     CmMoveKey @ 0x1405FD05C (CmMoveKey.c)
 *     CmRenameKey @ 0x1405FD59C (CmRenameKey.c)
 *     CmSetKeyFlags @ 0x1405FE410 (CmSetKeyFlags.c)
 *     CmSetLastWriteTimeKey @ 0x1405FE8A8 (CmSetLastWriteTimeKey.c)
 *     CmpIsHiveAlreadyLoaded @ 0x1405FF08C (CmpIsHiveAlreadyLoaded.c)
 *     CmpResolveHiveLoadConflict @ 0x1405FF1D4 (CmpResolveHiveLoadConflict.c)
 *     CmEnumerateValueKeyFromMergedView @ 0x1405FFAA8 (CmEnumerateValueKeyFromMergedView.c)
 *     CmKeyBodyNeedsVirtualImage @ 0x1405FFE80 (CmKeyBodyNeedsVirtualImage.c)
 *     CmKeyBodyRemapToVirtual @ 0x1405FFEFC (CmKeyBodyRemapToVirtual.c)
 *     CmKeyBodyReplicateToVirtual @ 0x1406000D4 (CmKeyBodyReplicateToVirtual.c)
 *     CmpCheckKeyBodyAccess @ 0x140602034 (CmpCheckKeyBodyAccess.c)
 *     CmDumpKey @ 0x14060C16C (CmDumpKey.c)
 *     CmRestoreKey @ 0x14060C300 (CmRestoreKey.c)
 *     CmSaveKey @ 0x14060CCD0 (CmSaveKey.c)
 *     CmSaveMergedKeys @ 0x14060CF28 (CmSaveMergedKeys.c)
 *     CmpLoadHiveVolatile @ 0x14060D390 (CmpLoadHiveVolatile.c)
 *     CmpRefreshHive @ 0x14060D8C4 (CmpRefreshHive.c)
 * Callees:
 *     CmEqualTrans @ 0x1403FC890 (CmEqualTrans.c)
 *     CmListGetNextElement @ 0x140401CEC (CmListGetNextElement.c)
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
