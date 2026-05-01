/*
 * XREFs of ?GetGameParentIdentifier@Internal@ExecutionModel@@YAJPEBUGameConfig@2@PEAG@Z @ 0x18001B8E4
 * Callers:
 *     ?MatchChildInPermanentStore@Internal@ExecutionModel@@YAJAEAVRegistryKey@Common@@0PEBUGameConfig@2@PEA_NPEAU_GUID@@2@Z @ 0x18001B5B0 (-MatchChildInPermanentStore@Internal@ExecutionModel@@YAJAEAVRegistryKey@Common@@0PEBUGameConfig@.c)
 *     ?ModifyGameConfig@GameConfigStoreServer@ExecutionModel@@UEBAJU_GUID@@PEBUGameConfig@2@@Z @ 0x180044D60 (-ModifyGameConfig@GameConfigStoreServer@ExecutionModel@@UEBAJU_GUID@@PEBUGameConfig@2@@Z.c)
 *     ?SerializeToPermanentStore@Internal@ExecutionModel@@YAJAEAVRegistryKey@Common@@0PEBGPEBUGameConfig@2@_N@Z @ 0x1800455E4 (-SerializeToPermanentStore@Internal@ExecutionModel@@YAJAEAVRegistryKey@Common@@0PEBGPEBUGameConf.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ExecutionModel::Internal::GetGameParentIdentifier(
        ExecutionModel::Internal **this,
        wchar_t *a2,
        unsigned __int16 *a3)
{
  if ( *((_DWORD *)this + 5) == 1 || *((_DWORD *)this + 5) == 2 )
    return ExecutionModel::Internal::CalcSHA1(
             this[3],
             a2,
             (unsigned __int16 *)(unsigned int)(*((_DWORD *)this + 5) - 1));
  else
    return 2147942487LL;
}
