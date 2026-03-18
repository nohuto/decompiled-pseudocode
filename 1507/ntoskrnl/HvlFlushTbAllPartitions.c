/*
 * XREFs of HvlFlushTbAllPartitions @ 0x1400E6968
 * Callers:
 *     MiCopyPage @ 0x140058ED0 (MiCopyPage.c)
 *     MiValidateInPage @ 0x140087A20 (MiValidateInPage.c)
 *     MiChangePageAttribute @ 0x1400E5678 (MiChangePageAttribute.c)
 *     MiChangePageAttributeBatch @ 0x1400E57F0 (MiChangePageAttributeBatch.c)
 *     MiCombiningInProgress @ 0x1402282C0 (MiCombiningInProgress.c)
 *     MiValidateSectionCreate @ 0x14051B38C (MiValidateSectionCreate.c)
 *     MiRemovePhysicalMemory @ 0x1406A1FE8 (MiRemovePhysicalMemory.c)
 *     MiInitializeCacheFlushing @ 0x1407C8714 (MiInitializeCacheFlushing.c)
 * Callees:
 *     HvlpEnterIumSecureMode @ 0x1401289D4 (HvlpEnterIumSecureMode.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
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
