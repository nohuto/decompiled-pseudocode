/*
 * XREFs of HvlFlushTbAllPartitions @ 0x1400E8120
 * Callers:
 *     MiValidateInPage @ 0x1400390F0 (MiValidateInPage.c)
 *     MiCopyPage @ 0x1400701E0 (MiCopyPage.c)
 *     MiChangePageAttributeBatch @ 0x1400A9630 (MiChangePageAttributeBatch.c)
 *     MiChangePageAttribute @ 0x1400AA634 (MiChangePageAttribute.c)
 *     MiCombiningInProgress @ 0x140127954 (MiCombiningInProgress.c)
 *     MiValidateSectionCreate @ 0x1404AEAF4 (MiValidateSectionCreate.c)
 *     MiRemovePhysicalMemory @ 0x140622D58 (MiRemovePhysicalMemory.c)
 *     MiInitializeCacheFlushing @ 0x14074DBEC (MiInitializeCacheFlushing.c)
 * Callees:
 *     HvlpEnterIumSecureMode @ 0x1400EB69C (HvlpEnterIumSecureMode.c)
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 */

__int64 __fastcall HvlFlushTbAllPartitions(__int64 a1)
{
  __int64 result; // rax
  _BYTE v2[112]; // [rsp+20h] [rbp-88h] BYREF

  if ( (HvlpFlags & 0x2000) != 0 )
  {
    LOBYTE(a1) = 2;
    return HvlpEnterIumSecureMode(a1, 0LL, 0LL, v2);
  }
  return result;
}
