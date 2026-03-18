/*
 * XREFs of ObInitSystem @ 0x1407C266C
 * Callers:
 *     InitBootProcessor @ 0x1407D089C (InitBootProcessor.c)
 *     Phase1InitializationDiscard @ 0x1407D146C (Phase1InitializationDiscard.c)
 * Callees:
 *     ExGenRandom @ 0x140020AD0 (ExGenRandom.c)
 *     RtlInitUnicodeString @ 0x140047FE0 (RtlInitUnicodeString.c)
 *     ObfReferenceObjectWithTag @ 0x14004E670 (ObfReferenceObjectWithTag.c)
 *     KeAbPreAcquire @ 0x14004E900 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14004FA40 (KeAbPostRelease.c)
 *     ObfDereferenceObjectWithTag @ 0x14004FD20 (ObfDereferenceObjectWithTag.c)
 *     RtlGetAce @ 0x1400CEFDC (RtlGetAce.c)
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400F30E0 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfReleasePushLock @ 0x1400F35E0 (ExfReleasePushLock.c)
 *     ExInitializeNPagedLookasideList @ 0x140137DA8 (ExInitializeNPagedLookasideList.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     memset @ 0x140195A80 (memset.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140288E60 (ExAllocatePoolWithTag.c)
 *     ExInitializeSystemLookasideList @ 0x1403F7CAC (ExInitializeSystemLookasideList.c)
 *     RtlSetSaclSecurityDescriptor @ 0x140413954 (RtlSetSaclSecurityDescriptor.c)
 *     RtlAddAccessAllowedAce @ 0x140415C28 (RtlAddAccessAllowedAce.c)
 *     ObReferenceObjectByHandle @ 0x140496770 (ObReferenceObjectByHandle.c)
 *     NtClose @ 0x14049BE90 (NtClose.c)
 *     RtlSetDaclSecurityDescriptor @ 0x1404D03E0 (RtlSetDaclSecurityDescriptor.c)
 *     RtlCreateSecurityDescriptor @ 0x1404D0440 (RtlCreateSecurityDescriptor.c)
 *     RtlCreateAcl @ 0x1404D058C (RtlCreateAcl.c)
 *     ExCreateHandleTable @ 0x140523600 (ExCreateHandleTable.c)
 *     ObpInsertDirectoryEntry @ 0x14053A340 (ObpInsertDirectoryEntry.c)
 *     NtCreateDirectoryObject @ 0x140540108 (NtCreateDirectoryObject.c)
 *     PsRegisterMonitorServerSilo @ 0x1405936B8 (PsRegisterMonitorServerSilo.c)
 *     PsStartMonitorServerSilo @ 0x14059391C (PsStartMonitorServerSilo.c)
 *     ObInitializeProcessor @ 0x140595BE4 (ObInitializeProcessor.c)
 *     ObpLookupDirectoryEntry @ 0x140595F30 (ObpLookupDirectoryEntry.c)
 *     ObCreateObjectType @ 0x140595F4C (ObCreateObjectType.c)
 *     ObpInitializeNamespaceTable @ 0x1405BC73C (ObpInitializeNamespaceTable.c)
 *     RtlAddAuditAccessAce @ 0x1406C7DA8 (RtlAddAuditAccessAce.c)
 *     ObpInitInfoBlockOffsets @ 0x1407DC3BC (ObpInitInfoBlockOffsets.c)
 *     ObpCreateDosDevicesDirectory @ 0x1407E2610 (ObpCreateDosDevicesDirectory.c)
 *     ObpInitStackTrace @ 0x1407E7A5C (ObpInitStackTrace.c)
 */

bool ObInitSystem()
{
  __int16 v0; // si
  __int16 v1; // r14
  int v2; // eax
  unsigned int v3; // edi
  struct _KPRCB *CurrentPrcb; // rax
  __int64 v5; // rcx
  _QWORD *v6; // rax
  int v8; // ebx
  struct _NPAGED_LOOKASIDE_LIST *v9; // rbx
  __int64 v10; // rax
  _BYTE *v11; // rbx
  ULONG v12; // edx
  ULONG v13; // edx
  void *v14; // r9
  _BYTE *v15; // rax
  NTSTATUS v16; // eax
  ULONG v17; // edi
  ACL *PoolWithTag; // rax
  ACL *v19; // rbx
  NTSTATUS v20; // eax
  ACL *v21; // rcx
  NTSTATUS v22; // eax
  NTSTATUS v23; // eax
  NTSTATUS v24; // eax
  __int64 v25; // r9
  struct _KTHREAD *CurrentThread; // rax
  unsigned __int64 *v27; // rdi
  __int64 v28; // rax
  __int64 v29; // r9
  __int64 v30; // rbx
  char *v31; // rdx
  char *v32; // rsi
  char *v33; // rbx
  signed __int64 v34; // rax
  signed __int64 v35; // rcx
  unsigned __int64 v36; // rtt
  struct _KTHREAD *v37; // rcx
  __int16 v38; // ax
  BOOLEAN Size; // [rsp+28h] [rbp-E0h]
  BOOLEAN Tag; // [rsp+30h] [rbp-D8h]
  HANDLE Handle; // [rsp+48h] [rbp-C0h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+50h] [rbp-B8h] BYREF
  PVOID v43; // [rsp+80h] [rbp-88h] BYREF
  PVOID v44; // [rsp+88h] [rbp-80h]
  __int16 v45; // [rsp+9Eh] [rbp-6Ah]
  int v46; // [rsp+A0h] [rbp-68h]
  PVOID v47; // [rsp+A8h] [rbp-60h] BYREF
  HANDLE DirectoryHandle; // [rsp+B0h] [rbp-58h] BYREF
  PVOID Ace; // [rsp+B8h] [rbp-50h] BYREF
  UNICODE_STRING v50; // [rsp+C0h] [rbp-48h] BYREF
  PVOID Object; // [rsp+D0h] [rbp-38h] BYREF
  _QWORD v52[16]; // [rsp+D8h] [rbp-30h] BYREF
  _QWORD v53[6]; // [rsp+158h] [rbp+50h] BYREF
  UNICODE_STRING v54; // [rsp+188h] [rbp+80h] BYREF
  UNICODE_STRING DestinationString; // [rsp+198h] [rbp+90h] BYREF
  UNICODE_STRING v56; // [rsp+1A8h] [rbp+A0h] BYREF
  UNICODE_STRING v57; // [rsp+1B8h] [rbp+B0h] BYREF
  _BYTE SecurityDescriptor[40]; // [rsp+1C8h] [rbp+C0h] BYREF
  _BYTE v59[40]; // [rsp+1F0h] [rbp+E8h] BYREF
  ACL Acl; // [rsp+218h] [rbp+110h] BYREF

  if ( (_BYTE)dword_1403D0108 )
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
    v6 = &unk_140330028;
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
    qword_14032FC30 = (__int64)&qword_14032FC28;
    qword_14032FC28 = (__int64)&qword_14032FC28;
    byte_14032FC22 = 6;
    dword_14032FC24 = 1;
    ObpKernelHandleTable = ExCreateHandleTable(0LL, 1LL);
    KeGetCurrentThread()->ApcState.Process[1].ActiveProcessors.Bitmap[5] = ObpKernelHandleTable;
    if ( !ObpKernelHandleTable )
      return 0;
    ObpRemoveObjectWorkItem.Parameter = 0LL;
    ObpRemoveObjectWorkItem.WorkerRoutine = (void (__fastcall *)(void *))ObpProcessRemoveObjectQueue;
    qword_14032FC78 = (__int64)ObpProcessRemoveObjectDpcWorker;
    ObpRemoveObjectWorkItem.List.Flink = 0LL;
    ObpRemoveObjectDpc = 275;
    qword_14032FC80 = 0LL;
    qword_14032FC98 = 0LL;
    qword_14032FC70 = 0LL;
    ObpInitInfoBlockOffsets();
    qword_1403D1998 = (__int64)MmBadPointer;
    memset(v52, 0, 0x78uLL);
    LOWORD(v52[0]) = 120;
    LODWORD(v52[1]) = 256;
    HIDWORD(v52[4]) = 512;
    RtlInitUnicodeString(&DestinationString, L"Type");
    BYTE2(v52[0]) |= 0x24u;
    HIDWORD(v52[3]) = 983041;
    HIDWORD(v52[5]) = 216;
    *(_OWORD *)((char *)&v52[1] + 4) = ObpTypeMapping;
    if ( (int)ObCreateObjectType(&DestinationString, (__int64)v52, 0LL, (__int64)&ObpTypeObjectType) < 0 )
      return 0;
    HIDWORD(v52[4]) = 1;
    RtlInitUnicodeString(&v57, L"Directory");
    HIDWORD(v52[5]) = 352;
    BYTE2(v52[0]) = BYTE2(v52[0]) & 0xD2 | 0xD;
    HIDWORD(v52[3]) = 983055;
    v52[8] = ObpCloseDirectoryObject;
    v52[9] = ObpDeleteDirectoryObject;
    *(_OWORD *)((char *)&v52[1] + 4) = ObpDirectoryMapping;
    if ( (int)ObCreateObjectType(&v57, (__int64)v52, 0LL, (__int64)&ObpDirectoryObjectType) < 0 )
      return 0;
    v52[8] = 0LL;
    ObpDirectoryObjectType->TypeInfo.ValidAccessMask &= ~0x100000u;
    RtlInitUnicodeString(&v54, L"SymbolicLink");
    v52[9] = ObpDeleteSymbolicLink;
    HIDWORD(v52[5]) = 32;
    v52[10] = ObpParseSymbolicLink;
    HIDWORD(v52[4]) = 1;
    HIDWORD(v52[3]) = 0xFFFFF;
    BYTE2(v52[0]) = BYTE2(v52[0]) & 0xF6 | 1;
    *(_OWORD *)((char *)&v52[1] + 4) = ObpSymbolicLinkMapping;
    if ( (int)ObCreateObjectType(&v54, (__int64)v52, 0LL, (__int64)&ObpSymbolicLinkObjectType) < 0 )
      return 0;
    ObpSymbolicLinkObjectType->TypeInfo.ValidAccessMask &= ~0x100000u;
    ObpInitializeNamespaceTable();
    ObpInitStackTrace();
    v2 = InitializationPhase;
  }
  if ( v2 != 1 )
    return 1;
  memset(v53, 0, sizeof(v53));
  WORD1(v53[0]) |= 1u;
  v53[1] = ObInitServerSilo;
  LOWORD(v53[0]) = 1;
  v53[2] = AlpcMessageDeleteProcedure;
  PsRegisterMonitorServerSilo(0LL, L"NTOS_OB", (__int64)v53, &ObSiloMonitor);
  PsStartMonitorServerSilo(ObSiloMonitor);
  v8 = 0;
  if ( (_DWORD)KeNumberProcessors_0 )
  {
    while ( (int)ObInitializeProcessor((_QWORD *)KiProcessorBlock[v8]) >= 0 )
    {
      if ( ++v8 >= (unsigned int)KeNumberProcessors_0 )
        goto LABEL_17;
    }
    return 0;
  }
LABEL_17:
  v9 = &ObpWaitBlockLookaside;
  do
  {
    v10 = v3;
    if ( v3 >= 0x40 )
      v10 = 64LL;
    ExInitializeNPagedLookasideList(v9, 0LL, 0LL, 0x200u, 48 * v10, 0x6D57624Fu, 0);
    v3 += 14;
    ++v9;
  }
  while ( v3 < 0x50 );
  v11 = (_BYTE *)SePublicDefaultUnrestrictedSd;
  if ( ObpAuditBaseDirectories || ObpAuditBaseObjects )
  {
    v12 = 4 * *((unsigned __int8 *)SeWorldSid + 1) + 28;
    if ( v12 >= 0xFA
      || RtlCreateAcl(&Acl, v12, 2u) < 0
      || RtlAddAuditAccessAce(&Acl, v13, 0x60000000u, v14, Size, Tag) < 0
      || RtlGetAce(&Acl, 0, &Ace) < 0 )
    {
      return 0;
    }
    v15 = Ace;
    if ( ObpAuditBaseDirectories )
      *((_BYTE *)Ace + 1) |= 0xAu;
    if ( ObpAuditBaseObjects )
      v15[1] |= 9u;
    v11 = SecurityDescriptor;
    if ( RtlCreateSecurityDescriptor(SecurityDescriptor, 1u) < 0
      || RtlSetDaclSecurityDescriptor(SecurityDescriptor, 1u, SePublicDefaultUnrestrictedDacl, 0) < 0
      || RtlSetSaclSecurityDescriptor(SecurityDescriptor, 1u, &Acl, 0) < 0 )
    {
      return 0;
    }
  }
  RtlInitUnicodeString(&v56, L"\\");
  ObjectAttributes.Length = 48;
  ObjectAttributes.ObjectName = &v56;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.Attributes = 80;
  ObjectAttributes.SecurityDescriptor = v11;
  ObjectAttributes.SecurityQualityOfService = 0LL;
  if ( NtCreateDirectoryObject(&DirectoryHandle, 0xF000Fu, &ObjectAttributes) < 0 )
    return 0;
  v16 = ObReferenceObjectByHandle(DirectoryHandle, 0, ObpDirectoryObjectType, 0, &Object, 0LL);
  ObpRootDirectoryObject = Object;
  if ( v16 < 0 )
    return 0;
  if ( NtClose(DirectoryHandle) < 0 )
    return 0;
  if ( RtlCreateSecurityDescriptor(v59, 1u) < 0 )
    return 0;
  v17 = 4
      * (*((unsigned __int8 *)SeWorldSid + 1)
       + *((unsigned __int8 *)SeLocalSystemSid + 1)
       + *((unsigned __int8 *)SeAliasAdminsSid + 1))
      + 68;
  PoolWithTag = (ACL *)ExAllocatePoolWithTag(PagedPool, v17, 0x6C636144u);
  v19 = PoolWithTag;
  if ( !PoolWithTag )
    return 0;
  v20 = RtlCreateAcl(PoolWithTag, v17, 2u);
  v21 = v19;
  if ( v20 < 0
    || (v22 = RtlAddAccessAllowedAce(v19, 2u, 0x20003u, SeWorldSid), v21 = v19, v22 < 0)
    || (v23 = RtlAddAccessAllowedAce(v19, 2u, 0xF000Fu, SeAliasAdminsSid), v21 = v19, v23 < 0) )
  {
LABEL_40:
    ExFreePoolWithTag(v21, 0);
    return 0;
  }
  if ( RtlAddAccessAllowedAce(v19, 2u, 0xF000Fu, SeLocalSystemSid) < 0
    || RtlSetDaclSecurityDescriptor(v59, 1u, v19, 0) < 0 )
  {
    v21 = v19;
    goto LABEL_40;
  }
  RtlInitUnicodeString(&v50, L"\\KernelObjects");
  ObjectAttributes.Length = 48;
  ObjectAttributes.ObjectName = &v50;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.SecurityDescriptor = v59;
  ObjectAttributes.Attributes = 80;
  ObjectAttributes.SecurityQualityOfService = 0LL;
  if ( NtCreateDirectoryObject(&Handle, 0xF000Fu, &ObjectAttributes) < 0 )
    return 0;
  if ( NtClose(Handle) < 0 )
    return 0;
  RtlInitUnicodeString(&v50, L"\\ObjectTypes");
  ObjectAttributes.Length = 48;
  ObjectAttributes.ObjectName = &v50;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.Attributes = 80;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  if ( NtCreateDirectoryObject(&Handle, 0xF000Fu, &ObjectAttributes) < 0 )
    return 0;
  v24 = ObReferenceObjectByHandle(Handle, 0, ObpDirectoryObjectType, 0, &v47, 0LL);
  ObpTypeDirectoryObject = v47;
  if ( v24 < 0 || NtClose(Handle) < 0 )
    return 0;
  CurrentThread = KeGetCurrentThread();
  v27 = (unsigned __int64 *)ObpTypeDirectoryObject;
  v44 = 0LL;
  --CurrentThread->KernelApcDisable;
  v28 = KeAbPreAcquire((ULONG_PTR)(v27 + 37), 0LL, 0LL, v25);
  v30 = v28;
  if ( _interlockedbittestandset64((volatile signed __int32 *)v27 + 74, 0LL) )
    ExfAcquirePushLockExclusiveEx(v27 + 37, v28, (ULONG_PTR)(v27 + 37), v29);
  if ( v30 )
    *(_BYTE *)(v30 + 26) |= 1u;
  v46 = -859041228;
  ObfReferenceObjectWithTag(v27, 0x746C6644u);
  v32 = (char *)ObpTypeObjectType;
  v43 = v27;
  v45 = 257;
  v33 = *(char **)ObpTypeObjectType;
  if ( *(PVOID *)ObpTypeObjectType != ObpTypeObjectType )
  {
    while ( 1 )
    {
      v31 = (v33[58] & 2) != 0 ? &v33[-ObpInfoMaskToOffset[v33[58] & 3] + 32] : 0LL;
      if ( v31
        && !*(_QWORD *)v31
        && !ObpLookupDirectoryEntry(ObpTypeDirectoryObject, (__int64)(v31 + 8), 64LL, (__int64)&v43)
        && !ObpInsertDirectoryEntry((char *)ObpTypeDirectoryObject, v33 + 80, (__int64)&v43) )
      {
        return 0;
      }
      v33 = *(char **)v33;
      if ( v33 == v32 )
      {
        if ( !(_BYTE)v45 )
          goto LABEL_75;
        v27 = (unsigned __int64 *)v43;
        break;
      }
    }
  }
  _m_prefetchw(v27 + 37);
  v34 = v27[37];
  v35 = v34 - 16;
  if ( (v34 & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
    v35 = 0LL;
  if ( (v34 & 2) != 0
    || (v36 = v27[37], v36 != _InterlockedCompareExchange64((volatile signed __int64 *)v27 + 37, v35, v34)) )
  {
    ExfReleasePushLock(v27 + 37, (__int64)v31);
  }
  KeAbPostRelease((ULONG_PTR)(v27 + 37));
  v46 = -286387660;
  ObfDereferenceObjectWithTag(v43, 0x746C6644u);
  v37 = KeGetCurrentThread();
  v43 = 0LL;
  v45 = 0;
  v38 = v37->KernelApcDisable + 1;
  v37->KernelApcDisable = v38;
  if ( !v38
    && ($CD287064E7C9F7953DE243E927CFCB99 *)v37->ApcState.ApcListHead[0].Flink != &v37->152
    && !v37->SpecialApcDisable )
  {
    KiCheckForKernelApcDelivery();
  }
LABEL_75:
  if ( v44 )
  {
    ObfDereferenceObjectWithTag(v44, 0x746C6644u);
    v44 = 0LL;
  }
  v47 = &ObpLUIDDeviceMapsEnabled;
  return (int)ObpCreateDosDevicesDirectory() >= 0;
}
