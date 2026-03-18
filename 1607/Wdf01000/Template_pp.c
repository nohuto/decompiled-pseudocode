/*
 * XREFs of Template_pp @ 0x1C0071E78
 * Callers:
 *     ?PerfEvtDeviceD0EntryStart@@YAEPEAUWDFDEVICE__@@PEAU_GUID@@@Z @ 0x1C0071AA8 (-PerfEvtDeviceD0EntryStart@@YAEPEAUWDFDEVICE__@@PEAU_GUID@@@Z.c)
 *     ?PerfEvtDeviceD0ExitStart@@YAEPEAUWDFDEVICE__@@PEAU_GUID@@@Z @ 0x1C0071B44 (-PerfEvtDeviceD0ExitStart@@YAEPEAUWDFDEVICE__@@PEAU_GUID@@@Z.c)
 *     ?PerfEvtDevicePrepareHardwareStart@@YAEPEAUWDFDEVICE__@@PEAU_GUID@@@Z @ 0x1C0071BE0 (-PerfEvtDevicePrepareHardwareStart@@YAEPEAUWDFDEVICE__@@PEAU_GUID@@@Z.c)
 *     ?PerfEvtDeviceReleaseHardwareStart@@YAEPEAUWDFDEVICE__@@PEAU_GUID@@@Z @ 0x1C0071C7C (-PerfEvtDeviceReleaseHardwareStart@@YAEPEAUWDFDEVICE__@@PEAU_GUID@@@Z.c)
 *     ?PerfEvtIoStopStart@@YAEPEAUWDFQUEUE__@@PEAU_GUID@@@Z @ 0x1C0071D18 (-PerfEvtIoStopStart@@YAEPEAUWDFQUEUE__@@PEAU_GUID@@@Z.c)
 *     ?PerfEvtIoStopStop@@YAXPEAUWDFQUEUE__@@PEAU_GUID@@@Z @ 0x1C0071DE8 (-PerfEvtIoStopStop@@YAXPEAUWDFQUEUE__@@PEAU_GUID@@@Z.c)
 *     VfEvtDeviceD0Entry @ 0x1C00C6D50 (VfEvtDeviceD0Entry.c)
 *     VfEvtDeviceD0Exit @ 0x1C00C6F10 (VfEvtDeviceD0Exit.c)
 *     VfEvtDevicePrepareHardware @ 0x1C00C70D0 (VfEvtDevicePrepareHardware.c)
 *     VfEvtDeviceReleaseHardware @ 0x1C00C7390 (VfEvtDeviceReleaseHardware.c)
 * Callees:
 *     __security_check_cookie @ 0x1C003A860 (__security_check_cookie.c)
 */

NTSTATUS __fastcall Template_pp(
        unsigned __int64 Descriptor,
        const _EVENT_DESCRIPTOR *Activity,
        const _GUID *_Arg0,
        const void *_Arg1,
        const void *RegHandle)
{
  _EVENT_DATA_DESCRIPTOR EventData[2]; // [rsp+30h] [rbp-38h] BYREF
  const void *v7; // [rsp+88h] [rbp+20h] BYREF

  v7 = _Arg1;
  EventData[0].Ptr = (unsigned __int64)&v7;
  EventData[0].Size = 8;
  EventData[0].Reserved = 0;
  EventData[1].Ptr = (unsigned __int64)&RegHandle;
  EventData[1].Size = 8;
  EventData[1].Reserved = 0;
  return EtwWrite((REGHANDLE)WPP_GLOBAL_WDF_Control.Queue.Wcb.DeviceContext, Activity, _Arg0, 2u, EventData);
}
