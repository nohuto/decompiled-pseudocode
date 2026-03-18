/*
 * XREFs of OSOpenHandle @ 0x1C0080C4C
 * Callers:
 *     ACPIRegReadAMLRegistryEntry @ 0x1C0080CBC (ACPIRegReadAMLRegistryEntry.c)
 *     ACPIThermalGetOverrideHandle @ 0x1C00828C0 (ACPIThermalGetOverrideHandle.c)
 *     ACPIInitGlobalHeapSize @ 0x1C008D3F4 (ACPIInitGlobalHeapSize.c)
 *     OSReadRegValue @ 0x1C008D4A4 (OSReadRegValue.c)
 *     ACPIRegGetTableFromSimulatorRegistryEntry @ 0x1C009DEA4 (ACPIRegGetTableFromSimulatorRegistryEntry.c)
 *     OSOpenAMLINamespaceOverrideHandle @ 0x1C009E498 (OSOpenAMLINamespaceOverrideHandle.c)
 *     OSOpenNextSubkey @ 0x1C009E764 (OSOpenNextSubkey.c)
 *     ACPIInitGetPlatformOverrides @ 0x1C00A7984 (ACPIInitGetPlatformOverrides.c)
 *     ACPIInitReadRegistryKeys @ 0x1C00A7D4C (ACPIInitReadRegistryKeys.c)
 * Callees:
 *     WPP_RECORDER_SF_D @ 0x1C0004BB0 (WPP_RECORDER_SF_D.c)
 *     OSOpenUnicodeHandle @ 0x1C0080BA8 (OSOpenUnicodeHandle.c)
 */

__int64 __fastcall OSOpenHandle(PCSZ SourceString, void *a2, void **a3)
{
  NTSTATUS v5; // eax
  int v6; // edx
  unsigned int v7; // ebx
  struct _UNICODE_STRING UnicodeString; // [rsp+30h] [rbp-28h] BYREF
  struct _STRING DestinationString; // [rsp+40h] [rbp-18h] BYREF

  RtlInitAnsiString(&DestinationString, SourceString);
  v5 = RtlAnsiStringToUnicodeString(&UnicodeString, &DestinationString, 1u);
  v7 = v5;
  if ( v5 < 0 )
  {
    LOBYTE(v6) = 2;
    WPP_RECORDER_SF_D(
      WPP_GLOBAL_Control->DeviceExtension,
      v6,
      22,
      12,
      (__int64)&WPP_b2e6fc51b6d13b437f43e726d6037dce_Traceguids,
      v5);
  }
  else
  {
    v7 = OSOpenUnicodeHandle(&UnicodeString, a2, a3);
    RtlFreeUnicodeString(&UnicodeString);
  }
  return v7;
}
