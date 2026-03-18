/*
 * XREFs of RtlStringCchPrintfA @ 0x1C000397C
 * Callers:
 *     ACPIAmliDoubleToName @ 0x1C0001030 (ACPIAmliDoubleToName.c)
 *     ACPIGetConvertToHardwareIDWide @ 0x1C0003718 (ACPIGetConvertToHardwareIDWide.c)
 *     ACPICMButtonStartWorker @ 0x1C000A7E0 (ACPICMButtonStartWorker.c)
 *     ACPIBuildProcessorExtension @ 0x1C000AFE0 (ACPIBuildProcessorExtension.c)
 *     ACPIGetConvertToCompatibleIDWide @ 0x1C00236A4 (ACPIGetConvertToCompatibleIDWide.c)
 *     ACPIGetConvertToPnpIDWide @ 0x1C0023AD0 (ACPIGetConvertToPnpIDWide.c)
 *     ACPIGetConvertToDeviceIDWide @ 0x1C0023C48 (ACPIGetConvertToDeviceIDWide.c)
 *     ACPIGetConvertToInstanceIDWide @ 0x1C0023F30 (ACPIGetConvertToInstanceIDWide.c)
 *     ACPIGetProcessorIDWide @ 0x1C00242F8 (ACPIGetProcessorIDWide.c)
 *     LogError @ 0x1C00258B8 (LogError.c)
 *     ACPIBuildDockExtension @ 0x1C0043F14 (ACPIBuildDockExtension.c)
 *     ACPIGetConvertToStringWide @ 0x1C004EEF4 (ACPIGetConvertToStringWide.c)
 *     ACPIGetConvertToStringWideWithPrepend @ 0x1C004EFDC (ACPIGetConvertToStringWideWithPrepend.c)
 *     ConvertToString @ 0x1C0060F58 (ConvertToString.c)
 *     ACPIRegReadEntireAcpiTable @ 0x1C009E090 (ACPIRegReadEntireAcpiTable.c)
 *     ACPIRegReadEntireSimulatorAcpiTable @ 0x1C009E2CC (ACPIRegReadEntireSimulatorAcpiTable.c)
 *     OSOpenAMLINamespaceOverrideHandle @ 0x1C009E498 (OSOpenAMLINamespaceOverrideHandle.c)
 *     ACPIRegDumpAcpiTable @ 0x1C00A777C (ACPIRegDumpAcpiTable.c)
 *     ACPIInitReadRegistryKeys @ 0x1C00A7D4C (ACPIInitReadRegistryKeys.c)
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
