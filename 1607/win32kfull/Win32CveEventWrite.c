/*
 * XREFs of Win32CveEventWrite @ 0x1C02DC5DC
 * Callers:
 *     cjComputeGLYPHSET_HIGH_BYTE @ 0x1C02417A8 (cjComputeGLYPHSET_HIGH_BYTE.c)
 * Callees:
 *     <none>
 */

NTSTATUS Win32CveEventWrite()
{
  struct _UNICODE_STRING DestinationString; // [rsp+20h] [rbp-18h] BYREF

  RtlInitUnicodeString(&DestinationString, L"CVE-2016-3393");
  return SeEtwWriteKMCveEvent(&DestinationString, 0LL);
}
