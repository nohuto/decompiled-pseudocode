/*
 * XREFs of ?UseOfResourceAllowed@CProcess@@UEAAHKW4ResourceType@@@Z @ 0x180029B80
 * Callers:
 *     AudioServerIsFormatSupported @ 0x180019680 (AudioServerIsFormatSupported.c)
 * Callees:
 *     ?GetSoundLevel@CApplicationManager@@QEAA?AW4__MIDL___MIDL_itf_audiosrv_0000_0000_0003@@PEAVCProcess@@@Z @ 0x18001D6CC (-GetSoundLevel@CApplicationManager@@QEAA-AW4__MIDL___MIDL_itf_audiosrv_0000_0000_0003@@PEAVCProc.c)
 *     ?NonPackagedOffloadAllowed@CPlaybackManager@@IEAAHXZ @ 0x1800A12D0 (-NonPackagedOffloadAllowed@CPlaybackManager@@IEAAHXZ.c)
 *     WPP_SF_dSd @ 0x1800A13C0 (WPP_SF_dSd.c)
 */

__int64 __fastcall CProcess::UseOfResourceAllowed(CProcess *this, unsigned int a2, enum ResourceType a3)
{
  unsigned int v3; // ebx
  __int64 v4; // rsi
  char *v5; // rdi
  CPlaybackManager *v7; // rcx

  v3 = 0;
  v4 = a2;
  if ( g_PlaybackManager )
  {
    v5 = (char *)this - 16;
    if ( a3 )
    {
      if ( a3 == ResourceTypeTheme )
        LOBYTE(v3) = (unsigned int)CApplicationManager::GetSoundLevel(this, (__int64)this - 16) != 0;
    }
    else if ( (a2 - 1 <= 1 || a2 - 10 <= 1)
           && (unsigned int)CApplicationManager::GetSoundLevel(this, (__int64)this - 16)
           && (*((_DWORD *)v5 + 105) || (unsigned int)CPlaybackManager::NonPackagedOffloadAllowed(v7)) )
    {
      v3 = 1;
    }
    if ( WPP_GLOBAL_Control != (TraceLoggingHProvider)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 5u )
    {
      WPP_SF_dSd(*((_QWORD *)WPP_GLOBAL_Control + 2), (__int64)(&off_1800C7340)[v4], v3);
    }
  }
  return v3;
}
