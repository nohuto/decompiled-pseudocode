/*
 * XREFs of PiControlMakeUserModeCallersCopy @ 0x1404390E4
 * Callers:
 *     NtReplacePartitionUnit @ 0x1402225EC (NtReplacePartitionUnit.c)
 *     NtPlugPlayControl @ 0x140438FB0 (NtPlugPlayControl.c)
 *     PiCMCapturePropertyInputData @ 0x14043A6EC (PiCMCapturePropertyInputData.c)
 *     PiControlGetDeviceInterfaceEnabled @ 0x14043F444 (PiControlGetDeviceInterfaceEnabled.c)
 *     PiCMCaptureRegistryInputData @ 0x140442E78 (PiCMCaptureRegistryInputData.c)
 *     PiCMCaptureObjectInputData @ 0x140443494 (PiCMCaptureObjectInputData.c)
 *     PiCMCaptureRegistryPropertyInputData @ 0x140443D54 (PiCMCaptureRegistryPropertyInputData.c)
 *     PiControlGetDeviceDepth @ 0x140457938 (PiControlGetDeviceDepth.c)
 *     PiControlGetPropertyData @ 0x140458140 (PiControlGetPropertyData.c)
 *     PiControlGetSetDeviceStatus @ 0x140458AB4 (PiControlGetSetDeviceStatus.c)
 *     PiCMCaptureDeviceListInputData @ 0x1404B950C (PiCMCaptureDeviceListInputData.c)
 *     PiCMCaptureInterfaceListInputData @ 0x1404DEA90 (PiCMCaptureInterfaceListInputData.c)
 *     PiCMCaptureInterfaceAliasInputData @ 0x1404E6484 (PiCMCaptureInterfaceAliasInputData.c)
 *     PiControlGetRelatedDevice @ 0x1404F2614 (PiControlGetRelatedDevice.c)
 *     PiCMCaptureCreateDeviceInputData @ 0x14061165C (PiCMCaptureCreateDeviceInputData.c)
 *     PiCMCaptureRegisterInterfaceInputData @ 0x140611ABC (PiCMCaptureRegisterInterfaceInputData.c)
 *     PiControlQueryAndRemoveDevice @ 0x140615D1C (PiControlQueryAndRemoveDevice.c)
 *     PiControlQueryConflictList @ 0x140615E78 (PiControlQueryConflictList.c)
 *     PiControlQueryDeviceRelations @ 0x14061608C (PiControlQueryDeviceRelations.c)
 *     PiControlStartDevice @ 0x1406161D4 (PiControlStartDevice.c)
 * Callees:
 *     ExAllocatePoolWithQuotaTag @ 0x14008E480 (ExAllocatePoolWithQuotaTag.c)
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
 *     PiControlCopyUserModeCallersBuffer @ 0x1404391A0 (PiControlCopyUserModeCallersBuffer.c)
 */

__int64 __fastcall PiControlMakeUserModeCallersCopy(void **a1, void *a2, unsigned int a3, ULONG a4, char a5, int a6)
{
  PVOID PoolWithQuotaTag; // rax
  int v12; // esi

  if ( !a5 )
  {
    *a1 = a2;
    return 0LL;
  }
  if ( !a3 )
  {
    *a1 = 0LL;
    return 0LL;
  }
  if ( a6 )
  {
    PoolWithQuotaTag = ExAllocatePoolWithQuotaTag((POOL_TYPE)9, a3, 0x20207050u);
    *a1 = PoolWithQuotaTag;
    if ( !PoolWithQuotaTag )
      return 3221225626LL;
  }
  v12 = 0;
  if ( *a1 )
  {
    v12 = PiControlCopyUserModeCallersBuffer(*a1, a2, a3, a4, a5, a6);
    if ( v12 < 0 )
    {
      if ( a6 )
      {
        ExFreePoolWithTag(*a1, 0);
        *a1 = 0LL;
      }
    }
  }
  return (unsigned int)v12;
}
