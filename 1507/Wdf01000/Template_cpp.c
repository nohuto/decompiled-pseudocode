/*
 * XREFs of Template_cpp @ 0x1C006B0B0
 * Callers:
 *     imp_VfWdfIoQueueRetrieveFoundRequest @ 0x1C00CB520 (imp_VfWdfIoQueueRetrieveFoundRequest.c)
 *     imp_VfWdfIoQueueRetrieveNextRequest @ 0x1C00CB6A0 (imp_VfWdfIoQueueRetrieveNextRequest.c)
 *     imp_VfWdfIoQueueRetrieveRequestByFileObject @ 0x1C00CB830 (imp_VfWdfIoQueueRetrieveRequestByFileObject.c)
 *     imp_VfWdfRequestComplete @ 0x1C00CC610 (imp_VfWdfRequestComplete.c)
 *     imp_VfWdfRequestCompleteWithInformation @ 0x1C00CC7B0 (imp_VfWdfRequestCompleteWithInformation.c)
 *     imp_VfWdfRequestCompleteWithPriorityBoost @ 0x1C00CC950 (imp_VfWdfRequestCompleteWithPriorityBoost.c)
 *     VfEvtIoDefault @ 0x1C00CF1B0 (VfEvtIoDefault.c)
 *     VfEvtIoDeviceControl @ 0x1C00CF3E0 (VfEvtIoDeviceControl.c)
 *     VfEvtIoInternalDeviceControl @ 0x1C00CF630 (VfEvtIoInternalDeviceControl.c)
 *     VfEvtIoRead @ 0x1C00CF880 (VfEvtIoRead.c)
 *     VfEvtIoWrite @ 0x1C00CFE00 (VfEvtIoWrite.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0030D80 (__security_check_cookie.c)
 */

NTSTATUS __fastcall Template_cpp(
        unsigned __int64 Descriptor,
        const _EVENT_DESCRIPTOR *Activity,
        const _GUID *_Arg0,
        unsigned __int8 _Arg1,
        const void *_Arg2,
        const void *RegHandle)
{
  _EVENT_DATA_DESCRIPTOR EventData[3]; // [rsp+30h] [rbp-40h] BYREF
  unsigned __int8 v8; // [rsp+98h] [rbp+28h] BYREF

  v8 = _Arg1;
  EventData[0].Ptr = (unsigned __int64)&v8;
  *(_QWORD *)&EventData[0].Size = 1LL;
  EventData[1].Ptr = (unsigned __int64)&_Arg2;
  EventData[2].Ptr = (unsigned __int64)&RegHandle;
  *(_QWORD *)&EventData[1].Size = 8LL;
  *(_QWORD *)&EventData[2].Size = 8LL;
  return EtwWrite((REGHANDLE)WPP_GLOBAL_WDF_Control.Queue.ListEntry.Blink, Activity, _Arg0, 3u, EventData);
}
