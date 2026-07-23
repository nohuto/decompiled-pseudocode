/*
 * XREFs of EtwEventSetInformation @ 0x18000E180
 * Callers:
 *     <none>
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
    if ( v4 )
    {
      if ( v4 != 1 )
        return 50;
      if ( EventInformation && InformationLength == 1 )
        return EtwpUseDescriptorType(RegHandle, (char *)EventInformation);
    }
    else if ( EventInformation && InformationLength - 3 <= 0xFFFC )
    {
      return EtwpSetProviderTraits(RegHandle, EventInformation, (unsigned __int16)InformationLength);
    }
  }
  else if ( !InformationLength )
  {
    return EtwpTrackProviderBinary(RegHandle);
  }
  return 87;
}
