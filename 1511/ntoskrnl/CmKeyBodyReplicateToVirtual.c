/*
 * XREFs of CmKeyBodyReplicateToVirtual @ 0x1405E19C4
 * Callers:
 *     NtSetValueKey @ 0x1403F2FD0 (NtSetValueKey.c)
 *     NtSetInformationKey @ 0x140424400 (NtSetInformationKey.c)
 *     NtRenameKey @ 0x1405DC010 (NtRenameKey.c)
 * Callees:
 *     ObfDereferenceObject @ 0x140042920 (ObfDereferenceObject.c)
 *     memset @ 0x140166CC0 (memset.c)
 *     CmpGetMappingHiveForString @ 0x1403BC7AC (CmpGetMappingHiveForString.c)
 *     CmpGetVirtualizationIDFromFullVirtualPath @ 0x1403BC944 (CmpGetVirtualizationIDFromFullVirtualPath.c)
 *     CmpIsMasterHive @ 0x1403DF1A0 (CmpIsMasterHive.c)
 *     CmpLockKcbExclusive @ 0x1403F9950 (CmpLockKcbExclusive.c)
 *     CmpIsSystemEntity @ 0x1403FBD30 (CmpIsSystemEntity.c)
 *     CmpUnlockKcb @ 0x1403FE4F0 (CmpUnlockKcb.c)
 *     CmpUnlockRegistry @ 0x140423B00 (CmpUnlockRegistry.c)
 *     CmpLockRegistry @ 0x140423C10 (CmpLockRegistry.c)
 *     RtlFreeAnsiString @ 0x140445624 (RtlFreeAnsiString.c)
 *     ObReferenceObjectByName @ 0x14046F95C (ObReferenceObjectByName.c)
 *     CmpCheckAdminAccess @ 0x1404974C8 (CmpCheckAdminAccess.c)
 *     CmpSearchKeyControlBlockTree @ 0x1405E1248 (CmpSearchKeyControlBlockTree.c)
 *     CmpReparseToVirtualPath @ 0x1405E2990 (CmpReparseToVirtualPath.c)
 *     CmpReplicateKeyToVirtual @ 0x1405E29D0 (CmpReplicateKeyToVirtual.c)
 *     CmpExamineSaclForAuditEvent @ 0x1405E321C (CmpExamineSaclForAuditEvent.c)
 *     CmpReportAuditVirtualizationEvent @ 0x1405E3324 (CmpReportAuditVirtualizationEvent.c)
 */

__int64 __fastcall CmKeyBodyReplicateToVirtual(__int64 *a1, ACCESS_MASK a2, int *a3)
{
  int VirtualizationIDFromFullVirtualPath; // ebx
  __int64 v7; // rcx
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // rdx
  int v11; // eax
  __int64 v12; // rax
  __int64 v13; // rdx
  _QWORD *v14; // rsi
  UNICODE_STRING UnicodeString; // [rsp+48h] [rbp-69h] BYREF
  unsigned __int16 v17[8]; // [rsp+58h] [rbp-59h] BYREF
  _QWORD v18[18]; // [rsp+68h] [rbp-49h] BYREF
  ULONG_PTR v19; // [rsp+130h] [rbp+7Fh] BYREF

  UnicodeString.Length = 0;
  *(_QWORD *)&UnicodeString.MaximumLength = 0LL;
  *(_DWORD *)((char *)&UnicodeString.Buffer + 2) = 0;
  HIWORD(UnicodeString.Buffer) = 0;
  VirtualizationIDFromFullVirtualPath = 0;
  LOBYTE(v19) = 0;
  while ( 1 )
  {
    if ( !CmpVEEnabled )
      return (unsigned int)VirtualizationIDFromFullVirtualPath;
    v7 = *(_QWORD *)(*a1 + 8);
    if ( (*(_WORD *)(v7 + 186) & 0x200) != 0 || CmpIsMasterHive(v7) || CmpIsSystemEntity(a3) )
      return (unsigned int)VirtualizationIDFromFullVirtualPath;
    CmpLockRegistry();
    CmpLockKcbExclusive(*(_QWORD *)(*a1 + 8));
    v9 = *(_QWORD *)(*a1 + 8);
    if ( (*(_DWORD *)(v9 + 4) & 0x20000) != 0 )
    {
      VirtualizationIDFromFullVirtualPath = -1073741444;
      goto LABEL_33;
    }
    if ( (unsigned __int8)CmpReparseToVirtualPath(v9, v8, &UnicodeString) )
      goto LABEL_21;
    v10 = *(_QWORD *)(*a1 + 8);
    if ( (*(_DWORD *)(v10 + 184) & 0x20) != 0 )
    {
      RtlFreeAnsiString(&UnicodeString);
      VirtualizationIDFromFullVirtualPath = -1073741790;
LABEL_33:
      CmpUnlockKcb(*(char **)(*a1 + 8));
      CmpUnlockRegistry();
      return (unsigned int)VirtualizationIDFromFullVirtualPath;
    }
    VirtualizationIDFromFullVirtualPath = CmpCheckAdminAccess(
                                            a2,
                                            (PSECURITY_DESCRIPTOR)(*(_QWORD *)(v10 + 88) + 32LL),
                                            (bool *)&v19);
    if ( VirtualizationIDFromFullVirtualPath < 0 )
      goto LABEL_21;
    if ( !(_BYTE)v19 )
      break;
    v11 = CmpReplicateKeyToVirtual(*(_QWORD *)(*a1 + 8), v17);
    VirtualizationIDFromFullVirtualPath = v11;
    if ( v11 != -1073741739 )
    {
      if ( v11 >= 0 )
      {
        v12 = *a1;
        LOBYTE(v19) = 0;
        VirtualizationIDFromFullVirtualPath = CmpExamineSaclForAuditEvent((PSECURITY_DESCRIPTOR)(*(_QWORD *)(*(_QWORD *)(v12 + 8) + 88LL)
                                                                                               + 32LL));
        if ( VirtualizationIDFromFullVirtualPath >= 0 )
        {
          if ( (_BYTE)v19 )
            VirtualizationIDFromFullVirtualPath = CmpReportAuditVirtualizationEvent(*(_QWORD *)(*a1 + 8));
          if ( VirtualizationIDFromFullVirtualPath >= 0
            && !(unsigned __int8)CmpReparseToVirtualPath(*(_QWORD *)(*a1 + 8), v13, &UnicodeString) )
          {
            VirtualizationIDFromFullVirtualPath = -1073741670;
          }
        }
      }
      goto LABEL_21;
    }
    CmpUnlockKcb(*(char **)(*a1 + 8));
    CmpUnlockRegistry();
    RtlFreeAnsiString(&UnicodeString);
  }
  VirtualizationIDFromFullVirtualPath = -1073741790;
LABEL_21:
  CmpUnlockKcb(*(char **)(*a1 + 8));
  if ( VirtualizationIDFromFullVirtualPath >= 0 )
  {
    VirtualizationIDFromFullVirtualPath = CmpGetVirtualizationIDFromFullVirtualPath(&UnicodeString, v17);
    if ( VirtualizationIDFromFullVirtualPath >= 0 )
    {
      VirtualizationIDFromFullVirtualPath = CmpGetMappingHiveForString(v17, &v19);
      if ( VirtualizationIDFromFullVirtualPath >= 0 )
        CmpSearchKeyControlBlockTree(
          (__int64 (__fastcall *)(__int64, ULONG_PTR, __int64))CmpSyncKcbCacheForHive,
          v19,
          0LL);
    }
  }
  CmpUnlockRegistry();
  if ( VirtualizationIDFromFullVirtualPath >= 0 )
  {
    memset((char *)v18 + 4, 0, 0x84uLL);
    v14 = (_QWORD *)*a1;
    LODWORD(v18[0]) = 8;
    v18[10] = v14[7];
    VirtualizationIDFromFullVirtualPath = ObReferenceObjectByName(
                                            (ULONG64)&UnicodeString,
                                            576,
                                            0LL,
                                            0,
                                            (struct _OBJECT_TYPE *)CmKeyObjectType,
                                            0,
                                            (__int64)v18,
                                            a1);
    if ( VirtualizationIDFromFullVirtualPath < 0 )
      *a1 = (__int64)v14;
    else
      ObfDereferenceObject(v14);
  }
  RtlFreeAnsiString(&UnicodeString);
  return (unsigned int)VirtualizationIDFromFullVirtualPath;
}
