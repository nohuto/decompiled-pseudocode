/*
 * XREFs of OSOpenHandle @ 0x1C00658F8
 * Callers:
 *     ACPIRegReadAMLRegistryEntry @ 0x1C0065778 (ACPIRegReadAMLRegistryEntry.c)
 *     ACPIInitGlobalHeapSize @ 0x1C00665C0 (ACPIInitGlobalHeapSize.c)
 *     OSReadRegValue @ 0x1C0066670 (OSReadRegValue.c)
 *     ACPIRegGetTableFromSimulatorRegistryEntry @ 0x1C007C8B4 (ACPIRegGetTableFromSimulatorRegistryEntry.c)
 *     OSOpenAMLINamespaceOverrideHandle @ 0x1C007CDD0 (OSOpenAMLINamespaceOverrideHandle.c)
 *     OSOpenNextSubkey @ 0x1C007D09C (OSOpenNextSubkey.c)
 *     ACPIInitReadRegistryKeys @ 0x1C0085328 (ACPIInitReadRegistryKeys.c)
 *     ACPIInitGetPlatformOverrides @ 0x1C008552C (ACPIInitGetPlatformOverrides.c)
 * Callees:
 *     OSOpenUnicodeHandle @ 0x1C0065958 (OSOpenUnicodeHandle.c)
 */

NTSTATUS __fastcall OSOpenHandle(PCSZ SourceString, __int64 a2, __int64 a3)
{
  NTSTATUS result; // eax
  int v6; // ebx
  struct _UNICODE_STRING UnicodeString; // [rsp+20h] [rbp-28h] BYREF
  struct _STRING DestinationString; // [rsp+30h] [rbp-18h] BYREF

  RtlInitAnsiString(&DestinationString, SourceString);
  result = RtlAnsiStringToUnicodeString(&UnicodeString, &DestinationString, 1u);
  if ( result >= 0 )
  {
    v6 = OSOpenUnicodeHandle(&UnicodeString, a2, a3);
    RtlFreeUnicodeString(&UnicodeString);
    return v6;
  }
  return result;
}
