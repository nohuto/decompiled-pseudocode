/*
 * XREFs of PiAuDoesClientHaveAccess @ 0x1404D908C
 * Callers:
 *     PiSwDispatch @ 0x140489090 (PiSwDispatch.c)
 *     PiCMOpenDeviceKey @ 0x1404B9A1C (PiCMOpenDeviceKey.c)
 *     PiCMOpenClassKey @ 0x1404C94B4 (PiCMOpenClassKey.c)
 *     PiCMSetObjectProperty @ 0x1404CCC18 (PiCMSetObjectProperty.c)
 *     PiCMValidateDeviceInstance @ 0x1404D9E1C (PiCMValidateDeviceInstance.c)
 *     PiCMOpenObjectKey @ 0x1404DCACC (PiCMOpenObjectKey.c)
 *     PiDqIrpPropertySet @ 0x140631994 (PiDqIrpPropertySet.c)
 *     PiCMCreateDevice @ 0x1406462C8 (PiCMCreateDevice.c)
 *     PiCMCreateObject @ 0x1406469D4 (PiCMCreateObject.c)
 *     PiCMDeleteClassKey @ 0x140646B38 (PiCMDeleteClassKey.c)
 *     PiCMDeleteDevice @ 0x140646C20 (PiCMDeleteDevice.c)
 *     PiCMDeleteDeviceInterfaceKey @ 0x140646F54 (PiCMDeleteDeviceInterfaceKey.c)
 *     PiCMDeleteDeviceKey @ 0x1406470A0 (PiCMDeleteDeviceKey.c)
 *     PiCMDeleteObject @ 0x1406472C4 (PiCMDeleteObject.c)
 *     PiCMDeviceAction @ 0x140647448 (PiCMDeviceAction.c)
 *     PiCMOpenDeviceInterfaceKey @ 0x140647EF4 (PiCMOpenDeviceInterfaceKey.c)
 *     PiCMQueryRemove @ 0x14064810C (PiCMQueryRemove.c)
 *     PiCMRegisterDeviceInterface @ 0x140648504 (PiCMRegisterDeviceInterface.c)
 *     PiCMSetDeviceProblem @ 0x1406487A0 (PiCMSetDeviceProblem.c)
 *     PiCMSetRegistryProperty @ 0x140648964 (PiCMSetRegistryProperty.c)
 *     PiCMUnregisterDeviceInterface @ 0x140648AF8 (PiCMUnregisterDeviceInterface.c)
 * Callees:
 *     PiAuVerifyAccessToObject @ 0x1404DAEBC (PiAuVerifyAccessToObject.c)
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
