/*
 * XREFs of ?VerifyValidToAddToPermanentStore@Internal@ExecutionModel@@YAJAEAVRegistryKey@Common@@0PEBUGameConfig@2@@Z @ 0x18001B554
 * Callers:
 *     ?AddGameConfig@GameConfigStoreServer@ExecutionModel@@UEBAJPEBUGameConfig@2@PEAU_GUID@@@Z @ 0x18001BD20 (-AddGameConfig@GameConfigStoreServer@ExecutionModel@@UEBAJPEBUGameConfig@2@PEAU_GUID@@@Z.c)
 * Callees:
 *     ?MatchChildInPermanentStore@Internal@ExecutionModel@@YAJAEAVRegistryKey@Common@@0PEBUGameConfig@2@PEA_NPEAU_GUID@@2@Z @ 0x18001B5B0 (-MatchChildInPermanentStore@Internal@ExecutionModel@@YAJAEAVRegistryKey@Common@@0PEBUGameConfig@.c)
 */

__int64 __fastcall ExecutionModel::Internal::VerifyValidToAddToPermanentStore(
        ExecutionModel::Internal *this,
        struct Common::RegistryKey *a2,
        struct Common::RegistryKey *a3,
        const struct ExecutionModel::GameConfig *a4)
{
  __int64 result; // rax
  bool *v5; // [rsp+30h] [rbp-18h] BYREF
  char v6; // [rsp+68h] [rbp+20h] BYREF

  LOBYTE(v5) = 0;
  v6 = 0;
  result = ExecutionModel::Internal::MatchChildInPermanentStore(
             this,
             a2,
             a3,
             (const struct ExecutionModel::GameConfig *)&v5,
             0LL,
             (struct _GUID *)&v6,
             v5);
  if ( (int)result >= 0 )
  {
    if ( v6 )
    {
      if ( (_BYTE)v5 )
        return 2147942487LL;
    }
    else
    {
      return 2147942487LL;
    }
  }
  return result;
}
