/*
 * XREFs of ?GetValue@RegistryKey@Common@@QEAAJPEBGPEAXPEAK2@Z @ 0x180027B3C
 * Callers:
 *     ?GetTierInfo@Internal@ExecutionModel@@YA_NAEAVRegistryKey@Common@@IAEAVStringBuffer@4@PEAK2@Z @ 0x1800260A0 (-GetTierInfo@Internal@ExecutionModel@@YA_NAEAVRegistryKey@Common@@IAEAVStringBuffer@4@PEAK2@Z.c)
 *     ?GetGameProperty@GameConfigStoreServer@ExecutionModel@@UEBAJU_GUID@@W4GameProperty_t@2@PEAEPEAI@Z @ 0x180049430 (-GetGameProperty@GameConfigStoreServer@ExecutionModel@@UEBAJU_GUID@@W4GameProperty_t@2@PEAEPEAI@.c)
 *     ?GetMultiStringValue@RegistryKey@Common@@QEAAJPEBGPEAGPEAK@Z @ 0x180049720 (-GetMultiStringValue@RegistryKey@Common@@QEAAJPEBGPEAGPEAK@Z.c)
 *     ?GetValue@RegistryKey@Common@@QEAAJPEBG_KAEAVByteBuffer@2@PEAK@Z @ 0x180049E80 (-GetValue@RegistryKey@Common@@QEAAJPEBG_KAEAVByteBuffer@2@PEAK@Z.c)
 *     ?SetGameProperty@GameConfigStoreServer@ExecutionModel@@UEAAJU_GUID@@W4GameProperty_t@2@PEAEI@Z @ 0x18004AF90 (-SetGameProperty@GameConfigStoreServer@ExecutionModel@@UEAAJU_GUID@@W4GameProperty_t@2@PEAEI@Z.c)
 * Callees:
 *     <none>
 */

LSTATUS __fastcall Common::RegistryKey::GetValue(
        HKEY *this,
        const unsigned __int16 *a2,
        BYTE *lpData,
        unsigned int *lpcbData,
        unsigned int *lpType)
{
  LSTATUS result; // eax

  result = RegQueryValueExW(*this, a2, 0LL, lpType, lpData, lpcbData);
  if ( result > 0 )
    return (unsigned __int16)result | 0x80070000;
  return result;
}
