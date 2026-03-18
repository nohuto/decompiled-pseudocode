/*
 * XREFs of PiControlMakeUserModeCallersCopy @ 0x1405003D8
 * Callers:
 *     NtReplacePartitionUnit @ 0x14023E080 (NtReplacePartitionUnit.c)
 *     PiControlGetRelatedDevice @ 0x1403F37F0 (PiControlGetRelatedDevice.c)
 *     PiControlGetDeviceDepth @ 0x1403F3A7C (PiControlGetDeviceDepth.c)
 *     PiControlGetPropertyData @ 0x1403F3F84 (PiControlGetPropertyData.c)
 *     PiControlGetSetDeviceStatus @ 0x1403F489C (PiControlGetSetDeviceStatus.c)
 *     PiCMCaptureDeviceListInputData @ 0x1404DD43C (PiCMCaptureDeviceListInputData.c)
 *     PiCMCaptureInterfaceListInputData @ 0x1404F5D64 (PiCMCaptureInterfaceListInputData.c)
 *     PiCMCaptureObjectInputData @ 0x1404F8E1C (PiCMCaptureObjectInputData.c)
 *     PiCMCapturePropertyInputData @ 0x1404FFFF8 (PiCMCapturePropertyInputData.c)
 *     NtPlugPlayControl @ 0x1405002B8 (NtPlugPlayControl.c)
 *     PiControlGetDeviceInterfaceEnabled @ 0x140500E30 (PiControlGetDeviceInterfaceEnabled.c)
 *     PiCMCaptureRegistryInputData @ 0x14050186C (PiCMCaptureRegistryInputData.c)
 *     PiCMCaptureRegistryPropertyInputData @ 0x140502C08 (PiCMCaptureRegistryPropertyInputData.c)
 *     PiCMCaptureInterfaceAliasInputData @ 0x140529004 (PiCMCaptureInterfaceAliasInputData.c)
 *     PiCMCaptureCreateDeviceInputData @ 0x140645A78 (PiCMCaptureCreateDeviceInputData.c)
 *     PiCMCaptureRegisterInterfaceInputData @ 0x140645EF0 (PiCMCaptureRegisterInterfaceInputData.c)
 *     PiControlQueryAndRemoveDevice @ 0x14064A76C (PiControlQueryAndRemoveDevice.c)
 *     PiControlQueryConflictList @ 0x14064A8B8 (PiControlQueryConflictList.c)
 *     PiControlQueryDeviceRelations @ 0x14064AABC (PiControlQueryDeviceRelations.c)
 *     PiControlStartDevice @ 0x14064ABF4 (PiControlStartDevice.c)
 * Callees:
 *     ExAllocatePoolWithQuotaTag @ 0x1400127B0 (ExAllocatePoolWithQuotaTag.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     PiControlCopyUserModeCallersBuffer @ 0x140500494 (PiControlCopyUserModeCallersBuffer.c)
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
