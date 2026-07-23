/*
 * XREFs of ObInitSystem @ 0x1407A0370
 * Callers:
 *     InitBootProcessor @ 0x1407937C4 (InitBootProcessor.c)
 *     Phase1InitializationDiscard @ 0x140794438 (Phase1InitializationDiscard.c)
 * Callees:
 *     ObpReleaseLookupContext @ 0x14000BB50 (ObpReleaseLookupContext.c)
 *     RtlGetAce @ 0x14000BDCC (RtlGetAce.c)
 *     RtlInitUnicodeString @ 0x14002D7E0 (RtlInitUnicodeString.c)
 *     ObpLockDirectoryExclusive @ 0x1400CF410 (ObpLockDirectoryExclusive.c)
 *     ExGenRandom @ 0x1400EE314 (ExGenRandom.c)
 *     ExInitializeNPagedLookasideList @ 0x140111160 (ExInitializeNPagedLookasideList.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     memset @ 0x140171AC0 (memset.c)
 *     ExInitializeSystemLookasideList @ 0x1403D5368 (ExInitializeSystemLookasideList.c)
 *     RtlSetDaclSecurityDescriptor @ 0x140412D30 (RtlSetDaclSecurityDescriptor.c)
 *     RtlCreateSecurityDescriptor @ 0x140412D90 (RtlCreateSecurityDescriptor.c)
 *     RtlCreateAcl @ 0x14041F978 (RtlCreateAcl.c)
 *     ObReferenceObjectByHandle @ 0x14044FC10 (ObReferenceObjectByHandle.c)
 *     NtCreateDirectoryObject @ 0x14046FB9C (NtCreateDirectoryObject.c)
 *     RtlSetSaclSecurityDescriptor @ 0x140479BD8 (RtlSetSaclSecurityDescriptor.c)
 *     ExCreateHandleTable @ 0x1404ACEEC (ExCreateHandleTable.c)
 *     ObpInsertDirectoryEntry @ 0x1404B1AD4 (ObpInsertDirectoryEntry.c)
 *     NtClose @ 0x1404EE070 (NtClose.c)
 *     ObCreateObjectType @ 0x14055257C (ObCreateObjectType.c)
 *     ObpInitObjectTypeSD @ 0x140552BD4 (ObpInitObjectTypeSD.c)
 *     ObpLookupDirectoryEntry @ 0x140552DA4 (ObpLookupDirectoryEntry.c)
 *     ObInitializeProcessor @ 0x140552E70 (ObInitializeProcessor.c)
 *     ObpInitializeRootNamespace @ 0x140579EB4 (ObpInitializeRootNamespace.c)
 *     ObInitServerSilo @ 0x14057A53C (ObInitServerSilo.c)
 *     RtlAddAuditAccessAce @ 0x140684734 (RtlAddAuditAccessAce.c)
 *     ObpInitInfoBlockOffsets @ 0x1407B3018 (ObpInitInfoBlockOffsets.c)
 *     ObpInitStackTrace @ 0x1407BAD00 (ObpInitStackTrace.c)
 */

char ObInitSystem()
{
  __int16 v0; // si
  __int16 v1; // bx
  int v2; // eax
  unsigned int v3; // edi
  struct _KPRCB *CurrentPrcb; // rax
  __int64 v5; // rcx
  _QWORD *v6; // rax
  int v7; // ebx
  struct _NPAGED_LOOKASIDE_LIST *v8; // rbx
  __int64 v9; // rax
  _BYTE *v10; // rbx
  HANDLE v11; // rbx
  NTSTATUS v12; // eax
  _BYTE *v13; // rsi
  _BYTE *i; // rbx
  __int64 v15; // rdx
  ULONG v17; // edx
  ULONG v18; // edx
  void *v19; // r9
  _BYTE *v20; // rax
  BOOLEAN Size; // [rsp+28h] [rbp-E0h]
  BOOLEAN Tag; // [rsp+30h] [rbp-D8h]
  PVOID Object; // [rsp+48h] [rbp-C0h] BYREF
  _QWORD v24[16]; // [rsp+58h] [rbp-B0h] BYREF
  PVOID Ace; // [rsp+D8h] [rbp-30h] BYREF
  HANDLE DirectoryHandle; // [rsp+E0h] [rbp-28h] BYREF
  __int128 v27; // [rsp+E8h] [rbp-20h] BYREF
  __int16 v28; // [rsp+106h] [rbp-2h]
  int v29; // [rsp+108h] [rbp+0h]
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+110h] [rbp+8h] BYREF
  UNICODE_STRING DestinationString; // [rsp+140h] [rbp+38h] BYREF
  UNICODE_STRING v32; // [rsp+150h] [rbp+48h] BYREF
  UNICODE_STRING v33; // [rsp+160h] [rbp+58h] BYREF
  _BYTE SecurityDescriptor[40]; // [rsp+170h] [rbp+68h] BYREF
  ACL Acl; // [rsp+198h] [rbp+90h] BYREF

  if ( (_BYTE)dword_1403A9160 )
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
    v6 = &unk_140305348;
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
    qword_140304F70 = (__int64)&qword_140304F68;
    qword_140304F68 = (__int64)&qword_140304F68;
    byte_140304F62 = 6;
    dword_140304F64 = 1;
    ObpKernelHandleTable = ExCreateHandleTable(0LL, 1LL);
    KeGetCurrentThread()->ApcState.Process[1].ActiveProcessors.Bitmap[5] = ObpKernelHandleTable;
    if ( !ObpKernelHandleTable )
      return 0;
    ObpRemoveObjectWorkItem.Parameter = 0LL;
    ObpRemoveObjectWorkItem.WorkerRoutine = (void (__fastcall *)(void *))ObpProcessRemoveObjectQueue;
    qword_140304FB8 = (__int64)ObpProcessRemoveObjectDpcWorker;
    ObpRemoveObjectWorkItem.List.Flink = 0LL;
    LODWORD(ObpRemoveObjectDpc) = 275;
    qword_140304FC0 = 0LL;
    qword_140304FD8 = 0LL;
    qword_140304FB0 = 0LL;
    ObpInitInfoBlockOffsets();
    qword_1403AA9E8 = (__int64)MmBadPointer;
    memset(v24, 0, 0x78uLL);
    LOWORD(v24[0]) = 120;
    LODWORD(v24[1]) = 256;
    HIDWORD(v24[4]) = 512;
    RtlInitUnicodeString(&DestinationString, L"Type");
    BYTE2(v24[0]) |= 0x24u;
    HIDWORD(v24[3]) = 983041;
    HIDWORD(v24[5]) = 216;
    *(_OWORD *)((char *)&v24[1] + 4) = ObpTypeMapping;
    if ( (int)ObCreateObjectType(&DestinationString, (__int64)v24, 0LL, (__int64)&ObpTypeObjectType) < 0 )
      return 0;
    HIDWORD(v24[4]) = 1;
    RtlInitUnicodeString(&v32, L"Directory");
    HIDWORD(v24[5]) = 352;
    HIDWORD(v24[3]) = 983055;
    BYTE2(v24[0]) = BYTE2(v24[0]) & 0xD2 | 0xD;
    v24[8] = ObpCloseDirectoryObject;
    v24[9] = ObpDeleteDirectoryObject;
    *(_OWORD *)((char *)&v24[1] + 4) = ObpDirectoryMapping;
    if ( (int)ObCreateObjectType(&v32, (__int64)v24, 0LL, (__int64)&ObpDirectoryObjectType) < 0 )
      return 0;
    v24[8] = 0LL;
    ObpDirectoryObjectType->TypeInfo.ValidAccessMask &= ~0x100000u;
    RtlInitUnicodeString(&v33, L"SymbolicLink");
    BYTE3(v24[0]) |= 1u;
    v24[9] = ObpDeleteSymbolicLink;
    HIDWORD(v24[5]) = 40;
    v24[10] = ObpParseSymbolicLinkEx;
    HIDWORD(v24[4]) = 1;
    HIDWORD(v24[3]) = 0xFFFFF;
    BYTE2(v24[0]) = BYTE2(v24[0]) & 0xF6 | 1;
    *(_OWORD *)((char *)&v24[1] + 4) = ObpSymbolicLinkMapping;
    if ( (int)ObCreateObjectType(&v33, (__int64)v24, 0LL, (__int64)&ObpSymbolicLinkObjectType) < 0 )
      return 0;
    ObpSymbolicLinkObjectType->TypeInfo.ValidAccessMask &= ~0x100000u;
    ObpInitStackTrace();
    v2 = InitializationPhase;
  }
  if ( v2 != 1 )
    return 1;
  if ( ObInitServerSilo(0LL) >= 0 )
  {
    v7 = 0;
    if ( (_DWORD)KeNumberProcessors_0 )
    {
      while ( (int)ObInitializeProcessor((_QWORD *)KiProcessorBlock[v7]) >= 0 )
      {
        if ( ++v7 >= (unsigned int)KeNumberProcessors_0 )
          goto LABEL_16;
      }
      return 0;
    }
LABEL_16:
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
      goto LABEL_25;
    v17 = 4 * *((unsigned __int8 *)SeWorldSid + 1) + 28;
    if ( v17 < 0xFA
      && RtlCreateAcl(&Acl, v17, 2u) >= 0
      && RtlAddAuditAccessAce(&Acl, v18, 0x60000000u, v19, Size, Tag) >= 0
      && RtlGetAce(&Acl, 0, &Ace) >= 0 )
    {
      v20 = Ace;
      if ( ObpAuditBaseDirectories )
        *((_BYTE *)Ace + 1) |= 0xAu;
      if ( ObpAuditBaseObjects )
        v20[1] |= 9u;
      v10 = SecurityDescriptor;
      if ( RtlCreateSecurityDescriptor(SecurityDescriptor, 1u) >= 0
        && RtlSetDaclSecurityDescriptor(SecurityDescriptor, 1u, SePublicDefaultUnrestrictedDacl, 0) >= 0
        && RtlSetSaclSecurityDescriptor(SecurityDescriptor, 1u, &Acl, 0) >= 0 )
      {
LABEL_25:
        ObjectAttributes.Length = 48;
        ObjectAttributes.ObjectName = (PUNICODE_STRING)&ObpRootDirectoryName;
        ObjectAttributes.RootDirectory = 0LL;
        ObjectAttributes.Attributes = 80;
        ObjectAttributes.SecurityDescriptor = v10;
        ObjectAttributes.SecurityQualityOfService = 0LL;
        if ( NtCreateDirectoryObject(&DirectoryHandle, 0xF000Fu, &ObjectAttributes) >= 0 )
        {
          v11 = DirectoryHandle;
          v12 = ObReferenceObjectByHandle(DirectoryHandle, 0, ObpDirectoryObjectType, 0, &Object, 0LL);
          ObpRootDirectoryObject = Object;
          if ( v12 >= 0 && ObpInitializeRootNamespace(0LL, v11, 0LL) >= 0 && NtClose(v11) >= 0 )
          {
            v28 = 0;
            v27 = 0LL;
            v29 = -60876;
            ObpLockDirectoryExclusive((__int64)&v27, (__int64)ObpTypeDirectoryObject);
            v13 = ObpTypeObjectType;
            for ( i = *(_BYTE **)ObpTypeObjectType; i != v13; i = *(_BYTE **)i )
            {
              if ( (i[58] & 2) != 0 )
                v15 = (__int64)&i[-ObpInfoMaskToOffset[i[58] & 3] + 32];
              else
                v15 = 0LL;
              if ( v15
                && !*(_QWORD *)v15
                && !ObpLookupDirectoryEntry(
                      (unsigned __int64 *)ObpTypeDirectoryObject,
                      (unsigned __int16 *)(v15 + 8),
                      64,
                      (__int64)&v27)
                && (!*((_QWORD *)i + 9) && (int)ObpInitObjectTypeSD((__int64)(i + 80), 0LL) < 0
                 || !ObpInsertDirectoryEntry((char *)ObpTypeDirectoryObject, i + 80, (__int64)&v27)) )
              {
                return 0;
              }
            }
            ObpReleaseLookupContext((__int64)&v27);
            Object = &ObpLUIDDeviceMapsEnabled;
            return 1;
          }
        }
      }
    }
  }
  return 0;
}
