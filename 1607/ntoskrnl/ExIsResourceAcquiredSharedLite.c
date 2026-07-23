/*
 * XREFs of ExIsResourceAcquiredSharedLite @ 0x14002CDD0
 * Callers:
 *     NtUnloadKeyEx @ 0x1403E3100 (NtUnloadKeyEx.c)
 *     PpDevNodeLockTree @ 0x1403F397C (PpDevNodeLockTree.c)
 *     NtDeleteValueKey @ 0x1403F9878 (NtDeleteValueKey.c)
 *     NtDeleteKey @ 0x1403FA918 (NtDeleteKey.c)
 *     NtSetValueKey @ 0x140401F58 (NtSetValueKey.c)
 *     CmpSecurityMethod @ 0x140403170 (CmpSecurityMethod.c)
 *     CmpQueryKeyName @ 0x140403390 (CmpQueryKeyName.c)
 *     FsRtlAcquireFileForCcFlushEx @ 0x14042AAEC (FsRtlAcquireFileForCcFlushEx.c)
 *     CmPostCallbackNotification @ 0x140438360 (CmPostCallbackNotification.c)
 *     NtEnumerateValueKey @ 0x140438410 (NtEnumerateValueKey.c)
 *     NtEnumerateKey @ 0x140438A40 (NtEnumerateKey.c)
 *     NtQueryKey @ 0x14043A170 (NtQueryKey.c)
 *     NtQueryValueKey @ 0x14043A750 (NtQueryValueKey.c)
 *     CmpParseKey @ 0x14043ADD0 (CmpParseKey.c)
 *     CmpDeleteKeyObject @ 0x14043B2D0 (CmpDeleteKeyObject.c)
 *     CmLoadDifferencingKey @ 0x1404A37E0 (CmLoadDifferencingKey.c)
 *     NtQueryMultipleValueKey @ 0x1404C0BFC (NtQueryMultipleValueKey.c)
 *     NtFlushKey @ 0x1404CAC58 (NtFlushKey.c)
 *     NtSetInformationKey @ 0x1404F2CE0 (NtSetInformationKey.c)
 *     NtUnloadKey2 @ 0x14054A4C4 (NtUnloadKey2.c)
 *     NtRenameKey @ 0x1405F9EA4 (NtRenameKey.c)
 *     NtReplaceKey @ 0x1405FA3C0 (NtReplaceKey.c)
 *     NtRestoreKey @ 0x1405FA624 (NtRestoreKey.c)
 *     NtSaveKey @ 0x1405FA8B4 (NtSaveKey.c)
 *     NtSaveKeyEx @ 0x1405FAAF0 (NtSaveKeyEx.c)
 *     CmpDoReOpenTransKey @ 0x140611CD0 (CmpDoReOpenTransKey.c)
 * Callees:
 *     EXP_LOCK_RESOURCE @ 0x14022D6D0 (EXP_LOCK_RESOURCE.c)
 *     EXP_UNLOCK_RESOURCE @ 0x14022D744 (EXP_UNLOCK_RESOURCE.c)
 */

ULONG __stdcall ExIsResourceAcquiredSharedLite(PERESOURCE Resource)
{
  struct _KTHREAD *CurrentThread; // rbx
  ULONG v4; // esi
  unsigned int SpareByte0; // ebp
  __int64 v6; // rcx
  POWNER_ENTRY OwnerTable; // rax
  unsigned int TableSize; // edx
  bool v9; // zf
  struct _OWNER_ENTRY::$818A6BB8E639852A52D20A2B257A1D60::$E71B718CD8428E7C8AA4A0868051E710 v10; // esi
  _BYTE v11[40]; // [rsp+20h] [rbp-28h] BYREF

  if ( !Resource->ActiveEntries )
    return 0;
  CurrentThread = KeGetCurrentThread();
  if ( (struct _KTHREAD *)Resource->OwnerEntry.OwnerThread == CurrentThread )
    return Resource->OwnerEntry.TableSize >> 3;
  if ( (Resource->ReservedLowFlags & 0x80u) == 0 )
  {
    SpareByte0 = CurrentThread->SchedulerApc.SpareByte0;
    v4 = 0;
    EXP_LOCK_RESOURCE(Resource, v11);
    OwnerTable = Resource->OwnerTable;
    if ( OwnerTable )
    {
      TableSize = OwnerTable->TableSize;
      if ( SpareByte0 < TableSize && (struct _KTHREAD *)OwnerTable[SpareByte0].OwnerThread == CurrentThread )
      {
        v10 = (struct _OWNER_ENTRY::$818A6BB8E639852A52D20A2B257A1D60::$E71B718CD8428E7C8AA4A0868051E710)OwnerTable[SpareByte0].TableSize;
LABEL_15:
        v4 = *(unsigned int *)&v10 >> 3;
        goto LABEL_13;
      }
      v6 = 1LL;
      if ( TableSize > 1 )
      {
        while ( 1 )
        {
          v9 = OwnerTable[1].OwnerThread == (_QWORD)CurrentThread;
          ++OwnerTable;
          if ( v9 )
            break;
          v6 = (unsigned int)(v6 + 1);
          if ( (unsigned int)v6 >= TableSize )
            goto LABEL_13;
        }
        v10 = (struct _OWNER_ENTRY::$818A6BB8E639852A52D20A2B257A1D60::$E71B718CD8428E7C8AA4A0868051E710)OwnerTable->TableSize;
        goto LABEL_15;
      }
    }
LABEL_13:
    EXP_UNLOCK_RESOURCE(v6, v11);
    return v4;
  }
  return 0;
}
