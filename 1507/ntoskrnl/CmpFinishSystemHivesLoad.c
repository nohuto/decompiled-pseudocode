/*
 * XREFs of CmpFinishSystemHivesLoad @ 0x1405A3A54
 * Callers:
 *     NtInitializeRegistry @ 0x140583714 (NtInitializeRegistry.c)
 * Callees:
 *     TmEnableCallbacks @ 0x140001168 (TmEnableCallbacks.c)
 *     ExfReleaseRundownProtection @ 0x140030F40 (ExfReleaseRundownProtection.c)
 *     RtlInitUnicodeString @ 0x140047FE0 (RtlInitUnicodeString.c)
 *     KeSetEvent @ 0x14004C230 (KeSetEvent.c)
 *     KeAbPreAcquire @ 0x14004E900 (KeAbPreAcquire.c)
 *     KeWaitForSingleObject @ 0x14004F100 (KeWaitForSingleObject.c)
 *     KeAbPostRelease @ 0x14004FA40 (KeAbPostRelease.c)
 *     KeWaitForMultipleObjects @ 0x14009F320 (KeWaitForMultipleObjects.c)
 *     ExfAcquireRundownProtection @ 0x1400D4A40 (ExfAcquireRundownProtection.c)
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400F30E0 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfReleasePushLock @ 0x1400F35E0 (ExfReleasePushLock.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     ZwClose @ 0x14017F1D0 (ZwClose.c)
 *     ZwCreateKey @ 0x14017F390 (ZwCreateKey.c)
 *     KeBugCheckEx @ 0x140182750 (KeBugCheckEx.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140288E60 (ExAllocatePoolWithTag.c)
 *     CmpLockRegistryExclusive @ 0x140448470 (CmpLockRegistryExclusive.c)
 *     ObReferenceObjectByHandle @ 0x140496770 (ObReferenceObjectByHandle.c)
 *     CmpUnlockRegistry @ 0x1404C6A10 (CmpUnlockRegistry.c)
 *     CmpLinkHiveToMaster @ 0x1404E9E8C (CmpLinkHiveToMaster.c)
 *     CmpInitCmRM @ 0x1404EABF8 (CmpInitCmRM.c)
 *     CmpAddToHiveFileList @ 0x1404EBEEC (CmpAddToHiveFileList.c)
 *     CmRmFinalizeRecovery @ 0x1404EC588 (CmRmFinalizeRecovery.c)
 *     RtlAppendStringToString @ 0x14055A36C (RtlAppendStringToString.c)
 *     CmpLinkKeyToHive @ 0x1405A4030 (CmpLinkKeyToHive.c)
 *     CmpCreatePerfKeys @ 0x1405A4110 (CmpCreatePerfKeys.c)
 *     CmpSetVersionData @ 0x1405A42BC (CmpSetVersionData.c)
 *     PsBootPhaseComplete @ 0x1405A4884 (PsBootPhaseComplete.c)
 *     ExpRefreshSystemTime @ 0x1405A4BB8 (ExpRefreshSystemTime.c)
 *     CmpInterlockedFunction @ 0x1405A4CA0 (CmpInterlockedFunction.c)
 *     CmpMountPreloadedHives @ 0x1405A4DC4 (CmpMountPreloadedHives.c)
 *     CmpAdminSystemSecurityDescriptor @ 0x1405A4EAC (CmpAdminSystemSecurityDescriptor.c)
 *     CmpHiveRootSecurityDescriptor @ 0x1405A50A0 (CmpHiveRootSecurityDescriptor.c)
 *     HvSyncHive @ 0x14065E25C (HvSyncHive.c)
 */

void __fastcall CmpFinishSystemHivesLoad(PVOID StartContext)
{
  bool v1; // r13
  struct _KWAIT_BLOCK *WaitBlockArray; // rbx
  PVOID *v3; // rax
  unsigned int v4; // esi
  PVOID *v5; // r15
  __int64 v6; // r14
  __int64 v7; // r8
  char *v8; // rdx
  PVOID *v9; // rcx
  __int64 v10; // rdx
  __int64 v11; // r8
  __int64 v12; // r9
  struct _KEVENT *v13; // r12
  char v14; // di
  wchar_t **v15; // rbx
  const WCHAR *v16; // rdx
  char v17; // di
  __int64 v18; // r8
  int v19; // eax
  __int64 v20; // r9
  ULONG_PTR v21; // rdi
  __int64 v22; // rax
  __int64 v23; // r9
  __int64 v24; // rdi
  __int64 **v25; // rcx
  __int64 *v26; // rax
  signed __int64 v27; // rcx
  ULONG_PTR v28; // rtt
  PVOID v29; // rcx
  wchar_t *v30; // rdx
  wchar_t *v31; // rax
  __int64 v32; // rcx
  const WCHAR *v33; // rdx
  const WCHAR *v34; // rcx
  wchar_t *v35; // rdx
  struct _KTHREAD *CurrentThread; // rax
  unsigned __int64 v37; // rtt
  struct _KTHREAD *v38; // rcx
  __int16 v39; // ax
  unsigned __int64 v40; // rtt
  struct _KTHREAD *v41; // rcx
  __int16 v42; // ax
  __int64 v43; // rdx
  __int64 v44; // r8
  __int64 v45; // r9
  char v46; // [rsp+50h] [rbp-B0h]
  unsigned __int16 Length; // [rsp+52h] [rbp-AEh]
  STRING Destination; // [rsp+58h] [rbp-A8h] BYREF
  PVOID P; // [rsp+68h] [rbp-98h]
  PVOID PoolWithTag; // [rsp+70h] [rbp-90h]
  UNICODE_STRING DestinationString; // [rsp+78h] [rbp-88h] BYREF
  HANDLE KeyHandle; // [rsp+88h] [rbp-78h] BYREF
  PVOID Object; // [rsp+98h] [rbp-68h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+A0h] [rbp-60h] BYREF
  char v55; // [rsp+D0h] [rbp-30h] BYREF

  *(_DWORD *)&Destination.Length = 0x800000;
  CmpNoWrite = 0;
  Destination.Buffer = &v55;
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
  v8 = (char *)&unk_140316738;
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
    KeWaitForSingleObject(&stru_140316900, Executive, 0, 0, 0LL);
    KeSetEvent(&stru_140316900, 0, 0);
    CmpInitCmRM(0LL, CmpInitRmLogOnLoad);
    if ( CmRmSystem )
    {
      TmEnableCallbacks(*((PKRESOURCEMANAGER *)CmRmSystem + 7), (PTM_RM_NOTIFICATION)CmKtmNotification, CmRmSystem);
      CmRmFinalizeRecovery((__int64)CmRmSystem, v10, v11, v12);
    }
  }
  v13 = &stru_140316750;
  while ( 2 )
  {
    KeWaitForMultipleObjects(6u, v5, WaitAny, Executive, 0, 0, 0LL, WaitBlockArray);
    v14 = 0;
    v46 = 0;
    CmpLockRegistryExclusive();
    v15 = &off_1403166E8;
    do
    {
      if ( *((_BYTE *)v15 + 48) )
        goto LABEL_13;
      if ( *((_BYTE *)v15 + 49) != 1 )
      {
        v14 = 1;
        v46 = 1;
        goto LABEL_13;
      }
      v16 = *v15;
      v17 = 0;
      Destination.Length = Length;
      RtlInitUnicodeString(&DestinationString, v16);
      RtlAppendStringToString(&Destination, (const STRING *)&DestinationString);
      if ( *(_WORD *)&Destination.Buffer[2 * ((unsigned __int64)Destination.Length >> 1) - 2] == 92 )
      {
        RtlInitUnicodeString(&DestinationString, v15[1]);
        RtlAppendStringToString(&Destination, (const STRING *)&DestinationString);
      }
      if ( !v15[2] )
      {
        v18 = (__int64)v15[5];
        if ( v18 )
        {
          v19 = CmpLinkHiveToMaster(
                  (const UNICODE_STRING *)&Destination,
                  0LL,
                  v18,
                  *((_BYTE *)v15 + 51),
                  *((_DWORD *)v15 + 8),
                  0,
                  0LL,
                  (__int64)P,
                  1);
          v21 = v19;
          if ( v19 )
          {
            CurrentThread = KeGetCurrentThread();
            --CurrentThread->KernelApcDisable;
            _m_prefetchw(&CmpShutdownRundown);
            v37 = CmpShutdownRundown.Count & 0xFFFFFFFFFFFFFFFEuLL;
            if ( v37 == _InterlockedCompareExchange64(
                          (volatile signed __int64 *)&CmpShutdownRundown,
                          (CmpShutdownRundown.Count & 0xFFFFFFFFFFFFFFFEuLL) + 2,
                          CmpShutdownRundown.Count & 0xFFFFFFFFFFFFFFFEuLL)
              || ExfAcquireRundownProtection(&CmpShutdownRundown) )
            {
              _m_prefetchw(&CmpShutdownRundown);
              v40 = CmpShutdownRundown.Count & 0xFFFFFFFFFFFFFFFEuLL;
              if ( v40 != _InterlockedCompareExchange64(
                            (volatile signed __int64 *)&CmpShutdownRundown,
                            (CmpShutdownRundown.Count & 0xFFFFFFFFFFFFFFFEuLL) - 2,
                            CmpShutdownRundown.Count & 0xFFFFFFFFFFFFFFFEuLL) )
                ExfReleaseRundownProtection(&CmpShutdownRundown);
              v41 = KeGetCurrentThread();
              v42 = v41->KernelApcDisable + 1;
              v41->KernelApcDisable = v42;
              if ( !v42
                && ($CD287064E7C9F7953DE243E927CFCB99 *)v41->ApcState.ApcListHead[0].Flink != &v41->152
                && !v41->SpecialApcDisable )
              {
                KiCheckForKernelApcDelivery();
              }
              KeBugCheckEx(0x73u, 1uLL, v21, v4, (ULONG_PTR)&Destination);
            }
            v38 = KeGetCurrentThread();
            v39 = v38->KernelApcDisable + 1;
            v38->KernelApcDisable = v39;
            if ( !v39
              && ($CD287064E7C9F7953DE243E927CFCB99 *)v38->ApcState.ApcListHead[0].Flink != &v38->152
              && !v38->SpecialApcDisable )
            {
              KiCheckForKernelApcDelivery();
            }
            CmpLoadingSystemHivesActive = 0;
            CmpMountThread = 0LL;
            CmpUnlockRegistry();
            ExFreePoolWithTag(P, 0);
            ExFreePoolWithTag(PoolWithTag, 0);
            ExFreePoolWithTag(v5, 0);
            return;
          }
          if ( *((_BYTE *)v15 + 51) == 1 )
            HvSyncHive((ULONG_PTR)v15[5]);
          v22 = KeAbPreAcquire((ULONG_PTR)&CmpHiveListHeadLock, 0LL, 0LL, v20);
          v24 = v22;
          if ( _interlockedbittestandset64((volatile signed __int32 *)&CmpHiveListHeadLock, 0LL) )
            ExfAcquirePushLockExclusiveEx(&CmpHiveListHeadLock, v22, (ULONG_PTR)&CmpHiveListHeadLock, v23);
          if ( v24 )
            *(_BYTE *)(v24 + 26) |= 1u;
          v25 = (__int64 **)qword_14077ED20;
          v26 = (__int64 *)(v15[5] + 1364);
          *v26 = (__int64)&CmpHiveListHead;
          v26[1] = (__int64)v25;
          if ( *v25 != &CmpHiveListHead )
            __fastfail(3u);
          *v25 = v26;
          qword_14077ED20 = (__int64)v26;
          _m_prefetchw(&CmpHiveListHeadLock);
          v27 = CmpHiveListHeadLock - 16;
          if ( (CmpHiveListHeadLock & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
            v27 = 0LL;
          if ( (CmpHiveListHeadLock & 2) != 0
            || (v28 = CmpHiveListHeadLock,
                v28 != _InterlockedCompareExchange64(
                         (volatile signed __int64 *)&CmpHiveListHeadLock,
                         v27,
                         CmpHiveListHeadLock)) )
          {
            ExfReleasePushLock(&CmpHiveListHeadLock, (__int64)&CmpHiveListHead);
          }
          KeAbPostRelease((ULONG_PTR)&CmpHiveListHeadLock);
          v29 = CmRmSystem;
          if ( !CmRmSystem )
            goto LABEL_38;
          v30 = v15[5];
          if ( !v30 || (*((_DWORD *)v30 + 36) & 2) != 0 || *((_QWORD *)v30 + 675) )
          {
            v35 = v15[2];
            if ( !v35 || (*((_DWORD *)v35 + 36) & 2) != 0 || *((_QWORD *)v35 + 675) )
              goto LABEL_38;
            ++*((_DWORD *)CmRmSystem + 16);
            v31 = v15[2];
          }
          else
          {
            ++*((_DWORD *)CmRmSystem + 16);
            v31 = v15[5];
          }
          *((_QWORD *)v31 + 675) = v29;
LABEL_38:
          RtlInitUnicodeString(&DestinationString, *(v15 - 1));
          v17 = 0;
        }
      }
      v32 = (__int64)v15[5];
      if ( v32 )
        CmpAddToHiveFileList(v32);
      *((_BYTE *)v15 + 48) = 1;
      CmpNoMasterCreates = 0;
      switch ( v4 )
      {
        case 3u:
          if ( !v1 )
            goto LABEL_45;
          CmpMountPreloadedHives();
          CmpInterlockedFunction();
          KeSetEvent(&stru_140316918, 0, 0);
          v17 = 1;
          if ( !byte_140316848 || !CmFastBoot )
            goto LABEL_45;
          CmpUnlockRegistry();
          ExpRefreshSystemTime();
          PsBootPhaseComplete();
          goto LABEL_62;
        case 2u:
          CmpUnlockRegistry();
          if ( v1 )
          {
            KeSetEvent(&stru_140316880, 0, 0);
            v17 = 1;
            if ( byte_1403168E0 && CmFastBoot )
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
          v33 = L"\\Registry\\Machine\\SAM\\SAM";
          v34 = L"\\Registry\\Machine\\Security\\SAM";
          break;
        case 4u:
          v33 = L"\\Registry\\User\\.Default";
          v34 = L"\\Registry\\User\\S-1-5-18";
          break;
        default:
          goto LABEL_45;
      }
      CmpLinkKeyToHive(v34, v33);
LABEL_45:
      CmpNoMasterCreates = 1;
      if ( v1 && !v17 )
        KeSetEvent((struct _KEVENT *)((char *)&stru_140316750 + 152 * v4), 0, 0);
      v14 = v46;
LABEL_13:
      ++v4;
      v15 += 19;
    }
    while ( v4 < 6 );
    if ( v14 == 1 )
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
      CmRmFinalizeRecovery((__int64)CmRmSystem, v43, v44, v45);
    }
    CmpLockRegistryExclusive();
    CmpMountPreloadedHives();
    CmpInterlockedFunction();
    CmpUnlockRegistry();
    do
    {
      KeSetEvent(v13, 0, 0);
      v13 = (struct _KEVENT *)((char *)v13 + 152);
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
    CmpConfigurationManagerKeyObject = (__int64)Object;
    ZwClose(KeyHandle);
  }
  CmpLoadingSystemHivesActive = 0;
  CmpMountThread = 0LL;
}
