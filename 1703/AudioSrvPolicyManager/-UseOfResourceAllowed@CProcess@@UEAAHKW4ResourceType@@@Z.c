/*
 * XREFs of ?UseOfResourceAllowed@CProcess@@UEAAHKW4ResourceType@@@Z @ 0x18000D9F0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_ @ 0x180005B4C (WPP_SF_.c)
 *     ?UseOfResourceAllowed@CPlaybackManager@@QEAAHPEAVCProcess@@KW4ResourceType@@@Z @ 0x180016498 (-UseOfResourceAllowed@CPlaybackManager@@QEAAHPEAVCProcess@@KW4ResourceType@@@Z.c)
 */

__int64 __fastcall CProcess::UseOfResourceAllowed(CProcess *this, unsigned int a2, enum ResourceType a3)
{
  unsigned int v3; // ebx

  v3 = 0;
  if ( g_PlaybackManager )
  {
    return (unsigned int)CPlaybackManager::UseOfResourceAllowed(this, (CProcess *)((char *)this - 16), a2, a3);
  }
  else if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
         && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000000) != 0
         && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 3u )
  {
    WPP_SF_(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x26u, &WPP_17d50ef9044b326f9caf58457a9d5dd6_Traceguids);
  }
  return v3;
}
