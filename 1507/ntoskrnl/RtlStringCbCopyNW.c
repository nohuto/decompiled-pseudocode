/*
 * XREFs of RtlStringCbCopyNW @ 0x14014A260
 * Callers:
 *     PopDiagGetDriverName @ 0x14014A228 (PopDiagGetDriverName.c)
 *     PiUEventSendDeviceInterfaceArrivalETWEvent @ 0x1404612A4 (PiUEventSendDeviceInterfaceArrivalETWEvent.c)
 *     IopCheckIfNotNativeDriver @ 0x1406711E4 (IopCheckIfNotNativeDriver.c)
 *     AuthzBasepCopyoutClaimAttributeValues @ 0x140708670 (AuthzBasepCopyoutClaimAttributeValues.c)
 *     AuthzBasepCopyoutClaimAttributes @ 0x1407088C4 (AuthzBasepCopyoutClaimAttributes.c)
 *     LocalConvertSidToStringSidW @ 0x140709DE4 (LocalConvertSidToStringSidW.c)
 * Callees:
 *     sub_1401548D8 @ 0x1401548D8 (sub_1401548D8.c)
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
      return sub_1401548D8((_DWORD)pszDest, v4, (_DWORD)pszSrc, (_DWORD)pszSrc, v6);
    }
  }
  return v5;
}
