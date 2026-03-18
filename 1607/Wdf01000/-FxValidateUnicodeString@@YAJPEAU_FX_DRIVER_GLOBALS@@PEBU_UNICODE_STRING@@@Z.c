/*
 * XREFs of ?FxValidateUnicodeString@@YAJPEAU_FX_DRIVER_GLOBALS@@PEBU_UNICODE_STRING@@@Z @ 0x1C0002388
 * Callers:
 *     imp_WdfRegistryQueryULong @ 0x1C0001B20 (imp_WdfRegistryQueryULong.c)
 *     imp_WdfRegistryQueryMultiString @ 0x1C0015CB0 (imp_WdfRegistryQueryMultiString.c)
 *     imp_WdfRegistryQueryString @ 0x1C0015FF0 (imp_WdfRegistryQueryString.c)
 *     imp_WdfControlDeviceInitAllocate @ 0x1C0016250 (imp_WdfControlDeviceInitAllocate.c)
 *     imp_WdfDeviceInitAssignSDDLString @ 0x1C00163D0 (imp_WdfDeviceInitAssignSDDLString.c)
 *     imp_WdfStringCreate @ 0x1C00164A0 (imp_WdfStringCreate.c)
 *     imp_WdfPdoInitAssignDeviceID @ 0x1C0016880 (imp_WdfPdoInitAssignDeviceID.c)
 *     imp_WdfPdoInitAssignInstanceID @ 0x1C0016960 (imp_WdfPdoInitAssignInstanceID.c)
 *     imp_WdfPdoInitAddHardwareID @ 0x1C0016B60 (imp_WdfPdoInitAddHardwareID.c)
 *     imp_WdfDeviceAssignMofResourceName @ 0x1C0016C80 (imp_WdfDeviceAssignMofResourceName.c)
 *     imp_WdfPdoInitAddCompatibleID @ 0x1C0016D30 (imp_WdfPdoInitAddCompatibleID.c)
 *     imp_WdfDriverCreate @ 0x1C00173E0 (imp_WdfDriverCreate.c)
 *     FxIoTargetValidateOpenParams @ 0x1C002D6F4 (FxIoTargetValidateOpenParams.c)
 *     imp_WdfDeviceRetrieveDeviceInterfaceString @ 0x1C002F000 (imp_WdfDeviceRetrieveDeviceInterfaceString.c)
 *     imp_WdfDeviceCreateDeviceInterface @ 0x1C0033E10 (imp_WdfDeviceCreateDeviceInterface.c)
 *     imp_WdfDeviceCreateSymbolicLink @ 0x1C00360A0 (imp_WdfDeviceCreateSymbolicLink.c)
 *     imp_WdfRegistryAssignValue @ 0x1C0036190 (imp_WdfRegistryAssignValue.c)
 *     imp_WdfPdoInitAddDeviceText @ 0x1C0036A80 (imp_WdfPdoInitAddDeviceText.c)
 *     imp_WdfDeviceInitAssignName @ 0x1C0037370 (imp_WdfDeviceInitAssignName.c)
 *     imp_WdfPdoInitAssignContainerID @ 0x1C0072B10 (imp_WdfPdoInitAssignContainerID.c)
 *     imp_WdfDeviceOpenDevicemapKey @ 0x1C0073A30 (imp_WdfDeviceOpenDevicemapKey.c)
 *     imp_WdfDeviceSetDeviceInterfaceState @ 0x1C007F140 (imp_WdfDeviceSetDeviceInterfaceState.c)
 *     imp_WdfRegistryAssignMemory @ 0x1C007F440 (imp_WdfRegistryAssignMemory.c)
 *     imp_WdfRegistryAssignMultiString @ 0x1C007F620 (imp_WdfRegistryAssignMultiString.c)
 *     imp_WdfRegistryAssignString @ 0x1C007F850 (imp_WdfRegistryAssignString.c)
 *     imp_WdfRegistryAssignULong @ 0x1C007F960 (imp_WdfRegistryAssignULong.c)
 *     imp_WdfRegistryAssignUnicodeString @ 0x1C007FA40 (imp_WdfRegistryAssignUnicodeString.c)
 *     imp_WdfRegistryCreateKey @ 0x1C007FBB0 (imp_WdfRegistryCreateKey.c)
 *     imp_WdfRegistryQueryMemory @ 0x1C007FDC0 (imp_WdfRegistryQueryMemory.c)
 *     imp_WdfRegistryQueryUnicodeString @ 0x1C0080080 (imp_WdfRegistryQueryUnicodeString.c)
 *     imp_WdfRegistryRemoveValue @ 0x1C00802E0 (imp_WdfRegistryRemoveValue.c)
 * Callees:
 *     WPP_IFR_SF_qddd @ 0x1C00651D0 (WPP_IFR_SF_qddd.c)
 *     WPP_IFR_SF_qdd @ 0x1C006E2BC (WPP_IFR_SF_qdd.c)
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
