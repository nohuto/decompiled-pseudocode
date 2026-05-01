/*
 * XREFs of ?Decode@Guid@Common@@SAJPEBGKPEAU_GUID@@@Z @ 0x18004D88C
 * Callers:
 *     ?GetGameIdsForParent@Internal@ExecutionModel@@YAJAEAVRegistryKey@Common@@PEBGPEAU_GUID@@PEAI@Z @ 0x180002AF8 (-GetGameIdsForParent@Internal@ExecutionModel@@YAJAEAVRegistryKey@Common@@PEBGPEAU_GUID@@PEAI@Z.c)
 *     ?GetWin32GameIdFromPID@GameConfigStoreServer@ExecutionModel@@AEBAJKPEAU_GUID@@@Z @ 0x180007CA0 (-GetWin32GameIdFromPID@GameConfigStoreServer@ExecutionModel@@AEBAJKPEAU_GUID@@@Z.c)
 *     ?MatchChildInPermanentStore@Internal@ExecutionModel@@YAJAEAVRegistryKey@Common@@0PEBUGameConfig@2@PEA_NPEAU_GUID@@2@Z @ 0x18001B5B0 (-MatchChildInPermanentStore@Internal@ExecutionModel@@YAJAEAVRegistryKey@Common@@0PEBUGameConfig@.c)
 *     ?GetAllGameIds@GameConfigStoreServer@ExecutionModel@@UEBAJPEAU_GUID@@PEAI@Z @ 0x180043F30 (-GetAllGameIds@GameConfigStoreServer@ExecutionModel@@UEBAJPEAU_GUID@@PEAI@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x180024320 (__security_check_cookie.c)
 *     ?Decode@Guid@Common@@SAJPEBEKPEAU_GUID@@@Z @ 0x18004D714 (-Decode@Guid@Common@@SAJPEBEKPEAU_GUID@@@Z.c)
 */

__int64 __fastcall Common::Guid::Decode(const unsigned __int16 *a1, int a2, struct _GUID *a3)
{
  unsigned int v5; // eax
  unsigned __int8 *i; // rcx
  __int64 v7; // rdx
  unsigned __int8 v9[40]; // [rsp+20h] [rbp-38h] BYREF

  if ( a2 == 36 )
  {
    v5 = 0;
    for ( i = v9; ; ++i )
    {
      v7 = *a1;
      if ( (unsigned __int16)v7 > 0xFFu )
        break;
      *i = v7;
      ++v5;
      ++a1;
      if ( v5 >= 0x24 )
        return Common::Guid::Decode(v9, v7, a3);
    }
  }
  return 2147942411LL;
}
