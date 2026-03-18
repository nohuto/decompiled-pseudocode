/*
 * XREFs of RtlStringCchPrintfW @ 0x1C0008CA0
 * Callers:
 *     Controller_PopulateDeviceFlagsFromKse @ 0x1C0008A30 (Controller_PopulateDeviceFlagsFromKse.c)
 *     Counter_CreateCommonBufferInstance @ 0x1C004A68C (Counter_CreateCommonBufferInstance.c)
 *     Counter_CreateInterrupterInstance @ 0x1C004A75C (Counter_CreateInterrupterInstance.c)
 *     Counter_CreateTransferRingInstance @ 0x1C0052968 (Counter_CreateTransferRingInstance.c)
 * Callees:
 *     <none>
 */

NTSTATUS RtlStringCchPrintfW(NTSTRSAFE_PWSTR pszDest, size_t cchDest, NTSTRSAFE_PCWSTR pszFormat, ...)
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
    v7 = _vsnwprintf(pszDest, cchDest - 1, pszFormat, Args);
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
