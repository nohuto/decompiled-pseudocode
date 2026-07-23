/*
 * XREFs of EtwSetInformation @ 0x140549024
 * Callers:
 *     BapdWriteEtwEvents @ 0x1401324AC (BapdWriteEtwEvents.c)
 *     BapdRegisterEtwProvider @ 0x140132850 (BapdRegisterEtwProvider.c)
 *     HvlpEtwRegister @ 0x1401C0AD4 (HvlpEtwRegister.c)
 *     PsDispatchIumService @ 0x14020FA50 (PsDispatchIumService.c)
 *     TraceLoggingRegisterEx @ 0x140546ED4 (TraceLoggingRegisterEx.c)
 *     PopDiagInitialize @ 0x1407A91B0 (PopDiagInitialize.c)
 * Callees:
 *     EtwpSetProviderTraitsKm @ 0x140549074 (EtwpSetProviderTraitsKm.c)
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
        *(_BYTE *)(RegHandle + 102) = *(_BYTE *)EventInformation;
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
