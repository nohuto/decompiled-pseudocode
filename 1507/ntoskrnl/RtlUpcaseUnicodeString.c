/*
 * XREFs of RtlUpcaseUnicodeString @ 0x140443520
 * Callers:
 *     RtlDeriveCapabilitySidsFromName @ 0x14015EF7C (RtlDeriveCapabilitySidsFromName.c)
 *     PiCMOpenClassKey @ 0x1404428B0 (PiCMOpenClassKey.c)
 *     PfSnLogStreamCreate @ 0x140443320 (PfSnLogStreamCreate.c)
 *     PfCalculateProcessHash @ 0x140443818 (PfCalculateProcessHash.c)
 *     PfSnLogVolumeCreate @ 0x14054C294 (PfSnLogVolumeCreate.c)
 *     SdbMakeIndexKeyFromStringEx @ 0x140578004 (SdbMakeIndexKeyFromStringEx.c)
 *     AslStringUpcaseToMultiByteN @ 0x1405782C0 (AslStringUpcaseToMultiByteN.c)
 *     IoReportDetectedDevice @ 0x14059B5E8 (IoReportDetectedDevice.c)
 *     PipMakeGloballyUniqueId @ 0x1405B1CF8 (PipMakeGloballyUniqueId.c)
 *     PiDevCfgResolveVariableGenerateGuid @ 0x14068BD84 (PiDevCfgResolveVariableGenerateGuid.c)
 *     PiCMGenerateDeviceInstance @ 0x140692DCC (PiCMGenerateDeviceInstance.c)
 *     ViCreateProcessCallbackInternal @ 0x1407467D0 (ViCreateProcessCallbackInternal.c)
 *     ViFaultsAddAppNoDuplicates @ 0x140746A44 (ViFaultsAddAppNoDuplicates.c)
 *     VerifierRtlUpcaseUnicodeString @ 0x140752E90 (VerifierRtlUpcaseUnicodeString.c)
 *     PipInitComputerIds @ 0x1407B6E78 (PipInitComputerIds.c)
 * Callees:
 *     ExFreePool @ 0x140288000 (ExFreePool.c)
 *     ExpAllocateStringRoutine @ 0x1404FFFAC (ExpAllocateStringRoutine.c)
 */

NTSTATUS __stdcall RtlUpcaseUnicodeString(
        PUNICODE_STRING DestinationString,
        PCUNICODE_STRING SourceString,
        BOOLEAN AllocateDestinationString)
{
  unsigned int v5; // r11d
  __int64 v6; // r9
  __int64 v7; // rsi
  wchar_t v8; // r10
  wchar_t v9; // dx
  unsigned int Length; // eax
  wchar_t *StringRoutine; // rax

  if ( AllocateDestinationString )
  {
    Length = SourceString->Length;
    DestinationString->MaximumLength = Length;
    StringRoutine = (wchar_t *)ExpAllocateStringRoutine(Length);
    DestinationString->Buffer = StringRoutine;
    if ( !StringRoutine )
      return -1073741801;
  }
  else if ( SourceString->Length > DestinationString->MaximumLength )
  {
    return -2147483643;
  }
  v5 = SourceString->Length >> 1;
  v6 = 0LL;
  v7 = *(__int64 *)((char *)&NlsMbCodePageTag + 7);
  while ( (unsigned int)v6 < v5 )
  {
    v8 = SourceString->Buffer[v6];
    if ( v8 >= 0x61u )
    {
      if ( v8 > 0x7Au )
        v9 = v8
           + *(_WORD *)(v7
                      + 2LL
                      * ((v8 & 0xF)
                       + (unsigned int)*(unsigned __int16 *)(v7
                                                           + 2LL
                                                           * (((v8 >> 4) & 0xF)
                                                            + (unsigned int)*(unsigned __int16 *)(v7
                                                                                                + 2
                                                                                                * ((unsigned __int64)v8 >> 8))))));
      else
        v9 = v8 - 32;
    }
    else
    {
      v9 = SourceString->Buffer[v6];
    }
    DestinationString->Buffer[v6] = v9;
    v6 = (unsigned int)(v6 + 1);
  }
  DestinationString->Length = SourceString->Length;
  return 0;
}
