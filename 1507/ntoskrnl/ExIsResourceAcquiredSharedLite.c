/*
 * XREFs of ExIsResourceAcquiredSharedLite @ 0x1400CA650
 * Callers:
 *     CmLoadKeyHelper @ 0x1401DE79C (CmLoadKeyHelper.c)
 *     CmpQueryKeyName @ 0x140427100 (CmpQueryKeyName.c)
 *     NtEnumerateValueKey @ 0x1404273A0 (NtEnumerateValueKey.c)
 *     NtSetValueKey @ 0x140428350 (NtSetValueKey.c)
 *     CmpSecurityMethod @ 0x14042ABB4 (CmpSecurityMethod.c)
 *     NtDeleteKey @ 0x1404462E0 (NtDeleteKey.c)
 *     NtSetInformationKey @ 0x140477A10 (NtSetInformationKey.c)
 *     CmPostCallbackNotification @ 0x140478170 (CmPostCallbackNotification.c)
 *     FsRtlAcquireFileForCcFlushEx @ 0x1404B1FB8 (FsRtlAcquireFileForCcFlushEx.c)
 *     CmpParseKey @ 0x1404BEE10 (CmpParseKey.c)
 *     NtQueryValueKey @ 0x1404C0BB0 (NtQueryValueKey.c)
 *     NtQueryKey @ 0x1404C1230 (NtQueryKey.c)
 *     CmpDeleteKeyObject @ 0x1404C1BA0 (CmpDeleteKeyObject.c)
 *     NtEnumerateKey @ 0x1404C6220 (NtEnumerateKey.c)
 *     PpDevNodeLockTree @ 0x1404E20D8 (PpDevNodeLockTree.c)
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
 *     CmpDoReOpenTransKey @ 0x140665888 (CmpDoReOpenTransKey.c)
 *     VerifierExIsResourceAcquiredSharedLite @ 0x140741BCC (VerifierExIsResourceAcquiredSharedLite.c)
 * Callees:
 *     KxWaitForLockChainValid @ 0x14006D660 (KxWaitForLockChainValid.c)
 *     KxWaitForLockOwnerShipWithIrql @ 0x140103D00 (KxWaitForLockOwnerShipWithIrql.c)
 *     KiReleaseQueuedSpinLockInstrumented @ 0x14017E064 (KiReleaseQueuedSpinLockInstrumented.c)
 *     KiFastAcquireQueuedSpinLockInstrumented @ 0x140200C08 (KiFastAcquireQueuedSpinLockInstrumented.c)
 */

ULONG __stdcall ExIsResourceAcquiredSharedLite(PERESOURCE Resource)
{
  struct _KTHREAD *CurrentThread; // rbx
  ULONG v4; // esi
  __int64 SpareByte0; // rbp
  KSPIN_LOCK *p_SpinLock; // rcx
  char v7; // al
  __int64 v8; // rdx
  POWNER_ENTRY OwnerTable; // rax
  unsigned int TableSize; // edx
  int v11; // ecx
  bool v12; // zf
  __int64 v13; // rax
  struct _OWNER_ENTRY::$818A6BB8E639852A52D20A2B257A1D60::$E71B718CD8428E7C8AA4A0868051E710 v14; // esi
  __int64 v15; // [rsp+20h] [rbp-38h] BYREF
  KSPIN_LOCK *v16; // [rsp+28h] [rbp-30h]
  void *retaddr; // [rsp+58h] [rbp+0h]
  unsigned __int8 v18; // [rsp+60h] [rbp+8h] BYREF

  if ( !Resource->ActiveEntries )
    return 0;
  CurrentThread = KeGetCurrentThread();
  if ( (struct _KTHREAD *)Resource->OwnerEntry.OwnerThread == CurrentThread )
    return Resource->OwnerEntry.TableSize >> 2;
  if ( (Resource->ReservedLowFlags & 0x80u) == 0 )
  {
    SpareByte0 = CurrentThread->SchedulerApc.SpareByte0;
    p_SpinLock = &Resource->SpinLock;
    v18 = 2;
    v16 = p_SpinLock;
    v4 = 0;
    v15 = 0LL;
    _disable();
    if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
    {
      v7 = KiFastAcquireQueuedSpinLockInstrumented(&v15, p_SpinLock, &v18);
    }
    else
    {
      v7 = 0;
      v8 = _InterlockedExchange64((volatile __int64 *)p_SpinLock, (__int64)&v15);
      if ( v8 )
      {
        KxWaitForLockOwnerShipWithIrql(&v15, v8, &v18);
        v7 = 1;
      }
    }
    if ( v7 )
    {
      _disable();
      __writecr8(v18);
    }
    OwnerTable = Resource->OwnerTable;
    if ( OwnerTable )
    {
      TableSize = OwnerTable->TableSize;
      if ( (unsigned int)SpareByte0 < TableSize
        && (struct _KTHREAD *)OwnerTable[SpareByte0].OwnerThread == CurrentThread )
      {
        v14 = (struct _OWNER_ENTRY::$818A6BB8E639852A52D20A2B257A1D60::$E71B718CD8428E7C8AA4A0868051E710)OwnerTable[SpareByte0].TableSize;
      }
      else
      {
        v11 = 1;
        if ( TableSize <= 1 )
          goto LABEL_18;
        while ( 1 )
        {
          v12 = OwnerTable[1].OwnerThread == (_QWORD)CurrentThread;
          ++OwnerTable;
          if ( v12 )
            break;
          if ( ++v11 >= TableSize )
            goto LABEL_18;
        }
        v14 = (struct _OWNER_ENTRY::$818A6BB8E639852A52D20A2B257A1D60::$E71B718CD8428E7C8AA4A0868051E710)OwnerTable->TableSize;
      }
      v4 = *(unsigned int *)&v14 >> 2;
    }
LABEL_18:
    if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
    {
      KiReleaseQueuedSpinLockInstrumented(&v15, retaddr);
      goto LABEL_21;
    }
    _m_prefetchw(&v15);
    v13 = v15;
    if ( !v15 )
    {
      if ( (__int64 *)_InterlockedCompareExchange64((volatile signed __int64 *)v16, 0LL, (signed __int64)&v15) == &v15 )
      {
LABEL_21:
        _enable();
        return v4;
      }
      v13 = KxWaitForLockChainValid(&v15);
    }
    v15 = 0LL;
    _InterlockedXor64((volatile signed __int64 *)(v13 + 8), 1uLL);
    goto LABEL_21;
  }
  return 0;
}
