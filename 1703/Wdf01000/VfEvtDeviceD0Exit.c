/*
 * XREFs of VfEvtDeviceD0Exit @ 0x1C00D23B0
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1C003E280 (__security_check_cookie.c)
 *     ?PerfEvtDeviceD0ExitStart@@YAEPEAUWDFDEVICE__@@PEAU_GUID@@@Z @ 0x1C0075734 (-PerfEvtDeviceD0ExitStart@@YAEPEAUWDFDEVICE__@@PEAU_GUID@@@Z.c)
 *     Template_pp @ 0x1C0075A80 (Template_pp.c)
 *     VerifyCriticalRegionEntry @ 0x1C0075AF8 (VerifyCriticalRegionEntry.c)
 *     VerifyCriticalRegionExit @ 0x1C0075B20 (VerifyCriticalRegionExit.c)
 *     VerifyIrqlExit @ 0x1C0075B78 (VerifyIrqlExit.c)
 *     VfWdfObjectGetTypedContext @ 0x1C00D212C (VfWdfObjectGetTypedContext.c)
 */

__int64 __fastcall VfEvtDeviceD0Exit(unsigned __int64 Device, unsigned int TargetState)
{
  unsigned int v4; // esi
  char *TypedContext; // r14
  __int64 (__fastcall *v6)(unsigned __int64, _QWORD); // rbp
  unsigned __int16 *v7; // rcx
  unsigned __int8 CurrentIrql; // bl
  unsigned __int8 critRegion[8]; // [rsp+30h] [rbp-48h] BYREF
  _GUID activityId; // [rsp+38h] [rbp-40h] BYREF

  v4 = 0;
  TypedContext = VfWdfObjectGetTypedContext(Device, &WDF_VF_WDFDEVICECREATE_CONTEXT_TYPE_INFO);
  v6 = (__int64 (__fastcall *)(unsigned __int64, _QWORD))*((_QWORD *)TypedContext + 4);
  if ( v6 )
  {
    *(_QWORD *)&activityId.Data1 = 0LL;
    *(_QWORD *)activityId.Data4 = 0LL;
    if ( PerfEvtDeviceD0ExitStart(Device, &activityId) )
    {
      v4 = v6(Device, TargetState);
      if ( ((__int64)WPP_GLOBAL_WDF_Control.Queue.Wcb.BufferChainingDpc & 1) != 0 )
      {
        v7 = (unsigned __int16 *)(~Device & 0xFFFFFFFFFFFFFFF8uLL);
        if ( (Device & 1) != 0 )
          v7 = (unsigned __int16 *)((char *)v7 - *v7);
        Template_pp(
          (unsigned __int64)v7,
          &FX_POWER_D0_EXIT_STOP,
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
      v4 = v6(Device, TargetState);
      VerifyIrqlExit(*(_WDF_DRIVER_GLOBALS **)TypedContext, CurrentIrql);
      VerifyCriticalRegionExit(*(_WDF_DRIVER_GLOBALS **)TypedContext, critRegion[0], (unsigned __int64)v6);
    }
  }
  return v4;
}
