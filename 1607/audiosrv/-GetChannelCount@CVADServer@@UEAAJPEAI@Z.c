/*
 * XREFs of ?GetChannelCount@CVADServer@@UEAAJPEAI@Z @ 0x180009710
 * Callers:
 *     AudioServerGetChannelCount @ 0x180006DB0 (AudioServerGetChannelCount.c)
 * Callees:
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x180017B70 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x180027744 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     WPP_SF_q @ 0x180038C50 (WPP_SF_q.c)
 */

__int64 __fastcall CVADServer::GetChannelCount(CVADServer *this, unsigned int *a2)
{
  __int64 v4; // rax
  unsigned int v5; // ebx
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+20h] [rbp-18h] BYREF
  char v8; // [rsp+28h] [rbp-10h]

  if ( WPP_GLOBAL_Control != (CAudioSession *)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_q(*((_QWORD *)WPP_GLOBAL_Control + 2), 49LL, &WPP_1922e64f6368316c9ff2859d8f49dc96_Traceguids, this);
  }
  v8 = 0;
  lpCriticalSection = (LPCRITICAL_SECTION)((char *)this + 232);
  ATL::CCritSecLock::Lock((ATL::CCritSecLock *)&lpCriticalSection);
  v4 = *((_QWORD *)this + 26);
  if ( v4 && *((_DWORD *)this + 50) )
  {
    v5 = 0;
    *a2 = *(_DWORD *)(v4 + 80);
  }
  else
  {
    v5 = -2004287487;
    AudSrvTraceLoggingErrorHelper("CVADServer::GetChannelCount", 0x931u, -2004287487);
  }
  if ( v8 )
    LeaveCriticalSection(lpCriticalSection);
  return v5;
}
