/*
 * XREFs of ?SetStringValue@RegistryKey@Common@@QEAAJPEBG0K@Z @ 0x180045C64
 * Callers:
 *     ?SerializeToPermanentStore@Internal@ExecutionModel@@YAJAEAVRegistryKey@Common@@0PEBGPEBUGameConfig@2@_N@Z @ 0x1800455E4 (-SerializeToPermanentStore@Internal@ExecutionModel@@YAJAEAVRegistryKey@Common@@0PEBGPEBUGameConf.c)
 * Callees:
 *     ?StringCchLengthW@@YAJPEBG_KPEA_K@Z @ 0x18001B890 (-StringCchLengthW@@YAJPEBG_KPEA_K@Z.c)
 *     ?SetValue@RegistryKey@Common@@QEAAJPEBGPEBXKK@Z @ 0x18001C59C (-SetValue@RegistryKey@Common@@QEAAJPEBGPEBXKK@Z.c)
 */

LSTATUS __fastcall Common::RegistryKey::SetStringValue(
        HKEY *this,
        const unsigned __int16 *a2,
        const unsigned __int16 *a3)
{
  int v3; // r11d
  LSTATUS result; // eax
  unsigned __int64 v8; // [rsp+50h] [rbp+18h] BYREF

  v3 = 0;
  v8 = 0LL;
  if ( a3 )
  {
    result = StringCchLengthW(a3, 0x7FFFFFFFLL, &v8);
    if ( result < 0 )
      return result;
    v3 = v8 + 1;
  }
  return Common::RegistryKey::SetValue(this, a2, (const BYTE *)a3, 2 * v3, 1u);
}
