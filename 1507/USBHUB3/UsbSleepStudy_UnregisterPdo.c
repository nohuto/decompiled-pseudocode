/*
 * XREFs of UsbSleepStudy_UnregisterPdo @ 0x1C0032A94
 * Callers:
 *     HUBPDO_EvtDeviceReleaseHardware @ 0x1C0066600 (HUBPDO_EvtDeviceReleaseHardware.c)
 * Callees:
 *     <none>
 */

ULONG __fastcall UsbSleepStudy_UnregisterPdo(_QWORD *P)
{
  KIRQL v2; // di
  _QWORD *v3; // rdx
  PVOID *v4; // rcx
  void *v5; // rcx
  void *v6; // rcx

  DbgPrint("UsbSleepStudy_UnregisterPdo: Enter\r\n");
  DbgPrint("UsbSleepStudy_UnregisterPdo: Handle %#p\r\n", P);
  if ( P )
  {
    v2 = KeAcquireSpinLockRaiseToDpc(&gDevicesListSpinLock);
    DbgPrint("UsbSleepStudy_UnregisterPdo: Releasing Context %#p\r\n", P);
    v3 = (_QWORD *)*P;
    v4 = (PVOID *)P[1];
    if ( *(_QWORD **)(*P + 8LL) != P || *v4 != P )
      __fastfail(3u);
    *v4 = v3;
    v3[1] = v4;
    v5 = (void *)P[8];
    if ( v5 )
      ExFreePoolWithTag(v5, 0x53535554u);
    v6 = (void *)P[10];
    if ( v6 )
      ExFreePoolWithTag(v6, 0x53535554u);
    ExFreePoolWithTag(P, 0x53535554u);
    KeReleaseSpinLock(&gDevicesListSpinLock, v2);
  }
  return DbgPrint("UsbSleepStudy_UnregisterPdo: Exit Handle %#p\r\n", P);
}
