/*
 * XREFs of RtlUpcaseUnicodeString @ 0x1404D6BE0
 * Callers:
 *     RtlDeriveCapabilitySidsFromName @ 0x1401345C4 (RtlDeriveCapabilitySidsFromName.c)
 *     SdbMakeIndexKeyFromStringEx @ 0x1403B7A18 (SdbMakeIndexKeyFromStringEx.c)
 *     AslStringUpcaseToMultiByteN @ 0x1403B7C1C (AslStringUpcaseToMultiByteN.c)
 *     PiCMOpenClassKey @ 0x1404BE4F4 (PiCMOpenClassKey.c)
 *     PfSnLogVolumeCreate @ 0x1404D5BE0 (PfSnLogVolumeCreate.c)
 *     PfCalculateProcessHash @ 0x1404D6804 (PfCalculateProcessHash.c)
 *     PfSnLogStreamCreate @ 0x1404D6A0C (PfSnLogStreamCreate.c)
 *     IoReportDetectedDevice @ 0x140528D34 (IoReportDetectedDevice.c)
 *     PipMakeGloballyUniqueId @ 0x14053AE10 (PipMakeGloballyUniqueId.c)
 *     PiDevCfgResolveVariableGenerateGuid @ 0x14060C1C8 (PiDevCfgResolveVariableGenerateGuid.c)
 *     PiCMGenerateDeviceInstance @ 0x1406132A8 (PiCMGenerateDeviceInstance.c)
 *     ViCreateProcessCallbackInternal @ 0x1406C4FA4 (ViCreateProcessCallbackInternal.c)
 *     ViFaultsAddAppNoDuplicates @ 0x1406C51CC (ViFaultsAddAppNoDuplicates.c)
 *     VerifierRtlUpcaseUnicodeString @ 0x1406CF3C4 (VerifierRtlUpcaseUnicodeString.c)
 *     PipInitComputerIds @ 0x14074FA48 (PipInitComputerIds.c)
 * Callees:
 *     ExFreePool @ 0x140239B08 (ExFreePool.c)
 *     ExpAllocateStringRoutine @ 0x140447224 (ExpAllocateStringRoutine.c)
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
