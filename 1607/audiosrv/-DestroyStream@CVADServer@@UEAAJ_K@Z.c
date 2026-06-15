/*
 * XREFs of ?DestroyStream@CVADServer@@UEAAJ_K@Z @ 0x1800097B0
 * Callers:
 *     AudioServerDestroyStream @ 0x180006100 (AudioServerDestroyStream.c)
 * Callees:
 *     WPP_SF_qq @ 0x180001DA8 (WPP_SF_qq.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180004D1C (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?RemoveStream@CAudioSession@@UEAAJPEAVCAudioStream@@_N1@Z @ 0x180013D40 (-RemoveStream@CAudioSession@@UEAAJPEAVCAudioStream@@_N1@Z.c)
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x180017B70 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ?ReleaseClientReference@CAudioStream@@UEAAKXZ @ 0x180019910 (-ReleaseClientReference@CAudioStream@@UEAAKXZ.c)
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x180027744 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     WPP_SF_q @ 0x180038C50 (WPP_SF_q.c)
 *     WPP_SF_qD @ 0x180038C8C (WPP_SF_qD.c)
 *     _guard_dispatch_icall_nop @ 0x180038F30 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CVADServer::DestroyStream(CVADServer *this, __int64 a2)
{
  int v3; // edi
  std::_Ref_count_base *v5; // rcx
  struct CAudioStream *v6; // rdx
  __int64 v7; // rax
  CAudioSession *v8; // rcx
  __int64 (__fastcall *v9)(CAudioSession *__hidden, struct CAudioStream *, bool, bool); // rax
  CAudioStream *v10; // rcx
  void (*v11)(void); // rax
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+30h] [rbp-18h] BYREF
  char v14; // [rsp+38h] [rbp-10h]

  v3 = 0;
  if ( WPP_GLOBAL_Control != (CAudioSession *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x100) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_q(*((_QWORD *)WPP_GLOBAL_Control + 2), 41LL, &WPP_1922e64f6368316c9ff2859d8f49dc96_Traceguids, a2);
  }
  v14 = 0;
  lpCriticalSection = (LPCRITICAL_SECTION)((char *)this + 232);
  ATL::CCritSecLock::Lock((ATL::CCritSecLock *)&lpCriticalSection);
  v5 = (std::_Ref_count_base *)*((_QWORD *)this + 43);
  *((_QWORD *)this + 43) = 0LL;
  *((_QWORD *)this + 42) = 0LL;
  if ( v5 )
    std::_Ref_count_base::_Decref(v5);
  if ( *((_DWORD *)this + 50) )
  {
    v6 = (struct CAudioStream *)*((_QWORD *)this + 26);
    if ( v6 )
    {
      v7 = *((_QWORD *)v6 + 6);
      if ( a2 == v7 )
      {
        v8 = (CAudioSession *)*((_QWORD *)this + 21);
        v9 = *(__int64 (__fastcall **)(CAudioSession *__hidden, struct CAudioStream *, bool, bool))(*(_QWORD *)v8 + 264LL);
        if ( v9 == CAudioSession::RemoveStream )
          CAudioSession::RemoveStream(v8, v6, 1, 1);
        else
          ((void (__fastcall *)(CAudioSession *, struct CAudioStream *, __int64))v9)(v8, v6, 1LL);
        v10 = (CAudioStream *)*((_QWORD *)this + 26);
        v11 = *(void (**)(void))(*(_QWORD *)v10 + 72LL);
        if ( (char *)v11 == (char *)CAudioStream::ReleaseClientReference )
          CAudioStream::ReleaseClientReference(v10);
        else
          v11();
        *((_QWORD *)this + 26) = 0LL;
      }
      else
      {
        if ( WPP_GLOBAL_Control != (CAudioSession *)&WPP_GLOBAL_Control
          && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x100) != 0
          && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
        {
          WPP_SF_qq(
            *((_QWORD *)WPP_GLOBAL_Control + 2),
            0x2Au,
            (__int64)&WPP_1922e64f6368316c9ff2859d8f49dc96_Traceguids,
            a2,
            v7);
        }
        v3 = -2147024809;
      }
    }
    else
    {
      v3 = -2004287487;
    }
  }
  else
  {
    v3 = -2004287487;
  }
  *((_DWORD *)this + 50) = 0;
  if ( WPP_GLOBAL_Control != (CAudioSession *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x100) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_qD(*((_QWORD *)WPP_GLOBAL_Control + 2), 43LL, &WPP_1922e64f6368316c9ff2859d8f49dc96_Traceguids, a2, v3);
  }
  if ( v3 < 0 )
    AudSrvTraceLoggingErrorHelper("CVADServer::DestroyStream", 0x85Bu, v3);
  if ( v14 )
    LeaveCriticalSection(lpCriticalSection);
  return (unsigned int)v3;
}
