/*
 * XREFs of EtwEventSetInformation @ 0x18002A160
 * Callers:
 *     CentennialIssueTracker_EnsureRegistration @ 0x180009300 (CentennialIssueTracker_EnsureRegistration.c)
 *     LdrpResReportResourceAccessInternalInitOnce @ 0x180087710 (LdrpResReportResourceAccessInternalInitOnce.c)
 * Callees:
 *     <none>
 */

ULONG __cdecl EtwEventSetInformation(
        REGHANDLE RegHandle,
        EVENT_INFO_CLASS InformationClass,
        PVOID EventInformation,
        ULONG InformationLength)
{
  __int32 v4; // edx

  if ( InformationClass )
  {
    v4 = InformationClass - 2;
    if ( !v4 )
    {
      if ( EventInformation && InformationLength - 3 <= 0xFFFC )
        return EtwpSetProviderTraits(RegHandle, EventInformation, (unsigned __int16)InformationLength);
      return 87;
    }
    if ( v4 != 1 )
      return 50;
    if ( EventInformation && InformationLength == 1 )
      return EtwpUseDescriptorType(RegHandle, EventInformation);
    return 87;
  }
  if ( InformationLength )
    return 87;
  return EtwpTrackProviderBinary(RegHandle);
}
