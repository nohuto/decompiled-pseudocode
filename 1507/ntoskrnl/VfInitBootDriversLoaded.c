/*
 * XREFs of VfInitBootDriversLoaded @ 0x1407CBEA0
 * Callers:
 *     MiInitializeDriverImages @ 0x1407CBC2C (MiInitializeDriverImages.c)
 * Callees:
 *     NtSetDebugFilterState @ 0x1405A97FC (NtSetDebugFilterState.c)
 *     VfDriverLoadImage @ 0x140732114 (VfDriverLoadImage.c)
 *     VfAvlInitializeTree @ 0x1407324E4 (VfAvlInitializeTree.c)
 *     VfLookasideInitializeInternalNPagedList @ 0x1407325D8 (VfLookasideInitializeInternalNPagedList.c)
 *     IoVerifierInit @ 0x1407347D8 (IoVerifierInit.c)
 *     VfInitVerifierComponents @ 0x140736E40 (VfInitVerifierComponents.c)
 *     VfObjectContextInit @ 0x140738D9C (VfObjectContextInit.c)
 *     VfDriverLoadBootDrivers @ 0x1407CBF7C (VfDriverLoadBootDrivers.c)
 *     VfThunkFindExportAddressAllTables @ 0x1407CBFD0 (VfThunkFindExportAddressAllTables.c)
 *     VfThunkInit @ 0x1407CC248 (VfThunkInit.c)
 *     VfTriageAddDrivers @ 0x1407FBC10 (VfTriageAddDrivers.c)
 *     VfSuspectDriversParseRegistryString @ 0x1407FC064 (VfSuspectDriversParseRegistryString.c)
 *     VfXdvExcludeParseRegistryString @ 0x1407FC214 (VfXdvExcludeParseRegistryString.c)
 */

char __fastcall VfInitBootDriversLoaded(__int64 a1)
{
  __int64 v2; // r9
  __int64 v3; // rax
  __int64 v4; // rsi
  int v5; // edi
  __int64 v6; // rbx
  unsigned __int8 v7; // r8

  VfBugcheckTmpDataLock = 0LL;
  VfThunkInit();
  VfLookasideInitializeInternalNPagedList(
    (int)&ViAvlNodeLookaside,
    0,
    (int)VfUtilFreePoolCheckIRQL,
    v2,
    48LL,
    1413572182,
    16);
  _InterlockedExchange(&ViAvlInitialized, 1);
  if ( !VfSafeMode )
  {
    if ( (int)VfAvlInitializeTree(
                ViTargetDriversAvl,
                0LL,
                56,
                (void (__cdecl *)(_RTL_AVL_TABLE *, PVOID))ViTargetDelayFreeAvlNode) < 0 )
    {
      _InterlockedExchange(&ViTargetAllocationFailures, 1);
    }
    else
    {
      dword_14032BAE0 = 0;
      _InterlockedExchange(&ViTargetInitialized, 1);
    }
  }
  if ( ViVerifierDriverAddedThunkListHead )
    VfObjectContextInit();
  VfThunkFindExportAddressAllTables(a1);
  if ( ViVerifierDriverAddedThunkListHead )
  {
    NtSetDebugFilterState(0x5Du, 0, 1u);
    if ( MmVerifyDriverBufferLength )
      VfSuspectDriversParseRegistryString();
    if ( VfXdvSuppressDriversBufferLength )
      VfXdvExcludeParseRegistryString();
    VfInitVerifierComponents(MmVerifierData, ViVerifyAllDrivers, KernelVerifier);
    IoVerifierInit(MmVerifierData);
    ViFullyInitialized = 1;
    LOBYTE(v3) = VfTriageAddDrivers(a1);
    v4 = a1 + 16;
    v5 = 0;
    v6 = *(_QWORD *)(a1 + 16);
    while ( 1 )
    {
      if ( v6 == v4 )
        return v3;
      if ( v5 )
      {
        v7 = 0;
      }
      else
      {
        v3 = *(_QWORD *)(v6 + 48) + *(unsigned int *)(v6 + 64);
        ViDriverKernelBase = *(_QWORD *)(v6 + 48);
        ViDriverKernelEnd = v3;
        if ( !KernelVerifier )
          goto LABEL_19;
        v7 = 1;
      }
      LOBYTE(v3) = VfDriverLoadImage(v6, 0LL, v7, 0);
LABEL_19:
      v6 = *(_QWORD *)v6;
      ++v5;
    }
  }
  LOBYTE(v3) = VfDriverLoadBootDrivers(a1 + 16);
  return v3;
}
