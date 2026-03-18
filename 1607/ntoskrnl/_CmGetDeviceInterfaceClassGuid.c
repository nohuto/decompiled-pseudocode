/*
 * XREFs of _CmGetDeviceInterfaceClassGuid @ 0x1404F8A48
 * Callers:
 *     IopProcessSetInterfaceState @ 0x1403F26A4 (IopProcessSetInterfaceState.c)
 *     PiSwCompleteCreate @ 0x1404C6A1C (PiSwCompleteCreate.c)
 *     _CmGetDeviceInterfaceMappedPropertyFromComposite @ 0x140503538 (_CmGetDeviceInterfaceMappedPropertyFromComposite.c)
 * Callees:
 *     RtlInitUnicodeStringEx @ 0x1400C39C0 (RtlInitUnicodeStringEx.c)
 *     __security_check_cookie @ 0x14014CA50 (__security_check_cookie.c)
 *     _CmGetDeviceInterfaceClassGuidString @ 0x1404F8AB0 (_CmGetDeviceInterfaceClassGuidString.c)
 *     RtlGUIDFromString @ 0x1404FB370 (RtlGUIDFromString.c)
 */

int __fastcall CmGetDeviceInterfaceClassGuid(__int64 a1, __int64 a2, GUID *a3)
{
  int result; // eax
  UNICODE_STRING DestinationString; // [rsp+20h] [rbp-78h] BYREF
  WCHAR SourceString[40]; // [rsp+30h] [rbp-68h] BYREF

  result = CmGetDeviceInterfaceClassGuidString(a1, a2, SourceString);
  if ( result >= 0 )
  {
    result = RtlInitUnicodeStringEx(&DestinationString, SourceString);
    if ( result >= 0 )
      return RtlGUIDFromString(&DestinationString, a3);
  }
  return result;
}
