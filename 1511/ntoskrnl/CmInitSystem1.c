/*
 * XREFs of CmInitSystem1 @ 0x1407450EC
 * Callers:
 *     Phase1InitializationDiscard @ 0x1407645E8 (Phase1InitializationDiscard.c)
 * Callees:
 *     CmSetInitMachineConfig_0 @ 0x140001268 (CmSetInitMachineConfig_0.c)
 *     RtlInitUnicodeString @ 0x140043C70 (RtlInitUnicodeString.c)
 *     ExInitializeResourceLite @ 0x14009E260 (ExInitializeResourceLite.c)
 *     InitializeSListHead @ 0x1400F8DC8 (InitializeSListHead.c)
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 *     KeBugCheckEx @ 0x140153DC0 (KeBugCheckEx.c)
 *     RtlpInterlockedPushEntrySList @ 0x14015B9A0 (RtlpInterlockedPushEntrySList.c)
 *     memset @ 0x140166CC0 (memset.c)
 *     ExAllocatePoolWithTag @ 0x140238380 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
 *     CmpLinkHiveToMaster @ 0x1403BAC9C (CmpLinkHiveToMaster.c)
 *     CmpInitializeKcbCache @ 0x1403BDA28 (CmpInitializeKcbCache.c)
 *     CmpInitializeHive @ 0x1403D071C (CmpInitializeHive.c)
 *     CmpComputeHashKey @ 0x1403DA088 (CmpComputeHashKey.c)
 *     CmpGetNextActiveHive @ 0x1403DE2DC (CmpGetNextActiveHive.c)
 *     CmpLockRegistryExclusive @ 0x1403DE874 (CmpLockRegistryExclusive.c)
 *     NtCreateKey @ 0x140421FB8 (NtCreateKey.c)
 *     ObOpenObjectByName @ 0x140422190 (ObOpenObjectByName.c)
 *     CmpUnlockRegistry @ 0x140423B00 (CmpUnlockRegistry.c)
 *     CmpAddToHiveFileList @ 0x1404C26DC (CmpAddToHiveFileList.c)
 *     NtClose @ 0x1404DAF00 (NtClose.c)
 *     CmpInitSIDToHiveMapping @ 0x14051CA30 (CmpInitSIDToHiveMapping.c)
 *     CmpInitializeDelayedCloseTable @ 0x14051CA3C (CmpInitializeDelayedCloseTable.c)
 *     CmpInitDelayDerefKCBEngine @ 0x14051CA84 (CmpInitDelayDerefKCBEngine.c)
 *     CmpInitCallbacks @ 0x14051CC68 (CmpInitCallbacks.c)
 *     CmpInitializeFreezeThaw @ 0x14051CCD8 (CmpInitializeFreezeThaw.c)
 *     HvInitializeHashLibrary @ 0x14051CD08 (HvInitializeHashLibrary.c)
 *     CmpValidateGlobalFlushControlFlags @ 0x14051CD38 (CmpValidateGlobalFlushControlFlags.c)
 *     CmpParseCacheInit @ 0x14051CD50 (CmpParseCacheInit.c)
 *     CmpMarkCurrentProfileDirty @ 0x14051DBB0 (CmpMarkCurrentProfileDirty.c)
 *     CmpHiveRootSecurityDescriptor @ 0x14051E508 (CmpHiveRootSecurityDescriptor.c)
 *     CmpInitServerSilo @ 0x140526568 (CmpInitServerSilo.c)
 *     CmpInitializeNameCache @ 0x140538B6C (CmpInitializeNameCache.c)
 *     CmpInitializeTransactions @ 0x140742FE8 (CmpInitializeTransactions.c)
 *     CmpCreateObjectTypes @ 0x1407432E4 (CmpCreateObjectTypes.c)
 *     CmpCreateControlSet @ 0x1407433D0 (CmpCreateControlSet.c)
 *     CmpInitializeHardwareConfiguration @ 0x1407439F0 (CmpInitializeHardwareConfiguration.c)
 *     CmpInitializeMachineDependentConfiguration @ 0x140743C5C (CmpInitializeMachineDependentConfiguration.c)
 *     CmpSetSystemValues @ 0x140744BE0 (CmpSetSystemValues.c)
 *     CmpMigrateOOBELanguageToInstallationLanguage @ 0x140744E48 (CmpMigrateOOBELanguageToInstallationLanguage.c)
 *     CmpInitializeSystemHive @ 0x140744EB4 (CmpInitializeSystemHive.c)
 *     CmpInitializePreloadedHives @ 0x1407457BC (CmpInitializePreloadedHives.c)
 *     CmpCreateRegistryRoot @ 0x140745C60 (CmpCreateRegistryRoot.c)
 *     CmpInitializeRegistryNames @ 0x14076C7AC (CmpInitializeRegistryNames.c)
 *     CmpInitializeTrustedInstallerSid @ 0x1407706F4 (CmpInitializeTrustedInstallerSid.c)
 *     CmpInitGlobalQuotaAllowed @ 0x140770A9C (CmpInitGlobalQuotaAllowed.c)
 *     CmpSetNetworkValue @ 0x1407822A0 (CmpSetNetworkValue.c)
 */

char __fastcall CmInitSystem1(ULONG_PTR BugCheckParameter3)
{
  int *v2; // rbx
  __int64 v3; // rsi
  int ObjectTypes; // eax
  int v5; // eax
  int v6; // eax
  int v7; // eax
  ACL *v8; // rbx
  NTSTATUS v9; // eax
  ULONG_PTR v10; // rsi
  NTSTATUS v11; // eax
  ULONG_PTR v12; // rsi
  int v13; // eax
  ULONG_PTR v14; // rsi
  NTSTATUS v15; // eax
  ULONG_PTR v16; // rsi
  NTSTATUS ControlSet; // eax
  int v18; // eax
  ULONG_PTR v19; // rsi
  __int64 v20; // rsi
  int v21; // eax
  NTSTATUS v22; // eax
  int v23; // eax
  NTSTATUS v24; // eax
  int v25; // eax
  __int64 v26; // rcx
  int v28; // ebx
  unsigned int v29; // ebx
  _SLIST_HEADER *PoolWithTag; // rax
  _SLIST_HEADER *v31; // rsi
  unsigned int v32; // ebx
  struct _EX_RUNDOWN_REF *v33; // rcx
  unsigned int v34; // eax
  __int64 *v35; // r8
  __int64 v36; // r9
  __int64 i; // rdx
  __int64 *NextActiveHive; // rax
  int v39; // eax
  HANDLE KeyHandle; // [rsp+60h] [rbp-A0h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+68h] [rbp-98h] BYREF
  __int64 v42; // [rsp+98h] [rbp-68h] BYREF
  UNICODE_STRING DestinationString; // [rsp+A0h] [rbp-60h] BYREF
  _DWORD v44[36]; // [rsp+B0h] [rbp-50h] BYREF
  ULONG_PTR BugCheckParameter4[44]; // [rsp+140h] [rbp+40h] BYREF

  memset(v44, 0, 136);
  memset(BugCheckParameter4, 0, sizeof(BugCheckParameter4));
  CmIoFileObjectType = (__int64)&IoFileObjectType;
  if ( InitIsWinPEMode )
  {
    CmpMiniNTBoot = InitIsWinPEMode;
    CmpShareSystemHives = 1;
  }
  if ( CmpVolatileBoot )
    CmpShareSystemHives = 1;
  CmpInitializeRegistryNames();
  CmpInitGlobalQuotaAllowed();
  CmpHiveListHeadLock = 0LL;
  qword_1406FC008 = (__int64)&CmpFailedUnloadListHead;
  CmpFailedUnloadListHead = (__int64)&CmpFailedUnloadListHead;
  qword_1406FBD10 = (__int64)&CmpHiveListHead;
  qword_1402FD748 = (__int64)&CmpAppHiveLoadList;
  CmpAppHiveLoadList = (__int64)&CmpAppHiveLoadList;
  CmpHiveListHead = (__int64)&CmpHiveListHead;
  CmpLoadHiveLock = 0LL;
  CmpShutdownLock = 0LL;
  CmpShutdownRundown.Count = 0LL;
  CmpActiveHiveRundownEvent = 0LL;
  CmpActiveAppHiveUnloadEvent = 0LL;
  CmpAppHiveLoadListLock = 0LL;
  ExInitializeResourceLite(&CmpRegistryLock);
  CmpPostLock.Count = 1;
  CmpPostLock.Event.Header.WaitListHead.Blink = &CmpPostLock.Event.Header.WaitListHead;
  CmpPostLock.Event.Header.WaitListHead.Flink = &CmpPostLock.Event.Header.WaitListHead;
  qword_1406FB720 = (__int64)&CmpAsyncKernelPostList;
  CmpAsyncKernelPostList = (__int64)&CmpAsyncKernelPostList;
  CmpWorkerEngineWorkItem.WorkerRoutine = (void (__fastcall *)(void *))CmpWorkerEngineWorker;
  CmpWorkerEngineLock.Event.Header.WaitListHead.Blink = &CmpWorkerEngineLock.Event.Header.WaitListHead;
  CmpWorkerEngineLock.Event.Header.WaitListHead.Flink = &CmpWorkerEngineLock.Event.Header.WaitListHead;
  qword_1402FD7C8 = (__int64)&CmpWorkerEngineListHead;
  CmpWorkerEngineListHead = &CmpWorkerEngineListHead;
  CmpPostLock.Owner = 0LL;
  CmpPostLock.Contention = 0;
  LOWORD(CmpPostLock.Event.Header.Lock) = 1;
  CmpPostLock.Event.Header.Size = 6;
  CmpPostLock.Event.Header.SignalState = 0;
  CmpWorkerEngineWorkItem.Parameter = 0LL;
  CmpWorkerEngineWorkItem.List.Flink = 0LL;
  CmpWorkerEngineLock.Count = 1;
  CmpWorkerEngineLock.Owner = 0LL;
  CmpWorkerEngineLock.Contention = 0;
  LOWORD(CmpWorkerEngineLock.Event.Header.Lock) = 1;
  CmpWorkerEngineLock.Event.Header.Size = 6;
  CmpWorkerEngineLock.Event.Header.SignalState = 0;
  CmpWorkerEngineFinishedEvent = 0LL;
  CmpInitializeNameCache();
  if ( !CmpAllocInited )
  {
    LODWORD(CmpAllocBucketLock) = 1;
    qword_1402FD6A8 = (__int64)&CmpFreeKCBListHead;
    CmpFreeKCBListHead = (__int64)&CmpFreeKCBListHead;
    *(&CmpAllocBucketLock + 5) = (ULONG_PTR)(&CmpAllocBucketLock + 4);
    *(&CmpAllocBucketLock + 4) = (ULONG_PTR)(&CmpAllocBucketLock + 4);
    *(&CmpAllocBucketLock + 1) = 0LL;
    *((_DWORD *)&CmpAllocBucketLock + 4) = 0;
    *((_WORD *)&CmpAllocBucketLock + 12) = 1;
    *((_BYTE *)&CmpAllocBucketLock + 26) = 6;
    *((_DWORD *)&CmpAllocBucketLock + 7) = 0;
    CmpAllocInited = 1;
  }
  CmpInitSIDToHiveMapping();
  CmpInitializeTrustedInstallerSid();
  CmpInitializeDelayedCloseTable();
  CmpInitDelayDerefKCBEngine();
  CmpInitCallbacks();
  CmpInitializeFreezeThaw();
  HvInitializeHashLibrary();
  CmpValidateGlobalFlushControlFlags();
  CmpInitializeTransactions();
  v2 = dword_1402C756C;
  v3 = 7LL;
  CmpSystemProcess = (__int64)KeGetCurrentThread()->ApcState.Process;
  do
  {
    RtlInitUnicodeString(&DestinationString, *(PCWSTR *)(v2 - 3));
    *v2 = CmpComputeHashKey(0, &DestinationString.Length);
    v2 += 6;
    --v3;
  }
  while ( v3 );
  CmpLockRegistryExclusive();
  CmpInitializePreloadedHives(BugCheckParameter3, 0LL);
  ObjectTypes = CmpCreateObjectTypes();
  if ( ObjectTypes < 0 )
    KeBugCheckEx(0x67u, 1uLL, 1uLL, ObjectTypes, 0LL);
  v5 = CmpParseCacheInit();
  if ( v5 < 0 )
    KeBugCheckEx(0x67u, 1uLL, 7uLL, v5, 0LL);
  v6 = CmpInitializeHive(&CmpMasterHive, 0, 1, 0, 0LL, 0LL, 0LL, 0, 0LL, 0LL, 0LL, BugCheckParameter4);
  if ( v6 < 0 )
    KeBugCheckEx(0x67u, 1uLL, 2uLL, v6, (ULONG_PTR)BugCheckParameter4);
  v7 = CmpInitializeKcbCache(CmpMasterHive, 0x80u);
  if ( v7 < 0 )
    KeBugCheckEx(0x67u, 1uLL, 3uLL, v7, 0LL);
  if ( !(unsigned __int8)CmpCreateRegistryRoot() )
    KeBugCheckEx(0x67u, 1uLL, 4uLL, 0LL, 0LL);
  v8 = CmpHiveRootSecurityDescriptor();
  ObjectAttributes.ObjectName = &CmRegistryMachineName;
  ObjectAttributes.Length = 48;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.Attributes = 64;
  ObjectAttributes.SecurityDescriptor = v8;
  ObjectAttributes.SecurityQualityOfService = 0LL;
  v9 = NtCreateKey(&KeyHandle, 0x2001Fu, &ObjectAttributes, 0, (PUNICODE_STRING)&nullclass, 0, 0LL);
  v10 = v9;
  if ( v9 < 0 )
  {
    ExFreePoolWithTag(v8, 0);
    KeBugCheckEx(0x67u, 1uLL, 5uLL, v10, 0LL);
  }
  NtClose(KeyHandle);
  ObjectAttributes.ObjectName = &CmRegistryUserName;
  ObjectAttributes.Length = 48;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.Attributes = 64;
  ObjectAttributes.SecurityDescriptor = v8;
  ObjectAttributes.SecurityQualityOfService = 0LL;
  v11 = NtCreateKey(&KeyHandle, 0x2001Fu, &ObjectAttributes, 0, (PUNICODE_STRING)&nullclass, 0, 0LL);
  v12 = v11;
  if ( v11 < 0 )
  {
    ExFreePoolWithTag(v8, 0);
    KeBugCheckEx(0x67u, 1uLL, 6uLL, v12, 0LL);
  }
  NtClose(KeyHandle);
  ObjectAttributes.ObjectName = &CmRegistryAppName;
  ObjectAttributes.Length = 48;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.Attributes = 64;
  ObjectAttributes.SecurityDescriptor = v8;
  ObjectAttributes.SecurityQualityOfService = 0LL;
  v44[0] = 65;
  v13 = ObOpenObjectByName(
          (__int64)&ObjectAttributes,
          (struct _OBJECT_TYPE *)CmKeyObjectType,
          0,
          0LL,
          0x2001Fu,
          v44,
          &KeyHandle);
  v14 = v13;
  if ( v13 < 0 )
  {
    ExFreePoolWithTag(v8, 0);
    KeBugCheckEx(0x67u, 1uLL, 7uLL, v14, 0LL);
  }
  NtClose(KeyHandle);
  ObjectAttributes.ObjectName = &CmRegistryContainersName;
  ObjectAttributes.Length = 48;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.Attributes = 64;
  ObjectAttributes.SecurityDescriptor = v8;
  ObjectAttributes.SecurityQualityOfService = 0LL;
  v15 = NtCreateKey(&KeyHandle, 0x2001Fu, &ObjectAttributes, 0, (PUNICODE_STRING)&nullclass, 0, 0LL);
  v16 = v15;
  if ( v15 < 0 )
  {
    ExFreePoolWithTag(v8, 0);
    KeBugCheckEx(0x67u, 1uLL, 8uLL, v16, 0LL);
  }
  NtClose(KeyHandle);
  if ( !CmpInitializeSystemHive(BugCheckParameter3) )
  {
    ExFreePoolWithTag(v8, 0);
    KeBugCheckEx(0x67u, 1uLL, 0xCuLL, 0LL, 0LL);
  }
  ControlSet = CmpCreateControlSet(BugCheckParameter3);
  if ( ControlSet < 0 )
    KeBugCheckEx(0x67u, 1uLL, 0xDuLL, ControlSet, 0LL);
  if ( CmpLKGEnabled )
    MEMORY[0xFFFFF780000002F0] |= 0x10u;
  memset(BugCheckParameter4, 0, sizeof(BugCheckParameter4));
  v18 = CmpInitializeHive((ULONG_PTR *)&v42, 0, 1, 0, 0LL, 0LL, 0LL, 0, 0LL, 0LL, 0LL, BugCheckParameter4);
  v19 = v18;
  if ( v18 < 0 )
  {
    ExFreePoolWithTag(v8, 0);
    KeBugCheckEx(0x67u, 1uLL, 0x10uLL, v19, (ULONG_PTR)BugCheckParameter4);
  }
  v20 = v42;
  v21 = CmpLinkHiveToMaster(&CmRegistryMachineHardwareName, 0LL, v42, 1, dword_1402C7638, 0, 0LL, (__int64)v8, 1);
  if ( v21 )
    KeBugCheckEx(0x67u, 1uLL, 0x11uLL, v21, 0LL);
  CmpAddToHiveFileList(v20);
  ExFreePoolWithTag(v8, 0);
  qword_1402C7628 = v20;
  v22 = CmpInitializeHardwareConfiguration(BugCheckParameter3);
  if ( v22 < 0 )
    KeBugCheckEx(0x67u, 1uLL, 0x12uLL, v22, 0LL);
  CmpNoMasterCreates = 1;
  v23 = CmpInitializePreloadedHives(BugCheckParameter3, 1LL);
  if ( v23 < 0 )
    KeBugCheckEx(0x67u, 1uLL, 0x13uLL, v23, 0LL);
  if ( CmRegistryLockTableLength == 4 && CmRegistryLockTableType == 4 )
  {
    v28 = CmRegistryLockTablePages;
    if ( CmRegistryLockTablePages )
    {
      if ( (unsigned int)CmRegistryLockTablePages <= 0x14 )
      {
        if ( (unsigned int)CmRegistryLockTablePages < 8 )
          v28 = 8;
      }
      else
      {
        v28 = 20;
      }
      v29 = v28 << 12;
      PoolWithTag = (_SLIST_HEADER *)ExAllocatePoolWithTag(NonPagedPoolNx, v29, 0x744C4D43u);
      CmpLockTable = PoolWithTag;
      v31 = PoolWithTag;
      if ( !PoolWithTag )
        KeBugCheckEx(0x67u, 1uLL, 0x14uLL, 0xFFFFFFFFC000009AuLL, 0LL);
      memset(PoolWithTag, 0, v29);
      *((_DWORD *)&v31[1].HeaderX64 + 1) = 0;
      v32 = (v29 - 32) >> 4;
      LODWORD(v31[1].Alignment) = v32;
      InitializeSListHead(v31);
      while ( v32 )
        RtlpInterlockedPushEntrySList(CmpLockTable, (PSLIST_ENTRY)&CmpLockTable[--v32 + 2]);
      v33 = 0LL;
      while ( 1 )
      {
        NextActiveHive = CmpGetNextActiveHive(v33);
        v33 = (struct _EX_RUNDOWN_REF *)NextActiveHive;
        if ( !NextActiveHive )
          break;
        v34 = *((_DWORD *)NextActiveHive + 702);
        if ( v34 )
        {
          v35 = (__int64 *)(v33[350].Count + 16);
          v36 = v34;
          do
          {
            for ( i = *v35; i; i = *(_QWORD *)(i + 8) )
              *(_DWORD *)(i - 12) |= 0x100000u;
            v35 += 3;
            --v36;
          }
          while ( v36 );
        }
      }
      CmpLockTablePresent = 1;
    }
  }
  CmSetInitMachineConfig_0();
  CmpUnlockRegistry();
  CmpMarkCurrentProfileDirty();
  v24 = CmpInitializeMachineDependentConfiguration(BugCheckParameter3);
  if ( v24 < 0 )
    KeBugCheckEx(0x67u, 1uLL, 0x15uLL, v24, 0LL);
  v25 = CmpSetSystemValues(BugCheckParameter3);
  if ( v25 < 0 )
    KeBugCheckEx(0x67u, 1uLL, 0x16uLL, v25, 0LL);
  CmpMigrateOOBELanguageToInstallationLanguage();
  ExFreePoolWithTag(CmpLoadOptions.Buffer, 0);
  v26 = *(_QWORD *)(BugCheckParameter3 + 240);
  if ( *(_DWORD *)v26 >= 0x58u )
  {
    if ( *(_QWORD *)(v26 + 80) )
    {
      v39 = CmpSetNetworkValue();
      if ( v39 < 0 )
        KeBugCheckEx(0x67u, 1uLL, 0x17uLL, v39, 0LL);
    }
  }
  CmpInitServerSilo();
  return 1;
}
