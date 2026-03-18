/*
 * XREFs of WppLoadTracingSupport @ 0x1C004BAC4
 * Callers:
 *     DriverEntry @ 0x1C004B5C0 (DriverEntry.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0007C30 (_guard_dispatch_icall_nop.c)
 */

void *WppLoadTracingSupport()
{
  void *result; // rax
  struct _UNICODE_STRING DestinationString; // [rsp+30h] [rbp-10h] BYREF
  unsigned int v2; // [rsp+50h] [rbp+10h] BYREF

  v2 = 0;
  RtlInitUnicodeString(&DestinationString, L"PsGetVersion");
  WPP_MAIN_CB.DeviceQueue.DeviceListHead.Blink = (_LIST_ENTRY *)MmGetSystemRoutineAddress(&DestinationString);
  RtlInitUnicodeString(&DestinationString, L"WmiTraceMessage");
  *(_QWORD *)&WPP_MAIN_CB.Dpc.TargetInfoAsUlong = MmGetSystemRoutineAddress(&DestinationString);
  RtlInitUnicodeString(&DestinationString, L"WmiQueryTraceInformation");
  WPP_MAIN_CB.Dpc.DpcListEntry.Next = (_SINGLE_LIST_ENTRY *)MmGetSystemRoutineAddress(&DestinationString);
  result = WPP_MAIN_CB.DeviceQueue.DeviceListHead.Blink;
  LODWORD(WPP_MAIN_CB.DeviceQueue.DeviceListHead.Flink) = 2;
  if ( WPP_MAIN_CB.DeviceQueue.DeviceListHead.Blink )
    result = (void *)((__int64 (__fastcall *)(unsigned int *, _QWORD, _QWORD, _QWORD))WPP_MAIN_CB.DeviceQueue.DeviceListHead.Blink)(
                       &v2,
                       0LL,
                       0LL,
                       0LL);
  if ( v2 >= 6 )
  {
    RtlInitUnicodeString(&DestinationString, L"EtwRegisterClassicProvider");
    result = MmGetSystemRoutineAddress(&DestinationString);
    WPP_MAIN_CB.DeviceQueue.Lock = (unsigned __int64)result;
    if ( result )
    {
      RtlInitUnicodeString(&DestinationString, L"EtwUnregister");
      result = MmGetSystemRoutineAddress(&DestinationString);
      WPP_MAIN_CB.DeviceQueue.1 = ($18E3EACC1E717291AA7C720ECCD5C45C)result;
      LODWORD(WPP_MAIN_CB.DeviceQueue.DeviceListHead.Flink) = 4;
    }
  }
  return result;
}
