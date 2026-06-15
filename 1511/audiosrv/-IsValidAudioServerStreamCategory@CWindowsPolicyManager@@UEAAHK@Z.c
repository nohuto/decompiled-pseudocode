/*
 * XREFs of ?IsValidAudioServerStreamCategory@CWindowsPolicyManager@@UEAAHK@Z @ 0x18001B940
 * Callers:
 *     ?Initialize@CVADServer@@UEAAJPEAUIAudioProcess@@PEBGW4_AUDCLNT_SHAREMODE@@KPEBUtWAVEFORMATEX@@PEBU_GUID@@KPEAUVadServerSettings@@PEAPEAG@Z @ 0x1800235C0 (-Initialize@CVADServer@@UEAAJPEAUIAudioProcess@@PEBGW4_AUDCLNT_SHAREMODE@@KPEBUtWAVEFORMATEX@@PE.c)
 *     AudioServerGetMixFormat @ 0x180031580 (AudioServerGetMixFormat.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall CWindowsPolicyManager::IsValidAudioServerStreamCategory(CWindowsPolicyManager *this, unsigned int a2)
{
  return a2 < 0x15;
}
