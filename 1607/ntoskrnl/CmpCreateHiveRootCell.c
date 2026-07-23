/*
 * XREFs of CmpCreateHiveRootCell @ 0x140141494
 * Callers:
 *     CmpDoParseKey @ 0x140452BE0 (CmpDoParseKey.c)
 * Callees:
 *     memset @ 0x140171AC0 (memset.c)
 *     CmpGenerateAppHiveSecurityDescriptor @ 0x1401B4DC4 (CmpGenerateAppHiveSecurityDescriptor.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     SeAssignSecurity @ 0x1403FBB28 (SeAssignSecurity.c)
 *     CmpAssignSecurityDescriptor @ 0x1403FBC3C (CmpAssignSecurityDescriptor.c)
 *     CmpLockHiveFlusherShared @ 0x1403FC424 (CmpLockHiveFlusherShared.c)
 *     CmLockHiveSecurityExclusive @ 0x1403FC434 (CmLockHiveSecurityExclusive.c)
 *     CmUnlockHiveSecurity @ 0x1403FC47C (CmUnlockHiveSecurity.c)
 *     CmpUnlockHiveFlusher @ 0x1403FC4C8 (CmpUnlockHiveFlusher.c)
 *     HvFreeCell @ 0x1404005AC (HvFreeCell.c)
 *     CmpCopyName @ 0x140400BB4 (CmpCopyName.c)
 *     HvAllocateCell @ 0x140400BFC (HvAllocateCell.c)
 *     CmpNameSize @ 0x1404010E0 (CmpNameSize.c)
 *     HvCheckAndUpdateHiveBackupTimeStamp @ 0x14047F024 (HvCheckAndUpdateHiveBackupTimeStamp.c)
 *     SeDeassignSecurity @ 0x1404BBEA8 (SeDeassignSecurity.c)
 *     CmpUnlockHiveWriter @ 0x140564B84 (CmpUnlockHiveWriter.c)
 *     HvMarkBaseBlockDirty @ 0x140564B90 (HvMarkBaseBlockDirty.c)
 *     CmpLockHiveWriter @ 0x140564BE8 (CmpLockHiveWriter.c)
 */

__int64 __fastcall CmpCreateHiveRootCell(
        ULONG_PTR BugCheckParameter2,
        __int64 a2,
        unsigned __int16 *a3,
        __int64 a4,
        unsigned int *a5)
{
  unsigned int v9; // edi
  unsigned int v10; // r15d
  size_t v11; // r8
  _WORD *v12; // rdi
  _DWORD *v13; // r14
  unsigned __int16 v14; // ax
  NTSTATUS v15; // eax
  PSECURITY_DESCRIPTOR AppHiveSecurityDescriptor; // rdi
  int v17; // esi
  __int64 v18; // r13
  void *v19; // rcx
  void *v21; // [rsp+40h] [rbp-10h] BYREF
  __int64 v22; // [rsp+48h] [rbp-8h] BYREF
  PSECURITY_DESCRIPTOR NewDescriptor; // [rsp+80h] [rbp+30h] BYREF

  v21 = 0LL;
  NewDescriptor = 0LL;
  v22 = 0xFFFFFFFFLL;
  CmpLockHiveFlusherShared(BugCheckParameter2);
  v9 = (unsigned __int16)CmpNameSize(a3) + 76;
  v10 = HvAllocateCell(BugCheckParameter2, v9, 0LL, &v21, &v22);
  if ( v10 == -1 )
  {
    v13 = v21;
    v17 = -1073741670;
    goto LABEL_16;
  }
  v11 = v9;
  v12 = v21;
  memset(v21, 0, v11);
  *(_DWORD *)v12 = 813934;
  v13 = v21;
  *(_QWORD *)((char *)v21 + 4) = MEMORY[0xFFFFF78000000014];
  v13[4] = -1;
  v13[7] = -1;
  v13[8] = -1;
  v13[10] = -1;
  v13[11] = -1;
  v13[12] = -1;
  v14 = CmpCopyName(v13 + 19, a3);
  *((_WORD *)v13 + 36) = v14;
  if ( v14 < *a3 )
    v12[1] |= 0x20u;
  if ( (*(_DWORD *)(BugCheckParameter2 + 5360) & 0x20) != 0 )
  {
    AppHiveSecurityDescriptor = (PSECURITY_DESCRIPTOR)CmpGenerateAppHiveSecurityDescriptor();
    NewDescriptor = AppHiveSecurityDescriptor;
    goto LABEL_6;
  }
  v15 = SeAssignSecurity(
          0LL,
          *(PSECURITY_DESCRIPTOR *)(a2 + 64),
          &NewDescriptor,
          1u,
          (PSECURITY_SUBJECT_CONTEXT)(a2 + 32),
          (PGENERIC_MAPPING)((char *)CmKeyObjectType + 76),
          *((POOL_TYPE *)CmKeyObjectType + 25));
  AppHiveSecurityDescriptor = NewDescriptor;
  v17 = v15;
  if ( v15 >= 0 )
  {
LABEL_6:
    CmLockHiveSecurityExclusive(BugCheckParameter2);
    v17 = CmpAssignSecurityDescriptor(BugCheckParameter2, v10, v13, AppHiveSecurityDescriptor);
    CmUnlockHiveSecurity(BugCheckParameter2);
    if ( v17 >= 0 )
    {
      CmpLockHiveWriter(*(_QWORD *)(a4 + 48));
      HvMarkBaseBlockDirty(*(_QWORD *)(a4 + 48));
      v17 = HvCheckAndUpdateHiveBackupTimeStamp(*(_QWORD *)(a4 + 48));
      CmpUnlockHiveWriter(*(_QWORD *)(a4 + 48));
      if ( v17 >= 0 )
      {
        *(_DWORD *)(*(_QWORD *)(BugCheckParameter2 + 64) + 36LL) = v10;
        *a5 = v10;
        v10 = -1;
        v17 = 0;
      }
    }
  }
  if ( AppHiveSecurityDescriptor )
  {
    if ( (*(_DWORD *)(BugCheckParameter2 + 5360) & 0x20) != 0 )
    {
      ExFreePoolWithTag(AppHiveSecurityDescriptor, 0);
    }
    else if ( (*(_DWORD *)a4 & 1) != 0 && (*(_DWORD *)(a4 + 24) & 4) != 0 )
    {
      SeDeassignSecurity(&NewDescriptor);
    }
    else
    {
      v18 = *(_QWORD *)(a2 + 72);
      v19 = *(void **)(v18 + 48);
      if ( v19 )
        ExFreePoolWithTag(v19, 0);
      *(_QWORD *)(v18 + 48) = AppHiveSecurityDescriptor;
    }
  }
LABEL_16:
  if ( v13 )
    (*(void (__fastcall **)(ULONG_PTR, __int64 *))(BugCheckParameter2 + 16))(BugCheckParameter2, &v22);
  if ( v10 != -1 )
    HvFreeCell(BugCheckParameter2, v10);
  CmpUnlockHiveFlusher(BugCheckParameter2);
  return (unsigned int)v17;
}
