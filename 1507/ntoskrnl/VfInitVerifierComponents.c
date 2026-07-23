/*
 * XREFs of VfInitVerifierComponents @ 0x140736E40
 * Callers:
 *     VfInitSystemNoRebootNeeded @ 0x140736CF8 (VfInitSystemNoRebootNeeded.c)
 *     VfInitBootDriversLoaded @ 0x1407CBEA0 (VfInitBootDriversLoaded.c)
 * Callees:
 *     ExAllocatePoolWithTagPriority @ 0x140013F48 (ExAllocatePoolWithTagPriority.c)
 *     memset @ 0x140195A80 (memset.c)
 *     ExSetPoolFlags @ 0x140195F20 (ExSetPoolFlags.c)
 *     ExAllocatePoolWithTag @ 0x140288E60 (ExAllocatePoolWithTag.c)
 *     VfAvlInitializeTree @ 0x1407324E4 (VfAvlInitializeTree.c)
 *     XdvExInitializePagedLookasideListInternal @ 0x140732628 (XdvExInitializePagedLookasideListInternal.c)
 *     VfHalVerifierInitialize @ 0x14073C4EC (VfHalVerifierInitialize.c)
 *     VfPendingCheckForChanges @ 0x14074265C (VfPendingCheckForChanges.c)
 *     VfMajorRegisterHandlers @ 0x140743DDC (VfMajorRegisterHandlers.c)
 *     ViFaultsInitializeAppsList @ 0x140746D48 (ViFaultsInitializeAppsList.c)
 *     ViFaultsInitializeTagsList @ 0x140746E14 (ViFaultsInitializeTagsList.c)
 *     VfKeCheckForChanges @ 0x140749A04 (VfKeCheckForChanges.c)
 *     VfSettingsApplyMiscellaneousChecks @ 0x14074A778 (VfSettingsApplyMiscellaneousChecks.c)
 *     ViSettingsIoCheckForChanges @ 0x14074A8F0 (ViSettingsIoCheckForChanges.c)
 *     VfWdInit @ 0x14074AE94 (VfWdInit.c)
 *     VfCtxInit @ 0x14074E870 (VfCtxInit.c)
 *     VfDeadlockInitialize @ 0x14074F8A4 (VfDeadlockInitialize.c)
 */

__int64 __fastcall VfInitVerifierComponents(unsigned int a1, unsigned int a2, unsigned int a3)
{
  _QWORD *PoolWithTag; // rax
  __int64 v7; // rcx
  unsigned int v8; // eax
  int v9; // ecx
  __int64 v10; // rax
  int v11; // ecx
  int v12; // ecx
  int v13; // ecx
  int v14; // ecx
  _DWORD *v15; // rax
  _QWORD *v16; // rax
  __int64 result; // rax

  ExSetPoolFlags(0x10u);
  ViIrpDatabaseLock = 0;
  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x2000uLL, 0x74546F49u);
  ViIrpDatabase = (__int64)PoolWithTag;
  if ( PoolWithTag )
  {
    v7 = 256LL;
    do
    {
      PoolWithTag[1] = PoolWithTag;
      *PoolWithTag = PoolWithTag;
      PoolWithTag += 2;
      --v7;
    }
    while ( v7 );
    ViIrpDatabaseAddressRanges = (__int64)PoolWithTag;
    memset(PoolWithTag, 0, 0x1000uLL);
    _InterlockedExchange(&VfIrpDatabaseInitialized, 1);
  }
  VfWdInit();
  VfKeCheckForChanges(a1);
  ViSettingsIoCheckForChanges(a1);
  if ( (a1 & 8) != 0 )
    MmTrackLockedPages = 1;
  VfPendingCheckForChanges(a1);
  if ( (MmVerifierData & 0xFBF) != 0 )
  {
    v8 = VfPoolTracesLength;
    if ( (unsigned int)VfPoolTracesLength >= 0x10000 )
    {
      v9 = 0x100000;
      if ( (unsigned int)VfPoolTracesLength <= 0x100000 )
      {
        while ( (VfPoolTracesLength & v9) == 0 )
        {
          v9 >>= 1;
          if ( v9 < 0x10000 )
            goto LABEL_16;
        }
        v8 = v9 & VfPoolTracesLength;
        VfPoolTracesLength &= v9;
      }
      else
      {
        v8 = 0x100000;
        VfPoolTracesLength = 0x100000;
      }
    }
    else
    {
      v8 = 0x10000;
      VfPoolTracesLength = 0x10000;
    }
LABEL_16:
    VfPoolTraces = (__int64)ExAllocatePoolWithTagPriority(
                              NonPagedPoolNx,
                              (unsigned __int64)v8 << 7,
                              0x54506656u,
                              HighPoolPriority);
  }
  v10 = (unsigned int)ViFaultTracesLength;
  ViRequiredTimeSinceBootInMsecs = 60000LL * (unsigned int)VfFaultInjectionBootMinutes;
  ViFaultInjectionLock = 0LL;
  if ( (unsigned int)ViFaultTracesLength > 0x101000 )
  {
    v10 = 1052672LL;
    ViFaultTracesLength = 1052672;
  }
  ViFaultTraces = (__int64)ExAllocatePoolWithTagPriority(NonPagedPoolNx, 72 * v10, 0x74746C46u, HighPoolPriority);
  ViFaultsInitializeTagsList();
  ViFaultsInitializeAppsList();
  ViFaultsInitialized = 1;
  if ( (int)VfAvlInitializeTree(
              ViLookasideAvl,
              96LL,
              0,
              (void (__cdecl *)(_RTL_AVL_TABLE *, PVOID))ViRemLockDelayFreeAvlNode) < 0 )
    _InterlockedExchange(&ViLookasideAllocationFailures, 1);
  else
    _InterlockedExchange(&ViLookasideInitialized, 1);
  pXdvExInitializeNPagedLookasideList(
    (unsigned int)&ViSessionDataLookaside,
    0,
    (unsigned int)VfUtilFreePoolDispatchLevel,
    512,
    2600,
    1936749129,
    16,
    VfInitializedWithoutReboot,
    (__int64)ExInitializeNPagedLookasideListInternal);
  _InterlockedExchange(&ViSessionDataInitialized, 1);
  pXdvExInitializeNPagedLookasideList(
    (unsigned int)&ViPacketLookaside,
    0,
    (unsigned int)VfUtilFreePoolCheckIRQL,
    512,
    256,
    1953526345,
    16,
    VfInitializedWithoutReboot,
    (__int64)ExInitializeNPagedLookasideListInternal);
  if ( (int)VfAvlInitializeTree(
              &ViResourceAvl,
              104LL,
              0,
              (void (__cdecl *)(_RTL_AVL_TABLE *, PVOID))ViRemLockDelayFreeAvlNode) < 0 )
    _InterlockedExchange(&ViResourceNotTracked, 1);
  else
    _InterlockedExchange(&ViResourceInitialized, 1);
  pXdvExInitializeNPagedLookasideList(
    (unsigned int)&ViIrpCallDriverDataList,
    0,
    (unsigned int)VfUtilFreePoolCheckIRQL,
    512,
    192,
    1131442761,
    16,
    VfInitializedWithoutReboot,
    (__int64)ExInitializeNPagedLookasideListInternal);
  memset(&ViMajorVerifierRoutines, 0, 0xB40uLL);
  LOBYTE(v11) = 27;
  VfMajorRegisterHandlers(
    v11,
    (unsigned int)VfPnpDumpIrpStack,
    (unsigned int)VfPnpVerifyNewRequest,
    (unsigned int)VfPnpVerifyIrpStackDownward,
    (__int64)VfPnpVerifyIrpStackUpward,
    (__int64)VfPnpIsSystemRestrictedIrp,
    (__int64)VfPnpAdvanceIrpStatus,
    0LL,
    0LL,
    0LL,
    0LL,
    (__int64)VfPnpTestStartedPdoStack,
    0LL);
  LOBYTE(v12) = 22;
  VfMajorRegisterHandlers(
    v12,
    (unsigned int)VfPowerDumpIrpStack,
    (unsigned int)VfPowerVerifyNewRequest,
    (unsigned int)VfPowerVerifyIrpStackDownward,
    (__int64)VfPowerVerifyIrpStackUpward,
    (__int64)VfPowerIsSystemRestrictedIrp,
    0LL,
    0LL,
    0LL,
    0LL,
    0LL,
    (__int64)VfPowerTestStartedPdoStack,
    0LL);
  LOBYTE(v13) = 23;
  VfMajorRegisterHandlers(
    v13,
    (unsigned int)VfWmiDumpIrpStack,
    (unsigned int)VfWmiVerifyNewRequest,
    (unsigned int)VfWmiVerifyIrpStackDownward,
    (__int64)VfWmiVerifyIrpStackUpward,
    0LL,
    0LL,
    0LL,
    0LL,
    0LL,
    0LL,
    (__int64)VfWmiTestStartedPdoStack,
    0LL);
  LOBYTE(v14) = -1;
  VfMajorRegisterHandlers(
    v14,
    (unsigned int)ViGenericDumpIrpStack,
    (unsigned int)ViGenericVerifyNewRequest,
    (unsigned int)ViGenericVerifyIrpStackDownward,
    (__int64)ViGenericVerifyIrpStackUpward,
    0LL,
    0LL,
    (__int64)ViGenericIsValidIrpStatus,
    (__int64)ViGenericIsNewRequest,
    (__int64)ViGenericVerifyNewIrp,
    (__int64)ViGenericVerifyNewRequest,
    0LL,
    (__int64)ViGenericBuildIrpLogEntry);
  VfHalVerifierInitialize();
  ViIrpLogDatabaseLock = 0LL;
  v15 = ExAllocatePoolWithTag(NonPagedPoolNx, 0x18uLL, 0x64496656u);
  ViIrpLogDatabase = (__int64)v15;
  if ( v15 )
  {
    *v15 = 0;
    v16 = v15 + 2;
    v16[1] = v16;
    *v16 = v16;
  }
  ViDdiInitialized = 1;
  if ( (int)VfAvlInitializeTree(
              &ViRemLockAvl,
              32LL,
              136,
              (void (__cdecl *)(_RTL_AVL_TABLE *, PVOID))ViRemLockDelayFreeAvlNode) < 0 )
    _InterlockedExchange(&ViRemLockAllocationFailures, 1);
  else
    _InterlockedExchange(&ViRemLockInitialized, 1);
  if ( (int)VfAvlInitializeTree(
              ViDevObjAvl,
              336LL,
              24,
              (void (__cdecl *)(_RTL_AVL_TABLE *, PVOID))ViRemLockDelayFreeAvlNode) < 0 )
    _InterlockedExchange(&ViDevObjAllocationFailures, 1);
  else
    _InterlockedExchange(&ViDevObjInitialized, 1);
  pXdvExInitializeNPagedLookasideList(
    (unsigned int)&ViIoCallbackStateLookaside,
    0,
    (unsigned int)VfUtilFreePoolCheckIRQL,
    512,
    8,
    1330202198,
    16,
    VfInitializedWithoutReboot,
    (__int64)ExInitializeNPagedLookasideListInternal);
  _InterlockedExchange(&ViIoCallbacksInitialized, 1);
  VfCtxInit();
  VfDeadlockInitialize(a2, a3);
  VfSettingsApplyMiscellaneousChecks(a1);
  result = (unsigned int)MmVerifierData;
  IovUtilVerifierEnabled = 1;
  if ( (MmVerifierData & 0x10) != 0 )
    PpvUtilVerifierEnabled = 1;
  ViVerifierEnabled = 1;
  return result;
}
