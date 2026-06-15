/*
 * XREFs of WPP_SF_S_guid_ @ 0x1800773CC
 * Callers:
 *     ?RecalculateSessionVolume@CAudioSession@@UEAAXW4AudioVolumeChangeType@@PEBU_GUID@@K_NPEA_J@Z @ 0x180025C90 (-RecalculateSessionVolume@CAudioSession@@UEAAXW4AudioVolumeChangeType@@PEBU_GUID@@K_NPEA_J@Z.c)
 *     ?AddGainStage@CAudioSession@@UEAAJPEAVCGainStage@@PEBU_GUID@@@Z @ 0x180025F70 (-AddGainStage@CAudioSession@@UEAAJPEAVCGainStage@@PEBU_GUID@@@Z.c)
 *     ?GetCurrentPolicyGain@CAudioSession@@IEAAJPEA_JAEA_NPEAUSessionPolicyGains@@AEA_J@Z @ 0x180027FF0 (-GetCurrentPolicyGain@CAudioSession@@IEAAJPEA_JAEA_NPEAUSessionPolicyGains@@AEA_J@Z.c)
 *     ?RemoveGainStage@CAudioSession@@UEAAJPEBU_GUID@@0_NPEA_J@Z @ 0x180076590 (-RemoveGainStage@CAudioSession@@UEAAJPEBU_GUID@@0_NPEA_J@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall WPP_SF_S_guid_(__int64 a1, unsigned __int16 a2, __int64 a3, const wchar_t *a4)
{
  __int64 v5; // rax
  const wchar_t *v6; // rcx

  if ( a4 && *a4 )
  {
    v5 = -1LL;
    do
      ++v5;
    while ( a4[v5] );
  }
  if ( a4 )
  {
    v6 = L"<NULL>";
    if ( *a4 )
      v6 = a4;
  }
  else
  {
    v6 = L"NULL";
  }
  return EtwTraceMessage(a1, 43LL, &WPP_c7c899a03615192e0a524739b215c826_Traceguids, a2, v6);
}
