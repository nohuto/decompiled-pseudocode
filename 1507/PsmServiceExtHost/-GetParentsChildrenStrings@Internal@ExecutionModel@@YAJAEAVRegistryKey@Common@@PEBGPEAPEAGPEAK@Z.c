/*
 * XREFs of ?GetParentsChildrenStrings@Internal@ExecutionModel@@YAJAEAVRegistryKey@Common@@PEBGPEAPEAGPEAK@Z @ 0x180007ADC
 * Callers:
 *     ?GetGameIdsForParent@Internal@ExecutionModel@@YAJAEAVRegistryKey@Common@@PEBGPEAU_GUID@@PEAI@Z @ 0x180002AF8 (-GetGameIdsForParent@Internal@ExecutionModel@@YAJAEAVRegistryKey@Common@@PEBGPEAU_GUID@@PEAI@Z.c)
 *     ?GetWin32GameIdFromPID@GameConfigStoreServer@ExecutionModel@@AEBAJKPEAU_GUID@@@Z @ 0x180007CA0 (-GetWin32GameIdFromPID@GameConfigStoreServer@ExecutionModel@@AEBAJKPEAU_GUID@@@Z.c)
 *     ?MatchChildInPermanentStore@Internal@ExecutionModel@@YAJAEAVRegistryKey@Common@@0PEBUGameConfig@2@PEA_NPEAU_GUID@@2@Z @ 0x18001B5B0 (-MatchChildInPermanentStore@Internal@ExecutionModel@@YAJAEAVRegistryKey@Common@@0PEBUGameConfig@.c)
 *     ?ModifyGameConfig@GameConfigStoreServer@ExecutionModel@@UEBAJU_GUID@@PEBUGameConfig@2@@Z @ 0x180044D60 (-ModifyGameConfig@GameConfigStoreServer@ExecutionModel@@UEBAJU_GUID@@PEBUGameConfig@2@@Z.c)
 *     ?RemoveFromPermanentStore@Internal@ExecutionModel@@YAJPEBGAEAVRegistryKey@Common@@10@Z @ 0x180045018 (-RemoveFromPermanentStore@Internal@ExecutionModel@@YAJPEBGAEAVRegistryKey@Common@@10@Z.c)
 * Callees:
 *     ?GetMultiStringValue@RegistryKey@Common@@QEAAJPEBGPEAGPEAK@Z @ 0x18001C2EC (-GetMultiStringValue@RegistryKey@Common@@QEAAJPEBGPEAGPEAK@Z.c)
 *     ??3@YAXPEAX@Z @ 0x180023DC0 (--3@YAXPEAX@Z.c)
 *     ??_U@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180024DA4 (--_U@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 */

__int64 __fastcall ExecutionModel::Internal::GetParentsChildrenStrings(
        HKEY *this,
        const WCHAR *a2,
        unsigned __int16 *a3,
        unsigned __int16 **a4)
{
  HKEY v4; // rcx
  LSTATUS v7; // eax
  const unsigned __int16 *v8; // rdx
  signed int MultiStringValue; // edi
  __int64 v11; // rdi
  unsigned __int64 v12; // rax
  unsigned __int16 *v13; // rax
  const unsigned __int16 *v14; // rdx
  unsigned __int16 *v15; // rbx
  unsigned __int16 *v16; // rax
  unsigned int v17; // [rsp+30h] [rbp-18h] BYREF
  HKEY hKey[2]; // [rsp+38h] [rbp-10h] BYREF

  v4 = *this;
  v17 = 0;
  hKey[0] = 0LL;
  v7 = RegOpenKeyExW(v4, a2, 0, 0x20019u, hKey);
  MultiStringValue = v7;
  if ( v7 > 0 )
    MultiStringValue = (unsigned __int16)v7 | 0x80070000;
  if ( MultiStringValue >= 0 )
  {
    MultiStringValue = Common::RegistryKey::GetMultiStringValue((Common::RegistryKey *)hKey, v8, 0LL, &v17);
    if ( MultiStringValue >= 0 )
    {
      v11 = v17;
      v12 = 2LL * (v17 + 1);
      if ( !is_mul_ok(v17 + 1, 2uLL) )
        v12 = -1LL;
      v13 = (unsigned __int16 *)operator new[](v12, (const struct std::nothrow_t *)&std::nothrow);
      v15 = v13;
      if ( v13 )
      {
        v13[v11] = 0;
        MultiStringValue = Common::RegistryKey::GetMultiStringValue((Common::RegistryKey *)hKey, v14, v13, &v17);
        if ( MultiStringValue >= 0 )
        {
          v16 = v15;
          v15 = 0LL;
          *(_QWORD *)a3 = v16;
          if ( a4 )
            *(_DWORD *)a4 = v17;
        }
      }
      else
      {
        MultiStringValue = -2147024882;
      }
      operator delete(v15);
    }
  }
  if ( (unsigned __int64)hKey[0] - 1 <= 0xFFFFFFFFFFFFFFFDuLL )
    RegCloseKey(hKey[0]);
  return (unsigned int)MultiStringValue;
}
