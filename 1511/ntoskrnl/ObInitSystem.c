/*
 * XREFs of ObInitSystem @ 0x140758E84
 * Callers:
 *     InitBootProcessor @ 0x140763EA0 (InitBootProcessor.c)
 *     Phase1InitializationDiscard @ 0x1407645E8 (Phase1InitializationDiscard.c)
 * Callees:
 *     RtlGetAce @ 0x140003350 (RtlGetAce.c)
 *     ExGenRandom @ 0x14002D854 (ExGenRandom.c)
 *     RtlInitUnicodeString @ 0x140043C70 (RtlInitUnicodeString.c)
 *     ObpReleaseLookupContext @ 0x14009C320 (ObpReleaseLookupContext.c)
 *     ObpLockDirectoryExclusive @ 0x1400CF104 (ObpLockDirectoryExclusive.c)
 *     ExInitializeNPagedLookasideList @ 0x140105A8C (ExInitializeNPagedLookasideList.c)
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 *     memset @ 0x140166CC0 (memset.c)
 *     ExAllocatePoolWithTag @ 0x140238380 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
 *     ExInitializeSystemLookasideList @ 0x1403A7B7C (ExInitializeSystemLookasideList.c)
 *     RtlAddAccessAllowedAce @ 0x1403C01BC (RtlAddAccessAllowedAce.c)
 *     RtlCreateSecurityDescriptor @ 0x1403C091C (RtlCreateSecurityDescriptor.c)
 *     RtlSetSaclSecurityDescriptor @ 0x1403C0948 (RtlSetSaclSecurityDescriptor.c)
 *     ObReferenceObjectByHandle @ 0x14040B9B0 (ObReferenceObjectByHandle.c)
 *     RtlCreateAcl @ 0x14043549C (RtlCreateAcl.c)
 *     NtCreateDirectoryObject @ 0x14044E338 (NtCreateDirectoryObject.c)
 *     ExCreateHandleTable @ 0x140460B44 (ExCreateHandleTable.c)
 *     RtlSetDaclSecurityDescriptor @ 0x140478384 (RtlSetDaclSecurityDescriptor.c)
 *     ObpInsertDirectoryEntry @ 0x1404AA9B4 (ObpInsertDirectoryEntry.c)
 *     NtClose @ 0x1404DAF00 (NtClose.c)
 *     ObInitializeProcessor @ 0x1405257CC (ObInitializeProcessor.c)
 *     ObpLookupDirectoryEntry @ 0x140525B20 (ObpLookupDirectoryEntry.c)
 *     ObCreateObjectType @ 0x140525B3C (ObCreateObjectType.c)
 *     PsRegisterMonitorServerSilo @ 0x140526694 (PsRegisterMonitorServerSilo.c)
 *     PsStartMonitorServerSilo @ 0x1405268B8 (PsStartMonitorServerSilo.c)
 *     RtlAddAuditAccessAce @ 0x140644D1C (RtlAddAuditAccessAce.c)
 *     ObpInitInfoBlockOffsets @ 0x140768448 (ObpInitInfoBlockOffsets.c)
 *     ObpCreateDosDevicesDirectory @ 0x14076D380 (ObpCreateDosDevicesDirectory.c)
 *     ObpInitStackTrace @ 0x14077148C (ObpInitStackTrace.c)
 */

char ObInitSystem()
{
  __int16 v0; // si
  __int16 v1; // r14
  int v2; // eax
  unsigned int v3; // edi
  struct _KPRCB *CurrentPrcb; // rax
  __int64 v5; // rcx
  _QWORD *v6; // rax
  int v7; // ebx
  struct _NPAGED_LOOKASIDE_LIST *v8; // rbx
  __int64 v9; // rax
  _BYTE *v10; // rbx
  NTSTATUS v11; // eax
  ULONG v12; // edi
  ACL *PoolWithTag; // rax
  ACL *v14; // rbx
  NTSTATUS v15; // eax
  ACL *v16; // rcx
  NTSTATUS v17; // eax
  NTSTATUS v18; // eax
  NTSTATUS v19; // eax
  char *v20; // rdi
  char *v21; // rbx
  char *v22; // rdx
  ULONG v24; // edx
  ULONG v25; // edx
  void *v26; // r9
  _BYTE *v27; // rax
  BOOLEAN Size; // [rsp+28h] [rbp-E0h]
  BOOLEAN Tag; // [rsp+30h] [rbp-D8h]
  HANDLE Handle; // [rsp+48h] [rbp-C0h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+50h] [rbp-B8h] BYREF
  PVOID v32; // [rsp+80h] [rbp-88h] BYREF
  HANDLE DirectoryHandle; // [rsp+88h] [rbp-80h] BYREF
  UNICODE_STRING v34; // [rsp+90h] [rbp-78h] BYREF
  PVOID Ace; // [rsp+A0h] [rbp-68h] BYREF
  PVOID Object; // [rsp+A8h] [rbp-60h] BYREF
  _QWORD v37[16]; // [rsp+B8h] [rbp-50h] BYREF
  __int128 v38; // [rsp+138h] [rbp+30h] BYREF
  __int16 v39; // [rsp+156h] [rbp+4Eh]
  int v40; // [rsp+158h] [rbp+50h]
  UNICODE_STRING v41; // [rsp+160h] [rbp+58h] BYREF
  UNICODE_STRING DestinationString; // [rsp+170h] [rbp+68h] BYREF
  UNICODE_STRING v43; // [rsp+180h] [rbp+78h] BYREF
  _QWORD v44[6]; // [rsp+190h] [rbp+88h] BYREF
  UNICODE_STRING v45; // [rsp+1C0h] [rbp+B8h] BYREF
  _BYTE v46[40]; // [rsp+1D0h] [rbp+C8h] BYREF
  _BYTE SecurityDescriptor[48]; // [rsp+1F8h] [rbp+F0h] BYREF
  ACL Acl; // [rsp+228h] [rbp+120h] BYREF

  if ( (_BYTE)dword_140381118 )
  {
    v0 = 64;
    v1 = 32;
  }
  else
  {
    v0 = 32;
    v1 = 16;
  }
  v2 = InitializationPhase;
  v3 = 24;
  if ( !(_DWORD)InitializationPhase )
  {
    ObHeaderCookie = ExGenRandom(0);
    ExInitializeSystemLookasideList(
      (__int64)&ObpCreateInfoLookasideList,
      512,
      64,
      1766023759,
      v0,
      (__int64)&ExSystemLookasideListHead);
    ExInitializeSystemLookasideList(
      (__int64)&ObpNameBufferLookasideList,
      1,
      248,
      1833853519,
      v1,
      (__int64)&ExSystemLookasideListHead);
    CurrentPrcb = KeGetCurrentPrcb();
    v5 = 257LL;
    CurrentPrcb->PPLookasideList[4].L = (_GENERAL_LOOKASIDE *)&ObpCreateInfoLookasideList;
    CurrentPrcb->PPLookasideList[4].P = (_GENERAL_LOOKASIDE *)&ObpCreateInfoLookasideList;
    CurrentPrcb->PPLookasideList[5].L = (_GENERAL_LOOKASIDE *)&ObpNameBufferLookasideList;
    CurrentPrcb->PPLookasideList[5].P = (_GENERAL_LOOKASIDE *)&ObpNameBufferLookasideList;
    v6 = &unk_1402DFD88;
    ObpRemoveObjectList = 0LL;
    ObpRemoveObjectWait = 0LL;
    do
    {
      *(v6 - 1) = 0LL;
      v6[1] = v6;
      *v6 = v6;
      v6 += 3;
      --v5;
    }
    while ( v5 );
    ObpDefaultObject = 0;
    qword_1402DF990 = (__int64)&qword_1402DF988;
    qword_1402DF988 = (__int64)&qword_1402DF988;
    byte_1402DF982 = 6;
    dword_1402DF984 = 1;
    ObpKernelHandleTable = (ULONG_PTR)ExCreateHandleTable(0LL, 1);
    KeGetCurrentThread()->ApcState.Process[1].ActiveProcessors.Bitmap[5] = ObpKernelHandleTable;
    if ( !ObpKernelHandleTable )
      return 0;
    ObpRemoveObjectWorkItem.Parameter = 0LL;
    ObpRemoveObjectWorkItem.WorkerRoutine = (void (__fastcall *)(void *))ObpProcessRemoveObjectQueue;
    qword_1402DF9D8 = (__int64)ObpProcessRemoveObjectDpcWorker;
    ObpRemoveObjectWorkItem.List.Flink = 0LL;
    LODWORD(ObpRemoveObjectDpc) = 275;
    qword_1402DF9E0 = 0LL;
    qword_1402DF9F8 = 0LL;
    qword_1402DF9D0 = 0LL;
    ObpInitInfoBlockOffsets();
    qword_1403828D8 = (__int64)MmBadPointer;
    memset(v37, 0, 0x78uLL);
    LOWORD(v37[0]) = 120;
    LODWORD(v37[1]) = 256;
    HIDWORD(v37[4]) = 512;
    RtlInitUnicodeString(&DestinationString, L"Type");
    BYTE2(v37[0]) |= 0x24u;
    HIDWORD(v37[3]) = 983041;
    HIDWORD(v37[5]) = 216;
    *(_OWORD *)((char *)&v37[1] + 4) = ObpTypeMapping;
    if ( (int)ObCreateObjectType(&DestinationString, (__int64)v37, 0LL, (__int64)&ObpTypeObjectType) < 0 )
      return 0;
    HIDWORD(v37[4]) = 1;
    RtlInitUnicodeString(&v43, L"Directory");
    HIDWORD(v37[5]) = 352;
    BYTE2(v37[0]) = BYTE2(v37[0]) & 0xD2 | 0xD;
    HIDWORD(v37[3]) = 983055;
    v37[8] = ObpCloseDirectoryObject;
    v37[9] = ObpDeleteDirectoryObject;
    *(_OWORD *)((char *)&v37[1] + 4) = ObpDirectoryMapping;
    if ( (int)ObCreateObjectType(&v43, (__int64)v37, 0LL, (__int64)&ObpDirectoryObjectType) < 0 )
      return 0;
    v37[8] = 0LL;
    ObpDirectoryObjectType->TypeInfo.ValidAccessMask &= ~0x100000u;
    RtlInitUnicodeString(&v41, L"SymbolicLink");
    v37[9] = ObpDeleteSymbolicLink;
    HIDWORD(v37[5]) = 32;
    v37[10] = ObpParseSymbolicLink;
    HIDWORD(v37[4]) = 1;
    HIDWORD(v37[3]) = 0xFFFFF;
    BYTE2(v37[0]) = BYTE2(v37[0]) & 0xF6 | 1;
    *(_OWORD *)((char *)&v37[1] + 4) = ObpSymbolicLinkMapping;
    if ( (int)ObCreateObjectType(&v41, (__int64)v37, 0LL, (__int64)&ObpSymbolicLinkObjectType) < 0 )
      return 0;
    ObpSymbolicLinkObjectType->TypeInfo.ValidAccessMask &= ~0x100000u;
    ObpInitStackTrace();
    v2 = InitializationPhase;
  }
  if ( v2 != 1 )
    return 1;
  memset(v44, 0, sizeof(v44));
  WORD1(v44[0]) |= 1u;
  v44[1] = ObInitServerSilo;
  LOWORD(v44[0]) = 1;
  PsRegisterMonitorServerSilo(0LL, L"NTOS_OB", (__int64)v44, &ObSiloMonitor);
  PsStartMonitorServerSilo(ObSiloMonitor);
  v7 = 0;
  if ( (_DWORD)KeNumberProcessors_0 )
  {
    while ( (int)ObInitializeProcessor((_QWORD *)KiProcessorBlock[v7]) >= 0 )
    {
      if ( ++v7 >= (unsigned int)KeNumberProcessors_0 )
        goto LABEL_15;
    }
    return 0;
  }
LABEL_15:
  v8 = &ObpWaitBlockLookaside;
  do
  {
    v9 = v3;
    if ( v3 >= 0x40 )
      v9 = 64LL;
    ExInitializeNPagedLookasideList(v8, 0LL, 0LL, 0x200u, 48 * v9, 0x6D57624Fu, 0);
    v3 += 14;
    ++v8;
  }
  while ( v3 < 0x50 );
  v10 = (_BYTE *)SePublicDefaultUnrestrictedSd;
  if ( !ObpAuditBaseDirectories && !ObpAuditBaseObjects )
    goto LABEL_65;
  v24 = 4 * *((unsigned __int8 *)SeWorldSid + 1) + 28;
  if ( v24 < 0xFA
    && RtlCreateAcl(&Acl, v24, 2u) >= 0
    && RtlAddAuditAccessAce(&Acl, v25, 0x60000000u, v26, Size, Tag) >= 0
    && RtlGetAce(&Acl, 0, &Ace) >= 0 )
  {
    v27 = Ace;
    if ( ObpAuditBaseDirectories )
      *((_BYTE *)Ace + 1) |= 0xAu;
    if ( ObpAuditBaseObjects )
      v27[1] |= 9u;
    v10 = v46;
    if ( RtlCreateSecurityDescriptor(v46, 1u) >= 0
      && RtlSetDaclSecurityDescriptor(v46, 1u, SePublicDefaultUnrestrictedDacl, 0) >= 0
      && RtlSetSaclSecurityDescriptor(v46, 1u, &Acl, 0) >= 0 )
    {
LABEL_65:
      RtlInitUnicodeString(&v45, L"\\");
      ObjectAttributes.Length = 48;
      ObjectAttributes.ObjectName = &v45;
      ObjectAttributes.RootDirectory = 0LL;
      ObjectAttributes.Attributes = 80;
      ObjectAttributes.SecurityDescriptor = v10;
      ObjectAttributes.SecurityQualityOfService = 0LL;
      if ( NtCreateDirectoryObject(&DirectoryHandle, 0xF000Fu, &ObjectAttributes) >= 0 )
      {
        v11 = ObReferenceObjectByHandle(DirectoryHandle, 0, ObpDirectoryObjectType, 0, &Object, 0LL);
        ObpRootDirectoryObject = Object;
        if ( v11 >= 0 && NtClose(DirectoryHandle) >= 0 && RtlCreateSecurityDescriptor(SecurityDescriptor, 1u) >= 0 )
        {
          v12 = 4
              * (*((unsigned __int8 *)SeWorldSid + 1)
               + *((unsigned __int8 *)SeLocalSystemSid + 1)
               + *((unsigned __int8 *)SeAliasAdminsSid + 1))
              + 68;
          PoolWithTag = (ACL *)ExAllocatePoolWithTag(PagedPool, v12, 0x6C636144u);
          v14 = PoolWithTag;
          if ( PoolWithTag )
          {
            v15 = RtlCreateAcl(PoolWithTag, v12, 2u);
            v16 = v14;
            if ( v15 >= 0 )
            {
              v17 = RtlAddAccessAllowedAce(v14, 2u, 0x20003u, SeWorldSid);
              v16 = v14;
              if ( v17 >= 0 )
              {
                v18 = RtlAddAccessAllowedAce(v14, 2u, 0xF000Fu, SeAliasAdminsSid);
                v16 = v14;
                if ( v18 >= 0 )
                {
                  if ( RtlAddAccessAllowedAce(v14, 2u, 0xF000Fu, SeLocalSystemSid) >= 0
                    && RtlSetDaclSecurityDescriptor(SecurityDescriptor, 1u, v14, 0) >= 0 )
                  {
                    RtlInitUnicodeString(&v34, L"\\KernelObjects");
                    ObjectAttributes.Length = 48;
                    ObjectAttributes.ObjectName = &v34;
                    ObjectAttributes.RootDirectory = 0LL;
                    ObjectAttributes.SecurityDescriptor = SecurityDescriptor;
                    ObjectAttributes.Attributes = 80;
                    ObjectAttributes.SecurityQualityOfService = 0LL;
                    if ( NtCreateDirectoryObject(&Handle, 0xF000Fu, &ObjectAttributes) >= 0 && NtClose(Handle) >= 0 )
                    {
                      RtlInitUnicodeString(&v34, L"\\ObjectTypes");
                      ObjectAttributes.Length = 48;
                      ObjectAttributes.ObjectName = &v34;
                      ObjectAttributes.RootDirectory = 0LL;
                      ObjectAttributes.Attributes = 80;
                      *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
                      if ( NtCreateDirectoryObject(&Handle, 0xF000Fu, &ObjectAttributes) >= 0 )
                      {
                        v19 = ObReferenceObjectByHandle(Handle, 0, ObpDirectoryObjectType, 0, &v32, 0LL);
                        ObpTypeDirectoryObject = v32;
                        if ( v19 >= 0 && NtClose(Handle) >= 0 )
                        {
                          v39 = 0;
                          v38 = 0LL;
                          v40 = -60876;
                          ObpLockDirectoryExclusive((__int64)&v38, (__int64)ObpTypeDirectoryObject);
                          v20 = (char *)ObpTypeObjectType;
                          v21 = *(char **)ObpTypeObjectType;
                          if ( *(PVOID *)ObpTypeObjectType != ObpTypeObjectType )
                          {
                            do
                            {
                              v22 = (v21[58] & 2) != 0 ? &v21[-ObpInfoMaskToOffset[v21[58] & 3] + 32] : 0LL;
                              if ( v22
                                && !*(_QWORD *)v22
                                && !ObpLookupDirectoryEntry(
                                      ObpTypeDirectoryObject,
                                      (__int64)(v22 + 8),
                                      64LL,
                                      (__int64)&v38)
                                && !ObpInsertDirectoryEntry((char *)ObpTypeDirectoryObject, v21 + 80, (__int64)&v38) )
                              {
                                return 0;
                              }
                              v21 = *(char **)v21;
                            }
                            while ( v21 != v20 );
                          }
                          ObpReleaseLookupContext((__int64)&v38);
                          v32 = &ObpLUIDDeviceMapsEnabled;
                          if ( (int)ObpCreateDosDevicesDirectory() >= 0 )
                            return 1;
                        }
                      }
                    }
                    return 0;
                  }
                  v16 = v14;
                }
              }
            }
            ExFreePoolWithTag(v16, 0);
          }
        }
      }
    }
  }
  return 0;
}
