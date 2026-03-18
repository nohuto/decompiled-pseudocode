/*
 * XREFs of ExIsResourceAcquiredSharedLite @ 0x14002D250
 * Callers:
 *     PpDevNodeLockTree @ 0x1403F4AB8 (PpDevNodeLockTree.c)
 *     NtDeleteValueKey @ 0x1403FA9B8 (NtDeleteValueKey.c)
 *     NtDeleteKey @ 0x1403FBA58 (NtDeleteKey.c)
 *     NtSetValueKey @ 0x140403098 (NtSetValueKey.c)
 *     CmpSecurityMethod @ 0x1404042B0 (CmpSecurityMethod.c)
 *     CmpQueryKeyName @ 0x1404044D0 (CmpQueryKeyName.c)
 *     FsRtlAcquireFileForCcFlushEx @ 0x14042BC1C (FsRtlAcquireFileForCcFlushEx.c)
 *     CmPostCallbackNotification @ 0x140439490 (CmPostCallbackNotification.c)
 *     NtEnumerateValueKey @ 0x140439540 (NtEnumerateValueKey.c)
 *     NtEnumerateKey @ 0x140439B70 (NtEnumerateKey.c)
 *     NtQueryKey @ 0x14043B2A0 (NtQueryKey.c)
 *     NtQueryValueKey @ 0x14043B880 (NtQueryValueKey.c)
 *     CmpParseKey @ 0x14043BF00 (CmpParseKey.c)
 *     CmpDeleteKeyObject @ 0x14043C400 (CmpDeleteKeyObject.c)
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
 *     CmpDoReOpenTransKey @ 0x140611C1C (CmpDoReOpenTransKey.c)
 * Callees:
 *     EXP_LOCK_RESOURCE @ 0x14022D8A4 (EXP_LOCK_RESOURCE.c)
 *     EXP_UNLOCK_RESOURCE @ 0x14022D918 (EXP_UNLOCK_RESOURCE.c)
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
