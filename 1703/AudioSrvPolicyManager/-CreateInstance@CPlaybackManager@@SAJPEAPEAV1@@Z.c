/*
 * XREFs of ?CreateInstance@CPlaybackManager@@SAJPEAPEAV1@@Z @ 0x180015D3C
 * Callers:
 *     ?Initialize@CWindowsPolicyManager@@IEAAJXZ @ 0x180004370 (-Initialize@CWindowsPolicyManager@@IEAAJXZ.c)
 * Callees:
 *     WPP_SF_D @ 0x180003BD8 (WPP_SF_D.c)
 *     ?AudPolicyLogError@@YAXPEBDHJ@Z @ 0x1800182A4 (-AudPolicyLogError@@YAXPEBDHJ@Z.c)
 */

__int64 __fastcall CPlaybackManager::CreateInstance(struct CPlaybackManager **a1)
{
  HANDLE ProcessHeap; // rax
  _DWORD *v3; // rax
  unsigned int v4; // ebx

  ProcessHeap = GetProcessHeap();
  v3 = HeapAlloc(ProcessHeap, 0, 0x20uLL);
  v4 = 0;
  if ( v3 )
  {
    v3[2] = 1;
    *(_QWORD *)v3 = &CPlaybackManager::`vftable'{for `CUnknown'};
    *((_QWORD *)v3 + 2) = &CPlaybackManager::`vftable'{for `ISessionInternalEvents'};
    v3[6] = 0;
  }
  else
  {
    v3 = 0LL;
  }
  if ( v3 )
  {
    *a1 = (struct CPlaybackManager *)v3;
  }
  else
  {
    v4 = -2147024882;
    if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
    {
      WPP_SF_D(*((_QWORD *)WPP_GLOBAL_Control + 2), 0xAu, &WPP_41cf1b36f95b3f413e10328c0a55d7ad_Traceguids, -2147024882);
    }
    AudPolicyLogError("CPlaybackManager::CreateInstance", 59, -2147024882);
  }
  return v4;
}
