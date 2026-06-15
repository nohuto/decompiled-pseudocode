/*
 * XREFs of ?GetSupportedModes@CWindowsPolicyManager@@UEAAJPEAPEBUModeList@@@Z @ 0x180021E20
 * Callers:
 *     ?GetDevicePipeFormatInternal@CPolicyConfig@@QEAAJPEAUIMMDevice@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@PEAPEAUtWAVEFORMATEX@@@Z @ 0x18001F6A0 (-GetDevicePipeFormatInternal@CPolicyConfig@@QEAAJPEAUIMMDevice@@W4__MIDL___MIDL_itf_audioenginee.c)
 *     ?GetProcessingModeSpecificMixFormatKey@@YAJU_GUID@@HPEAU_tagpropertykey@@@Z @ 0x180034A84 (-GetProcessingModeSpecificMixFormatKey@@YAJU_GUID@@HPEAU_tagpropertykey@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CWindowsPolicyManager::GetSupportedModes(CWindowsPolicyManager *this, const struct ModeList **a2)
{
  __int64 result; // rax

  result = 0LL;
  if ( !a2 )
    return 2147500035LL;
  *a2 = (const struct ModeList *)&unk_1800B0E78;
  return result;
}
