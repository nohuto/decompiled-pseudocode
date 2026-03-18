/*
 * XREFs of RtlStringCbCopyNW @ 0x140123470
 * Callers:
 *     PopDiagGetDriverName @ 0x140123438 (PopDiagGetDriverName.c)
 *     PiUEventSendDeviceInterfaceArrivalETWEvent @ 0x1404ECE6C (PiUEventSendDeviceInterfaceArrivalETWEvent.c)
 *     IopCheckIfNotNativeDriver @ 0x1406210F4 (IopCheckIfNotNativeDriver.c)
 *     AuthzBasepCopyoutClaimAttributeValues @ 0x1406C9D18 (AuthzBasepCopyoutClaimAttributeValues.c)
 *     AuthzBasepCopyoutClaimAttributes @ 0x1406C9F6C (AuthzBasepCopyoutClaimAttributes.c)
 *     LocalConvertSidToStringSidW @ 0x1406CB414 (LocalConvertSidToStringSidW.c)
 * Callees:
 *     RtlStringCopyWorkerW @ 0x140085004 (RtlStringCopyWorkerW.c)
 */

NTSTATUS __stdcall RtlStringCbCopyNW(NTSTRSAFE_PWSTR pszDest, size_t cbDest, STRSAFE_PCNZWCH pszSrc, size_t cbToCopy)
{
  size_t v4; // r10
  NTSTATUS v5; // edx
  size_t cchToCopy; // r9

  v4 = cbDest >> 1;
  v5 = 0;
  if ( v4 - 1 > 0x7FFFFFFE )
    v5 = -1073741811;
  if ( v5 >= 0 )
  {
    cchToCopy = cbToCopy >> 1;
    if ( cchToCopy > 0x7FFFFFFE )
    {
      v5 = -1073741811;
      *pszDest = 0;
    }
    else
    {
      return RtlStringCopyWorkerW(pszDest, v4, (size_t *)pszSrc, pszSrc, cchToCopy);
    }
  }
  return v5;
}
