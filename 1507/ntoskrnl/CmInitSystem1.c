/*
 * XREFs of CmInitSystem1 @ 0x1407D6D64
 * Callers:
 *     Phase1InitializationDiscard @ 0x1407D146C (Phase1InitializationDiscard.c)
 * Callees:
 *     CmSetInitMachineConfig_0 @ 0x140001268 (CmSetInitMachineConfig_0.c)
 *     ExInitializeResourceLite @ 0x1400155B0 (ExInitializeResourceLite.c)
 *     RtlInitUnicodeString @ 0x140047FE0 (RtlInitUnicodeString.c)
 *     InitializeSListHead @ 0x1400D9F4C (InitializeSListHead.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     KeBugCheckEx @ 0x140182750 (KeBugCheckEx.c)
 *     RtlpInterlockedPushEntrySList @ 0x14018B480 (RtlpInterlockedPushEntrySList.c)
 *     memset @ 0x140195A80 (memset.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140288E60 (ExAllocatePoolWithTag.c)
 *     CmpGetNextActiveHive @ 0x140445EE8 (CmpGetNextActiveHive.c)
 *     CmpLockRegistryExclusive @ 0x140448470 (CmpLockRegistryExclusive.c)
 *     ObOpenObjectByName @ 0x1404902E0 (ObOpenObjectByName.c)
 *     NtClose @ 0x14049BE90 (NtClose.c)
 *     CmpInitializeHive @ 0x1404ACE6C (CmpInitializeHive.c)
 *     CmpUnlockRegistry @ 0x1404C6A10 (CmpUnlockRegistry.c)
 *     CmpLinkHiveToMaster @ 0x1404E9E8C (CmpLinkHiveToMaster.c)
 *     CmpInitializeKcbCache @ 0x1404EA528 (CmpInitializeKcbCache.c)
 *     CmpAddToHiveFileList @ 0x1404EBEEC (CmpAddToHiveFileList.c)
 *     NtCreateKey @ 0x1404F4810 (NtCreateKey.c)
 *     CmpComputeHashKey @ 0x140533C5C (CmpComputeHashKey.c)
 *     CmpInitializeNameCache @ 0x1405A274C (CmpInitializeNameCache.c)
 *     CmpInitSIDToHiveMapping @ 0x1405A27A4 (CmpInitSIDToHiveMapping.c)
 *     CmpInitializeDelayedCloseTable @ 0x1405A27B0 (CmpInitializeDelayedCloseTable.c)
 *     CmpInitDelayDerefKCBEngine @ 0x1405A27F8 (CmpInitDelayDerefKCBEngine.c)
 *     CmpInitCallbacks @ 0x1405A2A08 (CmpInitCallbacks.c)
 *     CmpInitializeFreezeThaw @ 0x1405A2A78 (CmpInitializeFreezeThaw.c)
 *     HvInitializeHashLibrary @ 0x1405A2AA8 (HvInitializeHashLibrary.c)
 *     CmpValidateGlobalFlushControlFlags @ 0x1405A2AD8 (CmpValidateGlobalFlushControlFlags.c)
 *     CmpParseCacheInit @ 0x1405A2AF0 (CmpParseCacheInit.c)
 *     CmpMarkCurrentProfileDirty @ 0x1405A3950 (CmpMarkCurrentProfileDirty.c)
 *     CmpHiveRootSecurityDescriptor @ 0x1405A50A0 (CmpHiveRootSecurityDescriptor.c)
 *     CmpInitializeRegistryNames @ 0x1407D5D1C (CmpInitializeRegistryNames.c)
 *     CmpInitGlobalQuotaAllowed @ 0x1407D5F30 (CmpInitGlobalQuotaAllowed.c)
 *     CmpInitializeTrustedInstallerSid @ 0x1407D6020 (CmpInitializeTrustedInstallerSid.c)
 *     CmpInitializeTransactions @ 0x1407D60A0 (CmpInitializeTransactions.c)
 *     CmpCreateObjectTypes @ 0x1407D63B4 (CmpCreateObjectTypes.c)
 *     CmpCreateControlSet @ 0x1407D64A0 (CmpCreateControlSet.c)
 *     CmpInitializeSystemHive @ 0x1407D6AC0 (CmpInitializeSystemHive.c)
 *     CmpInitializePreloadedHives @ 0x1407D73CC (CmpInitializePreloadedHives.c)
 *     CmpCreateRegistryRoot @ 0x1407D7838 (CmpCreateRegistryRoot.c)
 *     CmpMigrateOOBELanguageToInstallationLanguage @ 0x1407D7AB8 (CmpMigrateOOBELanguageToInstallationLanguage.c)
 *     CmpSetSystemValues @ 0x1407D7B24 (CmpSetSystemValues.c)
 *     CmpInitializeHardwareConfiguration @ 0x1407D7D8C (CmpInitializeHardwareConfiguration.c)
 *     CmpInitializeMachineDependentConfiguration @ 0x1407D7FF8 (CmpInitializeMachineDependentConfiguration.c)
 *     CmpSetNetworkValue @ 0x1407F8674 (CmpSetNetworkValue.c)
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
  NTSTATUS ControlSet; // eax
  int v16; // eax
  ULONG_PTR v17; // rsi
  __int64 v18; // rsi
  int v19; // eax
  int v20; // eax
  int v21; // eax
  int v22; // eax
  int v23; // eax
  __int64 v24; // rcx
  int v26; // ebx
  unsigned int v27; // ebx
  _SLIST_HEADER *PoolWithTag; // rax
  _SLIST_HEADER *v29; // rsi
  unsigned int v30; // ebx
  __int64 i; // rdx
  __int64 *Count; // r8
  __int64 v33; // r9
  struct _EX_RUNDOWN_REF *v34; // rcx
  unsigned int v35; // eax
  __int64 *NextActiveHive; // rax
  int v37; // eax
  HANDLE KeyHandle; // [rsp+60h] [rbp-A0h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+68h] [rbp-98h] BYREF
  __int64 v40; // [rsp+98h] [rbp-68h] BYREF
  UNICODE_STRING DestinationString; // [rsp+A0h] [rbp-60h] BYREF
  _DWORD v42[36]; // [rsp+B0h] [rbp-50h] BYREF
  ULONG_PTR BugCheckParameter4[44]; // [rsp+140h] [rbp+40h] BYREF

  memset(v42, 0, 136);
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
  qword_14077F020 = (__int64)&CmpFailedUnloadListHead;
  CmpFailedUnloadListHead = (__int64)&CmpFailedUnloadListHead;
  qword_14077ED20 = (__int64)&CmpHiveListHead;
  qword_14034DBB8 = (__int64)&CmpAppHiveLoadList;
  CmpAppHiveLoadList = (__int64)&CmpAppHiveLoadList;
  CmpHiveListHead = (__int64)&CmpHiveListHead;
  CmpLoadHiveLock = 0LL;
  CmpShutdownLock = 0LL;
  CmpShutdownRundown.Count = 0LL;
  CmpActiveHiveRundownEvent = 0LL;
  CmpActiveAppHiveUnloadEvent = 0LL;
  CmpAppHiveLoadListLock = 0LL;
  ExInitializeResourceLite(&CmpRegistryLock);
  LODWORD(CmpPostLock) = 1;
  qword_14034DB88 = (__int64)&qword_14034DB80;
  qword_14034DB80 = (__int64)&qword_14034DB80;
  qword_14077E750 = (__int64)&CmpAsyncKernelPostList;
  CmpAsyncKernelPostList = (__int64)&CmpAsyncKernelPostList;
  CmpWorkerEngineWorkItem.WorkerRoutine = (void (__fastcall *)(void *))CmpWorkerEngineWorker;
  qword_14034DC28 = (__int64)&qword_14034DC20;
  qword_14034DC20 = (__int64)&qword_14034DC20;
  qword_14034DC48 = (__int64)&CmpWorkerEngineListHead;
  CmpWorkerEngineListHead = &CmpWorkerEngineListHead;
  qword_14034DB68 = 0LL;
  dword_14034DB70 = 0;
  word_14034DB78 = 1;
  byte_14034DB7A = 6;
  dword_14034DB7C = 0;
  CmpWorkerEngineWorkItem.Parameter = 0LL;
  CmpWorkerEngineWorkItem.List.Flink = 0LL;
  LODWORD(CmpWorkerEngineLock) = 1;
  qword_14034DC08 = 0LL;
  dword_14034DC10 = 0;
  word_14034DC18 = 1;
  byte_14034DC1A = 6;
  dword_14034DC1C = 0;
  CmpWorkerEngineFinishedEvent = 0LL;
  CmpInitializeNameCache();
  if ( !CmpAllocInited )
  {
    LODWORD(CmpAllocBucketLock) = 1;
    qword_14034DB08 = (__int64)&CmpFreeKCBListHead;
    CmpFreeKCBListHead = (__int64)&CmpFreeKCBListHead;
    qword_14034DB48 = (__int64)&qword_14034DB40;
    qword_14034DB40 = (__int64)&qword_14034DB40;
    qword_14034DB28 = 0LL;
    dword_14034DB30 = 0;
    word_14034DB38 = 1;
    byte_14034DB3A = 6;
    dword_14034DB3C = 0;
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
  v2 = dword_14031663C;
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
  v42[0] = 65;
  v13 = ObOpenObjectByName(
          (__int64)&ObjectAttributes,
          (__int64)CmKeyObjectType,
          0,
          0LL,
          0x2001Fu,
          (__int64)v42,
          &KeyHandle);
  v14 = v13;
  if ( v13 < 0 )
  {
    ExFreePoolWithTag(v8, 0);
    KeBugCheckEx(0x67u, 1uLL, 7uLL, v14, 0LL);
  }
  NtClose(KeyHandle);
  if ( !CmpInitializeSystemHive(BugCheckParameter3) )
  {
    ExFreePoolWithTag(v8, 0);
    KeBugCheckEx(0x67u, 1uLL, 0xBuLL, 0LL, 0LL);
  }
  ControlSet = CmpCreateControlSet(BugCheckParameter3);
  if ( ControlSet < 0 )
    KeBugCheckEx(0x67u, 1uLL, 0xCuLL, ControlSet, 0LL);
  if ( CmpLKGEnabled )
    MEMORY[0xFFFFF780000002F0] |= 0x10u;
  memset(BugCheckParameter4, 0, sizeof(BugCheckParameter4));
  v16 = CmpInitializeHive((ULONG_PTR *)&v40, 0, 1, 0, 0LL, 0LL, 0LL, 0x20000, 0LL, 0LL, 0LL, BugCheckParameter4);
  v17 = v16;
  if ( v16 < 0 )
  {
    ExFreePoolWithTag(v8, 0);
    KeBugCheckEx(0x67u, 1uLL, 0xFuLL, v17, (ULONG_PTR)BugCheckParameter4);
  }
  v18 = v40;
  v19 = CmpLinkHiveToMaster(&CmRegistryMachineHardwareName, 0LL, v40, 1, dword_140316708, 0, 0LL, (__int64)v8, 1);
  if ( v19 )
    KeBugCheckEx(0x67u, 1uLL, 0x10uLL, v19, 0LL);
  CmpAddToHiveFileList(v18);
  ExFreePoolWithTag(v8, 0);
  qword_1403166F8 = v18;
  v20 = CmpInitializeHardwareConfiguration(BugCheckParameter3);
  if ( v20 < 0 )
    KeBugCheckEx(0x67u, 1uLL, 0x11uLL, v20, 0LL);
  CmpNoMasterCreates = 1;
  v21 = CmpInitializePreloadedHives(BugCheckParameter3, 1LL);
  if ( v21 < 0 )
    KeBugCheckEx(0x67u, 1uLL, 0x12uLL, v21, 0LL);
  if ( CmRegistryLockTableLength == 4 && CmRegistryLockTableType == 4 )
  {
    v26 = CmRegistryLockTablePages;
    if ( CmRegistryLockTablePages )
    {
      if ( (unsigned int)CmRegistryLockTablePages <= 0x14 )
      {
        if ( (unsigned int)CmRegistryLockTablePages < 8 )
          v26 = 8;
      }
      else
      {
        v26 = 20;
      }
      v27 = v26 << 12;
      PoolWithTag = (_SLIST_HEADER *)ExAllocatePoolWithTag(NonPagedPoolNx, v27, 0x744C4D43u);
      CmpLockTable = PoolWithTag;
      v29 = PoolWithTag;
      if ( !PoolWithTag )
        KeBugCheckEx(0x67u, 1uLL, 0x13uLL, 0xFFFFFFFFC000009AuLL, 0LL);
      memset(PoolWithTag, 0, v27);
      *((_DWORD *)&v29[1].HeaderX64 + 1) = 0;
      v30 = (v27 - 32) >> 4;
      LODWORD(v29[1].Alignment) = v30;
      InitializeSListHead(v29);
      while ( v30 )
        RtlpInterlockedPushEntrySList(CmpLockTable, (PSLIST_ENTRY)&CmpLockTable[--v30 + 2]);
      v34 = 0LL;
      while ( 1 )
      {
        NextActiveHive = CmpGetNextActiveHive(v34, i, (__int64)Count, v33);
        v34 = (struct _EX_RUNDOWN_REF *)NextActiveHive;
        if ( !NextActiveHive )
          break;
        v35 = *((_DWORD *)NextActiveHive + 702);
        Count = (__int64 *)v34[350].Count;
        if ( v35 )
        {
          Count += 2;
          v33 = v35;
          do
          {
            for ( i = *Count; i; i = *(_QWORD *)(i + 8) )
              *(_DWORD *)(i - 12) |= 0x100000u;
            Count += 3;
            --v33;
          }
          while ( v33 );
        }
      }
      CmpLockTablePresent = 1;
    }
  }
  CmSetInitMachineConfig_0();
  CmpUnlockRegistry();
  CmpMarkCurrentProfileDirty();
  v22 = CmpInitializeMachineDependentConfiguration(BugCheckParameter3);
  if ( v22 < 0 )
    KeBugCheckEx(0x67u, 1uLL, 0x14uLL, v22, 0LL);
  v23 = CmpSetSystemValues(BugCheckParameter3);
  if ( v23 < 0 )
    KeBugCheckEx(0x67u, 1uLL, 0x15uLL, v23, 0LL);
  CmpMigrateOOBELanguageToInstallationLanguage();
  ExFreePoolWithTag(CmpLoadOptions.Buffer, 0);
  v24 = *(_QWORD *)(BugCheckParameter3 + 240);
  if ( *(_DWORD *)v24 >= 0x58u )
  {
    if ( *(_QWORD *)(v24 + 80) )
    {
      v37 = CmpSetNetworkValue();
      if ( v37 < 0 )
        KeBugCheckEx(0x67u, 1uLL, 0x16uLL, v37, 0LL);
    }
  }
  return 1;
}
