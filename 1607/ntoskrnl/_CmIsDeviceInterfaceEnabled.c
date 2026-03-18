/*
 * XREFs of _CmIsDeviceInterfaceEnabled @ 0x1404FB018
 * Callers:
 *     _CmGetDeviceInterfaceMappedPropertyFromRegValue @ 0x1404DC4F4 (_CmGetDeviceInterfaceMappedPropertyFromRegValue.c)
 *     PiPnpRtlInterfaceFilterCallback @ 0x140500CEC (PiPnpRtlInterfaceFilterCallback.c)
 *     _CmDeviceClassesSubkeyCallback @ 0x140562834 (_CmDeviceClassesSubkeyCallback.c)
 * Callees:
 *     RtlInitUnicodeStringEx @ 0x1400C39C0 (RtlInitUnicodeStringEx.c)
 *     _NtPlugPlayGetDeviceInterfaceEnabled @ 0x1404FB054 (_NtPlugPlayGetDeviceInterfaceEnabled.c)
 */

NTSTATUS __fastcall CmIsDeviceInterfaceEnabled(__int64 a1, const WCHAR *a2, __int64 a3, __int64 a4)
{
  NTSTATUS result; // eax
  UNICODE_STRING DestinationString; // [rsp+20h] [rbp-18h] BYREF

  result = RtlInitUnicodeStringEx(&DestinationString, a2);
  if ( result >= 0 )
    return NtPlugPlayGetDeviceInterfaceEnabled(a1, &DestinationString, a4);
  return result;
}
