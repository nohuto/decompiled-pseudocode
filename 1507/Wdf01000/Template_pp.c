/*
 * XREFs of Template_pp @ 0x1C006B12C
 * Callers:
 *     VfEvtDeviceD0Entry @ 0x1C00CDED0 (VfEvtDeviceD0Entry.c)
 *     VfEvtDeviceD0Exit @ 0x1C00CE180 (VfEvtDeviceD0Exit.c)
 *     VfEvtDevicePrepareHardware @ 0x1C00CE430 (VfEvtDevicePrepareHardware.c)
 *     VfEvtDeviceReleaseHardware @ 0x1C00CE870 (VfEvtDeviceReleaseHardware.c)
 *     VfEvtIoStop @ 0x1C00CFB80 (VfEvtIoStop.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0030D80 (__security_check_cookie.c)
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
  return EtwWrite((REGHANDLE)WPP_GLOBAL_WDF_Control.Queue.ListEntry.Blink, Activity, _Arg0, 2u, EventData);
}
