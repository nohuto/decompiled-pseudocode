/*
 * XREFs of CmKeyBodyReplicateToVirtual @ 0x140657718
 * Callers:
 *     NtSetValueKey @ 0x140428350 (NtSetValueKey.c)
 *     NtSetInformationKey @ 0x140477A10 (NtSetInformationKey.c)
 *     NtRenameKey @ 0x140650A88 (NtRenameKey.c)
 * Callees:
 *     ObfDereferenceObject @ 0x14004ED50 (ObfDereferenceObject.c)
 *     memset @ 0x140195A80 (memset.c)
 *     CmpGetMappingHiveForString @ 0x14040799C (CmpGetMappingHiveForString.c)
 *     CmpGetVirtualizationIDFromFullVirtualPath @ 0x140407B24 (CmpGetVirtualizationIDFromFullVirtualPath.c)
 *     CmpIsMasterHive @ 0x140448D7C (CmpIsMasterHive.c)
 *     RtlFreeAnsiString @ 0x140450CB8 (RtlFreeAnsiString.c)
 *     CmpIsSystemEntity @ 0x140481E04 (CmpIsSystemEntity.c)
 *     CmpUnlockKcb @ 0x1404C53F0 (CmpUnlockKcb.c)
 *     CmpUnlockRegistry @ 0x1404C6A10 (CmpUnlockRegistry.c)
 *     CmpLockRegistry @ 0x1404C7410 (CmpLockRegistry.c)
 *     CmpLockKcbExclusive @ 0x1404CCB10 (CmpLockKcbExclusive.c)
 *     CmpSearchKeyControlBlockTree @ 0x140656F6C (CmpSearchKeyControlBlockTree.c)
 *     CmpCheckAdminAccess @ 0x140658050 (CmpCheckAdminAccess.c)
 *     CmpReparseToVirtualPath @ 0x140658F0C (CmpReparseToVirtualPath.c)
 *     CmpReplicateKeyToVirtual @ 0x140658F4C (CmpReplicateKeyToVirtual.c)
 *     CmpExamineSaclForAuditEvent @ 0x1406596D8 (CmpExamineSaclForAuditEvent.c)
 *     CmpReportAuditVirtualizationEvent @ 0x1406599C0 (CmpReportAuditVirtualizationEvent.c)
 *     CmObReferenceObjectByName @ 0x14065EAB8 (CmObReferenceObjectByName.c)
 */

__int64 __fastcall CmKeyBodyReplicateToVirtual(__int64 a1, char a2, ACCESS_MASK a3, int *a4)
{
  int VirtualizationIDFromFullVirtualPath; // ebx
  __int64 v9; // rcx
  __int64 v10; // rdx
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // rdx
  __int64 v16; // r9
  int v17; // edx
  int v18; // r9d
  _QWORD *v19; // rsi
  int v20; // eax
  UNICODE_STRING UnicodeString; // [rsp+4Ah] [rbp-BEh] BYREF
  int v23; // [rsp+5Ah] [rbp-AEh]
  __int16 v24; // [rsp+5Eh] [rbp-AAh]
  ULONG_PTR v25; // [rsp+60h] [rbp-A8h] BYREF
  unsigned __int16 v26[8]; // [rsp+68h] [rbp-A0h] BYREF
  _QWORD v27[3]; // [rsp+78h] [rbp-90h] BYREF
  int v28; // [rsp+90h] [rbp-78h]
  __int128 v29; // [rsp+98h] [rbp-70h]
  _QWORD v30[18]; // [rsp+A8h] [rbp-60h] BYREF

  *(&UnicodeString.MaximumLength + 2) = 0;
  UnicodeString.Buffer = 0LL;
  v23 = 0;
  v24 = 0;
  VirtualizationIDFromFullVirtualPath = 0;
  if ( !CmpVEEnabled )
    return (unsigned int)VirtualizationIDFromFullVirtualPath;
  v9 = *(_QWORD *)(*(_QWORD *)a1 + 8LL);
  if ( (*(_WORD *)(v9 + 186) & 0x200) != 0 || CmpIsMasterHive(v9) || CmpIsSystemEntity(a4) )
    return (unsigned int)VirtualizationIDFromFullVirtualPath;
  CmpLockRegistry();
  CmpLockKcbExclusive(*(_QWORD *)(*(_QWORD *)a1 + 8LL), v10, v11, v12);
  v14 = *(_QWORD *)(*(_QWORD *)a1 + 8LL);
  if ( (*(_DWORD *)(v14 + 4) & 0x20000) != 0 )
  {
    VirtualizationIDFromFullVirtualPath = -1073741444;
    goto LABEL_25;
  }
  if ( !(unsigned __int8)CmpReparseToVirtualPath(v14, v13, &UnicodeString.MaximumLength + 2) )
  {
    v15 = *(_QWORD *)(*(_QWORD *)a1 + 8LL);
    if ( (*(_DWORD *)(v15 + 184) & 0x20) == 0 )
    {
      VirtualizationIDFromFullVirtualPath = CmpCheckAdminAccess(
                                              a3,
                                              (PSECURITY_DESCRIPTOR)(*(_QWORD *)(v15 + 88) + 32LL));
      if ( VirtualizationIDFromFullVirtualPath >= 0 )
        VirtualizationIDFromFullVirtualPath = -1073741790;
      goto LABEL_12;
    }
    RtlFreeAnsiString((PUNICODE_STRING)(&UnicodeString.MaximumLength + 2));
    VirtualizationIDFromFullVirtualPath = -1073741790;
LABEL_25:
    CmpUnlockKcb(*(char **)(*(_QWORD *)a1 + 8LL));
    CmpUnlockRegistry();
    return (unsigned int)VirtualizationIDFromFullVirtualPath;
  }
LABEL_12:
  CmpUnlockKcb(*(char **)(*(_QWORD *)a1 + 8LL));
  if ( VirtualizationIDFromFullVirtualPath >= 0 )
  {
    VirtualizationIDFromFullVirtualPath = CmpGetVirtualizationIDFromFullVirtualPath(
                                            &UnicodeString.MaximumLength + 2,
                                            v26);
    if ( VirtualizationIDFromFullVirtualPath >= 0 )
    {
      VirtualizationIDFromFullVirtualPath = CmpGetMappingHiveForString(v26, &v25);
      if ( VirtualizationIDFromFullVirtualPath >= 0 )
        CmpSearchKeyControlBlockTree(
          (__int64 (__fastcall *)(__int64, ULONG_PTR, __int64))CmpSyncKcbCacheForHive,
          v25,
          0LL,
          v16);
    }
  }
  CmpUnlockRegistry();
  if ( VirtualizationIDFromFullVirtualPath >= 0 )
  {
    memset((char *)v30 + 4, 0, 0x84uLL);
    v19 = *(_QWORD **)a1;
    LODWORD(v30[0]) = 8;
    LODWORD(v27[0]) = 48;
    v30[10] = v19[7];
    v20 = 576;
    if ( a2 == 1 )
      v20 = 1600;
    v27[1] = 0LL;
    v28 = v20;
    v27[2] = &UnicodeString.MaximumLength + 2;
    v29 = 0LL;
    VirtualizationIDFromFullVirtualPath = CmObReferenceObjectByName(
                                            (unsigned int)v27,
                                            v17,
                                            a3,
                                            v18,
                                            0,
                                            (__int64)v30,
                                            a1);
    if ( VirtualizationIDFromFullVirtualPath < 0 )
      *(_QWORD *)a1 = v19;
    else
      ObfDereferenceObject(v19);
  }
  RtlFreeAnsiString((PUNICODE_STRING)(&UnicodeString.MaximumLength + 2));
  return (unsigned int)VirtualizationIDFromFullVirtualPath;
}
