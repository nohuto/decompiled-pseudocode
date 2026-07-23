/*
 * XREFs of CmInitSystem1 @ 0x1407ADA6C
 * Callers:
 *     Phase1InitializationDiscard @ 0x140794438 (Phase1InitializationDiscard.c)
 * Callees:
 *     CmSetInitMachineConfig_0 @ 0x140001270 (CmSetInitMachineConfig_0.c)
 *     InitializeSListHead @ 0x140002CB0 (InitializeSListHead.c)
 *     ExInitializeResourceLite @ 0x14000E840 (ExInitializeResourceLite.c)
 *     RtlInitUnicodeString @ 0x14002D7E0 (RtlInitUnicodeString.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     KeBugCheckEx @ 0x14015DA70 (KeBugCheckEx.c)
 *     RtlpInterlockedPushEntrySList @ 0x1401673B0 (RtlpInterlockedPushEntrySList.c)
 *     memset @ 0x140171AC0 (memset.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 *     CmpGetNextActiveHive @ 0x1403FA590 (CmpGetNextActiveHive.c)
 *     CmpLockRegistryExclusive @ 0x1403FC8A8 (CmpLockRegistryExclusive.c)
 *     CmpUnlockRegistry @ 0x14040362C (CmpUnlockRegistry.c)
 *     NtCreateKey @ 0x140462F98 (NtCreateKey.c)
 *     CmpCleanupParseContext @ 0x14046353C (CmpCleanupParseContext.c)
 *     ObOpenObjectByName @ 0x140463564 (ObOpenObjectByName.c)
 *     CmpInitializeHive @ 0x14047DED8 (CmpInitializeHive.c)
 *     CmpHashUnicodeComponent @ 0x14049B720 (CmpHashUnicodeComponent.c)
 *     CmpAddToHiveFileList @ 0x1404CD0D8 (CmpAddToHiveFileList.c)
 *     CmpInitializeParseContext @ 0x1404D36F0 (CmpInitializeParseContext.c)
 *     NtClose @ 0x1404EE070 (NtClose.c)
 *     CmpLinkHiveToMaster @ 0x1405194C0 (CmpLinkHiveToMaster.c)
 *     CmpInitializeKcbCache @ 0x14051A1F8 (CmpInitializeKcbCache.c)
 *     CmpInitializeLightWeightTransactionType @ 0x140553454 (CmpInitializeLightWeightTransactionType.c)
 *     CmpInitializeNameCache @ 0x14055BB7C (CmpInitializeNameCache.c)
 *     CmpInitSIDToHiveMapping @ 0x14055BBD4 (CmpInitSIDToHiveMapping.c)
 *     CmpInitializeDelayedCloseTable @ 0x14055BBE0 (CmpInitializeDelayedCloseTable.c)
 *     CmpInitDelayDerefKCBEngine @ 0x14055BC28 (CmpInitDelayDerefKCBEngine.c)
 *     CmpInitCallbacks @ 0x14055BE40 (CmpInitCallbacks.c)
 *     CmpInitializeFreezeThaw @ 0x14055BEB0 (CmpInitializeFreezeThaw.c)
 *     HvInitializeHashLibrary @ 0x14055BEE0 (HvInitializeHashLibrary.c)
 *     CmpValidateGlobalFlushControlFlags @ 0x14055BF10 (CmpValidateGlobalFlushControlFlags.c)
 *     CmpMarkCurrentProfileDirty @ 0x14055CD0C (CmpMarkCurrentProfileDirty.c)
 *     CmpHiveRootSecurityDescriptor @ 0x14055EC7C (CmpHiveRootSecurityDescriptor.c)
 *     CmpInitGlobalQuotaAllowed @ 0x1407ABAAC (CmpInitGlobalQuotaAllowed.c)
 *     CmpInitializeTrustedInstallerSid @ 0x1407ABBA0 (CmpInitializeTrustedInstallerSid.c)
 *     CmpInitializeTransactions @ 0x1407ABC20 (CmpInitializeTransactions.c)
 *     CmpCreateObjectTypes @ 0x1407ABF40 (CmpCreateObjectTypes.c)
 *     CmpCreateControlSet @ 0x1407AC02C (CmpCreateControlSet.c)
 *     CmpInitializeHardwareConfiguration @ 0x1407AC64C (CmpInitializeHardwareConfiguration.c)
 *     CmpInitializeMachineDependentConfiguration @ 0x1407AC8B4 (CmpInitializeMachineDependentConfiguration.c)
 *     CmpInitializeSystemHive @ 0x1407AD830 (CmpInitializeSystemHive.c)
 *     CmpInitializePreloadedHives @ 0x1407AE130 (CmpInitializePreloadedHives.c)
 *     CmpCreateRegistryRoot @ 0x1407AE4D4 (CmpCreateRegistryRoot.c)
 *     CmpInitServerSilo @ 0x1407AE8A8 (CmpInitServerSilo.c)
 *     CmpMigrateOOBELanguageToInstallationLanguage @ 0x1407AE930 (CmpMigrateOOBELanguageToInstallationLanguage.c)
 *     CmpSetSystemValues @ 0x1407AE99C (CmpSetSystemValues.c)
 *     CmpInitializeRegistryNames @ 0x1407B6FF0 (CmpInitializeRegistryNames.c)
 *     CmpSetNetworkValue @ 0x1407CD8C8 (CmpSetNetworkValue.c)
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
  void *v20; // rsi
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
  UNICODE_STRING DestinationString; // [rsp+60h] [rbp-A0h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+70h] [rbp-90h] BYREF
  ULONG_PTR BugCheckParameter4[44]; // [rsp+A0h] [rbp-60h] BYREF
  _DWORD v43[60]; // [rsp+200h] [rbp+100h] BYREF

  memset(BugCheckParameter4, 0, sizeof(BugCheckParameter4));
  CmpInitializeParseContext(v43);
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
  qword_140748178 = (__int64)&CmpFailedUnloadListHead;
  CmpFailedUnloadListHead = (__int64)&CmpFailedUnloadListHead;
  qword_140747E38 = (__int64)&CmpHiveListHead;
  qword_140322D58 = (__int64)&CmpAppHiveLoadList;
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
  qword_140747790 = (__int64)&CmpAsyncKernelPostList;
  CmpAsyncKernelPostList = (__int64)&CmpAsyncKernelPostList;
  CmpWorkerEngineWorkItem.WorkerRoutine = (void (__fastcall *)(void *))CmpWorkerEngineWorker;
  CmpWorkerEngineLock.Event.Header.WaitListHead.Blink = &CmpWorkerEngineLock.Event.Header.WaitListHead;
  CmpWorkerEngineLock.Event.Header.WaitListHead.Flink = &CmpWorkerEngineLock.Event.Header.WaitListHead;
  qword_140322DE8 = (__int64)&CmpWorkerEngineListHead;
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
    qword_140322CA8 = (__int64)&CmpFreeKCBListHead;
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
  v2 = dword_1402F30BC;
  v3 = 7LL;
  do
  {
    RtlInitUnicodeString(&DestinationString, *(PCWSTR *)(v2 - 3));
    *v2 = CmpHashUnicodeComponent((__m128i *)&DestinationString);
    v2 += 6;
    --v3;
  }
  while ( v3 );
  CmpLockRegistryExclusive();
  CmpInitializePreloadedHives(BugCheckParameter3, 0LL);
  ObjectTypes = CmpCreateObjectTypes();
  if ( ObjectTypes < 0 )
    KeBugCheckEx(0x67u, 1uLL, 1uLL, ObjectTypes, 0LL);
  v5 = CmpInitializeLightWeightTransactionType();
  if ( v5 < 0 )
    KeBugCheckEx(0x67u, 1uLL, 0x18uLL, v5, 0LL);
  v6 = CmpInitializeHive(
         (ULONG_PTR *)&CmpMasterHive,
         0,
         1,
         0,
         0LL,
         0LL,
         0LL,
         0x20000,
         0LL,
         0LL,
         0LL,
         BugCheckParameter4);
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
  v9 = NtCreateKey((PHANDLE)&DestinationString, 0x2001Fu, &ObjectAttributes, 0, (PUNICODE_STRING)&nullclass, 0, 0LL);
  v10 = v9;
  if ( v9 < 0 )
  {
    ExFreePoolWithTag(v8, 0);
    KeBugCheckEx(0x67u, 1uLL, 5uLL, v10, 0LL);
  }
  NtClose(*(HANDLE *)&DestinationString.Length);
  ObjectAttributes.ObjectName = &CmRegistryUserName;
  ObjectAttributes.Length = 48;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.Attributes = 64;
  ObjectAttributes.SecurityDescriptor = v8;
  ObjectAttributes.SecurityQualityOfService = 0LL;
  v11 = NtCreateKey((PHANDLE)&DestinationString, 0x2001Fu, &ObjectAttributes, 0, (PUNICODE_STRING)&nullclass, 0, 0LL);
  v12 = v11;
  if ( v11 < 0 )
  {
    ExFreePoolWithTag(v8, 0);
    KeBugCheckEx(0x67u, 1uLL, 6uLL, v12, 0LL);
  }
  NtClose(*(HANDLE *)&DestinationString.Length);
  ObjectAttributes.ObjectName = &CmRegistryAppName;
  ObjectAttributes.Length = 48;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.Attributes = 64;
  ObjectAttributes.SecurityDescriptor = v8;
  ObjectAttributes.SecurityQualityOfService = 0LL;
  v43[0] = 65;
  v13 = ObOpenObjectByName(
          (__int64)&ObjectAttributes,
          (__int64)CmKeyObjectType,
          0,
          0LL,
          0x2001Fu,
          (__int64)v43,
          &DestinationString);
  v14 = v13;
  if ( v13 < 0 )
  {
    ExFreePoolWithTag(v8, 0);
    CmpCleanupParseContext((__int64)v43, 0);
    KeBugCheckEx(0x67u, 1uLL, 7uLL, v14, 0LL);
  }
  CmpCleanupParseContext((__int64)v43, 0);
  NtClose(*(HANDLE *)&DestinationString.Length);
  ObjectAttributes.ObjectName = &CmRegistryContainersName;
  ObjectAttributes.Length = 48;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.Attributes = 64;
  ObjectAttributes.SecurityDescriptor = v8;
  ObjectAttributes.SecurityQualityOfService = 0LL;
  v15 = NtCreateKey((PHANDLE)&DestinationString, 0x2001Fu, &ObjectAttributes, 0, (PUNICODE_STRING)&nullclass, 0, 0LL);
  v16 = v15;
  if ( v15 < 0 )
  {
    ExFreePoolWithTag(v8, 0);
    KeBugCheckEx(0x67u, 1uLL, 8uLL, v16, 0LL);
  }
  NtClose(*(HANDLE *)&DestinationString.Length);
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
  v18 = CmpInitializeHive(
          (ULONG_PTR *)&DestinationString.Length,
          0,
          1,
          0,
          0LL,
          0LL,
          0LL,
          0x20000,
          0LL,
          0LL,
          0LL,
          BugCheckParameter4);
  v19 = v18;
  if ( v18 < 0 )
  {
    ExFreePoolWithTag(v8, 0);
    KeBugCheckEx(0x67u, 1uLL, 0x10uLL, v19, (ULONG_PTR)BugCheckParameter4);
  }
  v20 = *(void **)&DestinationString.Length;
  v21 = CmpLinkHiveToMaster(
          (__int64)&CmRegistryMachineHardwareName,
          0LL,
          *(__int64 *)&DestinationString.Length,
          1,
          dword_1402F2CA8,
          0,
          0LL,
          (__int64)v8,
          0LL,
          0LL,
          1);
  if ( v21 )
    KeBugCheckEx(0x67u, 1uLL, 0x11uLL, v21, 0LL);
  CmpAddToHiveFileList(v20);
  ExFreePoolWithTag(v8, 0);
  qword_1402F2C98 = (__int64)v20;
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
              *(_DWORD *)(i - 4) |= 0x100000u;
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
  if ( !(unsigned __int8)CmpInitServerSilo() )
    KeBugCheckEx(0x67u, 1uLL, 0x18uLL, 0LL, 0LL);
  return 1;
}
