/*
 * XREFs of ExIsResourceAcquiredSharedLite @ 0x14003DAD0
 * Callers:
 *     NtDeleteValueKey @ 0x1403D4700 (NtDeleteValueKey.c)
 *     NtDeleteKey @ 0x1403DA844 (NtDeleteKey.c)
 *     NtLoadKeyEx @ 0x1403DB3CC (NtLoadKeyEx.c)
 *     NtSetValueKey @ 0x1403F2FD0 (NtSetValueKey.c)
 *     NtEnumerateKey @ 0x1403FD480 (NtEnumerateKey.c)
 *     NtQueryKey @ 0x1404003C0 (NtQueryKey.c)
 *     NtQueryValueKey @ 0x140400BF0 (NtQueryValueKey.c)
 *     CmpParseKey @ 0x1404014E0 (CmpParseKey.c)
 *     CmpDeleteKeyObject @ 0x1404036E0 (CmpDeleteKeyObject.c)
 *     CmpQueryKeyName @ 0x140420760 (CmpQueryKeyName.c)
 *     CmpSecurityMethod @ 0x140421960 (CmpSecurityMethod.c)
 *     NtEnumerateValueKey @ 0x140423C60 (NtEnumerateValueKey.c)
 *     NtSetInformationKey @ 0x140424400 (NtSetInformationKey.c)
 *     CmPostCallbackNotification @ 0x140424CB0 (CmPostCallbackNotification.c)
 *     FsRtlAcquireFileForCcFlushEx @ 0x140455928 (FsRtlAcquireFileForCcFlushEx.c)
 *     PpDevNodeLockTree @ 0x140458D00 (PpDevNodeLockTree.c)
 *     NtFlushKey @ 0x140498460 (NtFlushKey.c)
 *     NtUnloadKeyEx @ 0x1404986A4 (NtUnloadKeyEx.c)
 *     NtQueryMultipleValueKey @ 0x1404A8360 (NtQueryMultipleValueKey.c)
 *     NtUnloadKey2 @ 0x14050ABE0 (NtUnloadKey2.c)
 *     NtRenameKey @ 0x1405DC010 (NtRenameKey.c)
 *     NtReplaceKey @ 0x1405DC458 (NtReplaceKey.c)
 *     NtRestoreKey @ 0x1405DC6C0 (NtRestoreKey.c)
 *     NtSaveKey @ 0x1405DC954 (NtSaveKey.c)
 *     NtSaveKeyEx @ 0x1405DCB94 (NtSaveKeyEx.c)
 *     VerifierExIsResourceAcquiredSharedLite @ 0x1406C03D8 (VerifierExIsResourceAcquiredSharedLite.c)
 * Callees:
 *     KxReleaseQueuedSpinLock @ 0x140040BF0 (KxReleaseQueuedSpinLock.c)
 *     KxWaitForLockOwnerShipWithIrql @ 0x1400CFA00 (KxWaitForLockOwnerShipWithIrql.c)
 *     KiFastAcquireQueuedSpinLockInstrumented @ 0x1401C48DC (KiFastAcquireQueuedSpinLockInstrumented.c)
 */

ULONG __stdcall ExIsResourceAcquiredSharedLite(PERESOURCE Resource)
{
  __int64 v1; // r8
  __int64 v2; // r9
  struct _KTHREAD *CurrentThread; // rbx
  ULONG v6; // esi
  __int64 SpareByte0; // rbp
  KSPIN_LOCK *p_SpinLock; // rcx
  char v9; // al
  __int64 TableSize; // rdx
  POWNER_ENTRY OwnerTable; // rax
  int v12; // ecx
  bool v13; // zf
  struct _OWNER_ENTRY::$818A6BB8E639852A52D20A2B257A1D60::$E71B718CD8428E7C8AA4A0868051E710 v14; // esi
  _QWORD v15[5]; // [rsp+20h] [rbp-28h] BYREF
  unsigned __int8 v16; // [rsp+50h] [rbp+8h] BYREF

  if ( !Resource->ActiveEntries )
    return 0;
  CurrentThread = KeGetCurrentThread();
  if ( (struct _KTHREAD *)Resource->OwnerEntry.OwnerThread == CurrentThread )
    return Resource->OwnerEntry.TableSize >> 2;
  if ( (Resource->ReservedLowFlags & 0x80u) == 0 )
  {
    v6 = 0;
    SpareByte0 = CurrentThread->SchedulerApc.SpareByte0;
    p_SpinLock = &Resource->SpinLock;
    v15[1] = p_SpinLock;
    v16 = 2;
    v15[0] = 0LL;
    _disable();
    if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
    {
      v9 = KiFastAcquireQueuedSpinLockInstrumented(v15, p_SpinLock, &v16);
    }
    else
    {
      v9 = 0;
      TableSize = _InterlockedExchange64((volatile __int64 *)p_SpinLock, (__int64)v15);
      if ( TableSize )
      {
        KxWaitForLockOwnerShipWithIrql(v15, TableSize, &v16);
        v9 = 1;
      }
    }
    if ( v9 )
    {
      _disable();
      __writecr8(v16);
    }
    OwnerTable = Resource->OwnerTable;
    if ( !OwnerTable )
      goto LABEL_18;
    TableSize = OwnerTable->TableSize;
    if ( (unsigned int)SpareByte0 < (unsigned int)TableSize
      && (v1 = 2 * SpareByte0, (struct _KTHREAD *)OwnerTable[SpareByte0].OwnerThread == CurrentThread) )
    {
      v14 = (struct _OWNER_ENTRY::$818A6BB8E639852A52D20A2B257A1D60::$E71B718CD8428E7C8AA4A0868051E710)OwnerTable[SpareByte0].TableSize;
    }
    else
    {
      v12 = 1;
      if ( (unsigned int)TableSize <= 1 )
      {
LABEL_18:
        KxReleaseQueuedSpinLock(v15, TableSize, v1, v2);
        _enable();
        return v6;
      }
      while ( 1 )
      {
        v13 = OwnerTable[1].OwnerThread == (_QWORD)CurrentThread;
        ++OwnerTable;
        if ( v13 )
          break;
        if ( ++v12 >= (unsigned int)TableSize )
          goto LABEL_18;
      }
      v14 = (struct _OWNER_ENTRY::$818A6BB8E639852A52D20A2B257A1D60::$E71B718CD8428E7C8AA4A0868051E710)OwnerTable->TableSize;
    }
    v6 = *(unsigned int *)&v14 >> 2;
    goto LABEL_18;
  }
  return 0;
}
