/*
 * XREFs of CmpFinishSystemHivesLoad @ 0x14051F09C
 * Callers:
 *     NtInitializeRegistry @ 0x14050C454 (NtInitializeRegistry.c)
 * Callees:
 *     TmEnableCallbacks @ 0x140001168 (TmEnableCallbacks.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x140020CE0 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfReleasePushLock @ 0x1400309C0 (ExfReleasePushLock.c)
 *     KeAbPostRelease @ 0x140042090 (KeAbPostRelease.c)
 *     KeAbPreAcquire @ 0x140042DA0 (KeAbPreAcquire.c)
 *     RtlInitUnicodeString @ 0x140043C70 (RtlInitUnicodeString.c)
 *     ExReleaseRundownProtection_0 @ 0x14006EE30 (ExReleaseRundownProtection_0.c)
 *     ExAcquireRundownProtection @ 0x140079FF0 (ExAcquireRundownProtection.c)
 *     KeWaitForMultipleObjects @ 0x1400810B0 (KeWaitForMultipleObjects.c)
 *     KeWaitForSingleObject @ 0x140081870 (KeWaitForSingleObject.c)
 *     KeSetEvent @ 0x1400875D0 (KeSetEvent.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x140088F60 (KiLeaveCriticalRegionUnsafe.c)
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 *     ZwClose @ 0x140150800 (ZwClose.c)
 *     ZwCreateKey @ 0x1401509C0 (ZwCreateKey.c)
 *     KeBugCheckEx @ 0x140153DC0 (KeBugCheckEx.c)
 *     ExAllocatePoolWithTag @ 0x140238380 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
 *     CmpInitCmRM @ 0x1403BA424 (CmpInitCmRM.c)
 *     CmpLinkHiveToMaster @ 0x1403BAC9C (CmpLinkHiveToMaster.c)
 *     CmpLockRegistryExclusive @ 0x1403DE874 (CmpLockRegistryExclusive.c)
 *     ObReferenceObjectByHandle @ 0x14040B9B0 (ObReferenceObjectByHandle.c)
 *     CmpUnlockRegistry @ 0x140423B00 (CmpUnlockRegistry.c)
 *     CmpAddToHiveFileList @ 0x1404C26DC (CmpAddToHiveFileList.c)
 *     CmRmFinalizeRecovery @ 0x1404C2C8C (CmRmFinalizeRecovery.c)
 *     RtlAppendStringToString @ 0x1404C3EF4 (RtlAppendStringToString.c)
 *     CmpHiveRootSecurityDescriptor @ 0x14051E508 (CmpHiveRootSecurityDescriptor.c)
 *     CmpAdminSystemSecurityDescriptor @ 0x14051E8D8 (CmpAdminSystemSecurityDescriptor.c)
 *     CmpMountPreloadedHives @ 0x14051EACC (CmpMountPreloadedHives.c)
 *     CmpInterlockedFunction @ 0x14051EBB4 (CmpInterlockedFunction.c)
 *     ExpRefreshSystemTime @ 0x14051ECD8 (ExpRefreshSystemTime.c)
 *     PsBootPhaseComplete @ 0x14051ED68 (PsBootPhaseComplete.c)
 *     CmpLinkKeyToHive @ 0x14051F678 (CmpLinkKeyToHive.c)
 *     CmpCreatePerfKeys @ 0x14051F758 (CmpCreatePerfKeys.c)
 *     CmpSetVersionData @ 0x14051F904 (CmpSetVersionData.c)
 *     HvSyncHive @ 0x1405E6E00 (HvSyncHive.c)
 */

void __fastcall CmpFinishSystemHivesLoad(PVOID StartContext)
{
  bool v1; // r12
  struct _KWAIT_BLOCK *WaitBlockArray; // rbx
  PVOID *v3; // rax
  unsigned int v4; // esi
  PVOID *v5; // r13
  __int64 v6; // r14
  __int64 v7; // r8
  char *v8; // rdx
  PVOID *v9; // rcx
  struct _KEVENT *v10; // r15
  char v11; // di
  wchar_t **v12; // rbx
  const WCHAR *v13; // rdx
  char v14; // di
  __int64 v15; // r8
  int v16; // eax
  ULONG_PTR v17; // rdi
  __int64 v18; // rax
  __int64 v19; // rdi
  __int64 **v20; // rcx
  __int64 *v21; // rax
  signed __int64 v22; // rcx
  ULONG_PTR v23; // rtt
  PVOID v24; // rcx
  wchar_t *v25; // rdx
  wchar_t *v26; // rax
  __int64 v27; // rcx
  const WCHAR *v28; // rdx
  const WCHAR *v29; // rcx
  wchar_t *v30; // rdx
  __int64 v31; // rdx
  __int64 v32; // rcx
  __int64 v33; // r8
  __int64 v34; // rdx
  __int64 v35; // rcx
  __int64 v36; // r8
  struct _KTHREAD *CurrentThread; // rax
  unsigned int v38; // edi
  char *v39; // rbx
  __int64 v40; // rdx
  __int64 v41; // rcx
  __int64 v42; // r8
  char v43; // [rsp+50h] [rbp-B0h]
  unsigned __int16 Length; // [rsp+52h] [rbp-AEh]
  STRING Destination; // [rsp+58h] [rbp-A8h] BYREF
  PVOID P; // [rsp+68h] [rbp-98h]
  PVOID PoolWithTag; // [rsp+70h] [rbp-90h]
  UNICODE_STRING DestinationString; // [rsp+78h] [rbp-88h] BYREF
  HANDLE KeyHandle; // [rsp+88h] [rbp-78h] BYREF
  PVOID Object; // [rsp+90h] [rbp-70h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+98h] [rbp-68h] BYREF
  char v52; // [rsp+D0h] [rbp-30h] BYREF

  *(_DWORD *)&Destination.Length = 0x800000;
  CmpNoWrite = 0;
  Destination.Buffer = &v52;
  v1 = StartContext == 0LL;
  RtlInitUnicodeString(&DestinationString, L"\\REGISTRY\\");
  RtlAppendStringToString(&Destination, (const STRING *)&DestinationString);
  Length = Destination.Length;
  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x120uLL, 0x20204D43u);
  WaitBlockArray = (struct _KWAIT_BLOCK *)PoolWithTag;
  v3 = (PVOID *)ExAllocatePoolWithTag(NonPagedPoolNx, 0x30uLL, 0x20204D43u);
  v4 = 0;
  v5 = v3;
  if ( !WaitBlockArray || !v3 )
    KeBugCheckEx(0x74u, 2uLL, 4uLL, 0LL, 0xFFFFFFFFC000009AuLL);
  CmpMountThread = (__int64)KeGetCurrentThread();
  P = CmpHiveRootSecurityDescriptor();
  v6 = 6LL;
  CmpAdminSystemFileSecurityDescriptor = CmpAdminSystemSecurityDescriptor();
  v7 = 6LL;
  v8 = (char *)&unk_1402C7668;
  v9 = v5;
  do
  {
    *v9 = v8;
    v8 += 152;
    ++v9;
    --v7;
  }
  while ( v7 );
  if ( v1 )
  {
    KeWaitForSingleObject(&stru_1402C7830, Executive, 0, 0, 0LL);
    KeSetEvent(&stru_1402C7830, 0, 0);
    CmpInitCmRM(0LL, CmpInitRmLogOnLoad);
    if ( CmRmSystem )
    {
      TmEnableCallbacks(*((PKRESOURCEMANAGER *)CmRmSystem + 7), (PTM_RM_NOTIFICATION)CmKtmNotification, CmRmSystem);
      CmRmFinalizeRecovery((__int64)CmRmSystem);
    }
  }
  v10 = &stru_1402C7680;
  while ( 2 )
  {
    KeWaitForMultipleObjects(6u, v5, WaitAny, Executive, 0, 0, 0LL, WaitBlockArray);
    v11 = 0;
    v43 = 0;
    CmpLockRegistryExclusive();
    v12 = &off_1402C7618;
    do
    {
      if ( *((_BYTE *)v12 + 48) )
        goto LABEL_13;
      if ( *((_BYTE *)v12 + 49) != 1 )
      {
        v11 = 1;
        v43 = 1;
        goto LABEL_13;
      }
      v13 = *v12;
      v14 = 0;
      Destination.Length = Length;
      RtlInitUnicodeString(&DestinationString, v13);
      RtlAppendStringToString(&Destination, (const STRING *)&DestinationString);
      if ( *(_WORD *)&Destination.Buffer[2 * ((unsigned __int64)Destination.Length >> 1) - 2] == 92 )
      {
        RtlInitUnicodeString(&DestinationString, v12[1]);
        RtlAppendStringToString(&Destination, (const STRING *)&DestinationString);
      }
      if ( !v12[2] )
      {
        v15 = (__int64)v12[5];
        if ( v15 )
        {
          v16 = CmpLinkHiveToMaster(
                  (const UNICODE_STRING *)&Destination,
                  0LL,
                  v15,
                  *((_BYTE *)v12 + 51),
                  *((_DWORD *)v12 + 8),
                  0,
                  0LL,
                  (__int64)P,
                  1);
          v17 = v16;
          if ( v16 )
          {
            CurrentThread = KeGetCurrentThread();
            --CurrentThread->KernelApcDisable;
            if ( ExAcquireRundownProtection(&CmpShutdownRundown) )
            {
              ExReleaseRundownProtection_0(&CmpShutdownRundown);
              KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
              KeBugCheckEx(0x73u, 1uLL, v17, v4, (ULONG_PTR)&Destination);
            }
            KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
            CmpLoadingSystemHivesActive = 0;
            CmpMountThread = 0LL;
            CmpUnlockRegistry();
            v38 = 0;
            v39 = (char *)&unk_1402C7648;
            do
            {
              if ( *((_DWORD *)v39 + 3) && !*v39 )
              {
                if ( !v39[1] )
                  KeWaitForSingleObject((char *)&unk_1402C7668 + 152 * v38, Executive, 0, 0, 0LL);
                KeSetEvent((struct _KEVENT *)((char *)&stru_1402C7680 + 152 * v38), 0, 0);
              }
              ++v38;
              v39 += 152;
            }
            while ( v38 < 6 );
            ExFreePoolWithTag(P, 0);
            ExFreePoolWithTag(PoolWithTag, 0);
            ExFreePoolWithTag(v5, 0);
            return;
          }
          if ( *((_BYTE *)v12 + 51) == 1 )
            HvSyncHive((ULONG_PTR)v12[5]);
          v18 = KeAbPreAcquire((ULONG_PTR)&CmpHiveListHeadLock, 0LL, 0LL);
          v19 = v18;
          if ( _interlockedbittestandset64((volatile signed __int32 *)&CmpHiveListHeadLock, 0LL) )
            ExfAcquirePushLockExclusiveEx(&CmpHiveListHeadLock, v18, (ULONG_PTR)&CmpHiveListHeadLock);
          if ( v19 )
            *(_BYTE *)(v19 + 26) |= 1u;
          v20 = (__int64 **)qword_1406FBD10;
          v21 = (__int64 *)(v12[5] + 1364);
          *v21 = (__int64)&CmpHiveListHead;
          v21[1] = (__int64)v20;
          if ( *v20 != &CmpHiveListHead )
            __fastfail(3u);
          *v20 = v21;
          qword_1406FBD10 = (__int64)v21;
          _m_prefetchw(&CmpHiveListHeadLock);
          v22 = CmpHiveListHeadLock - 16;
          if ( (CmpHiveListHeadLock & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
            v22 = 0LL;
          if ( (CmpHiveListHeadLock & 2) != 0
            || (v23 = CmpHiveListHeadLock,
                v23 != _InterlockedCompareExchange64(
                         (volatile signed __int64 *)&CmpHiveListHeadLock,
                         v22,
                         CmpHiveListHeadLock)) )
          {
            ExfReleasePushLock(&CmpHiveListHeadLock);
          }
          KeAbPostRelease((ULONG_PTR)&CmpHiveListHeadLock);
          v24 = CmRmSystem;
          if ( !CmRmSystem )
            goto LABEL_38;
          v25 = v12[5];
          if ( !v25 || (*((_DWORD *)v25 + 36) & 2) != 0 || *((_QWORD *)v25 + 675) )
          {
            v30 = v12[2];
            if ( !v30 || (*((_DWORD *)v30 + 36) & 2) != 0 || *((_QWORD *)v30 + 675) )
              goto LABEL_38;
            ++*((_DWORD *)CmRmSystem + 16);
            v26 = v12[2];
          }
          else
          {
            ++*((_DWORD *)CmRmSystem + 16);
            v26 = v12[5];
          }
          *((_QWORD *)v26 + 675) = v24;
LABEL_38:
          RtlInitUnicodeString(&DestinationString, *(v12 - 1));
          v14 = 0;
        }
      }
      v27 = (__int64)v12[5];
      if ( v27 )
        CmpAddToHiveFileList(v27);
      *((_BYTE *)v12 + 48) = 1;
      CmpNoMasterCreates = 0;
      switch ( v4 )
      {
        case 3u:
          if ( !v1 )
            goto LABEL_45;
          CmpMountPreloadedHives();
          CmpInterlockedFunction();
          KeSetEvent(&stru_1402C7848, 0, 0);
          v14 = 1;
          if ( !byte_1402C7778 || !CmFastBoot )
            goto LABEL_45;
          CmpUnlockRegistry();
          ExpRefreshSystemTime();
          PsBootPhaseComplete(v35, v34, v36);
          goto LABEL_62;
        case 2u:
          CmpUnlockRegistry();
          if ( v1 )
          {
            KeSetEvent(&stru_1402C77B0, 0, 0);
            v14 = 1;
            if ( byte_1402C7810 && CmFastBoot )
            {
              ExpRefreshSystemTime();
              PsBootPhaseComplete(v32, v31, v33);
            }
            CmpSetVersionData();
          }
          CmpCreatePerfKeys();
LABEL_62:
          CmpLockRegistryExclusive();
          goto LABEL_45;
        case 1u:
          v28 = L"\\Registry\\Machine\\SAM\\SAM";
          v29 = L"\\Registry\\Machine\\Security\\SAM";
          break;
        case 4u:
          v28 = L"\\Registry\\User\\.Default";
          v29 = L"\\Registry\\User\\S-1-5-18";
          break;
        default:
          goto LABEL_45;
      }
      CmpLinkKeyToHive(v29, v28);
LABEL_45:
      CmpNoMasterCreates = 1;
      if ( v1 && !v14 )
        KeSetEvent((struct _KEVENT *)((char *)&stru_1402C7680 + 152 * v4), 0, 0);
      v11 = v43;
LABEL_13:
      ++v4;
      v12 += 19;
    }
    while ( v4 < 6 );
    if ( v11 == 1 )
    {
      CmpUnlockRegistry();
      WaitBlockArray = (struct _KWAIT_BLOCK *)PoolWithTag;
      v4 = 0;
      continue;
    }
    break;
  }
  CmpSpecialBootCondition = 0;
  ExFreePoolWithTag(P, 0);
  ExFreePoolWithTag(PoolWithTag, 0);
  ExFreePoolWithTag(v5, 0);
  if ( CmpShareSystemHives )
    CmpVEEnabled = 0;
  else
    CmpVEEnabled = CmVEEnabled == 1;
  CmpUnlockRegistry();
  if ( !v1 )
  {
    CmpInitCmRM(0LL, CmpInitRmLogOnLoad);
    if ( CmRmSystem )
    {
      TmEnableCallbacks(*((PKRESOURCEMANAGER *)CmRmSystem + 7), (PTM_RM_NOTIFICATION)CmKtmNotification, CmRmSystem);
      CmRmFinalizeRecovery((__int64)CmRmSystem);
    }
    CmpLockRegistryExclusive();
    CmpMountPreloadedHives();
    CmpInterlockedFunction();
    CmpUnlockRegistry();
    do
    {
      KeSetEvent(v10, 0, 0);
      v10 = (struct _KEVENT *)((char *)v10 + 152);
      --v6;
    }
    while ( v6 );
    if ( CmFastBoot )
    {
      ExpRefreshSystemTime();
      PsBootPhaseComplete(v41, v40, v42);
    }
    CmpSetVersionData();
  }
  ObjectAttributes.Length = 48;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.Attributes = 576;
  ObjectAttributes.ObjectName = (PUNICODE_STRING)&CmpConfigurationManagerKeyName;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  if ( ZwCreateKey(&KeyHandle, 2u, &ObjectAttributes, 0, 0LL, 0, 0LL) >= 0 )
  {
    ObReferenceObjectByHandle(KeyHandle, 2u, (POBJECT_TYPE)CmKeyObjectType, 0, &Object, 0LL);
    *(_QWORD *)&CmpConfigurationManagerKeyObject = Object;
    ZwClose(KeyHandle);
  }
  CmpLoadingSystemHivesActive = 0;
  CmpMountThread = 0LL;
}
