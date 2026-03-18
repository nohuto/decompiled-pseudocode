/*
 * XREFs of OSCloseHandle @ 0x1C008D078
 * Callers:
 *     ACPIRootPowerCallBack @ 0x1C002A840 (ACPIRootPowerCallBack.c)
 *     AMLIAddNextNamespaceOverride @ 0x1C005B750 (AMLIAddNextNamespaceOverride.c)
 *     AMLIInitialize @ 0x1C00A6000 (AMLIInitialize.c)
 *     OSReadAcpiConfigurationData @ 0x1C00A749C (OSReadAcpiConfigurationData.c)
 *     ACPIRegDumpAcpiTable @ 0x1C00A777C (ACPIRegDumpAcpiTable.c)
 *     ACPIInitGetPlatformOverrides @ 0x1C00A7984 (ACPIInitGetPlatformOverrides.c)
 *     ACPIInitReadRegistryKeys @ 0x1C00A7D4C (ACPIInitReadRegistryKeys.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
NTSTATUS __stdcall OSCloseHandle(HANDLE Handle)
{
  return ZwClose(Handle);
}
