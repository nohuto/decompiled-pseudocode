/*
 * XREFs of MiFlushEntireTbDueToAttributeChange @ 0x14001D918
 * Callers:
 *     MiChangePageAttribute @ 0x14001CC08 (MiChangePageAttribute.c)
 *     MiChangePageAttributeBatch @ 0x14001D1C0 (MiChangePageAttributeBatch.c)
 *     MiValidateInPage @ 0x140026330 (MiValidateInPage.c)
 *     MiCopyPage @ 0x1400E1100 (MiCopyPage.c)
 *     MiCombiningInProgress @ 0x1401F8460 (MiCombiningInProgress.c)
 *     MiValidateSectionCreate @ 0x140509DEC (MiValidateSectionCreate.c)
 *     MiRemovePhysicalMemory @ 0x1406582A4 (MiRemovePhysicalMemory.c)
 *     MiInitializeCacheFlushing @ 0x1407A64D8 (MiInitializeCacheFlushing.c)
 * Callees:
 *     KeFlushTb @ 0x14001D96C (KeFlushTb.c)
 *     VslpEnterIumSecureMode @ 0x1400A86F4 (VslpEnterIumSecureMode.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 */

__int64 __fastcall MiFlushEntireTbDueToAttributeChange(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  _BYTE v5[112]; // [rsp+20h] [rbp-88h] BYREF

  ++dword_140326A48;
  if ( VslVsmEnabled )
  {
    LOBYTE(a1) = 2;
    VslpEnterIumSecureMode(a1, 0LL, 0LL, v5);
  }
  return KeFlushTb(3LL, 2LL, a3, a4);
}
