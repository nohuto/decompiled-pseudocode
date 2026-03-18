/*
 * XREFs of PiControlFreeUserModeCallersBuffer @ 0x1400C38B0
 * Callers:
 *     PiControlGetRelatedDevice @ 0x1403F37F0 (PiControlGetRelatedDevice.c)
 *     PiControlGetDeviceDepth @ 0x1403F3A7C (PiControlGetDeviceDepth.c)
 *     PiControlGetPropertyData @ 0x1403F3F84 (PiControlGetPropertyData.c)
 *     PiControlGetSetDeviceStatus @ 0x1403F489C (PiControlGetSetDeviceStatus.c)
 *     PiCMGetDeviceIdList @ 0x1404DD06C (PiCMGetDeviceIdList.c)
 *     PiCMCaptureDeviceListInputData @ 0x1404DD43C (PiCMCaptureDeviceListInputData.c)
 *     PiCMCaptureInterfaceListInputData @ 0x1404F5D64 (PiCMCaptureInterfaceListInputData.c)
 *     PiCMGetDeviceInterfaceList @ 0x1404F5F30 (PiCMGetDeviceInterfaceList.c)
 *     PiCMCaptureObjectInputData @ 0x1404F8E1C (PiCMCaptureObjectInputData.c)
 *     PiCMReleaseObjectInputData @ 0x1404F921C (PiCMReleaseObjectInputData.c)
 *     PiCMReleaseRegistryInputData @ 0x1404F9E0C (PiCMReleaseRegistryInputData.c)
 *     PiCMReleasePropertyInputData @ 0x1404FCBE0 (PiCMReleasePropertyInputData.c)
 *     PiCMCapturePropertyInputData @ 0x1404FFFF8 (PiCMCapturePropertyInputData.c)
 *     NtPlugPlayControl @ 0x1405002B8 (NtPlugPlayControl.c)
 *     PiControlGetDeviceInterfaceEnabled @ 0x140500E30 (PiControlGetDeviceInterfaceEnabled.c)
 *     PiCMCaptureRegistryInputData @ 0x14050186C (PiCMCaptureRegistryInputData.c)
 *     PiCMCaptureRegistryPropertyInputData @ 0x140502C08 (PiCMCaptureRegistryPropertyInputData.c)
 *     PiCMReleaseRegistryPropertyInputData @ 0x140502F70 (PiCMReleaseRegistryPropertyInputData.c)
 *     PiCMGetDeviceInterfaceAlias @ 0x1405289A0 (PiCMGetDeviceInterfaceAlias.c)
 *     PiCMCaptureInterfaceAliasInputData @ 0x140529004 (PiCMCaptureInterfaceAliasInputData.c)
 *     PiCMCaptureCreateDeviceInputData @ 0x140645A78 (PiCMCaptureCreateDeviceInputData.c)
 *     PiCMCaptureRegisterInterfaceInputData @ 0x140645EF0 (PiCMCaptureRegisterInterfaceInputData.c)
 *     PiCMCreateDevice @ 0x1406461E4 (PiCMCreateDevice.c)
 *     PiCMRegisterDeviceInterface @ 0x140648420 (PiCMRegisterDeviceInterface.c)
 *     PiControlQueryAndRemoveDevice @ 0x14064A76C (PiControlQueryAndRemoveDevice.c)
 *     PiControlQueryConflictList @ 0x14064A8B8 (PiControlQueryConflictList.c)
 *     PiControlQueryDeviceRelations @ 0x14064AABC (PiControlQueryDeviceRelations.c)
 *     PiControlStartDevice @ 0x14064ABF4 (PiControlStartDevice.c)
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
