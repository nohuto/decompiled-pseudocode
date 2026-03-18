/*
 * XREFs of RtlStringCchPrintfA @ 0x1C00052B0
 * Callers:
 *     Controller_TelemetryReport @ 0x1C0015B70 (Controller_TelemetryReport.c)
 *     Endpoint_Enable @ 0x1C0017910 (Endpoint_Enable.c)
 *     Endpoint_SetLogIdentifier @ 0x1C001A4A8 (Endpoint_SetLogIdentifier.c)
 *     Command_PrepareHardware @ 0x1C004816C (Command_PrepareHardware.c)
 *     Controller_SetLogIdentifier @ 0x1C00482D8 (Controller_SetLogIdentifier.c)
 *     Interrupter_PrepareInterrupter @ 0x1C00484F0 (Interrupter_PrepareInterrupter.c)
 *     Controller_Create @ 0x1C004A8A0 (Controller_Create.c)
 *     Controller_PopulateAcpiDeviceInformation @ 0x1C004E4DC (Controller_PopulateAcpiDeviceInformation.c)
 * Callees:
 *     <none>
 */

NTSTATUS RtlStringCchPrintfA(NTSTRSAFE_PSTR pszDest, size_t cchDest, NTSTRSAFE_PCSTR pszFormat, ...)
{
  NTSTATUS v3; // edi
  NTSTATUS v5; // r9d
  size_t v6; // rbx
  int v7; // eax
  NTSTATUS result; // eax
  va_list Args; // [rsp+58h] [rbp+20h] BYREF

  va_start(Args, pszFormat);
  v3 = 0;
  v5 = 0;
  if ( cchDest - 1 > 0x7FFFFFFE )
    v5 = -1073741811;
  if ( v5 < 0 )
  {
    result = v5;
    if ( cchDest )
      *pszDest = 0;
  }
  else
  {
    v6 = cchDest - 1;
    v7 = _vsnprintf(pszDest, cchDest - 1, pszFormat, Args);
    if ( v7 < 0 || v7 > v6 )
    {
      pszDest[v6] = 0;
      return -2147483643;
    }
    else if ( v7 == v6 )
    {
      pszDest[v6] = 0;
    }
    return v3;
  }
  return result;
}
