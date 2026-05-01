/*
 * XREFs of ?SetValue@RegistryKey@Common@@QEAAJPEBGPEBXKK@Z @ 0x180027CC4
 * Callers:
 *     ?SetGlobalProperty@GameConfigStoreServer@ExecutionModel@@UEAAJW4GlobalProperty_t@2@PEAEI@Z @ 0x180025C30 (-SetGlobalProperty@GameConfigStoreServer@ExecutionModel@@UEAAJW4GlobalProperty_t@2@PEAEI@Z.c)
 *     ?RemoveFromPermanentStore@Internal@ExecutionModel@@YAJPEBGAEAVRegistryKey@Common@@10@Z @ 0x18004A598 (-RemoveFromPermanentStore@Internal@ExecutionModel@@YAJPEBGAEAVRegistryKey@Common@@10@Z.c)
 *     ?SerializeToPermanentStore@Internal@ExecutionModel@@YAJAEAVRegistryKey@Common@@0PEBGPEBUGameConfig@2@_N@Z @ 0x18004AB30 (-SerializeToPermanentStore@Internal@ExecutionModel@@YAJAEAVRegistryKey@Common@@0PEBGPEBUGameConf.c)
 *     ?SetGameProperty@GameConfigStoreServer@ExecutionModel@@UEAAJU_GUID@@W4GameProperty_t@2@PEAEI@Z @ 0x18004AF90 (-SetGameProperty@GameConfigStoreServer@ExecutionModel@@UEAAJU_GUID@@W4GameProperty_t@2@PEAEI@Z.c)
 *     ?SetStringValue@RegistryKey@Common@@QEAAJPEBG0K@Z @ 0x18004B1A8 (-SetStringValue@RegistryKey@Common@@QEAAJPEBG0K@Z.c)
 * Callees:
 *     <none>
 */

LSTATUS __fastcall Common::RegistryKey::SetValue(
        HKEY *this,
        const unsigned __int16 *a2,
        const BYTE *lpData,
        DWORD cbData,
        DWORD dwType)
{
  LSTATUS result; // eax

  result = RegSetValueExW(*this, a2, 0, dwType, lpData, cbData);
  if ( result > 0 )
    return (unsigned __int16)result | 0x80070000;
  return result;
}
