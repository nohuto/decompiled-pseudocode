/*
 * XREFs of ?StringCchLengthW@@YAJPEBG_KPEA_K@Z @ 0x180006D50
 * Callers:
 *     ?GetProcessImageInfoByPID@Common@@YAJKPEAGPEAK01@Z @ 0x180006B68 (-GetProcessImageInfoByPID@Common@@YAJKPEAGPEAK01@Z.c)
 *     ?GetGameConfigStoreServer@Internal@ExecutionModel@@YAJPEBGPEAPEAVGameConfigStoreServer@2@@Z @ 0x18001C0CC (-GetGameConfigStoreServer@Internal@ExecutionModel@@YAJPEBGPEAPEAVGameConfigStoreServer@2@@Z.c)
 *     ?GetWin32GameIdFromPID@GameConfigStoreServer@ExecutionModel@@AEBAJKPEAU_GUID@@@Z @ 0x18001C610 (-GetWin32GameIdFromPID@GameConfigStoreServer@ExecutionModel@@AEBAJKPEAU_GUID@@@Z.c)
 *     ?GetGameIdsForParent@Internal@ExecutionModel@@YAJAEAVRegistryKey@Common@@PEBGPEAU_GUID@@PEAI@Z @ 0x18001CF08 (-GetGameIdsForParent@Internal@ExecutionModel@@YAJAEAVRegistryKey@Common@@PEBGPEAU_GUID@@PEAI@Z.c)
 *     ?SetValueFromString@StringBuffer@Common@@QEAAJPEBG@Z @ 0x180027F84 (-SetValueFromString@StringBuffer@Common@@QEAAJPEBG@Z.c)
 *     ?EncryptString@Internal@ExecutionModel@@YAJPEBGPEAPEAU_CRYPTOAPI_BLOB@@@Z @ 0x180048F00 (-EncryptString@Internal@ExecutionModel@@YAJPEBGPEAPEAU_CRYPTOAPI_BLOB@@@Z.c)
 *     ?MatchChildInPermanentStore@Internal@ExecutionModel@@YAJAEAVRegistryKey@Common@@0PEBUGameConfig@2@PEA_NPEAU_GUID@@2@Z @ 0x180049F50 (-MatchChildInPermanentStore@Internal@ExecutionModel@@YAJAEAVRegistryKey@Common@@0PEBUGameConfig@.c)
 *     ?ModifyGameConfig@GameConfigStoreServer@ExecutionModel@@UEAAJU_GUID@@PEBUGameConfig@2@@Z @ 0x18004A370 (-ModifyGameConfig@GameConfigStoreServer@ExecutionModel@@UEAAJU_GUID@@PEBUGameConfig@2@@Z.c)
 *     ?RemoveFromPermanentStore@Internal@ExecutionModel@@YAJPEBGAEAVRegistryKey@Common@@10@Z @ 0x18004A598 (-RemoveFromPermanentStore@Internal@ExecutionModel@@YAJPEBGAEAVRegistryKey@Common@@10@Z.c)
 *     ?SerializeToPermanentStore@Internal@ExecutionModel@@YAJAEAVRegistryKey@Common@@0PEBGPEBUGameConfig@2@_N@Z @ 0x18004AB30 (-SerializeToPermanentStore@Internal@ExecutionModel@@YAJAEAVRegistryKey@Common@@0PEBGPEBUGameConf.c)
 *     ?SetStringValue@RegistryKey@Common@@QEAAJPEBG0K@Z @ 0x18004B1A8 (-SetStringValue@RegistryKey@Common@@QEAAJPEBG0K@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall StringCchLengthW(const unsigned __int16 *a1, __int64 a2, unsigned __int64 *a3)
{
  __int64 v3; // r9
  __int64 result; // rax

  if ( a1 )
  {
    v3 = a2;
    do
    {
      if ( !*a1 )
        break;
      ++a1;
      --v3;
    }
    while ( v3 );
    result = 0LL;
    if ( !v3 )
      result = 2147942487LL;
    if ( a3 )
    {
      if ( (int)result < 0 )
        *a3 = 0LL;
      else
        *a3 = a2 - v3;
    }
  }
  else
  {
    result = 2147942487LL;
  }
  if ( (int)result < 0 )
  {
    if ( a3 )
      *a3 = 0LL;
  }
  return result;
}
