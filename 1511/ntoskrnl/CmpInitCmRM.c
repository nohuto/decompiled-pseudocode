/*
 * XREFs of CmpInitCmRM @ 0x1403BA424
 * Callers:
 *     CmpLoadKeyCommon @ 0x140002D44 (CmpLoadKeyCommon.c)
 *     CmpMountPreloadedHives @ 0x14051EACC (CmpMountPreloadedHives.c)
 *     CmpFinishSystemHivesLoad @ 0x14051F09C (CmpFinishSystemHivesLoad.c)
 * Callees:
 *     RtlAppendUnicodeStringToString @ 0x1400030E4 (RtlAppendUnicodeStringToString.c)
 *     ExDeleteResourceLite @ 0x14000D800 (ExDeleteResourceLite.c)
 *     ExAcquireFastMutexUnsafe @ 0x140037A60 (ExAcquireFastMutexUnsafe.c)
 *     ExReleaseFastMutexUnsafe @ 0x140037BF0 (ExReleaseFastMutexUnsafe.c)
 *     ExReleaseResourceLite @ 0x14003FBB0 (ExReleaseResourceLite.c)
 *     ExAcquireResourceSharedLite @ 0x14003FBC0 (ExAcquireResourceSharedLite.c)
 *     ObfDereferenceObject @ 0x140042920 (ObfDereferenceObject.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x140088F60 (KiLeaveCriticalRegionUnsafe.c)
 *     ExInitializeResourceLite @ 0x14009E260 (ExInitializeResourceLite.c)
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 *     ZwClose @ 0x140150800 (ZwClose.c)
 *     ZwCreateResourceManager @ 0x140151C40 (ZwCreateResourceManager.c)
 *     ZwCreateTransactionManager @ 0x140151D60 (ZwCreateTransactionManager.c)
 *     ZwOpenResourceManager @ 0x140152920 (ZwOpenResourceManager.c)
 *     ZwRecoverResourceManager @ 0x140153080 (ZwRecoverResourceManager.c)
 *     ZwRecoverTransactionManager @ 0x1401530A0 (ZwRecoverTransactionManager.c)
 *     memmove @ 0x140166980 (memmove.c)
 *     memset @ 0x140166CC0 (memset.c)
 *     ExAllocatePoolWithTag @ 0x140238380 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
 *     CmpQueryFileSecurityDescriptor @ 0x1403DD9C0 (CmpQueryFileSecurityDescriptor.c)
 *     ObReferenceObjectByHandle @ 0x14040B9B0 (ObReferenceObjectByHandle.c)
 *     CmpUnlockRegistry @ 0x140423B00 (CmpUnlockRegistry.c)
 *     CmpLockRegistry @ 0x140423C10 (CmpLockRegistry.c)
 *     RtlFreeAnsiString @ 0x140445624 (RtlFreeAnsiString.c)
 *     ExpAllocateStringRoutine @ 0x140447224 (ExpAllocateStringRoutine.c)
 *     RtlStringFromGUIDEx @ 0x140447328 (RtlStringFromGUIDEx.c)
 *     CmpUuidCreate @ 0x14048548C (CmpUuidCreate.c)
 *     HvMarkBaseBlockDirty @ 0x1404C1D94 (HvMarkBaseBlockDirty.c)
 *     CmpQueryNameString @ 0x1404C2294 (CmpQueryNameString.c)
 *     CmpStartRMLog @ 0x140542840 (CmpStartRMLog.c)
 *     CmpLogTxrInitEvent @ 0x1405E59EC (CmpLogTxrInitEvent.c)
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
  __int64 v14; // rdx
  PVOID v15; // rcx
  __int64 v16; // r9
  __int64 v17; // r8
  UUID v18; // xmm6
  UUID v19; // xmm7
  __int64 v20; // rcx
  __int64 v21; // rdx
  __int64 v22; // rdx
  void *v23; // r12
  __int64 v24; // rcx
  NTSTATUS FileSecurityDescriptor; // esi
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
  __int64 **v37; // rax
  _DWORD *v38; // rcx
  __int64 *v39; // rdx
  __int64 v40; // r8
  __int64 v41; // rax
  __int64 v42; // rax
  __int64 v43; // rcx
  __int64 v44; // rax
  void *v45; // rcx
  void *v46; // rcx
  void *v47; // rcx
  char v48; // [rsp+68h] [rbp-A0h]
  UNICODE_STRING Destination; // [rsp+70h] [rbp-98h] BYREF
  FILE_OBJECT *pplfoLog; // [rsp+80h] [rbp-88h] BYREF
  PVOID ClientCookie; // [rsp+88h] [rbp-80h] BYREF
  PVOID Object; // [rsp+90h] [rbp-78h] BYREF
  ULONG CreateOptions[2]; // [rsp+98h] [rbp-70h] BYREF
  UNICODE_STRING GuidString; // [rsp+A0h] [rbp-68h] BYREF
  UNICODE_STRING Source; // [rsp+B0h] [rbp-58h] BYREF
  UNICODE_STRING LogFileName; // [rsp+C0h] [rbp-48h] BYREF
  PSECURITY_DESCRIPTOR P; // [rsp+D0h] [rbp-38h]
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+D8h] [rbp-30h] BYREF
  PERESOURCE Resource; // [rsp+108h] [rbp+0h]
  _CLFS_MGMT_CLIENT_REGISTRATION RegistrationData; // [rsp+110h] [rbp+8h] BYREF
  GUID ResourceManagerGuid; // [rsp+148h] [rbp+40h] BYREF
  __int128 v62; // [rsp+158h] [rbp+50h]
  UUID v63; // [rsp+168h] [rbp+60h] BYREF
  UUID Uuid; // [rsp+178h] [rbp+70h] BYREF

  v48 = a2;
  result = 0LL;
  v62 = 0uLL;
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
  v6 = qword_1402C77F0;
  if ( a1 )
    v6 = a1;
  if ( (*(_DWORD *)(v6 + 144) & 0x8001) != 0 )
    return result;
  v7 = CmpUuidCreate(&Uuid);
  v9 = v7;
  if ( v7 < 0 || (v7 = CmpUuidCreate(&v63), v9 = v7, v7 < 0) )
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
    FileSecurityDescriptor = -1073741670;
    *(_DWORD *)(v6 + 5412) = -1073741670;
    CmpLogTxrInitEvent(v11, v6, 3221225626LL);
    return (unsigned int)FileSecurityDescriptor;
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
  v17 = *(_QWORD *)(v6 + 64);
  v18 = Uuid;
  v19 = v63;
  if ( *(_DWORD *)(v17 + 164) != 1836346738 )
  {
    *(_DWORD *)(v17 + 164) = 1836346738;
    goto LABEL_82;
  }
  v16 = *((_QWORD *)&v62 + 1);
  v20 = v62;
  v21 = v62 - *(_QWORD *)(v17 + 148);
  if ( (_QWORD)v62 == *(_QWORD *)(v17 + 148) )
    v21 = *((_QWORD *)&v62 + 1) - *(_QWORD *)(v17 + 156);
  if ( !v21 )
  {
    LODWORD(Object) = 1;
    *(UUID *)(v17 + 148) = v63;
    v5 = 1;
  }
  v17 = *(_QWORD *)(v6 + 64);
  v22 = v20 - *(_QWORD *)(v17 + 112);
  if ( v20 == *(_QWORD *)(v17 + 112) )
    v22 = v16 - *(_QWORD *)(v17 + 120);
  if ( !v22 )
  {
    v5 = 1;
    *(UUID *)(v17 + 112) = v18;
  }
  v14 = *(_QWORD *)(v6 + 64);
  v15 = (PVOID)(v20 - *(_QWORD *)(v14 + 128));
  if ( !v15 )
    v15 = (PVOID)(v16 - *(_QWORD *)(v14 + 136));
  if ( !v15 )
  {
    v5 = 1;
    *(_OWORD *)(v14 + 128) = *(_OWORD *)(v14 + 112);
  }
  while ( 1 )
  {
    if ( v5 )
    {
      CmpLockRegistry(v15, v14, v17, v16);
      ExAcquireResourceSharedLite(*(PERESOURCE *)(v6 + 2848), 1u);
      ExAcquireFastMutexUnsafe(*(PFAST_MUTEX *)(v6 + 2840));
      HvMarkBaseBlockDirty(v6);
      ExReleaseFastMutexUnsafe(*(PFAST_MUTEX *)(v6 + 2840));
      ExReleaseResourceLite(*(PERESOURCE *)(v6 + 2848));
      CmpUnlockRegistry();
    }
    v23 = *(void **)(v6 + 2664);
    FileSecurityDescriptor = RtlStringFromGUIDEx((PGUID)(*(_QWORD *)(v6 + 64) + 148LL), &GuidString, 1u);
    if ( FileSecurityDescriptor < 0 )
    {
      *(_DWORD *)(v6 + 5408) = 3;
      goto LABEL_98;
    }
    if ( a1 )
    {
      FileSecurityDescriptor = CmpQueryNameString(*(_QWORD *)(a1 + 2664), &Source);
      if ( FileSecurityDescriptor < 0 )
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
      FileSecurityDescriptor = -1073741670;
      *(_DWORD *)(v6 + 5408) = 5;
LABEL_98:
      CmpLogTxrInitEvent(v24, v6, (unsigned int)FileSecurityDescriptor);
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
        v45 = (void *)v12[6];
        if ( v45 )
          ZwClose(v45);
        v46 = (void *)v12[5];
        if ( v46 )
          ObfDereferenceObject(v46);
        v47 = (void *)v12[4];
        if ( v47 )
          ZwClose(v47);
        ExFreePoolWithTag(v12, 0x6D524D43u);
      }
      ExDeleteResourceLite(Resource);
      ExFreePoolWithTag(Resource, 0);
      *(_DWORD *)(v6 + 5412) = FileSecurityDescriptor;
      return (unsigned int)FileSecurityDescriptor;
    }
    RtlAppendUnicodeStringToString(&Destination, &CmpClfsLogPrefix);
    RtlAppendUnicodeStringToString(&Destination, p_Source);
    RtlAppendUnicodeStringToString(&Destination, &GuidString);
    RtlAppendUnicodeStringToString(&Destination, &TmLogExt);
    RtlFreeAnsiString(&GuidString);
    if ( a1 )
      RtlFreeAnsiString(&Source);
    FileSecurityDescriptor = CmpQueryFileSecurityDescriptor(v23);
    if ( FileSecurityDescriptor < 0 )
    {
      *(_DWORD *)(v6 + 5408) = 6;
      goto LABEL_98;
    }
    v27 = P;
    FileSecurityDescriptor = ClfsCreateLogFile(&pplfoLog, &Destination, 0xC0000000, 7u, P, 3u, 8u, 0, 0x200u, 0LL, 0);
    ExFreePoolWithTag(v27, 0);
    if ( FileSecurityDescriptor >= 0 )
      break;
    if ( (_DWORD)Object )
    {
      *(_DWORD *)(v6 + 5408) = 7;
      goto LABEL_98;
    }
    RtlFreeAnsiString(&Destination);
    CmpLogTxrInitEvent(v43, v6, (unsigned int)FileSecurityDescriptor);
LABEL_82:
    v44 = *(_QWORD *)(v6 + 64);
    LODWORD(Object) = 1;
    v5 = 1;
    *(UUID *)(v44 + 148) = v19;
    *(UUID *)(*(_QWORD *)(v6 + 64) + 112LL) = v18;
    *(UUID *)(*(_QWORD *)(v6 + 64) + 128LL) = v18;
    if ( !a1 )
      v48 = 1;
  }
  memset(&RegistrationData, 0, sizeof(RegistrationData));
  RegistrationData.Version = 1;
  FileSecurityDescriptor = ClfsMgmtRegisterManagedClient(pplfoLog, &RegistrationData, &ClientCookie);
  if ( FileSecurityDescriptor < 0 )
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
  v32 = off_1402D2490;
  v28->LengthInBytes = v30 + 24;
  v28->Version = 1;
  v28->PolicyType = ClfsMgmtPolicyNewContainerExtension;
  memmove((char *)&v28->PolicyParameters + 2, v32, v30);
  FileSecurityDescriptor = ClfsMgmtInstallPolicy(pplfoLog, v29, v31);
  ExFreePoolWithTag(v29, 0);
  if ( FileSecurityDescriptor < 0 )
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
  FileSecurityDescriptor = v33;
  if ( v33 == -1073741771 )
  {
    if ( Destination.Buffer )
      RtlFreeAnsiString(&Destination);
    if ( pplfoLog )
    {
      ClfsCloseLogFileObject(pplfoLog);
      pplfoLog = 0LL;
    }
    v15 = ClientCookie;
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
    FileSecurityDescriptor = ZwRecoverTransactionManager((HANDLE)v12[4]);
LABEL_39:
  RtlFreeAnsiString(&Destination);
  if ( FileSecurityDescriptor < 0 )
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
  FileSecurityDescriptor = ObReferenceObjectByHandle(
                             (HANDLE)v12[4],
                             0xF003Fu,
                             (POBJECT_TYPE)TmTransactionManagerObjectType,
                             0,
                             (PVOID *)CreateOptions,
                             0LL);
  v12[5] = *(_QWORD *)CreateOptions;
  if ( FileSecurityDescriptor < 0 )
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
  FileSecurityDescriptor = ZwCreateResourceManager(
                             (PHANDLE)v12 + 6,
                             0x1F007Fu,
                             (HANDLE)v12[4],
                             &ResourceManagerGuid,
                             &ObjectAttributes,
                             0,
                             0LL);
  if ( FileSecurityDescriptor == -1073741771 )
    FileSecurityDescriptor = ZwOpenResourceManager(
                               (PHANDLE)v12 + 6,
                               0x1F007Fu,
                               (HANDLE)v12[4],
                               &ResourceManagerGuid,
                               &ObjectAttributes);
  if ( FileSecurityDescriptor < 0 )
  {
    *(_DWORD *)(v6 + 5408) = 13;
    goto LABEL_98;
  }
  FileSecurityDescriptor = ZwRecoverResourceManager(*v34);
  if ( FileSecurityDescriptor < 0 )
  {
    *(_DWORD *)(v6 + 5408) = 14;
    goto LABEL_98;
  }
  FileSecurityDescriptor = ObReferenceObjectByHandle(
                             *v34,
                             0x1F007Fu,
                             (POBJECT_TYPE)TmResourceManagerObjectType,
                             0,
                             &Object,
                             0LL);
  v12[7] = Object;
  if ( FileSecurityDescriptor < 0 )
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
  v38 = v12;
  v39 = &qword_1402C7628;
  CmRmSystem = v12;
  v40 = 6LL;
  while ( 2 )
  {
    v41 = v39[3];
    if ( v41 && (*(_DWORD *)(v41 + 144) & 2) == 0 )
    {
      ++v38[16];
      v42 = v39[3];
      goto LABEL_64;
    }
    if ( *v39 && (*(_DWORD *)(*v39 + 144) & 2) == 0 )
    {
      ++v38[16];
      v42 = *v39;
LABEL_64:
      *(_QWORD *)(v42 + 5400) = v38;
      v38 = CmRmSystem;
    }
    v39 += 19;
    if ( --v40 )
      continue;
    break;
  }
  *(_QWORD *)(CmpMasterHive + 5400) = v38;
  ++*((_DWORD *)CmRmSystem + 16);
LABEL_52:
  v12[10] = a1;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquireFastMutexUnsafe(&CmpRmListLock);
  v37 = (__int64 **)qword_1402FD058;
  *v12 = &CmpRmListHead;
  v12[1] = v37;
  if ( *v37 != &CmpRmListHead )
    __fastfail(3u);
  *v37 = v12;
  qword_1402FD058 = (__int64)v12;
  ExReleaseFastMutexUnsafe(&CmpRmListLock);
  KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
  if ( v48 )
    CmpStartRMLog(v12, 0LL);
  return 0LL;
}
