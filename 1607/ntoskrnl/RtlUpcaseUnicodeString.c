/*
 * XREFs of RtlUpcaseUnicodeString @ 0x140514D50
 * Callers:
 *     RtlDeriveCapabilitySidsFromName @ 0x140136740 (RtlDeriveCapabilitySidsFromName.c)
 *     PfCalculateProcessHash @ 0x1403E67F0 (PfCalculateProcessHash.c)
 *     SdbMakeIndexKeyFromStringEx @ 0x140484E1C (SdbMakeIndexKeyFromStringEx.c)
 *     AslStringUpcaseToMultiByteN @ 0x1404851EC (AslStringUpcaseToMultiByteN.c)
 *     PfSnLogVolumeCreate @ 0x1404DCF20 (PfSnLogVolumeCreate.c)
 *     PiCMOpenClassKey @ 0x1404E6B44 (PiCMOpenClassKey.c)
 *     PfSnLogStreamCreate @ 0x140514BF4 (PfSnLogStreamCreate.c)
 *     IoReportDetectedDevice @ 0x140554CFC (IoReportDetectedDevice.c)
 *     PipMakeGloballyUniqueId @ 0x14056F5C4 (PipMakeGloballyUniqueId.c)
 *     PiDevCfgResolveVariableGenerateGuid @ 0x140640250 (PiDevCfgResolveVariableGenerateGuid.c)
 *     PiCMGenerateDeviceInstance @ 0x1406477EC (PiCMGenerateDeviceInstance.c)
 *     ViCreateProcessCallbackInternal @ 0x140711044 (ViCreateProcessCallbackInternal.c)
 *     ViFaultsAddAppNoDuplicates @ 0x140711268 (ViFaultsAddAppNoDuplicates.c)
 *     PipInitComputerIds @ 0x140799740 (PipInitComputerIds.c)
 * Callees:
 *     ExFreePool @ 0x140255B30 (ExFreePool.c)
 *     ExpAllocateStringRoutine @ 0x1403F80BC (ExpAllocateStringRoutine.c)
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
