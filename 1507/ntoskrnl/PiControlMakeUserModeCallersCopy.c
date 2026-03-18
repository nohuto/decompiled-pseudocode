/*
 * XREFs of PiControlMakeUserModeCallersCopy @ 0x1404379BC
 * Callers:
 *     NtReplacePartitionUnit @ 0x1402724C4 (NtReplacePartitionUnit.c)
 *     NtPlugPlayControl @ 0x14043789C (NtPlugPlayControl.c)
 *     PiControlGetDeviceInterfaceEnabled @ 0x140438C9C (PiControlGetDeviceInterfaceEnabled.c)
 *     PiCMCapturePropertyInputData @ 0x140441214 (PiCMCapturePropertyInputData.c)
 *     PiCMCaptureRegistryPropertyInputData @ 0x140441620 (PiCMCaptureRegistryPropertyInputData.c)
 *     PiCMCaptureRegistryInputData @ 0x14044361C (PiCMCaptureRegistryInputData.c)
 *     PiCMCaptureInterfaceListInputData @ 0x140458914 (PiCMCaptureInterfaceListInputData.c)
 *     PiCMCaptureObjectInputData @ 0x1404DCF48 (PiCMCaptureObjectInputData.c)
 *     PiControlGetDeviceDepth @ 0x1404E0CB0 (PiControlGetDeviceDepth.c)
 *     PiControlGetRelatedDevice @ 0x1404E11FC (PiControlGetRelatedDevice.c)
 *     PiControlGetPropertyData @ 0x1404E1474 (PiControlGetPropertyData.c)
 *     PiControlGetSetDeviceStatus @ 0x1404E1D68 (PiControlGetSetDeviceStatus.c)
 *     PiCMCaptureDeviceListInputData @ 0x140550E44 (PiCMCaptureDeviceListInputData.c)
 *     PiCMCaptureInterfaceAliasInputData @ 0x14055ED48 (PiCMCaptureInterfaceAliasInputData.c)
 *     PiCMCaptureCreateDeviceInputData @ 0x140691420 (PiCMCaptureCreateDeviceInputData.c)
 *     PiCMCaptureRegisterInterfaceInputData @ 0x140691880 (PiCMCaptureRegisterInterfaceInputData.c)
 *     PiControlQueryAndRemoveDevice @ 0x140694958 (PiControlQueryAndRemoveDevice.c)
 *     PiControlQueryConflictList @ 0x140694AD8 (PiControlQueryConflictList.c)
 *     PiControlQueryDeviceRelations @ 0x140694D0C (PiControlQueryDeviceRelations.c)
 *     PiControlStartDevice @ 0x140694E7C (PiControlStartDevice.c)
 * Callees:
 *     ExAllocatePoolWithQuotaTag @ 0x140045B50 (ExAllocatePoolWithQuotaTag.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 *     PiControlCopyUserModeCallersBuffer @ 0x14053A1D8 (PiControlCopyUserModeCallersBuffer.c)
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
