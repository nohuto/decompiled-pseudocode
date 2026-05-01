/*
 * XREFs of ?SetValue@RegistryKey@Common@@QEAAJPEBGPEBXKK@Z @ 0x18001C59C
 * Callers:
 *     ?SetGlobalProperty@GameConfigStoreServer@ExecutionModel@@UEBAJW4GlobalProperty_t@2@PEAEI@Z @ 0x18001BC50 (-SetGlobalProperty@GameConfigStoreServer@ExecutionModel@@UEBAJW4GlobalProperty_t@2@PEAEI@Z.c)
 *     ?RemoveFromPermanentStore@Internal@ExecutionModel@@YAJPEBGAEAVRegistryKey@Common@@10@Z @ 0x180045018 (-RemoveFromPermanentStore@Internal@ExecutionModel@@YAJPEBGAEAVRegistryKey@Common@@10@Z.c)
 *     ?SerializeToPermanentStore@Internal@ExecutionModel@@YAJAEAVRegistryKey@Common@@0PEBGPEBUGameConfig@2@_N@Z @ 0x1800455E4 (-SerializeToPermanentStore@Internal@ExecutionModel@@YAJAEAVRegistryKey@Common@@0PEBGPEBUGameConf.c)
 *     ?SetGameProperty@GameConfigStoreServer@ExecutionModel@@UEBAJU_GUID@@W4GameProperty_t@2@PEAEI@Z @ 0x180045A20 (-SetGameProperty@GameConfigStoreServer@ExecutionModel@@UEBAJU_GUID@@W4GameProperty_t@2@PEAEI@Z.c)
 *     ?SetStringValue@RegistryKey@Common@@QEAAJPEBG0K@Z @ 0x180045C64 (-SetStringValue@RegistryKey@Common@@QEAAJPEBG0K@Z.c)
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
