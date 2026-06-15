/*
 * XREFs of ?SetAllVolumes@CVADServer@@UEAAJIPEBM@Z @ 0x1800095B0
 * Callers:
 *     AudioServerSetAllVolumes @ 0x180009310 (AudioServerSetAllVolumes.c)
 * Callees:
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x180017B70 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ?RecalculateVolume@CAudioStream@@UEAAJXZ @ 0x180018680 (-RecalculateVolume@CAudioStream@@UEAAJXZ.c)
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x180027744 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     WPP_SF_q @ 0x180038C50 (WPP_SF_q.c)
 *     WPP_SF_qD @ 0x180038C8C (WPP_SF_qD.c)
 *     _guard_dispatch_icall_nop @ 0x180038F30 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CVADServer::SetAllVolumes(CVADServer *this, unsigned int a2, float *a3)
{
  __int64 v4; // rbx
  char *v6; // rdx
  CAudioStream *v7; // rdi
  unsigned int v8; // esi
  unsigned int v9; // eax
  float *v10; // rcx
  __int64 v11; // rcx
  signed __int64 v12; // r14
  __int64 (__fastcall *v13)(CAudioStream *__hidden); // rax
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+30h] [rbp-18h] BYREF
  char v16; // [rsp+38h] [rbp-10h]

  v4 = a2;
  if ( WPP_GLOBAL_Control != (CAudioSession *)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_q(*((_QWORD *)WPP_GLOBAL_Control + 2), 52LL, &WPP_1922e64f6368316c9ff2859d8f49dc96_Traceguids, this);
  }
  v16 = 0;
  lpCriticalSection = (LPCRITICAL_SECTION)((char *)this + 232);
  ATL::CCritSecLock::Lock((ATL::CCritSecLock *)&lpCriticalSection);
  v7 = (CAudioStream *)*((_QWORD *)this + 26);
  if ( !v7 || !*((_DWORD *)this + 50) )
  {
    v8 = -2004287487;
    goto LABEL_28;
  }
  if ( WPP_GLOBAL_Control != (CAudioSession *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x200000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_qD(*((_QWORD *)WPP_GLOBAL_Control + 2), 35LL, &WPP_56c0583fd767319afe66d4370de2ea71_Traceguids, v7, v4);
  }
  if ( (_DWORD)v4 != *((_DWORD *)v7 + 20) )
  {
    v8 = -2147024809;
    AudSrvTraceLoggingErrorHelper("CAudioStream::SetAllStreamVolumes", 0x576u, -2147024809);
LABEL_28:
    AudSrvTraceLoggingErrorHelper("CVADServer::SetAllVolumes", 0x9B3u, v8);
    goto LABEL_21;
  }
  v8 = 0;
  v9 = 0;
  if ( (_DWORD)v4 )
  {
    v10 = a3;
    do
    {
      if ( *v10 < 0.0 || *v10 > 1.0 )
      {
        v8 = -2147024809;
        AudSrvTraceLoggingErrorHelper("CAudioStream::SetAllStreamVolumes", 0x57Eu, -2147024809);
        goto LABEL_28;
      }
      ++v9;
      ++v10;
    }
    while ( v9 < (unsigned int)v4 );
    v6 = (char *)*((_QWORD *)v7 + 13);
    v11 = v4;
    v12 = (char *)a3 - v6;
    do
    {
      *(_DWORD *)v6 = *(_DWORD *)&v6[v12];
      v6 += 4;
      --v11;
    }
    while ( v11 );
  }
  v13 = *(__int64 (__fastcall **)(CAudioStream *__hidden))(*(_QWORD *)v7 + 128LL);
  if ( v13 == CAudioStream::RecalculateVolume )
    CAudioStream::RecalculateVolume(v7);
  else
    ((void (__fastcall *)(CAudioStream *, char *))v13)(v7, v6);
LABEL_21:
  if ( v16 )
    LeaveCriticalSection(lpCriticalSection);
  return v8;
}
