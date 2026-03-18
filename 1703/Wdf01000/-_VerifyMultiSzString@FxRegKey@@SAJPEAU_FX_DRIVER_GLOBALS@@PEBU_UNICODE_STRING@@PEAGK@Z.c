/*
 * XREFs of ?_VerifyMultiSzString@FxRegKey@@SAJPEAU_FX_DRIVER_GLOBALS@@PEBU_UNICODE_STRING@@PEAGK@Z @ 0x1C0018B30
 * Callers:
 *     imp_WdfRegistryQueryMultiString @ 0x1C0018BD0 (imp_WdfRegistryQueryMultiString.c)
 *     FxVerifierReadObjectDebugInfo @ 0x1C008050C (FxVerifierReadObjectDebugInfo.c)
 * Callees:
 *     WPP_IFR_SF_Zd @ 0x1C0085BA8 (WPP_IFR_SF_Zd.c)
 */

__int64 __fastcall FxRegKey::_VerifyMultiSzString(
        _FX_DRIVER_GLOBALS *FxDriverGlobals,
        const _UNICODE_STRING *RegValueName,
        wchar_t *DataString,
        unsigned int DataLength)
{
  const _UNICODE_STRING *level; // r11
  unsigned __int16 v7; // r9
  const _GUID *v8; // [rsp+20h] [rbp-28h]

  level = RegValueName;
  if ( (DataLength & 1) != 0 )
  {
    v7 = 10;
  }
  else
  {
    LODWORD(RegValueName) = DataLength >> 1;
    if ( DataLength >> 1 >= 2 && !DataString[(_DWORD)RegValueName - 1] && !DataString[(_DWORD)RegValueName - 2] )
      return 0LL;
    v7 = 11;
  }
  WPP_IFR_SF_Zd(FxDriverGlobals, (unsigned __int8)RegValueName, (unsigned int)DataString, v7, v8, level, DataLength);
  return 3221225508LL;
}
