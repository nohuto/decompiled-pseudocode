/*
 * XREFs of RtlStringCchPrintfA @ 0x1C0001008
 * Callers:
 *     HUBMUX_CreatePSM @ 0x1C000CA2C (HUBMUX_CreatePSM.c)
 *     HUBMISC_ConvertUsbDeviceIdsToString @ 0x1C002A908 (HUBMISC_ConvertUsbDeviceIdsToString.c)
 *     WER_CreateReport @ 0x1C0033910 (WER_CreateReport.c)
 *     HUBFDO_EvtDeviceAdd @ 0x1C00661A0 (HUBFDO_EvtDeviceAdd.c)
 *     HUBFDO_QueryHubErrataFlags @ 0x1C0069FFC (HUBFDO_QueryHubErrataFlags.c)
 *     DriverEntry @ 0x1C0077010 (DriverEntry.c)
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
    if ( v6 < 0 || v6 > v5 )
    {
      pszDest[v5] = 0;
      return -2147483643;
    }
    else if ( v6 == v5 )
    {
      pszDest[v5] = 0;
    }
  }
  return v3;
}
