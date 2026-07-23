/*
 * XREFs of CmpInitCmRM @ 0x140516F64
 * Callers:
 *     CmpLoadKeyCommon @ 0x14010BB8C (CmpLoadKeyCommon.c)
 *     CmpFinishSystemHivesLoad @ 0x14055D650 (CmpFinishSystemHivesLoad.c)
 *     CmpMountPreloadedHives @ 0x14055E9A4 (CmpMountPreloadedHives.c)
 * Callees:
 *     ExInitializeResourceLite @ 0x14000E840 (ExInitializeResourceLite.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x140055B20 (KiLeaveCriticalRegionUnsafe.c)
 *     ExAcquireResourceSharedLite @ 0x140068130 (ExAcquireResourceSharedLite.c)
 *     ExReleaseResourceLite @ 0x1400684C0 (ExReleaseResourceLite.c)
 *     ObfDereferenceObject @ 0x14006A780 (ObfDereferenceObject.c)
 *     ExAcquireFastMutexUnsafe @ 0x1400EE420 (ExAcquireFastMutexUnsafe.c)
 *     ExReleaseFastMutexUnsafe @ 0x1400EE580 (ExReleaseFastMutexUnsafe.c)
 *     RtlAppendUnicodeStringToString @ 0x14010B80C (RtlAppendUnicodeStringToString.c)
 *     ExDeleteResourceLite @ 0x14010C7A0 (ExDeleteResourceLite.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     ZwClose @ 0x14015A3D0 (ZwClose.c)
 *     ZwCreateResourceManager @ 0x14015B850 (ZwCreateResourceManager.c)
 *     ZwCreateTransactionManager @ 0x14015B970 (ZwCreateTransactionManager.c)
 *     ZwOpenResourceManager @ 0x14015C550 (ZwOpenResourceManager.c)
 *     ZwRecoverResourceManager @ 0x14015CCD0 (ZwRecoverResourceManager.c)
 *     ZwRecoverTransactionManager @ 0x14015CCF0 (ZwRecoverTransactionManager.c)
 *     memmove @ 0x140171780 (memmove.c)
 *     memset @ 0x140171AC0 (memset.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 *     CmpQueryFileSecurityDescriptor @ 0x1403F5028 (CmpQueryFileSecurityDescriptor.c)
 *     RtlStringFromGUIDEx @ 0x1403F6D4C (RtlStringFromGUIDEx.c)
 *     ExpAllocateStringRoutine @ 0x1403F6F7C (ExpAllocateStringRoutine.c)
 *     CmpUnlockRegistry @ 0x14040362C (CmpUnlockRegistry.c)
 *     CmpLockRegistry @ 0x140403660 (CmpLockRegistry.c)
 *     ObReferenceObjectByHandle @ 0x14044FC10 (ObReferenceObjectByHandle.c)
 *     RtlFreeAnsiString @ 0x140457BC0 (RtlFreeAnsiString.c)
 *     CmpStartRMLog @ 0x1404BE0E4 (CmpStartRMLog.c)
 *     CmpQueryNameString @ 0x1404CC8A8 (CmpQueryNameString.c)
 *     CmpUuidCreate @ 0x1405179A4 (CmpUuidCreate.c)
 *     HvMarkBaseBlockDirty @ 0x140564B90 (HvMarkBaseBlockDirty.c)
 *     CmpLogTxrInitEvent @ 0x140604FF0 (CmpLogTxrInitEvent.c)
 */

__int64 __fastcall CmpInitCmRM(ULONG_PTR a1, char a2)
{
  __int64 result; // rax
  char v5; // si
  ULONG_PTR v6; // rdi
  int v7; // eax
  __int64 v8; // rcx
  unsigned int v9; // ebx
  _QWORD *PoolWithTag; // rax
  __int64 v11; // rcx
  _QWORD *v12; // r14
  struct _ERESOURCE *v13; // rbx
  __int64 v14; // r8
  UUID v15; // xmm6
  UUID v16; // xmm7
  __int128 v17; // kr00_16
  __int64 v18; // rdx
  __int64 v19; // r8
  __int64 v20; // rdx
  __int64 v21; // rdx
  __int64 v22; // rcx
  void *v23; // r12
  __int64 v24; // rcx
  int v25; // esi
  UNICODE_STRING *p_Source; // rbx
  PSECURITY_DESCRIPTOR v27; // rbx
  struct _CLFS_MGMT_POLICY *v28; // rax
  struct _CLFS_MGMT_POLICY *v29; // r12
  size_t v30; // r8
  ULONG v31; // ebx
  const void *v32; // rdx
  NTSTATUS v33; // eax
  HANDLE *v34; // rbx
  GUID v35; // xmm0
  struct _KTHREAD *CurrentThread; // rax
  _QWORD *v37; // rax
  __int64 v38; // rdx
  __int64 v39; // r8
  __int64 v40; // r9
  _DWORD *v41; // rcx
  __int64 *v42; // rdx
  __int64 v43; // r8
  __int64 v44; // rax
  __int64 v45; // rax
  __int64 v46; // rcx
  __int64 v47; // rax
  void *v48; // rcx
  void *v49; // rcx
  void *v50; // rcx
  char v51; // [rsp+68h] [rbp-A0h]
  UNICODE_STRING Destination; // [rsp+70h] [rbp-98h] BYREF
  FILE_OBJECT *pplfoLog; // [rsp+80h] [rbp-88h] BYREF
  PVOID ClientCookie; // [rsp+88h] [rbp-80h] BYREF
  PVOID Object; // [rsp+90h] [rbp-78h] BYREF
  ULONG CreateOptions[2]; // [rsp+98h] [rbp-70h] BYREF
  UNICODE_STRING GuidString; // [rsp+A0h] [rbp-68h] BYREF
  UNICODE_STRING Source; // [rsp+B0h] [rbp-58h] BYREF
  UNICODE_STRING LogFileName; // [rsp+C0h] [rbp-48h] BYREF
  PSECURITY_DESCRIPTOR P; // [rsp+D0h] [rbp-38h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+D8h] [rbp-30h] BYREF
  PERESOURCE Resource; // [rsp+108h] [rbp+0h]
  _CLFS_MGMT_CLIENT_REGISTRATION RegistrationData; // [rsp+110h] [rbp+8h] BYREF
  GUID ResourceManagerGuid; // [rsp+148h] [rbp+40h] BYREF
  __int128 v65; // [rsp+158h] [rbp+50h]
  UUID Uuid; // [rsp+168h] [rbp+60h] BYREF
  UUID v67; // [rsp+178h] [rbp+70h] BYREF

  v51 = a2;
  result = 0LL;
  v65 = 0uLL;
  v5 = 0;
  ResourceManagerGuid.Data1 = 0;
  *(_QWORD *)&ResourceManagerGuid.Data2 = 0LL;
  *(_DWORD *)&ResourceManagerGuid.Data4[4] = 0;
  *(_DWORD *)&GuidString.Length = 0;
  GuidString.Buffer = 0LL;
  *(_DWORD *)&Source.Length = 0;
  Source.Buffer = 0LL;
  *(_DWORD *)&Destination.Length = 0;
  Destination.Buffer = 0LL;
  pplfoLog = 0LL;
  *(_DWORD *)&LogFileName.Length = 0;
  LogFileName.Buffer = 0LL;
  CreateOptions[0] = 0;
  P = 0LL;
  ClientCookie = 0LL;
  LODWORD(Object) = 0;
  if ( CmpMiniNTBoot )
    return result;
  v6 = qword_1402F2E60;
  if ( a1 )
    v6 = a1;
  if ( (*(_DWORD *)(v6 + 144) & 0x8001) != 0 )
    return result;
  v7 = CmpUuidCreate(&Uuid);
  v9 = v7;
  if ( v7 < 0 || (v7 = CmpUuidCreate(&v67), v9 = v7, v7 < 0) )
  {
    *(_DWORD *)(v6 + 5408) = 1;
    *(_DWORD *)(v6 + 5412) = v7;
    CmpLogTxrInitEvent(v8, v6, (unsigned int)v7);
    return v9;
  }
  PoolWithTag = ExAllocatePoolWithTag(PagedPool, 0x88uLL, 0x6D524D43u);
  v12 = PoolWithTag;
  if ( !PoolWithTag )
  {
    *(_DWORD *)(v6 + 5408) = 1;
LABEL_71:
    v25 = -1073741670;
    *(_DWORD *)(v6 + 5412) = -1073741670;
    CmpLogTxrInitEvent(v11, v6, 3221225626LL);
    return (unsigned int)v25;
  }
  memset(PoolWithTag, 0, 0x88uLL);
  Resource = (PERESOURCE)ExAllocatePoolWithTag(NonPagedPoolNx, 0x68uLL, 0x6C724D43u);
  v13 = Resource;
  if ( !Resource )
  {
    ExFreePoolWithTag(v12, 0x6D524D43u);
    *(_DWORD *)(v6 + 5408) = 2;
    goto LABEL_71;
  }
  v12[3] = v12 + 2;
  v12[2] = v12 + 2;
  v12[11] = 0LL;
  v12[12] = 0LL;
  v12[16] = v13;
  *(_QWORD *)((char *)v12 + 108) = 0LL;
  *((_DWORD *)v12 + 26) = a2 != 0 ? 4 : 0;
  *((_DWORD *)v12 + 17) = 0;
  v12[9] = 0LL;
  ExInitializeResourceLite(v13);
  v14 = *(_QWORD *)(v6 + 64);
  v15 = Uuid;
  v16 = v67;
  if ( *(_DWORD *)(v14 + 164) != 1836346738 )
  {
    *(_DWORD *)(v14 + 164) = 1836346738;
    goto LABEL_82;
  }
  v17 = v65;
  v18 = v65 - *(_QWORD *)(v14 + 148);
  if ( (_QWORD)v65 == *(_QWORD *)(v14 + 148) )
    v18 = *((_QWORD *)&v65 + 1) - *(_QWORD *)(v14 + 156);
  if ( !v18 )
  {
    LODWORD(Object) = 1;
    *(UUID *)(v14 + 148) = v67;
    v5 = 1;
  }
  v19 = *(_QWORD *)(v6 + 64);
  v20 = v17 - *(_QWORD *)(v19 + 112);
  if ( (_QWORD)v17 == *(_QWORD *)(v19 + 112) )
    v20 = *((_QWORD *)&v17 + 1) - *(_QWORD *)(v19 + 120);
  if ( !v20 )
  {
    v5 = 1;
    *(UUID *)(v19 + 112) = v15;
  }
  v21 = *(_QWORD *)(v6 + 64);
  v22 = v17 - *(_QWORD *)(v21 + 128);
  if ( !v22 )
    v22 = *((_QWORD *)&v17 + 1) - *(_QWORD *)(v21 + 136);
  if ( !v22 )
  {
    v5 = 1;
    *(_OWORD *)(v21 + 128) = *(_OWORD *)(v21 + 112);
  }
  while ( 1 )
  {
    if ( v5 )
    {
      CmpLockRegistry();
      ExAcquireResourceSharedLite(*(PERESOURCE *)(v6 + 2848), 1u);
      ExAcquireFastMutexUnsafe(*(PFAST_MUTEX *)(v6 + 2840));
      HvMarkBaseBlockDirty(v6);
      ExReleaseFastMutexUnsafe(*(PFAST_MUTEX *)(v6 + 2840));
      ExReleaseResourceLite(*(PERESOURCE *)(v6 + 2848));
      CmpUnlockRegistry();
    }
    v23 = *(void **)(v6 + 2664);
    v25 = RtlStringFromGUIDEx((PGUID)(*(_QWORD *)(v6 + 64) + 148LL), &GuidString, 1u);
    if ( v25 < 0 )
    {
      *(_DWORD *)(v6 + 5408) = 3;
      goto LABEL_98;
    }
    if ( a1 )
    {
      v25 = CmpQueryNameString(*(void **)(a1 + 2664), &Source);
      if ( v25 < 0 )
      {
        *(_DWORD *)(v6 + 5408) = 4;
        goto LABEL_98;
      }
      p_Source = &Source;
    }
    else
    {
      p_Source = (UNICODE_STRING *)&CmpLogPath;
      CreateOptions[0] = 52;
    }
    Destination.MaximumLength = GuidString.Length + CmpClfsLogPrefix.Length + TmLogExt.Length + p_Source->Length;
    Destination.Buffer = (wchar_t *)ExpAllocateStringRoutine(Destination.MaximumLength);
    if ( !Destination.Buffer )
    {
      v25 = -1073741670;
      *(_DWORD *)(v6 + 5408) = 5;
LABEL_98:
      CmpLogTxrInitEvent(v24, v6, (unsigned int)v25);
      if ( ClientCookie )
      {
        ClfsMgmtDeregisterManagedClient(ClientCookie);
        ClientCookie = 0LL;
      }
      if ( pplfoLog )
        ClfsCloseLogFileObject(pplfoLog);
      if ( GuidString.Buffer )
        RtlFreeAnsiString(&GuidString);
      if ( Source.Buffer )
        RtlFreeAnsiString(&Source);
      if ( Destination.Buffer )
        RtlFreeAnsiString(&Destination);
      if ( v12 )
      {
        v48 = (void *)v12[6];
        if ( v48 )
          ZwClose(v48);
        v49 = (void *)v12[5];
        if ( v49 )
          ObfDereferenceObject(v49);
        v50 = (void *)v12[4];
        if ( v50 )
          ZwClose(v50);
        ExFreePoolWithTag(v12, 0x6D524D43u);
      }
      ExDeleteResourceLite(Resource);
      ExFreePoolWithTag(Resource, 0);
      *(_DWORD *)(v6 + 5412) = v25;
      return (unsigned int)v25;
    }
    RtlAppendUnicodeStringToString(&Destination, &CmpClfsLogPrefix);
    RtlAppendUnicodeStringToString(&Destination, p_Source);
    RtlAppendUnicodeStringToString(&Destination, &GuidString);
    RtlAppendUnicodeStringToString(&Destination, &TmLogExt);
    RtlFreeAnsiString(&GuidString);
    if ( a1 )
      RtlFreeAnsiString(&Source);
    v25 = CmpQueryFileSecurityDescriptor(v23, &P);
    if ( v25 < 0 )
    {
      *(_DWORD *)(v6 + 5408) = 6;
      goto LABEL_98;
    }
    v27 = P;
    v25 = ClfsCreateLogFile(&pplfoLog, &Destination, 0xC0000000, 7u, P, 3u, 8u, 0, 0x200u, 0LL, 0);
    ExFreePoolWithTag(v27, 0);
    if ( v25 >= 0 )
      break;
    if ( (_DWORD)Object )
    {
      *(_DWORD *)(v6 + 5408) = 7;
      goto LABEL_98;
    }
    RtlFreeAnsiString(&Destination);
    CmpLogTxrInitEvent(v46, v6, (unsigned int)v25);
LABEL_82:
    v47 = *(_QWORD *)(v6 + 64);
    LODWORD(Object) = 1;
    v5 = 1;
    *(UUID *)(v47 + 148) = v16;
    *(UUID *)(*(_QWORD *)(v6 + 64) + 112LL) = v15;
    *(UUID *)(*(_QWORD *)(v6 + 64) + 128LL) = v15;
    if ( !a1 )
      v51 = 1;
  }
  memset(&RegistrationData, 0, sizeof(RegistrationData));
  RegistrationData.Version = 1;
  v25 = ClfsMgmtRegisterManagedClient(pplfoLog, &RegistrationData, &ClientCookie);
  if ( v25 < 0 )
  {
    *(_DWORD *)(v6 + 5408) = 8;
    goto LABEL_98;
  }
  v28 = (struct _CLFS_MGMT_POLICY *)ExAllocatePoolWithTag(
                                      PagedPool,
                                      (unsigned __int16)TmContainerExt + 24LL,
                                      0x6D524D43u);
  v29 = v28;
  if ( !v28 )
  {
    *(_DWORD *)(v6 + 5408) = 9;
    goto LABEL_98;
  }
  v30 = (unsigned __int16)TmContainerExt;
  *(_QWORD *)&v28->Version = 0LL;
  *(_QWORD *)&v28->PolicyFlags = 0LL;
  v28->PolicyParameters.NewContainerSuffix.NextContainerSuffix = 0LL;
  v31 = v30 + 24;
  v28->PolicyParameters.NewContainerPrefix.PrefixLengthInBytes = v30;
  v32 = off_1402F41C8;
  v28->LengthInBytes = v30 + 24;
  v28->Version = 1;
  v28->PolicyType = ClfsMgmtPolicyNewContainerExtension;
  memmove((char *)&v28->PolicyParameters + 2, v32, v30);
  v25 = ClfsMgmtInstallPolicy(pplfoLog, v29, v31);
  ExFreePoolWithTag(v29, 0);
  if ( v25 < 0 )
  {
    *(_DWORD *)(v6 + 5408) = 10;
    goto LABEL_98;
  }
  LogFileName.Length = Destination.Length - CmpClfsLogPrefix.Length;
  ObjectAttributes.Length = 48;
  LogFileName.MaximumLength = Destination.MaximumLength - CmpClfsLogPrefix.Length;
  LogFileName.Buffer = (wchar_t *)((char *)Destination.Buffer + CmpClfsLogPrefix.Length);
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.Attributes = 576;
  ObjectAttributes.ObjectName = 0LL;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  v33 = ZwCreateTransactionManager((PHANDLE)v12 + 4, 0xF003Fu, &ObjectAttributes, &LogFileName, CreateOptions[0], 0);
  v25 = v33;
  if ( v33 == -1073741771 )
  {
    if ( Destination.Buffer )
      RtlFreeAnsiString(&Destination);
    if ( pplfoLog )
    {
      ClfsCloseLogFileObject(pplfoLog);
      pplfoLog = 0LL;
    }
    if ( ClientCookie )
    {
      ClfsMgmtDeregisterManagedClient(ClientCookie);
      ClientCookie = 0LL;
    }
    if ( (_DWORD)Object )
      goto LABEL_39;
    goto LABEL_82;
  }
  if ( v33 >= 0 )
    v25 = ZwRecoverTransactionManager((HANDLE)v12[4]);
LABEL_39:
  RtlFreeAnsiString(&Destination);
  if ( v25 < 0 )
  {
    *(_DWORD *)(v6 + 5408) = 11;
    goto LABEL_98;
  }
  if ( pplfoLog )
  {
    ClfsCloseLogFileObject(pplfoLog);
    pplfoLog = 0LL;
  }
  if ( ClientCookie )
  {
    ClfsMgmtDeregisterManagedClient(ClientCookie);
    ClientCookie = 0LL;
  }
  v25 = ObReferenceObjectByHandle(
          (HANDLE)v12[4],
          0xF003Fu,
          (POBJECT_TYPE)TmTransactionManagerObjectType,
          0,
          (PVOID *)CreateOptions,
          0LL);
  v12[5] = *(_QWORD *)CreateOptions;
  if ( v25 < 0 )
  {
    *(_DWORD *)(v6 + 5408) = 12;
    goto LABEL_98;
  }
  v34 = (HANDLE *)(v12 + 6);
  v35 = *(GUID *)(*(_QWORD *)(v6 + 64) + 112LL);
  ObjectAttributes.Length = 48;
  ObjectAttributes.RootDirectory = 0LL;
  ResourceManagerGuid = v35;
  ObjectAttributes.Attributes = 576;
  ObjectAttributes.ObjectName = 0LL;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  v25 = ZwCreateResourceManager(
          (PHANDLE)v12 + 6,
          0x1F007Fu,
          (HANDLE)v12[4],
          &ResourceManagerGuid,
          &ObjectAttributes,
          0,
          0LL);
  if ( v25 == -1073741771 )
    v25 = ZwOpenResourceManager((PHANDLE)v12 + 6, 0x1F007Fu, (HANDLE)v12[4], &ResourceManagerGuid, &ObjectAttributes);
  if ( v25 < 0 )
  {
    *(_DWORD *)(v6 + 5408) = 13;
    goto LABEL_98;
  }
  v25 = ZwRecoverResourceManager(*v34);
  if ( v25 < 0 )
  {
    *(_DWORD *)(v6 + 5408) = 14;
    goto LABEL_98;
  }
  v25 = ObReferenceObjectByHandle(*v34, 0x1F007Fu, (POBJECT_TYPE)TmResourceManagerObjectType, 0, &Object, 0LL);
  v12[7] = Object;
  if ( v25 < 0 )
  {
    *(_DWORD *)(v6 + 5408) = 15;
    goto LABEL_98;
  }
  if ( a1 )
  {
    *(_QWORD *)(a1 + 5400) = v12;
    *((_DWORD *)v12 + 16) = 1;
    goto LABEL_52;
  }
  v41 = v12;
  v42 = &qword_1402F2C98;
  CmRmSystem = v12;
  v43 = 6LL;
  while ( 2 )
  {
    v44 = v42[3];
    if ( v44 && (*(_DWORD *)(v44 + 144) & 2) == 0 )
    {
      ++v41[16];
      v45 = v42[3];
      goto LABEL_64;
    }
    if ( *v42 && (*(_DWORD *)(*v42 + 144) & 2) == 0 )
    {
      ++v41[16];
      v45 = *v42;
LABEL_64:
      *(_QWORD *)(v45 + 5400) = v41;
      v41 = CmRmSystem;
    }
    v42 += 19;
    if ( --v43 )
      continue;
    break;
  }
  *(_QWORD *)(CmpMasterHive + 5400) = v41;
  ++*((_DWORD *)CmRmSystem + 16);
LABEL_52:
  v12[10] = a1;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquireFastMutexUnsafe(&CmpRmListLock);
  v37 = (_QWORD *)qword_140322658;
  if ( *(__int64 **)qword_140322658 != &CmpRmListHead )
    __fastfail(3u);
  *v12 = &CmpRmListHead;
  v12[1] = v37;
  *v37 = v12;
  qword_140322658 = (__int64)v12;
  ExReleaseFastMutexUnsafe(&CmpRmListLock);
  KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread(), v38, v39, v40);
  if ( v51 )
    CmpStartRMLog((char *)v12, 0LL);
  return 0LL;
}
