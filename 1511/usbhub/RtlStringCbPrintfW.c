/*
 * XREFs of RtlStringCbPrintfW @ 0x1C0008850
 * Callers:
 *     UsbhGetRegUsbClassFlags @ 0x1C000684C (UsbhGetRegUsbClassFlags.c)
 *     UsbhRegQueryGlobalLegacyDeviceKeys @ 0x1C0006AFC (UsbhRegQueryGlobalLegacyDeviceKeys.c)
 *     UsbhGetDeviceFlags @ 0x1C0008734 (UsbhGetDeviceFlags.c)
 *     UsbhPdo_ReportPnPFailureProblem @ 0x1C0054A28 (UsbhPdo_ReportPnPFailureProblem.c)
 *     UsbhBuildUxdDeviceKey @ 0x1C0056604 (UsbhBuildUxdDeviceKey.c)
 *     UsbhDeleteUxdPortSettings @ 0x1C0056820 (UsbhDeleteUxdPortSettings.c)
 *     UsbhGetUxdPortKey @ 0x1C0056E94 (UsbhGetUxdPortKey.c)
 *     UsbhPropagateUxdState @ 0x1C0057048 (UsbhPropagateUxdState.c)
 * Callees:
 *     <none>
 */

NTSTATUS RtlStringCbPrintfW(NTSTRSAFE_PWSTR pszDest, size_t cbDest, NTSTRSAFE_PCWSTR pszFormat, ...)
{
  size_t v3; // rdx
  NTSTATUS v4; // edi
  NTSTATUS v6; // r9d
  unsigned __int64 v7; // rbx
  int v8; // eax
  NTSTATUS result; // eax
  va_list Args; // [rsp+58h] [rbp+20h] BYREF

  va_start(Args, pszFormat);
  v3 = cbDest >> 1;
  v4 = 0;
  v6 = 0;
  if ( v3 - 1 > 0x7FFFFFFE )
    v6 = -1073741811;
  if ( v6 < 0 )
  {
    result = v6;
    if ( v3 )
      *pszDest = 0;
  }
  else
  {
    v7 = v3 - 1;
    v8 = _vsnwprintf(pszDest, v3 - 1, pszFormat, Args);
    if ( v8 < 0 )
      goto LABEL_10;
    if ( v8 == v7 )
    {
      pszDest[v7] = 0;
      return 0;
    }
    if ( v8 > v7 )
    {
LABEL_10:
      pszDest[v7] = 0;
      return -2147483643;
    }
    return v4;
  }
  return result;
}
