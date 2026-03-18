/*
 * XREFs of PiAuDoesClientHaveAccess @ 0x14045A8FC
 * Callers:
 *     PiCMOpenClassKey @ 0x1404428B0 (PiCMOpenClassKey.c)
 *     PiCMOpenDeviceKey @ 0x1404451DC (PiCMOpenDeviceKey.c)
 *     PiSwDispatch @ 0x14045A7DC (PiSwDispatch.c)
 *     PiCMSetObjectProperty @ 0x1404DA470 (PiCMSetObjectProperty.c)
 *     PiCMValidateDeviceInstance @ 0x1404DBCC4 (PiCMValidateDeviceInstance.c)
 *     PiCMOpenObjectKey @ 0x14054BB34 (PiCMOpenObjectKey.c)
 *     PiCMQueryRemove @ 0x14058A87C (PiCMQueryRemove.c)
 *     PiCMDeviceAction @ 0x14058ACF4 (PiCMDeviceAction.c)
 *     PiCMSetRegistryProperty @ 0x14058C0C0 (PiCMSetRegistryProperty.c)
 *     PiDqIrpPropertySet @ 0x1405B2FC8 (PiDqIrpPropertySet.c)
 *     PiCMCreateDevice @ 0x140691B70 (PiCMCreateDevice.c)
 *     PiCMCreateObject @ 0x140692170 (PiCMCreateObject.c)
 *     PiCMDeleteClassKey @ 0x1406922D4 (PiCMDeleteClassKey.c)
 *     PiCMDeleteDevice @ 0x1406923BC (PiCMDeleteDevice.c)
 *     PiCMDeleteDeviceInterfaceKey @ 0x140692750 (PiCMDeleteDeviceInterfaceKey.c)
 *     PiCMDeleteDeviceKey @ 0x14069289C (PiCMDeleteDeviceKey.c)
 *     PiCMDeleteObject @ 0x140692AC0 (PiCMDeleteObject.c)
 *     PiCMOpenDeviceInterfaceKey @ 0x1406932CC (PiCMOpenDeviceInterfaceKey.c)
 *     PiCMRegisterDeviceInterface @ 0x1406934E4 (PiCMRegisterDeviceInterface.c)
 *     PiCMSetDeviceProblem @ 0x1406936F4 (PiCMSetDeviceProblem.c)
 *     PiCMUnregisterDeviceInterface @ 0x1406937D4 (PiCMUnregisterDeviceInterface.c)
 * Callees:
 *     PiAuVerifyAccessToObject @ 0x14043FE74 (PiAuVerifyAccessToObject.c)
 */

char __fastcall PiAuDoesClientHaveAccess(ACCESS_MASK a1)
{
  char v1; // bl
  __int64 v3; // [rsp+48h] [rbp+10h] BYREF

  v1 = 0;
  LOBYTE(v3) = 0;
  if ( (int)PiAuVerifyAccessToObject(
              a1,
              PiAuSecurityObject,
              (PGENERIC_MAPPING)&PiAuSecurityObjectMapping,
              0LL,
              (BOOLEAN *)&v3) >= 0 )
    return v3;
  return v1;
}
