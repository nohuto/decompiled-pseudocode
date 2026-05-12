/*
 * XREFs of RtlStringCbPrintfW @ 0x1C000D9D8
 * Callers:
 *     RaUnitScsiGetDumpPointersIoctl @ 0x1C000B640 (RaUnitScsiGetDumpPointersIoctl.c)
 *     PortMapDeleteAdapterEntry @ 0x1C003AB30 (PortMapDeleteAdapterEntry.c)
 *     PortMapDeleteLunEntry @ 0x1C003AC04 (PortMapDeleteLunEntry.c)
 *     PortOpenDeviceKey @ 0x1C004DAD4 (PortOpenDeviceKey.c)
 * Callees:
 *     RtlStringVPrintfWorkerW @ 0x1C000DD9C (RtlStringVPrintfWorkerW.c)
 */

NTSTATUS RtlStringCbPrintfW(NTSTRSAFE_PWSTR pszDest, size_t cbDest, NTSTRSAFE_PCWSTR pszFormat, ...)
{
  size_t v3; // rdx
  NTSTATUS v4; // r9d
  va_list va; // [rsp+58h] [rbp+20h] BYREF

  va_start(va, pszFormat);
  v3 = cbDest >> 1;
  v4 = 0;
  if ( v3 - 1 > 0x7FFFFFFE )
    v4 = -1073741811;
  if ( v4 >= 0 )
    return RtlStringVPrintfWorkerW(pszDest, v3, 0LL, pszFormat, va);
  if ( v3 )
    *pszDest = 0;
  return v4;
}
