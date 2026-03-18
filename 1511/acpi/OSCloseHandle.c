/*
 * XREFs of OSCloseHandle @ 0x1C006665C
 * Callers:
 *     sub_1C0033602 @ 0x1C0033602 (sub_1C0033602.c)
 *     AMLIAddNextNamespaceOverride @ 0x1C0043FB8 (AMLIAddNextNamespaceOverride.c)
 *     AMLIInitialize @ 0x1C0084CC0 (AMLIInitialize.c)
 *     ACPIInitReadRegistryKeys @ 0x1C0085328 (ACPIInitReadRegistryKeys.c)
 *     ACPIInitGetPlatformOverrides @ 0x1C008552C (ACPIInitGetPlatformOverrides.c)
 *     OSReadAcpiConfigurationData @ 0x1C0085630 (OSReadAcpiConfigurationData.c)
 *     ACPIRegDumpAcpiTable @ 0x1C00858D8 (ACPIRegDumpAcpiTable.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
NTSTATUS __stdcall OSCloseHandle(HANDLE Handle)
{
  return ZwClose(Handle);
}
