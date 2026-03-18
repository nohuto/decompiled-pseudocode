/*
 * XREFs of PiAuDoesClientHaveAccess @ 0x14045D728
 * Callers:
 *     PiCMOpenObjectKey @ 0x140442BB8 (PiCMOpenObjectKey.c)
 *     PiCMValidateDeviceInstance @ 0x14045BB10 (PiCMValidateDeviceInstance.c)
 *     PiSwDispatch @ 0x140494568 (PiSwDispatch.c)
 *     PiCMOpenDeviceKey @ 0x1404B28C0 (PiCMOpenDeviceKey.c)
 *     PiCMOpenClassKey @ 0x1404BE4F4 (PiCMOpenClassKey.c)
 *     PiCMSetObjectProperty @ 0x1404E5A40 (PiCMSetObjectProperty.c)
 *     PiDqIrpPropertySet @ 0x14050DD30 (PiDqIrpPropertySet.c)
 *     PiCMOpenDeviceInterfaceKey @ 0x14051A4C4 (PiCMOpenDeviceInterfaceKey.c)
 *     PiCMCreateDevice @ 0x140611DAC (PiCMCreateDevice.c)
 *     PiCMCreateObject @ 0x1406123AC (PiCMCreateObject.c)
 *     PiCMDeleteClassKey @ 0x140612510 (PiCMDeleteClassKey.c)
 *     PiCMDeleteDevice @ 0x1406125F8 (PiCMDeleteDevice.c)
 *     PiCMDeleteDeviceInterfaceKey @ 0x14061292C (PiCMDeleteDeviceInterfaceKey.c)
 *     PiCMDeleteDeviceKey @ 0x140612A78 (PiCMDeleteDeviceKey.c)
 *     PiCMDeleteObject @ 0x140612C9C (PiCMDeleteObject.c)
 *     PiCMDeviceAction @ 0x140612E20 (PiCMDeviceAction.c)
 *     PiCMQueryRemove @ 0x140613880 (PiCMQueryRemove.c)
 *     PiCMRegisterDeviceInterface @ 0x140613C84 (PiCMRegisterDeviceInterface.c)
 *     PiCMSetDeviceProblem @ 0x140613F24 (PiCMSetDeviceProblem.c)
 *     PiCMSetRegistryProperty @ 0x1406140E8 (PiCMSetRegistryProperty.c)
 *     PiCMUnregisterDeviceInterface @ 0x14061426C (PiCMUnregisterDeviceInterface.c)
 * Callees:
 *     PiAuVerifyAccessToObject @ 0x140442700 (PiAuVerifyAccessToObject.c)
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
