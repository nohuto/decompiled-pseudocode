/*
 * XREFs of ?SoundLevelToString@@YAPEAGW4__MIDL___MIDL_itf_audiosrv_0000_0000_0003@@@Z @ 0x18001095C
 * Callers:
 *     ?ExecutePBMActions@CApplication@@IEAAXW4__MIDL___MIDL_itf_audiosrv_0000_0000_0003@@0W4_PLM_EXEMPTION@@I@Z @ 0x18000B130 (-ExecutePBMActions@CApplication@@IEAAXW4__MIDL___MIDL_itf_audiosrv_0000_0000_0003@@0W4_PLM_EXEMP.c)
 *     ?GetApplicationPBMStatus@CApplicationManager@@QEAAJPEAVCApplication@@PEAW4__MIDL___MIDL_itf_audiosrv_0000_0000_0003@@1PEAW4_PLM_EXEMPTION@@@Z @ 0x18001315C (-GetApplicationPBMStatus@CApplicationManager@@QEAAJPEAVCApplication@@PEAW4__MIDL___MIDL_itf_audi.c)
 *     PbmGetSoundLevel @ 0x180016B40 (PbmGetSoundLevel.c)
 * Callees:
 *     <none>
 */

const wchar_t *__fastcall SoundLevelToString(int a1)
{
  int v1; // ecx

  if ( !a1 )
    return L"SNDLVL_Muted";
  v1 = a1 - 1;
  if ( !v1 )
    return L"SNDLVL_Low";
  if ( v1 == 1 )
    return L"SNDLVL_Full";
  return L"Unknown level";
}
