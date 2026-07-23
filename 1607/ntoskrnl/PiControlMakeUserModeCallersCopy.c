/*
 * XREFs of PiControlMakeUserModeCallersCopy @ 0x1404E3368
 * Callers:
 *     NtReplacePartitionUnit @ 0x14023DF64 (NtReplacePartitionUnit.c)
 *     PiControlGetRelatedDevice @ 0x1403F26B4 (PiControlGetRelatedDevice.c)
 *     PiControlGetDeviceDepth @ 0x1403F2940 (PiControlGetDeviceDepth.c)
 *     PiControlGetPropertyData @ 0x1403F2E48 (PiControlGetPropertyData.c)
 *     PiControlGetSetDeviceStatus @ 0x1403F3760 (PiControlGetSetDeviceStatus.c)
 *     PiCMCaptureDeviceListInputData @ 0x1404C0A40 (PiCMCaptureDeviceListInputData.c)
 *     PiCMCaptureInterfaceListInputData @ 0x1404D8CF0 (PiCMCaptureInterfaceListInputData.c)
 *     PiCMCaptureObjectInputData @ 0x1404DBDA8 (PiCMCaptureObjectInputData.c)
 *     PiCMCapturePropertyInputData @ 0x1404E2F88 (PiCMCapturePropertyInputData.c)
 *     NtPlugPlayControl @ 0x1404E3248 (NtPlugPlayControl.c)
 *     PiControlGetDeviceInterfaceEnabled @ 0x1404E3DC0 (PiControlGetDeviceInterfaceEnabled.c)
 *     PiCMCaptureRegistryInputData @ 0x1404E47FC (PiCMCaptureRegistryInputData.c)
 *     PiCMCaptureRegistryPropertyInputData @ 0x1404E5B98 (PiCMCaptureRegistryPropertyInputData.c)
 *     PiCMCaptureInterfaceAliasInputData @ 0x140529544 (PiCMCaptureInterfaceAliasInputData.c)
 *     PiCMCaptureCreateDeviceInputData @ 0x140645B5C (PiCMCaptureCreateDeviceInputData.c)
 *     PiCMCaptureRegisterInterfaceInputData @ 0x140645FD4 (PiCMCaptureRegisterInterfaceInputData.c)
 *     PiControlQueryAndRemoveDevice @ 0x14064A850 (PiControlQueryAndRemoveDevice.c)
 *     PiControlQueryConflictList @ 0x14064A99C (PiControlQueryConflictList.c)
 *     PiControlQueryDeviceRelations @ 0x14064ABA0 (PiControlQueryDeviceRelations.c)
 *     PiControlStartDevice @ 0x14064ACD8 (PiControlStartDevice.c)
 * Callees:
 *     ExAllocatePoolWithQuotaTag @ 0x140012330 (ExAllocatePoolWithQuotaTag.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     PiControlCopyUserModeCallersBuffer @ 0x1404E3424 (PiControlCopyUserModeCallersBuffer.c)
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
