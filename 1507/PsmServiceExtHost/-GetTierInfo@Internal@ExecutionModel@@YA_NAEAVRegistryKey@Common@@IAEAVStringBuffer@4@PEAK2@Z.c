/*
 * XREFs of ?GetTierInfo@Internal@ExecutionModel@@YA_NAEAVRegistryKey@Common@@IAEAVStringBuffer@4@PEAK2@Z @ 0x180022204
 * Callers:
 *     ?RpsGetDeviceTierName@@YAJPEAGPEAI@Z @ 0x180022070 (-RpsGetDeviceTierName@@YAJPEAGPEAI@Z.c)
 * Callees:
 *     ?GetValue@RegistryKey@Common@@QEAAJPEBGPEAXPEAK2@Z @ 0x18001C3A4 (-GetValue@RegistryKey@Common@@QEAAJPEBGPEAXPEAK2@Z.c)
 *     ?GetUInt32Value@RegistryKey@Common@@QEAAJPEBGPEAI@Z @ 0x18001C5D0 (-GetUInt32Value@RegistryKey@Common@@QEAAJPEBGPEAI@Z.c)
 */

bool __fastcall ExecutionModel::Internal::GetTierInfo(
        HKEY *this,
        struct Common::RegistryKey *a2,
        __int64 a3,
        DWORD *a4,
        unsigned int *a5)
{
  bool result; // al
  unsigned int v9; // [rsp+50h] [rbp+8h] BYREF

  result = 0;
  if ( !RegEnumValueW(*this, (DWORD)a2, *(LPWSTR *)(a3 + 8), a4, 0LL, 0LL, 0LL, 0LL) )
  {
    ++*a4;
    if ( Common::RegistryKey::GetValue(this, *(const unsigned __int16 **)(a3 + 8), 0LL, 0LL, &v9) >= 0
      && v9 == 4
      && Common::RegistryKey::GetUInt32Value(this, *(const unsigned __int16 **)(a3 + 8), (BYTE *)a5) >= 0 )
    {
      return 1;
    }
  }
  return result;
}
