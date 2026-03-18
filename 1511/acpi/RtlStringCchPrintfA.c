/*
 * XREFs of RtlStringCchPrintfA @ 0x1C0003DE8
 * Callers:
 *     ACPIAmliDoubleToName @ 0x1C00038A8 (ACPIAmliDoubleToName.c)
 *     ACPIGetConvertToHardwareIDWide @ 0x1C0003B88 (ACPIGetConvertToHardwareIDWide.c)
 *     ACPICMButtonStartWorker @ 0x1C001AE80 (ACPICMButtonStartWorker.c)
 *     ACPIGetConvertToCompatibleIDWide @ 0x1C001DFC8 (ACPIGetConvertToCompatibleIDWide.c)
 *     ACPIGetConvertToPnpIDWide @ 0x1C001E3F4 (ACPIGetConvertToPnpIDWide.c)
 *     ACPIGetConvertToDeviceIDWide @ 0x1C001E568 (ACPIGetConvertToDeviceIDWide.c)
 *     ACPIGetConvertToInstanceIDWide @ 0x1C001E84C (ACPIGetConvertToInstanceIDWide.c)
 *     ACPIGetProcessorIDWide @ 0x1C001EC10 (ACPIGetProcessorIDWide.c)
 *     ACPIBuildProcessorExtension @ 0x1C00214D0 (ACPIBuildProcessorExtension.c)
 *     ACPIBuildDockExtension @ 0x1C00354AC (ACPIBuildDockExtension.c)
 *     ACPIGetConvertToStringWide @ 0x1C003BF84 (ACPIGetConvertToStringWide.c)
 *     ACPIGetConvertToStringWideWithPrepend @ 0x1C003C06C (ACPIGetConvertToStringWideWithPrepend.c)
 *     LogError @ 0x1C0043CD8 (LogError.c)
 *     ConvertToString @ 0x1C0049480 (ConvertToString.c)
 *     ACPIRegReadEntireAcpiTable @ 0x1C007CBF8 (ACPIRegReadEntireAcpiTable.c)
 *     ACPIRegReadEntireSimulatorAcpiTable @ 0x1C007CE08 (ACPIRegReadEntireSimulatorAcpiTable.c)
 *     OSOpenAMLINamespaceOverrideHandle @ 0x1C007CFB0 (OSOpenAMLINamespaceOverrideHandle.c)
 *     ACPIInitReadRegistryKeys @ 0x1C0085328 (ACPIInitReadRegistryKeys.c)
 *     ACPIRegDumpAcpiTable @ 0x1C00858D8 (ACPIRegDumpAcpiTable.c)
 * Callees:
 *     <none>
 */

NTSTATUS RtlStringCchPrintfA(NTSTRSAFE_PSTR pszDest, size_t cchDest, NTSTRSAFE_PCSTR pszFormat, ...)
{
  NTSTATUS v3; // edi
  size_t v5; // rbx
  int v6; // eax
  va_list Args; // [rsp+58h] [rbp+20h] BYREF

  va_start(Args, pszFormat);
  v3 = 0;
  if ( cchDest - 1 > 0x7FFFFFFE )
    v3 = -1073741811;
  if ( v3 < 0 )
  {
    if ( cchDest )
      *pszDest = 0;
  }
  else
  {
    v5 = cchDest - 1;
    v3 = 0;
    v6 = _vsnprintf(pszDest, cchDest - 1, pszFormat, Args);
    if ( v6 < 0 )
      goto LABEL_9;
    if ( v6 == v5 )
    {
      pszDest[v5] = 0;
      return v3;
    }
    if ( v6 > v5 )
    {
LABEL_9:
      pszDest[v5] = 0;
      return -2147483643;
    }
  }
  return v3;
}
