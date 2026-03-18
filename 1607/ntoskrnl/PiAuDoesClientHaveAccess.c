/*
 * XREFs of PiAuDoesClientHaveAccess @ 0x1404F6100
 * Callers:
 *     PiSwDispatch @ 0x140489CB0 (PiSwDispatch.c)
 *     PiCMOpenDeviceKey @ 0x1404D6418 (PiCMOpenDeviceKey.c)
 *     PiCMOpenClassKey @ 0x1404E6B44 (PiCMOpenClassKey.c)
 *     PiCMSetObjectProperty @ 0x1404EAA14 (PiCMSetObjectProperty.c)
 *     PiCMValidateDeviceInstance @ 0x1404F6E90 (PiCMValidateDeviceInstance.c)
 *     PiCMOpenObjectKey @ 0x1404F9B40 (PiCMOpenObjectKey.c)
 *     PiDqIrpPropertySet @ 0x1406318E0 (PiDqIrpPropertySet.c)
 *     PiCMCreateDevice @ 0x1406461E4 (PiCMCreateDevice.c)
 *     PiCMCreateObject @ 0x1406468F0 (PiCMCreateObject.c)
 *     PiCMDeleteClassKey @ 0x140646A54 (PiCMDeleteClassKey.c)
 *     PiCMDeleteDevice @ 0x140646B3C (PiCMDeleteDevice.c)
 *     PiCMDeleteDeviceInterfaceKey @ 0x140646E70 (PiCMDeleteDeviceInterfaceKey.c)
 *     PiCMDeleteDeviceKey @ 0x140646FBC (PiCMDeleteDeviceKey.c)
 *     PiCMDeleteObject @ 0x1406471E0 (PiCMDeleteObject.c)
 *     PiCMDeviceAction @ 0x140647364 (PiCMDeviceAction.c)
 *     PiCMOpenDeviceInterfaceKey @ 0x140647E10 (PiCMOpenDeviceInterfaceKey.c)
 *     PiCMQueryRemove @ 0x140648028 (PiCMQueryRemove.c)
 *     PiCMRegisterDeviceInterface @ 0x140648420 (PiCMRegisterDeviceInterface.c)
 *     PiCMSetDeviceProblem @ 0x1406486BC (PiCMSetDeviceProblem.c)
 *     PiCMSetRegistryProperty @ 0x140648880 (PiCMSetRegistryProperty.c)
 *     PiCMUnregisterDeviceInterface @ 0x140648A14 (PiCMUnregisterDeviceInterface.c)
 * Callees:
 *     PiAuVerifyAccessToObject @ 0x1404F7F30 (PiAuVerifyAccessToObject.c)
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
              (__int64)&v3) >= 0 )
    return v3;
  return v1;
}
