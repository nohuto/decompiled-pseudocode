/*
 * XREFs of RtlStringCbCopyNW @ 0x14011498C
 * Callers:
 *     PopDiagGetDriverName @ 0x140114954 (PopDiagGetDriverName.c)
 *     PiUEventSendDeviceInterfaceArrivalETWEvent @ 0x1404EA06C (PiUEventSendDeviceInterfaceArrivalETWEvent.c)
 *     IopCheckIfNotNativeDriver @ 0x1405F73EC (IopCheckIfNotNativeDriver.c)
 *     AuthzBasepCopyoutClaimAttributeValues @ 0x1406839CC (AuthzBasepCopyoutClaimAttributeValues.c)
 *     AuthzBasepCopyoutClaimAttributes @ 0x140683C20 (AuthzBasepCopyoutClaimAttributes.c)
 *     LocalConvertSidToStringSidW @ 0x140685258 (LocalConvertSidToStringSidW.c)
 * Callees:
 *     sub_140002B7C @ 0x140002B7C (sub_140002B7C.c)
 */

NTSTATUS __stdcall RtlStringCbCopyNW(NTSTRSAFE_PWSTR pszDest, size_t cbDest, STRSAFE_PCNZWCH pszSrc, size_t cbToCopy)
{
  size_t v4; // r10
  NTSTATUS v5; // edx
  size_t v6; // r9

  v4 = cbDest >> 1;
  v5 = 0;
  if ( v4 - 1 > 0x7FFFFFFE )
    v5 = -1073741811;
  if ( v5 >= 0 )
  {
    v6 = cbToCopy >> 1;
    if ( v6 > 0x7FFFFFFE )
    {
      v5 = -1073741811;
      *pszDest = 0;
    }
    else
    {
      return sub_140002B7C(pszDest, v4, (__int64)pszSrc, (__int64)pszSrc, v6);
    }
  }
  return v5;
}
