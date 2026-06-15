/*
 * XREFs of ?AreValidStreamFlags@@YAHW4_AUDCLNT_SHAREMODE@@K@Z @ 0x180073ED0
 * Callers:
 *     ?GetSaDevice@CSaProvider@@UEAAJPEBGW4_AUDCLNT_SHAREMODE@@KPEBUtWAVEFORMATEX@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@4KPEAPEAUIAudioDeviceGraph@@@Z @ 0x1800745D0 (-GetSaDevice@CSaProvider@@UEAAJPEBGW4_AUDCLNT_SHAREMODE@@KPEBUtWAVEFORMATEX@@W4__MIDL___MIDL_itf.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall AreValidStreamFlags(enum _AUDCLNT_SHAREMODE a1, int a2)
{
  return (a2 & 0x1800004) == 0
      && (a2 & 0xFFF8) == 0
      && (a1 != AUDCLNT_SHAREMODE_EXCLUSIVE || a2 >= 0)
      && (a2 & 0x88000000) != 0x8000000;
}
