/*
 * XREFs of EtwSetInformation @ 0x14057E7C0
 * Callers:
 *     BapdWriteEtwEvents @ 0x140157A80 (BapdWriteEtwEvents.c)
 *     HvlpEtwRegister @ 0x1401EFC38 (HvlpEtwRegister.c)
 *     PsDispatchIumService @ 0x140244710 (PsDispatchIumService.c)
 *     BapdRecordFirmwareBootStats @ 0x1403F66C8 (BapdRecordFirmwareBootStats.c)
 *     TraceLoggingRegisterEx @ 0x1405BCF34 (TraceLoggingRegisterEx.c)
 * Callees:
 *     EtwpSetProviderTraitsKm @ 0x14057E810 (EtwpSetProviderTraitsKm.c)
 */

NTSTATUS __stdcall EtwSetInformation(
        REGHANDLE RegHandle,
        EVENT_INFO_CLASS InformationClass,
        PVOID EventInformation,
        ULONG InformationLength)
{
  NTSTATUS v4; // r10d
  __int32 v5; // edx

  v4 = 0;
  if ( RegHandle )
  {
    v5 = InformationClass - 2;
    if ( v5 )
    {
      if ( v5 != 1 )
        return -1073741808;
      if ( EventInformation && InformationLength == 1 && *(_BYTE *)EventInformation < 2u )
      {
        *(_BYTE *)(RegHandle + 101) = *(_BYTE *)EventInformation;
        return v4;
      }
    }
    else if ( EventInformation && InformationLength - 3 <= 0x7FFC )
    {
      return EtwpSetProviderTraitsKm(RegHandle, EventInformation, (unsigned __int16)InformationLength);
    }
    return -1073741811;
  }
  return -1073741816;
}
