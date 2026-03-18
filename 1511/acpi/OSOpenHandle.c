/*
 * XREFs of OSOpenHandle @ 0x1C006592C
 * Callers:
 *     ACPIRegReadAMLRegistryEntry @ 0x1C006598C (ACPIRegReadAMLRegistryEntry.c)
 *     ACPIInitGlobalHeapSize @ 0x1C006625C (ACPIInitGlobalHeapSize.c)
 *     OSReadRegValue @ 0x1C006630C (OSReadRegValue.c)
 *     ACPIThermalGetOverrideHandle @ 0x1C006D228 (ACPIThermalGetOverrideHandle.c)
 *     ACPIRegGetTableFromSimulatorRegistryEntry @ 0x1C007CA94 (ACPIRegGetTableFromSimulatorRegistryEntry.c)
 *     OSOpenAMLINamespaceOverrideHandle @ 0x1C007CFB0 (OSOpenAMLINamespaceOverrideHandle.c)
 *     OSOpenNextSubkey @ 0x1C007D27C (OSOpenNextSubkey.c)
 *     ACPIInitReadRegistryKeys @ 0x1C0085328 (ACPIInitReadRegistryKeys.c)
 *     ACPIInitGetPlatformOverrides @ 0x1C008552C (ACPIInitGetPlatformOverrides.c)
 * Callees:
 *     OSOpenUnicodeHandle @ 0x1C00658BC (OSOpenUnicodeHandle.c)
 */

NTSTATUS __fastcall OSOpenHandle(PCSZ SourceString, void *a2, void **a3)
{
  NTSTATUS result; // eax
  NTSTATUS v6; // ebx
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
