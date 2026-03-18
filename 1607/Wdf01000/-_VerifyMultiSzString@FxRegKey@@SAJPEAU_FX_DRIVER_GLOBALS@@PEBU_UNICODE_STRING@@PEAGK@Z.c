/*
 * XREFs of ?_VerifyMultiSzString@FxRegKey@@SAJPEAU_FX_DRIVER_GLOBALS@@PEBU_UNICODE_STRING@@PEAGK@Z @ 0x1C0015C58
 * Callers:
 *     imp_WdfRegistryQueryMultiString @ 0x1C0015CB0 (imp_WdfRegistryQueryMultiString.c)
 *     FxVerifierGetObjectDebugInfo @ 0x1C007BF90 (FxVerifierGetObjectDebugInfo.c)
 * Callees:
 *     WPP_IFR_SF_Zd @ 0x1C0081740 (WPP_IFR_SF_Zd.c)
 */

__int64 __fastcall FxRegKey::_VerifyMultiSzString(
        _FX_DRIVER_GLOBALS *FxDriverGlobals,
        const _UNICODE_STRING *RegValueName,
        wchar_t *DataString,
        unsigned int DataLength)
{
  unsigned int v5; // edx
  const _GUID *v7; // [rsp+20h] [rbp-28h]

  if ( (DataLength & 1) != 0 )
  {
    WPP_IFR_SF_Zd(
      FxDriverGlobals,
      (unsigned __int8)RegValueName,
      (unsigned int)DataString,
      0xAu,
      v7,
      RegValueName,
      DataLength);
  }
  else
  {
    v5 = DataLength >> 1;
    if ( DataLength >> 1 >= 2 && !DataString[v5 - 1] && !DataString[v5 - 2] )
      return 0LL;
    WPP_IFR_SF_Zd(FxDriverGlobals, v5, (unsigned int)DataString, 0xBu, v7, RegValueName, DataLength);
  }
  return 3221225508LL;
}
