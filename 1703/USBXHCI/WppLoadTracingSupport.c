/*
 * XREFs of WppLoadTracingSupport @ 0x1C0050AEC
 * Callers:
 *     DriverEntry @ 0x1C00505D0 (DriverEntry.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0010A80 (_guard_dispatch_icall_nop.c)
 */

_LIST_ENTRY *WppLoadTracingSupport()
{
  _LIST_ENTRY *result; // rax
  struct _UNICODE_STRING DestinationString; // [rsp+30h] [rbp-10h] BYREF
  unsigned int v2; // [rsp+50h] [rbp+10h] BYREF

  v2 = 0;
  RtlInitUnicodeString(&DestinationString, L"PsGetVersion");
  WPP_MAIN_CB.DeviceQueue.DeviceListHead.Flink = (_LIST_ENTRY *)MmGetSystemRoutineAddress(&DestinationString);
  RtlInitUnicodeString(&DestinationString, L"WmiTraceMessage");
  WPP_MAIN_CB.DeviceQueue.1 = ($18E3EACC1E717291AA7C720ECCD5C45C)MmGetSystemRoutineAddress(&DestinationString);
  RtlInitUnicodeString(&DestinationString, L"WmiQueryTraceInformation");
  *(_QWORD *)&WPP_MAIN_CB.Dpc.TargetInfoAsUlong = MmGetSystemRoutineAddress(&DestinationString);
  result = WPP_MAIN_CB.DeviceQueue.DeviceListHead.Flink;
  *(_DWORD *)&WPP_MAIN_CB.DeviceQueue.Type = 2;
  if ( WPP_MAIN_CB.DeviceQueue.DeviceListHead.Flink )
    result = (_LIST_ENTRY *)((__int64 (__fastcall *)(unsigned int *, _QWORD, _QWORD, _QWORD))WPP_MAIN_CB.DeviceQueue.DeviceListHead.Flink)(
                              &v2,
                              0LL,
                              0LL,
                              0LL);
  if ( v2 >= 6 )
  {
    RtlInitUnicodeString(&DestinationString, L"EtwRegisterClassicProvider");
    result = (_LIST_ENTRY *)MmGetSystemRoutineAddress(&DestinationString);
    WPP_MAIN_CB.DeviceQueue.DeviceListHead.Blink = result;
    if ( result )
    {
      RtlInitUnicodeString(&DestinationString, L"EtwUnregister");
      result = (_LIST_ENTRY *)MmGetSystemRoutineAddress(&DestinationString);
      WPP_MAIN_CB.DeviceQueue.Lock = (unsigned __int64)result;
      *(_DWORD *)&WPP_MAIN_CB.DeviceQueue.Type = 4;
    }
  }
  return result;
}
