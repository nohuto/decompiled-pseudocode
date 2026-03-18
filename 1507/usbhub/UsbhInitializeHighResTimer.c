/*
 * XREFs of UsbhInitializeHighResTimer @ 0x1C00265FC
 * Callers:
 *     DriverEntry @ 0x1C00263A0 (DriverEntry.c)
 * Callees:
 *     <none>
 */

bool UsbhInitializeHighResTimer()
{
  struct _UNICODE_STRING DestinationString; // [rsp+20h] [rbp-18h] BYREF

  RtlInitUnicodeString(&DestinationString, L"ExAllocateTimer");
  g_ExAllocateTimer = (__int64)MmGetSystemRoutineAddress(&DestinationString);
  if ( !g_ExAllocateTimer )
    return 0;
  RtlInitUnicodeString(&DestinationString, L"ExDeleteTimer");
  g_ExDeleteTimer = (__int64)MmGetSystemRoutineAddress(&DestinationString);
  if ( !g_ExDeleteTimer )
    return 0;
  RtlInitUnicodeString(&DestinationString, L"ExSetTimer");
  g_ExSetTimer = (__int64)MmGetSystemRoutineAddress(&DestinationString);
  if ( !g_ExSetTimer )
    return 0;
  RtlInitUnicodeString(&DestinationString, L"ExCancelTimer");
  g_ExCancelTimer = (__int64)MmGetSystemRoutineAddress(&DestinationString);
  return g_ExCancelTimer != 0;
}
