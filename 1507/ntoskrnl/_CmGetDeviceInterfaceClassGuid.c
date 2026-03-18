/*
 * XREFs of _CmGetDeviceInterfaceClassGuid @ 0x14043F2AC
 * Callers:
 *     _CmGetDeviceInterfaceMappedPropertyFromComposite @ 0x14043FBF0 (_CmGetDeviceInterfaceMappedPropertyFromComposite.c)
 *     PiSwCompleteCreate @ 0x14045B4C4 (PiSwCompleteCreate.c)
 *     IopProcessSetInterfaceState @ 0x1404E3518 (IopProcessSetInterfaceState.c)
 * Callees:
 *     RtlInitUnicodeStringEx @ 0x140015260 (RtlInitUnicodeStringEx.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     RtlGUIDFromString @ 0x14043D910 (RtlGUIDFromString.c)
 *     _CmGetDeviceInterfaceClassGuidString @ 0x14043F264 (_CmGetDeviceInterfaceClassGuidString.c)
 */

NTSTATUS __fastcall CmGetDeviceInterfaceClassGuid(__int64 a1, const wchar_t *a2, GUID *a3)
{
  NTSTATUS result; // eax
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
