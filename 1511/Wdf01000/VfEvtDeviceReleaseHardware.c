/*
 * XREFs of VfEvtDeviceReleaseHardware @ 0x1C00B8370
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1C0035B00 (__security_check_cookie.c)
 *     ?PerfEvtDeviceReleaseHardwareStart@@YAEPEAUWDFDEVICE__@@PEAU_GUID@@@Z @ 0x1C006326C (-PerfEvtDeviceReleaseHardwareStart@@YAEPEAUWDFDEVICE__@@PEAU_GUID@@@Z.c)
 *     Template_pp @ 0x1C0063468 (Template_pp.c)
 *     VerifyCriticalRegionEntry @ 0x1C00634D8 (VerifyCriticalRegionEntry.c)
 *     VerifyCriticalRegionExit @ 0x1C00634F8 (VerifyCriticalRegionExit.c)
 *     VerifyIrqlExit @ 0x1C0063548 (VerifyIrqlExit.c)
 *     VfWdfObjectGetTypedContext @ 0x1C00B7C70 (VfWdfObjectGetTypedContext.c)
 */

__int64 __fastcall VfEvtDeviceReleaseHardware(unsigned __int64 Device, WDFCMRESLIST__ *ResourcesTranslated)
{
  unsigned int v4; // esi
  char *TypedContext; // r14
  __int64 (__fastcall *v6)(unsigned __int64, WDFCMRESLIST__ *); // rbp
  unsigned __int16 *v7; // rdx
  unsigned __int8 CurrentIrql; // bl
  unsigned __int8 critRegion[8]; // [rsp+30h] [rbp-48h] BYREF
  _GUID activityId; // [rsp+38h] [rbp-40h] BYREF

  v4 = 0;
  TypedContext = VfWdfObjectGetTypedContext(Device, &WDF_VF_WDFDEVICECREATE_CONTEXT_TYPE_INFO);
  v6 = (__int64 (__fastcall *)(unsigned __int64, WDFCMRESLIST__ *))*((_QWORD *)TypedContext + 7);
  if ( v6 )
  {
    activityId.Data1 = 0;
    *(_QWORD *)&activityId.Data2 = 0LL;
    *(_DWORD *)&activityId.Data4[4] = 0;
    if ( PerfEvtDeviceReleaseHardwareStart(Device, &activityId) )
    {
      v4 = v6(Device, ResourcesTranslated);
      if ( ((__int64)WPP_GLOBAL_WDF_Control.Queue.ListEntry.Flink & 1) != 0 )
      {
        v7 = (unsigned __int16 *)(~Device & 0xFFFFFFFFFFFFFFF8uLL);
        if ( (Device & 1) != 0 )
          v7 = (unsigned __int16 *)((char *)v7 - *v7);
        Template_pp(
          Device & 7,
          &FX_POWER_HW_RELEASE_STOP,
          &activityId,
          *(const void **)(*(_QWORD *)(*((_QWORD *)v7 + 2) + 72LL) + 168LL),
          (const void *)Device);
      }
    }
    else
    {
      critRegion[0] = 0;
      CurrentIrql = KeGetCurrentIrql();
      VerifyCriticalRegionEntry(critRegion);
      v4 = v6(Device, ResourcesTranslated);
      VerifyIrqlExit(*(_WDF_DRIVER_GLOBALS **)TypedContext, CurrentIrql);
      VerifyCriticalRegionExit(*(_WDF_DRIVER_GLOBALS **)TypedContext, critRegion[0], (unsigned __int64)v6);
    }
  }
  return v4;
}
