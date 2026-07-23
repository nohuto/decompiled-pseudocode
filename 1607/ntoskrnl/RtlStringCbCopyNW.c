/*
 * XREFs of RtlStringCbCopyNW @ 0x1401239E0
 * Callers:
 *     PopDiagGetDriverName @ 0x1401239A8 (PopDiagGetDriverName.c)
 *     PiUEventSendDeviceInterfaceArrivalETWEvent @ 0x1404CEFD8 (PiUEventSendDeviceInterfaceArrivalETWEvent.c)
 *     IopCheckIfNotNativeDriver @ 0x1406211A8 (IopCheckIfNotNativeDriver.c)
 *     AuthzBasepCopyoutClaimAttributeValues @ 0x1406C9E50 (AuthzBasepCopyoutClaimAttributeValues.c)
 *     AuthzBasepCopyoutClaimAttributes @ 0x1406CA0A4 (AuthzBasepCopyoutClaimAttributes.c)
 *     LocalConvertSidToStringSidW @ 0x1406CB54C (LocalConvertSidToStringSidW.c)
 * Callees:
 *     RtlStringCopyWorkerW_3 @ 0x14010B2B8 (RtlStringCopyWorkerW_3.c)
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
      return RtlStringCopyWorkerW_3(pszDest, v4, (size_t *)pszSrc, pszSrc, cchToCopy);
    }
  }
  return v5;
}
