/*
 * XREFs of CmpInitCmRM @ 0x1404EABF8
 * Callers:
 *     CmpLoadKeyCommon @ 0x1400D2048 (CmpLoadKeyCommon.c)
 *     CmpFinishSystemHivesLoad @ 0x1405A3A54 (CmpFinishSystemHivesLoad.c)
 *     CmpMountPreloadedHives @ 0x1405A4DC4 (CmpMountPreloadedHives.c)
 * Callees:
 *     ExInitializeResourceLite @ 0x1400155B0 (ExInitializeResourceLite.c)
 *     KeAbPreAcquire @ 0x14004E900 (KeAbPreAcquire.c)
 *     ObfDereferenceObject @ 0x14004ED50 (ObfDereferenceObject.c)
 *     KeAbPostRelease @ 0x14004FA40 (KeAbPostRelease.c)
 *     ExAcquireResourceSharedLite @ 0x1400C8DB0 (ExAcquireResourceSharedLite.c)
 *     ExReleaseResourceLite @ 0x1400C92D0 (ExReleaseResourceLite.c)
 *     RtlAppendUnicodeStringToString @ 0x1400D1F10 (RtlAppendUnicodeStringToString.c)
 *     ExDeleteResourceLite @ 0x1400F29E0 (ExDeleteResourceLite.c)
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 *     ExpAcquireFastMutexContended @ 0x1400F2E54 (ExpAcquireFastMutexContended.c)
 *     ExpReleaseFastMutexContended @ 0x1400F3D1C (ExpReleaseFastMutexContended.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     ZwClose @ 0x14017F1D0 (ZwClose.c)
 *     ZwCreateResourceManager @ 0x1401805F0 (ZwCreateResourceManager.c)
 *     ZwCreateTransactionManager @ 0x140180710 (ZwCreateTransactionManager.c)
 *     ZwOpenResourceManager @ 0x140181290 (ZwOpenResourceManager.c)
 *     ZwRecoverResourceManager @ 0x1401819F0 (ZwRecoverResourceManager.c)
 *     ZwRecoverTransactionManager @ 0x140181A10 (ZwRecoverTransactionManager.c)
 *     memmove @ 0x140195740 (memmove.c)
 *     memset @ 0x140195A80 (memset.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140288E60 (ExAllocatePoolWithTag.c)
 *     CmpQueryFileSecurityDescriptor @ 0x14044B65C (CmpQueryFileSecurityDescriptor.c)
 *     RtlFreeAnsiString @ 0x140450CB8 (RtlFreeAnsiString.c)
 *     ObReferenceObjectByHandle @ 0x140496770 (ObReferenceObjectByHandle.c)
 *     CmpUnlockRegistry @ 0x1404C6A10 (CmpUnlockRegistry.c)
 *     CmpLockRegistry @ 0x1404C7410 (CmpLockRegistry.c)
 *     CmpUuidCreate @ 0x1404EB848 (CmpUuidCreate.c)
 *     CmpQueryNameString @ 0x1404EC478 (CmpQueryNameString.c)
 *     RtlStringFromGUIDEx @ 0x1404FFEB8 (RtlStringFromGUIDEx.c)
 *     ExpAllocateStringRoutine @ 0x1404FFFAC (ExpAllocateStringRoutine.c)
 *     CmpStartRMLog @ 0x1405B8B98 (CmpStartRMLog.c)
 *     HvMarkBaseBlockDirty @ 0x1405C267C (HvMarkBaseBlockDirty.c)
 *     CmpLogTxrInitEvent @ 0x14065CAD0 (CmpLogTxrInitEvent.c)
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
  struct _ERESOURCE *v13; // rdx
  __int64 v14; // r8
  __int128 v15; // kr00_16
  __int64 v16; // rdx
  __int64 v17; // r8
  __int64 v18; // rdx
  UUID v19; // xmm6
  __int64 v20; // rdx
  __int64 v21; // rcx
  void *v22; // r12
  __int64 v23; // rcx
  int v24; // esi
  UNICODE_STRING *p_Source; // rbx
  PSECURITY_DESCRIPTOR v26; // rbx
  struct _CLFS_MGMT_POLICY *v27; // rax
  struct _CLFS_MGMT_POLICY *v28; // r12
  size_t v29; // r8
  ULONG v30; // ebx
  const void *v31; // rdx
  NTSTATUS v32; // eax
  HANDLE *v33; // rbx
  GUID v34; // xmm0
  __int64 v35; // r9
  struct _KTHREAD *v36; // rax
  struct _KTHREAD *v37; // rdi
  __int64 v38; // rax
  signed __int8 v39; // cf
  __int64 v40; // rbx
  __int64 **v41; // rax
  signed __int32 v42; // eax
  struct _KTHREAD *v43; // rcx
  __int16 v44; // ax
  _DWORD *v45; // rcx
  __int64 *v46; // rdx
  __int64 v47; // r8
  __int64 v48; // rax
  __int64 v49; // rax
  ULONG_PTR v50; // rsi
  struct _KTHREAD *CurrentThread; // r12
  __int64 v52; // r9
  __int64 v53; // rax
  __int64 v54; // rbx
  ULONG_PTR v55; // rbx
  signed __int32 v56; // eax
  __int64 v57; // rcx
  void *v58; // rcx
  void *v59; // rcx
  void *v60; // rcx
  char v61; // [rsp+68h] [rbp-A0h]
  int v62; // [rsp+6Ch] [rbp-9Ch]
  UNICODE_STRING Destination; // [rsp+70h] [rbp-98h] BYREF
  FILE_OBJECT *pplfoLog; // [rsp+80h] [rbp-88h] BYREF
  PVOID ClientCookie; // [rsp+88h] [rbp-80h] BYREF
  ULONG CreateOptions; // [rsp+90h] [rbp-78h]
  UNICODE_STRING GuidString; // [rsp+98h] [rbp-70h] BYREF
  UNICODE_STRING Source; // [rsp+A8h] [rbp-60h] BYREF
  UNICODE_STRING LogFileName; // [rsp+B8h] [rbp-50h] BYREF
  PSECURITY_DESCRIPTOR P; // [rsp+C8h] [rbp-40h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+D0h] [rbp-38h] BYREF
  PERESOURCE Resource; // [rsp+100h] [rbp-8h]
  PVOID Object; // [rsp+108h] [rbp+0h] BYREF
  PVOID v74; // [rsp+110h] [rbp+8h] BYREF
  _CLFS_MGMT_CLIENT_REGISTRATION RegistrationData; // [rsp+118h] [rbp+10h] BYREF
  GUID ResourceManagerGuid; // [rsp+150h] [rbp+48h] BYREF
  __int128 v77; // [rsp+160h] [rbp+58h]
  UUID Uuid; // [rsp+170h] [rbp+68h] BYREF
  UUID v79; // [rsp+180h] [rbp+78h] BYREF

  v61 = a2;
  result = 0LL;
  v77 = 0uLL;
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
  CreateOptions = 0;
  P = 0LL;
  ClientCookie = 0LL;
  v62 = 0;
  if ( CmpMiniNTBoot )
    return result;
  v6 = qword_1403168C0;
  if ( a1 )
    v6 = a1;
  if ( (*(_DWORD *)(v6 + 144) & 0x8001) != 0 )
    return result;
  v7 = CmpUuidCreate(&Uuid);
  v9 = v7;
  if ( v7 < 0 || (v7 = CmpUuidCreate(&v79), v9 = v7, v7 < 0) )
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
LABEL_79:
    v24 = -1073741670;
    *(_DWORD *)(v6 + 5412) = -1073741670;
    CmpLogTxrInitEvent(v11, v6, 3221225626LL);
    return (unsigned int)v24;
  }
  memset(PoolWithTag, 0, 0x88uLL);
  Resource = (PERESOURCE)ExAllocatePoolWithTag(NonPagedPoolNx, 0x68uLL, 0x6C724D43u);
  v13 = Resource;
  if ( !Resource )
  {
    ExFreePoolWithTag(v12, 0x6D524D43u);
    *(_DWORD *)(v6 + 5408) = 2;
    goto LABEL_79;
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
  if ( *(_DWORD *)(v14 + 164) != 1836346738 )
  {
    v19 = Uuid;
    *(_DWORD *)(v14 + 164) = 1836346738;
    goto LABEL_97;
  }
  v15 = v77;
  v16 = v77 - *(_QWORD *)(v14 + 148);
  if ( (_QWORD)v77 == *(_QWORD *)(v14 + 148) )
    v16 = *((_QWORD *)&v77 + 1) - *(_QWORD *)(v14 + 156);
  if ( !v16 )
  {
    v62 = 1;
    v5 = 1;
    *(UUID *)(v14 + 148) = v79;
  }
  v17 = *(_QWORD *)(v6 + 64);
  v18 = v15 - *(_QWORD *)(v17 + 112);
  if ( (_QWORD)v15 == *(_QWORD *)(v17 + 112) )
    v18 = *((_QWORD *)&v15 + 1) - *(_QWORD *)(v17 + 120);
  v19 = Uuid;
  if ( !v18 )
  {
    v5 = 1;
    *(UUID *)(v17 + 112) = Uuid;
  }
  v20 = *(_QWORD *)(v6 + 64);
  v21 = v15 - *(_QWORD *)(v20 + 128);
  if ( !v21 )
    v21 = *((_QWORD *)&v15 + 1) - *(_QWORD *)(v20 + 136);
  if ( !v21 )
  {
    v5 = 1;
    *(_OWORD *)(v20 + 128) = *(_OWORD *)(v20 + 112);
  }
  while ( 1 )
  {
    if ( v5 )
    {
      CmpLockRegistry();
      ExAcquireResourceSharedLite(*(PERESOURCE *)(v6 + 2848), 1u);
      v50 = *(_QWORD *)(v6 + 2840);
      CurrentThread = KeGetCurrentThread();
      v53 = KeAbPreAcquire(v50, 0LL, 0LL, v52);
      v54 = v53;
      if ( !_interlockedbittestandreset((volatile signed __int32 *)v50, 0) )
        ExpAcquireFastMutexContended(v50, v53);
      if ( v54 )
        *(_BYTE *)(v54 + 26) |= 1u;
      *(_QWORD *)(v50 + 8) = CurrentThread;
      HvMarkBaseBlockDirty(v6);
      v55 = *(_QWORD *)(v6 + 2840);
      *(_QWORD *)(v55 + 8) = 0LL;
      v56 = _InterlockedCompareExchange((volatile signed __int32 *)v55, 1, 0);
      if ( v56 )
        ExpReleaseFastMutexContended((volatile signed __int32 *)v55, v56);
      KeAbPostRelease(v55);
      ExReleaseResourceLite(*(PERESOURCE *)(v6 + 2848));
      CmpUnlockRegistry();
      v19 = Uuid;
    }
    v22 = *(void **)(v6 + 2664);
    v24 = RtlStringFromGUIDEx((PGUID)(*(_QWORD *)(v6 + 64) + 148LL), &GuidString, 1u);
    if ( v24 < 0 )
    {
      *(_DWORD *)(v6 + 5408) = 3;
      goto LABEL_115;
    }
    if ( a1 )
    {
      v24 = CmpQueryNameString(*(_QWORD *)(a1 + 2664), &Source);
      if ( v24 < 0 )
      {
        *(_DWORD *)(v6 + 5408) = 4;
        goto LABEL_115;
      }
      p_Source = &Source;
    }
    else
    {
      p_Source = (UNICODE_STRING *)&CmpLogPath;
      CreateOptions = 52;
    }
    Destination.MaximumLength = GuidString.Length + CmpClfsLogPrefix.Length + TmLogExt.Length + p_Source->Length;
    Destination.Buffer = (wchar_t *)ExpAllocateStringRoutine(Destination.MaximumLength);
    if ( !Destination.Buffer )
    {
      v24 = -1073741670;
      *(_DWORD *)(v6 + 5408) = 5;
LABEL_115:
      CmpLogTxrInitEvent(v23, v6, (unsigned int)v24);
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
        v58 = (void *)v12[6];
        if ( v58 )
          ZwClose(v58);
        v59 = (void *)v12[5];
        if ( v59 )
          ObfDereferenceObject(v59);
        v60 = (void *)v12[4];
        if ( v60 )
          ZwClose(v60);
        ExFreePoolWithTag(v12, 0x6D524D43u);
      }
      ExDeleteResourceLite(Resource);
      ExFreePoolWithTag(Resource, 0);
      *(_DWORD *)(v6 + 5412) = v24;
      return (unsigned int)v24;
    }
    RtlAppendUnicodeStringToString(&Destination, &CmpClfsLogPrefix);
    RtlAppendUnicodeStringToString(&Destination, p_Source);
    RtlAppendUnicodeStringToString(&Destination, &GuidString);
    RtlAppendUnicodeStringToString(&Destination, &TmLogExt);
    RtlFreeAnsiString(&GuidString);
    if ( a1 )
      RtlFreeAnsiString(&Source);
    v24 = CmpQueryFileSecurityDescriptor(v22, &P);
    if ( v24 < 0 )
    {
      *(_DWORD *)(v6 + 5408) = 6;
      goto LABEL_115;
    }
    v26 = P;
    v24 = ClfsCreateLogFile(&pplfoLog, &Destination, 0xC0000000, 7u, P, 3u, 8u, 0, 0x200u, 0LL, 0);
    ExFreePoolWithTag(v26, 0);
    if ( v24 >= 0 )
      break;
    if ( v62 )
    {
      *(_DWORD *)(v6 + 5408) = 7;
      goto LABEL_115;
    }
    RtlFreeAnsiString(&Destination);
    CmpLogTxrInitEvent(v57, v6, (unsigned int)v24);
LABEL_97:
    v62 = 1;
    v5 = 1;
    *(UUID *)(*(_QWORD *)(v6 + 64) + 148LL) = v79;
    *(UUID *)(*(_QWORD *)(v6 + 64) + 112LL) = v19;
    *(UUID *)(*(_QWORD *)(v6 + 64) + 128LL) = v19;
    if ( !a1 )
      v61 = 1;
  }
  memset(&RegistrationData, 0, sizeof(RegistrationData));
  RegistrationData.Version = 1;
  v24 = ClfsMgmtRegisterManagedClient(pplfoLog, &RegistrationData, &ClientCookie);
  if ( v24 < 0 )
  {
    *(_DWORD *)(v6 + 5408) = 8;
    goto LABEL_115;
  }
  v27 = (struct _CLFS_MGMT_POLICY *)ExAllocatePoolWithTag(
                                      PagedPool,
                                      (unsigned __int16)TmContainerExt + 24LL,
                                      0x6D524D43u);
  v28 = v27;
  if ( !v27 )
  {
    *(_DWORD *)(v6 + 5408) = 9;
    goto LABEL_115;
  }
  v29 = (unsigned __int16)TmContainerExt;
  *(_QWORD *)&v27->Version = 0LL;
  *(_QWORD *)&v27->PolicyFlags = 0LL;
  v27->PolicyParameters.NewContainerSuffix.NextContainerSuffix = 0LL;
  v30 = v29 + 24;
  v27->PolicyParameters.NewContainerPrefix.PrefixLengthInBytes = v29;
  v31 = off_1403215C0;
  v27->LengthInBytes = v29 + 24;
  v27->Version = 1;
  v27->PolicyType = ClfsMgmtPolicyNewContainerExtension;
  memmove((char *)&v27->PolicyParameters + 2, v31, v29);
  v24 = ClfsMgmtInstallPolicy(pplfoLog, v28, v30);
  ExFreePoolWithTag(v28, 0);
  if ( v24 < 0 )
  {
    *(_DWORD *)(v6 + 5408) = 10;
    goto LABEL_115;
  }
  LogFileName.Length = Destination.Length - CmpClfsLogPrefix.Length;
  ObjectAttributes.Length = 48;
  LogFileName.MaximumLength = Destination.MaximumLength - CmpClfsLogPrefix.Length;
  LogFileName.Buffer = (wchar_t *)((char *)Destination.Buffer + CmpClfsLogPrefix.Length);
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.Attributes = 576;
  ObjectAttributes.ObjectName = 0LL;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  v32 = ZwCreateTransactionManager((PHANDLE)v12 + 4, 0xF003Fu, &ObjectAttributes, &LogFileName, CreateOptions, 0);
  v24 = v32;
  if ( v32 == -1073741771 )
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
    if ( v62 )
      goto LABEL_38;
    goto LABEL_97;
  }
  if ( v32 >= 0 )
    v24 = ZwRecoverTransactionManager((HANDLE)v12[4]);
LABEL_38:
  RtlFreeAnsiString(&Destination);
  if ( v24 < 0 )
  {
    *(_DWORD *)(v6 + 5408) = 11;
    goto LABEL_115;
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
  v24 = ObReferenceObjectByHandle(
          (HANDLE)v12[4],
          0xF003Fu,
          (POBJECT_TYPE)TmTransactionManagerObjectType,
          0,
          &Object,
          0LL);
  v12[5] = Object;
  if ( v24 < 0 )
  {
    *(_DWORD *)(v6 + 5408) = 12;
    goto LABEL_115;
  }
  v33 = (HANDLE *)(v12 + 6);
  v34 = *(GUID *)(*(_QWORD *)(v6 + 64) + 112LL);
  ObjectAttributes.Length = 48;
  ObjectAttributes.RootDirectory = 0LL;
  ResourceManagerGuid = v34;
  ObjectAttributes.Attributes = 576;
  ObjectAttributes.ObjectName = 0LL;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  v24 = ZwCreateResourceManager(
          (PHANDLE)v12 + 6,
          0x1F007Fu,
          (HANDLE)v12[4],
          &ResourceManagerGuid,
          &ObjectAttributes,
          0,
          0LL);
  if ( v24 == -1073741771 )
    v24 = ZwOpenResourceManager((PHANDLE)v12 + 6, 0x1F007Fu, (HANDLE)v12[4], &ResourceManagerGuid, &ObjectAttributes);
  if ( v24 < 0 )
  {
    *(_DWORD *)(v6 + 5408) = 13;
    goto LABEL_115;
  }
  v24 = ZwRecoverResourceManager(*v33);
  if ( v24 < 0 )
  {
    *(_DWORD *)(v6 + 5408) = 14;
    goto LABEL_115;
  }
  v24 = ObReferenceObjectByHandle(*v33, 0x1F007Fu, (POBJECT_TYPE)TmResourceManagerObjectType, 0, &v74, 0LL);
  v12[7] = v74;
  if ( v24 < 0 )
  {
    *(_DWORD *)(v6 + 5408) = 15;
    goto LABEL_115;
  }
  if ( a1 )
  {
    *(_QWORD *)(a1 + 5400) = v12;
    *((_DWORD *)v12 + 16) = 1;
    goto LABEL_51;
  }
  v45 = v12;
  v46 = &qword_1403166F8;
  CmRmSystem = v12;
  v47 = 6LL;
  while ( 2 )
  {
    v48 = v46[3];
    if ( v48 && (*(_DWORD *)(v48 + 144) & 2) == 0 )
    {
      ++v45[16];
      v49 = v46[3];
      goto LABEL_70;
    }
    if ( *v46 && (*(_DWORD *)(*v46 + 144) & 2) == 0 )
    {
      ++v45[16];
      v49 = *v46;
LABEL_70:
      *(_QWORD *)(v49 + 5400) = v45;
      v45 = CmRmSystem;
    }
    v46 += 19;
    if ( --v47 )
      continue;
    break;
  }
  *(_QWORD *)(CmpMasterHive + 5400) = v45;
  ++*((_DWORD *)CmRmSystem + 16);
LABEL_51:
  v12[10] = a1;
  v36 = KeGetCurrentThread();
  --v36->KernelApcDisable;
  v37 = KeGetCurrentThread();
  v38 = KeAbPreAcquire((ULONG_PTR)&CmpRmListLock, 0LL, 0LL, v35);
  v39 = _interlockedbittestandreset((volatile signed __int32 *)&CmpRmListLock, 0);
  v40 = v38;
  if ( !v39 )
    ExpAcquireFastMutexContended((ULONG_PTR)&CmpRmListLock, v38);
  if ( v40 )
    *(_BYTE *)(v40 + 26) |= 1u;
  v41 = (__int64 **)qword_14034D4B8;
  qword_14034D4C8 = (__int64)v37;
  *v12 = &CmpRmListHead;
  v12[1] = v41;
  if ( *v41 != &CmpRmListHead )
    __fastfail(3u);
  *v41 = v12;
  qword_14034D4B8 = (__int64)v12;
  qword_14034D4C8 = 0LL;
  v42 = _InterlockedCompareExchange((volatile signed __int32 *)&CmpRmListLock, 1, 0);
  if ( v42 )
    ExpReleaseFastMutexContended((volatile signed __int32 *)&CmpRmListLock, v42);
  KeAbPostRelease((ULONG_PTR)&CmpRmListLock);
  v43 = KeGetCurrentThread();
  v44 = v43->KernelApcDisable + 1;
  v43->KernelApcDisable = v44;
  if ( !v44
    && ($CD287064E7C9F7953DE243E927CFCB99 *)v43->ApcState.ApcListHead[0].Flink != &v43->152
    && !v43->SpecialApcDisable )
  {
    KiCheckForKernelApcDelivery();
  }
  if ( v61 )
    CmpStartRMLog(v12, 0LL);
  return 0LL;
}
