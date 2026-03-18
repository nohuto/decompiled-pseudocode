/*
 * XREFs of MiFlushEntireTbDueToAttributeChange @ 0x14001DD98
 * Callers:
 *     MiChangePageAttribute @ 0x14001D088 (MiChangePageAttribute.c)
 *     MiChangePageAttributeBatch @ 0x14001D640 (MiChangePageAttributeBatch.c)
 *     MiValidateInPage @ 0x1400267B0 (MiValidateInPage.c)
 *     MiCopyPage @ 0x1400E3260 (MiCopyPage.c)
 *     MiCombiningInProgress @ 0x1401F8634 (MiCombiningInProgress.c)
 *     MiValidateSectionCreate @ 0x140526D8C (MiValidateSectionCreate.c)
 *     MiRemovePhysicalMemory @ 0x1406581C0 (MiRemovePhysicalMemory.c)
 *     MiInitializeCacheFlushing @ 0x1407A64D8 (MiInitializeCacheFlushing.c)
 * Callees:
 *     KeFlushTb @ 0x14001DDEC (KeFlushTb.c)
 *     VslpEnterIumSecureMode @ 0x1400AA174 (VslpEnterIumSecureMode.c)
 *     __security_check_cookie @ 0x14014CA50 (__security_check_cookie.c)
 */

__int64 __fastcall MiFlushEntireTbDueToAttributeChange(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  _BYTE v5[112]; // [rsp+20h] [rbp-88h] BYREF

  ++dword_140326A08;
  if ( VslVsmEnabled )
  {
    LOBYTE(a1) = 2;
    VslpEnterIumSecureMode(a1, 0LL, 0LL, v5);
  }
  return KeFlushTb(3LL, 2LL, a3, a4);
}
