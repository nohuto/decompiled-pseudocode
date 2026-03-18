/*
 * XREFs of ?FxValidateUnicodeString@@YAJPEAU_FX_DRIVER_GLOBALS@@PEBU_UNICODE_STRING@@@Z @ 0x1C0001DFC
 * Callers:
 *     imp_WdfRegistryQueryULong @ 0x1C0001C50 (imp_WdfRegistryQueryULong.c)
 *     imp_WdfDeviceRetrieveDeviceInterfaceString @ 0x1C0010E10 (imp_WdfDeviceRetrieveDeviceInterfaceString.c)
 *     imp_WdfDriverCreate @ 0x1C0020270 (imp_WdfDriverCreate.c)
 *     FxIoTargetValidateOpenParams @ 0x1C0027610 (FxIoTargetValidateOpenParams.c)
 *     imp_WdfStringCreate @ 0x1C00278F0 (imp_WdfStringCreate.c)
 *     imp_WdfPdoInitAssignDeviceID @ 0x1C0027A30 (imp_WdfPdoInitAssignDeviceID.c)
 *     imp_WdfPdoInitAssignInstanceID @ 0x1C0027B10 (imp_WdfPdoInitAssignInstanceID.c)
 *     imp_WdfPdoInitAddHardwareID @ 0x1C0027BF0 (imp_WdfPdoInitAddHardwareID.c)
 *     imp_WdfDeviceAssignMofResourceName @ 0x1C0027D10 (imp_WdfDeviceAssignMofResourceName.c)
 *     imp_WdfPdoInitAddCompatibleID @ 0x1C0027DC0 (imp_WdfPdoInitAddCompatibleID.c)
 *     imp_WdfDeviceInitAssignSDDLString @ 0x1C0028240 (imp_WdfDeviceInitAssignSDDLString.c)
 *     imp_WdfRegistryQueryMultiString @ 0x1C0028310 (imp_WdfRegistryQueryMultiString.c)
 *     imp_WdfControlDeviceInitAllocate @ 0x1C0028700 (imp_WdfControlDeviceInitAllocate.c)
 *     imp_WdfRegistryQueryString @ 0x1C0028820 (imp_WdfRegistryQueryString.c)
 *     imp_WdfDeviceCreateDeviceInterface @ 0x1C002E540 (imp_WdfDeviceCreateDeviceInterface.c)
 *     imp_WdfDeviceCreateSymbolicLink @ 0x1C0031BE0 (imp_WdfDeviceCreateSymbolicLink.c)
 *     imp_WdfRegistryAssignValue @ 0x1C0031CD0 (imp_WdfRegistryAssignValue.c)
 *     imp_WdfPdoInitAddDeviceText @ 0x1C0032180 (imp_WdfPdoInitAddDeviceText.c)
 *     imp_WdfDeviceInitAssignName @ 0x1C0032D90 (imp_WdfDeviceInitAssignName.c)
 *     imp_WdfPdoInitAssignContainerID @ 0x1C0064240 (imp_WdfPdoInitAssignContainerID.c)
 *     imp_WdfDeviceOpenDevicemapKey @ 0x1C0067450 (imp_WdfDeviceOpenDevicemapKey.c)
 *     imp_WdfRegistryAssignMemory @ 0x1C00709D0 (imp_WdfRegistryAssignMemory.c)
 *     imp_WdfRegistryAssignMultiString @ 0x1C0070BB0 (imp_WdfRegistryAssignMultiString.c)
 *     imp_WdfRegistryAssignString @ 0x1C0070DE0 (imp_WdfRegistryAssignString.c)
 *     imp_WdfRegistryAssignULong @ 0x1C0070EF0 (imp_WdfRegistryAssignULong.c)
 *     imp_WdfRegistryAssignUnicodeString @ 0x1C0070FD0 (imp_WdfRegistryAssignUnicodeString.c)
 *     imp_WdfRegistryCreateKey @ 0x1C0071140 (imp_WdfRegistryCreateKey.c)
 *     imp_WdfRegistryQueryMemory @ 0x1C0071350 (imp_WdfRegistryQueryMemory.c)
 *     imp_WdfRegistryQueryUnicodeString @ 0x1C00715F0 (imp_WdfRegistryQueryUnicodeString.c)
 *     imp_WdfRegistryRemoveValue @ 0x1C0071840 (imp_WdfRegistryRemoveValue.c)
 *     imp_WdfDeviceSetDeviceInterfaceState @ 0x1C0072630 (imp_WdfDeviceSetDeviceInterfaceState.c)
 * Callees:
 *     WPP_IFR_SF_qddd @ 0x1C0057BD0 (WPP_IFR_SF_qddd.c)
 *     WPP_IFR_SF_qdd @ 0x1C006063C (WPP_IFR_SF_qdd.c)
 */

__int64 __fastcall FxValidateUnicodeString(_FX_DRIVER_GLOBALS *FxDriverGlobals, const _UNICODE_STRING *String)
{
  unsigned __int16 Length; // r8
  unsigned __int16 MaximumLength; // ax

  Length = String->Length;
  if ( (String->Length & 1) != 0 )
  {
    WPP_IFR_SF_qdd(FxDriverGlobals, 2u, 6u, 0xDu, WPP_FxValidateFunctions_hpp_Traceguids_0, String, Length, -1073741811);
  }
  else
  {
    MaximumLength = String->MaximumLength;
    if ( (MaximumLength & 1) != 0 )
    {
      WPP_IFR_SF_qdd(
        FxDriverGlobals,
        2u,
        6u,
        0xEu,
        WPP_FxValidateFunctions_hpp_Traceguids_0,
        String,
        MaximumLength,
        -1073741811);
    }
    else if ( MaximumLength && !String->Buffer )
    {
      WPP_IFR_SF_qdd(
        FxDriverGlobals,
        2u,
        6u,
        0xFu,
        WPP_FxValidateFunctions_hpp_Traceguids_0,
        String,
        MaximumLength,
        -1073741811);
    }
    else
    {
      if ( Length <= MaximumLength )
        return 0LL;
      WPP_IFR_SF_qddd(
        FxDriverGlobals,
        (unsigned __int8)String,
        6u,
        0x10u,
        WPP_FxValidateFunctions_hpp_Traceguids_0,
        String,
        Length,
        MaximumLength,
        -1073741811);
    }
  }
  return 3221225485LL;
}
