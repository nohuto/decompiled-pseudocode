/*
 * XREFs of WdmlibInit @ 0x1C009E648
 * Callers:
 *     WdmlibIoCreateDeviceSecure @ 0x1C009E5C8 (WdmlibIoCreateDeviceSecure.c)
 * Callees:
 *     <none>
 */

PVOID WdmlibInit()
{
  PVOID result; // rax
  _UNICODE_STRING DestinationString; // [rsp+20h] [rbp-18h] BYREF

  RtlInitUnicodeString(&DestinationString, L"IoCreateDeviceSecure");
  PfnIoCreateDeviceSecure = (__int64)MmGetSystemRoutineAddress(&DestinationString);
  if ( !PfnIoCreateDeviceSecure )
    PfnIoCreateDeviceSecure = (__int64)IoDevObjCreateDeviceSecure;
  RtlInitUnicodeString(&DestinationString, L"IoValidateDeviceIoControlAccess");
  result = MmGetSystemRoutineAddress(&DestinationString);
  PfnIoValidateDeviceIoControlAccess = (__int64)result;
  WdmlibInitialized = 1;
  return result;
}
