/*
 * XREFs of ?GetAllVolumes@CVADServer@@UEAAJIPEAM@Z @ 0x1800094B0
 * Callers:
 *     AudioServerGetAllVolumes @ 0x180009360 (AudioServerGetAllVolumes.c)
 * Callees:
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x180017B70 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x180027744 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     WPP_SF_q @ 0x180038C50 (WPP_SF_q.c)
 */

__int64 __fastcall CVADServer::GetAllVolumes(CVADServer *this, unsigned int a2, float *a3)
{
  __int64 v4; // rdi
  __int64 v6; // rsi
  __int64 v7; // rdx
  __int64 v8; // rcx
  unsigned int v9; // ebx
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+20h] [rbp-18h] BYREF
  char v12; // [rsp+28h] [rbp-10h]

  v4 = a2;
  if ( WPP_GLOBAL_Control != (CAudioSession *)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_q(*((_QWORD *)WPP_GLOBAL_Control + 2), 53LL, &WPP_1922e64f6368316c9ff2859d8f49dc96_Traceguids, this);
  }
  v12 = 0;
  lpCriticalSection = (LPCRITICAL_SECTION)((char *)this + 232);
  ATL::CCritSecLock::Lock((ATL::CCritSecLock *)&lpCriticalSection);
  v6 = *((_QWORD *)this + 26);
  if ( !v6 || !*((_DWORD *)this + 50) )
  {
    v9 = -2004287487;
    goto LABEL_21;
  }
  if ( WPP_GLOBAL_Control != (CAudioSession *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x200000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      34LL,
      &WPP_56c0583fd767319afe66d4370de2ea71_Traceguids,
      *((_QWORD *)this + 26));
  }
  if ( (_DWORD)v4 != *(_DWORD *)(v6 + 80) )
  {
    v9 = -2147024809;
    AudSrvTraceLoggingErrorHelper("CAudioStream::GetAllStreamVolumes", 0x555u, -2147024809);
LABEL_21:
    AudSrvTraceLoggingErrorHelper("CVADServer::GetAllVolumes", 0x9DCu, v9);
    goto LABEL_16;
  }
  if ( (_DWORD)v4 )
  {
    v7 = v4;
    v8 = *(_QWORD *)(v6 + 104) - (_QWORD)a3;
    do
    {
      *a3 = *(float *)((char *)a3 + v8);
      ++a3;
      --v7;
    }
    while ( v7 );
  }
  v9 = 0;
LABEL_16:
  if ( v12 )
    LeaveCriticalSection(lpCriticalSection);
  return v9;
}
