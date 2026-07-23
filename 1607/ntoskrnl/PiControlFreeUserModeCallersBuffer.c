/*
 * XREFs of PiControlFreeUserModeCallersBuffer @ 0x1400C1740
 * Callers:
 *     PiControlGetRelatedDevice @ 0x1403F26B4 (PiControlGetRelatedDevice.c)
 *     PiControlGetDeviceDepth @ 0x1403F2940 (PiControlGetDeviceDepth.c)
 *     PiControlGetPropertyData @ 0x1403F2E48 (PiControlGetPropertyData.c)
 *     PiControlGetSetDeviceStatus @ 0x1403F3760 (PiControlGetSetDeviceStatus.c)
 *     PiCMGetDeviceIdList @ 0x1404C0670 (PiCMGetDeviceIdList.c)
 *     PiCMCaptureDeviceListInputData @ 0x1404C0A40 (PiCMCaptureDeviceListInputData.c)
 *     PiCMCaptureInterfaceListInputData @ 0x1404D8CF0 (PiCMCaptureInterfaceListInputData.c)
 *     PiCMGetDeviceInterfaceList @ 0x1404D8EBC (PiCMGetDeviceInterfaceList.c)
 *     PiCMCaptureObjectInputData @ 0x1404DBDA8 (PiCMCaptureObjectInputData.c)
 *     PiCMReleaseObjectInputData @ 0x1404DC1A8 (PiCMReleaseObjectInputData.c)
 *     PiCMReleaseRegistryInputData @ 0x1404DCD98 (PiCMReleaseRegistryInputData.c)
 *     PiCMReleasePropertyInputData @ 0x1404DFB70 (PiCMReleasePropertyInputData.c)
 *     PiCMCapturePropertyInputData @ 0x1404E2F88 (PiCMCapturePropertyInputData.c)
 *     NtPlugPlayControl @ 0x1404E3248 (NtPlugPlayControl.c)
 *     PiControlGetDeviceInterfaceEnabled @ 0x1404E3DC0 (PiControlGetDeviceInterfaceEnabled.c)
 *     PiCMCaptureRegistryInputData @ 0x1404E47FC (PiCMCaptureRegistryInputData.c)
 *     PiCMCaptureRegistryPropertyInputData @ 0x1404E5B98 (PiCMCaptureRegistryPropertyInputData.c)
 *     PiCMReleaseRegistryPropertyInputData @ 0x1404E5F00 (PiCMReleaseRegistryPropertyInputData.c)
 *     PiCMGetDeviceInterfaceAlias @ 0x140528EE0 (PiCMGetDeviceInterfaceAlias.c)
 *     PiCMCaptureInterfaceAliasInputData @ 0x140529544 (PiCMCaptureInterfaceAliasInputData.c)
 *     PiCMCaptureCreateDeviceInputData @ 0x140645B5C (PiCMCaptureCreateDeviceInputData.c)
 *     PiCMCaptureRegisterInterfaceInputData @ 0x140645FD4 (PiCMCaptureRegisterInterfaceInputData.c)
 *     PiCMCreateDevice @ 0x1406462C8 (PiCMCreateDevice.c)
 *     PiCMRegisterDeviceInterface @ 0x140648504 (PiCMRegisterDeviceInterface.c)
 *     PiControlQueryAndRemoveDevice @ 0x14064A850 (PiControlQueryAndRemoveDevice.c)
 *     PiControlQueryConflictList @ 0x14064A99C (PiControlQueryConflictList.c)
 *     PiControlQueryDeviceRelations @ 0x14064ABA0 (PiControlQueryDeviceRelations.c)
 *     PiControlStartDevice @ 0x14064ACD8 (PiControlStartDevice.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 */

void __fastcall PiControlFreeUserModeCallersBuffer(char a1, void *a2)
{
  if ( a1 )
  {
    if ( a2 )
      ExFreePoolWithTag(a2, 0);
  }
}
