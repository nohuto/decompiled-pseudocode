/*
 * XREFs of CmpFinishSystemHivesLoad @ 0x14055D650
 * Callers:
 *     NtInitializeRegistry @ 0x1405476A4 (NtInitializeRegistry.c)
 * Callees:
 *     TmEnableCallbacks @ 0x140001168 (TmEnableCallbacks.c)
 *     KeAbPreAcquire @ 0x14002BD30 (KeAbPreAcquire.c)
 *     RtlInitUnicodeString @ 0x14002D7E0 (RtlInitUnicodeString.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x140055B20 (KiLeaveCriticalRegionUnsafe.c)
 *     KeSetEvent @ 0x140055E50 (KeSetEvent.c)
 *     KeWaitForMultipleObjects @ 0x140059E60 (KeWaitForMultipleObjects.c)
 *     KeWaitForSingleObject @ 0x14005C400 (KeWaitForSingleObject.c)
 *     KeAbPostRelease @ 0x14006AA40 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400C5F10 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfReleasePushLock @ 0x1400C64C0 (ExfReleasePushLock.c)
 *     ExAcquireRundownProtection @ 0x1400D1D70 (ExAcquireRundownProtection.c)
 *     ExReleaseRundownProtection @ 0x1400D1DA0 (ExReleaseRundownProtection.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     ZwClose @ 0x14015A3D0 (ZwClose.c)
 *     ZwCreateKey @ 0x14015A590 (ZwCreateKey.c)
 *     KeBugCheckEx @ 0x14015DA70 (KeBugCheckEx.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 *     CmpLockRegistryExclusive @ 0x1403FC8A8 (CmpLockRegistryExclusive.c)
 *     CmpUnlockRegistry @ 0x14040362C (CmpUnlockRegistry.c)
 *     ObReferenceObjectByHandle @ 0x14044FC10 (ObReferenceObjectByHandle.c)
 *     CmpAddToHiveFileList @ 0x1404CD0D8 (CmpAddToHiveFileList.c)
 *     CmRmFinalizeRecovery @ 0x1404CE378 (CmRmFinalizeRecovery.c)
 *     CmpInitCmRM @ 0x140516F64 (CmpInitCmRM.c)
 *     CmpLinkHiveToMaster @ 0x1405194C0 (CmpLinkHiveToMaster.c)
 *     RtlAppendStringToString @ 0x140544C30 (RtlAppendStringToString.c)
 *     CmpLinkKeyToHive @ 0x14055DC2C (CmpLinkKeyToHive.c)
 *     CmpCreatePerfKeys @ 0x14055DD0C (CmpCreatePerfKeys.c)
 *     CmpSetVersionData @ 0x14055DEE8 (CmpSetVersionData.c)
 *     PsBootPhaseComplete @ 0x14055E510 (PsBootPhaseComplete.c)
 *     ExpRefreshSystemTime @ 0x14055E7F0 (ExpRefreshSystemTime.c)
 *     CmpInterlockedFunction @ 0x14055E880 (CmpInterlockedFunction.c)
 *     CmpMountPreloadedHives @ 0x14055E9A4 (CmpMountPreloadedHives.c)
 *     CmpAdminSystemSecurityDescriptor @ 0x14055EA88 (CmpAdminSystemSecurityDescriptor.c)
 *     CmpHiveRootSecurityDescriptor @ 0x14055EC7C (CmpHiveRootSecurityDescriptor.c)
 *     HvSyncHive @ 0x140606410 (HvSyncHive.c)
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
  _BYTE *v18; // rax
  _BYTE *v19; // rdi
  _QWORD *v20; // rcx
  _QWORD *v21; // rax
  signed __int64 v22; // rcx
  ULONG_PTR v23; // rtt
  PVOID v24; // rcx
  wchar_t *v25; // rdx
  wchar_t *v26; // rax
  wchar_t *v27; // rcx
  const WCHAR *v28; // rdx
  const WCHAR *v29; // rcx
  wchar_t *v30; // rdx
  struct _KTHREAD *CurrentThread; // rax
  __int64 v32; // rdx
  __int64 v33; // r8
  __int64 v34; // r9
  unsigned int v35; // edi
  char *v36; // rbx
  __int64 v37; // rdx
  __int64 v38; // r8
  __int64 v39; // r9
  char v40; // [rsp+60h] [rbp-A0h]
  unsigned __int16 Length; // [rsp+62h] [rbp-9Eh]
  STRING Destination; // [rsp+68h] [rbp-98h] BYREF
  PVOID P; // [rsp+78h] [rbp-88h]
  PVOID PoolWithTag; // [rsp+80h] [rbp-80h]
  UNICODE_STRING DestinationString; // [rsp+88h] [rbp-78h] BYREF
  HANDLE KeyHandle; // [rsp+98h] [rbp-68h] BYREF
  PVOID Object; // [rsp+A0h] [rbp-60h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+A8h] [rbp-58h] BYREF
  char v49; // [rsp+E0h] [rbp-20h] BYREF

  *(_DWORD *)&Destination.Length = 0x800000;
  CmpNoWrite = 0;
  Destination.Buffer = &v49;
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
  P = (PVOID)CmpHiveRootSecurityDescriptor();
  v6 = 6LL;
  CmpAdminSystemFileSecurityDescriptor = (PSECURITY_DESCRIPTOR)CmpAdminSystemSecurityDescriptor();
  v7 = 6LL;
  v8 = (char *)&unk_1402F2CD8;
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
    KeWaitForSingleObject(&stru_1402F2EA0, Executive, 0, 0, 0LL);
    KeSetEvent(&stru_1402F2EA0, 0, 0);
    CmpInitCmRM(0LL, CmpInitRmLogOnLoad);
    if ( CmRmSystem )
    {
      TmEnableCallbacks(*((PKRESOURCEMANAGER *)CmRmSystem + 7), (PTM_RM_NOTIFICATION)CmKtmNotification, CmRmSystem);
      CmRmFinalizeRecovery((__int64)CmRmSystem);
    }
  }
  v10 = &stru_1402F2CF0;
  while ( 2 )
  {
    KeWaitForMultipleObjects(6u, v5, WaitAny, Executive, 0, 0, 0LL, WaitBlockArray);
    v11 = 0;
    v40 = 0;
    CmpLockRegistryExclusive();
    v12 = &off_1402F2C88;
    do
    {
      if ( *((_BYTE *)v12 + 48) )
        goto LABEL_13;
      if ( *((_BYTE *)v12 + 49) != 1 )
      {
        v11 = 1;
        v40 = 1;
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
                  (__int64)&Destination,
                  0LL,
                  v15,
                  *((_BYTE *)v12 + 51),
                  *((_DWORD *)v12 + 8),
                  0,
                  0LL,
                  (__int64)P,
                  0LL,
                  0LL,
                  1);
          v17 = v16;
          if ( v16 )
          {
            CurrentThread = KeGetCurrentThread();
            --CurrentThread->KernelApcDisable;
            if ( ExAcquireRundownProtection(&CmpShutdownRundown) )
            {
              ExReleaseRundownProtection(&CmpShutdownRundown);
              KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread(), v37, v38, v39);
              KeBugCheckEx(0x73u, 1uLL, v17, v4, (ULONG_PTR)&Destination);
            }
            KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread(), v32, v33, v34);
            CmpLoadingSystemHivesActive = 0;
            CmpMountThread = 0LL;
            CmpUnlockRegistry();
            v35 = 0;
            v36 = (char *)&unk_1402F2CB8;
            do
            {
              if ( *((_DWORD *)v36 + 3) && !*v36 )
              {
                if ( !v36[1] )
                  KeWaitForSingleObject((char *)&unk_1402F2CD8 + 152 * v35, Executive, 0, 0, 0LL);
                KeSetEvent((struct _KEVENT *)((char *)&stru_1402F2CF0 + 152 * v35), 0, 0);
              }
              ++v35;
              v36 += 152;
            }
            while ( v35 < 6 );
            ExFreePoolWithTag(P, 0);
            ExFreePoolWithTag(PoolWithTag, 0);
            ExFreePoolWithTag(v5, 0);
            return;
          }
          if ( *((_BYTE *)v12 + 51) == 1 )
            HvSyncHive((ULONG_PTR)v12[5]);
          v18 = (_BYTE *)KeAbPreAcquire((ULONG_PTR)&CmpHiveListHeadLock, 0LL, 0);
          v19 = v18;
          if ( _interlockedbittestandset64((volatile signed __int32 *)&CmpHiveListHeadLock, 0LL) )
            ExfAcquirePushLockExclusiveEx(&CmpHiveListHeadLock, v18, (ULONG_PTR)&CmpHiveListHeadLock);
          if ( v19 )
            v19[26] |= 1u;
          v20 = (_QWORD *)qword_140747E38;
          v21 = v12[5] + 1364;
          if ( *(__int64 **)qword_140747E38 != &CmpHiveListHead )
            __fastfail(3u);
          *v21 = &CmpHiveListHead;
          v21[1] = v20;
          *v20 = v21;
          qword_140747E38 = (__int64)v21;
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
      v27 = v12[5];
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
          KeSetEvent(&stru_1402F2EB8, 0, 0);
          v14 = 1;
          if ( !byte_1402F2DE8 || !CmFastBoot )
            goto LABEL_45;
          CmpUnlockRegistry();
          ExpRefreshSystemTime();
          PsBootPhaseComplete();
          goto LABEL_62;
        case 2u:
          CmpUnlockRegistry();
          if ( v1 )
          {
            KeSetEvent(&stru_1402F2E20, 0, 0);
            v14 = 1;
            if ( byte_1402F2E80 && CmFastBoot )
            {
              ExpRefreshSystemTime();
              PsBootPhaseComplete();
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
        KeSetEvent((struct _KEVENT *)((char *)&stru_1402F2CF0 + 152 * v4), 0, 0);
      v11 = v40;
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
      PsBootPhaseComplete();
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
