/*
 * XREFs of ?get_AudioSession@CVADServer@@UEAAJPEAPEAVCServerAudioSessionControl@@@Z @ 0x18000BED0
 * Callers:
 *     AudioServerGetAudioSession @ 0x180028F80 (AudioServerGetAudioSession.c)
 * Callees:
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x180017B70 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x180027744 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     WPP_SF_q @ 0x180038C50 (WPP_SF_q.c)
 *     _guard_dispatch_icall_nop @ 0x180038F30 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_D @ 0x18005435C (WPP_SF_D.c)
 *     ?HasTooManyReferences@@YA_NPEAUIUnknown@@@Z @ 0x180059DDC (-HasTooManyReferences@@YA_NPEAUIUnknown@@@Z.c)
 */

__int64 __fastcall CVADServer::get_AudioSession(CVADServer *this, struct CServerAudioSessionControl **a2)
{
  unsigned int v2; // edi
  volatile signed __int32 **v6; // rbx
  __int64 v7; // r8
  struct IUnknown *v8; // rcx
  volatile signed __int32 *v9; // rbx
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+30h] [rbp-18h] BYREF
  char v11; // [rsp+38h] [rbp-10h]

  v2 = 0;
  if ( !*((_DWORD *)this + 50) )
    return 2290679809LL;
  v6 = (volatile signed __int32 **)((char *)this + 160);
  if ( !*((_QWORD *)this + 20) )
  {
    v11 = 0;
    lpCriticalSection = (LPCRITICAL_SECTION)((char *)this + 232);
    ATL::CCritSecLock::Lock((ATL::CCritSecLock *)&lpCriticalSection);
    if ( !*v6 )
    {
      LOBYTE(v7) = 1;
      v2 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64, _QWORD, volatile signed __int32 **))(**((_QWORD **)this + 19)
                                                                                                  + 104LL))(
             *((_QWORD *)this + 19),
             *((unsigned int *)this + 16),
             v7,
             *((_QWORD *)this + 21),
             v6);
    }
    if ( v11 )
      LeaveCriticalSection(lpCriticalSection);
    if ( v2 )
    {
      if ( WPP_GLOBAL_Control != (CAudioSession *)&WPP_GLOBAL_Control
        && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x100) != 0
        && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
      {
        WPP_SF_D(*((_QWORD *)WPP_GLOBAL_Control + 2), 28LL, &WPP_1922e64f6368316c9ff2859d8f49dc96_Traceguids, v2);
      }
      goto LABEL_23;
    }
    if ( WPP_GLOBAL_Control != (CAudioSession *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x100) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      WPP_SF_q(*((_QWORD *)WPP_GLOBAL_Control + 2), 27LL, &WPP_1922e64f6368316c9ff2859d8f49dc96_Traceguids, *v6);
    }
  }
  if ( *v6 )
    v8 = (struct IUnknown *)(*v6 + 2);
  else
    v8 = 0LL;
  if ( HasTooManyReferences(v8) )
  {
    v2 = -2147024882;
LABEL_24:
    AudSrvTraceLoggingErrorHelper("CVADServer::get_AudioSession", 0x4E8u, v2);
    return v2;
  }
  *a2 = (struct CServerAudioSessionControl *)*v6;
  v9 = *v6;
  (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v9 + 8LL))(v9);
  _InterlockedIncrement(v9 + 6);
LABEL_23:
  if ( (v2 & 0x80000000) != 0 )
    goto LABEL_24;
  return v2;
}
