/*
 * XREFs of ?GetAudioSessionControl@CAudioSessionManager@@UEAAJK_NPEAVCAudioSession@@PEAPEAVCServerAudioSessionControl@@@Z @ 0x1800102F0
 * Callers:
 *     ?GetCurrentSession@CAudioSessionManager@@UEAAJPEAUIAudioProcess@@PEBU_GUID@@KKHPEAPEAXPEAPEAG@Z @ 0x18000F460 (-GetCurrentSession@CAudioSessionManager@@UEAAJPEAUIAudioProcess@@PEBU_GUID@@KKHPEAPEAXPEAPEAG@Z.c)
 * Callees:
 *     ?Release@CServerAudioSessionControl@@UEAAKXZ @ 0x18000E7F0 (-Release@CServerAudioSessionControl@@UEAAKXZ.c)
 *     ?FinishConstruction@CServerAudioSessionControl@@UEAAJK_NPEAVCAudioSession@@@Z @ 0x18000F100 (-FinishConstruction@CServerAudioSessionControl@@UEAAJK_NPEAVCAudioSession@@@Z.c)
 *     ??0CCriticalSection@ATL@@QEAA@XZ @ 0x180012D40 (--0CCriticalSection@ATL@@QEAA@XZ.c)
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x180027744 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     WPP_SF_S @ 0x180038BEC (WPP_SF_S.c)
 *     _guard_dispatch_icall_nop @ 0x180038F30 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_D @ 0x18005435C (WPP_SF_D.c)
 *     WPP_SF_qS @ 0x180055818 (WPP_SF_qS.c)
 */

__int64 __fastcall CAudioSessionManager::GetAudioSessionControl(
        CAudioSessionManager *this,
        unsigned int a2,
        bool a3,
        struct CAudioSession *a4,
        struct CServerAudioSessionControl **a5)
{
  struct CServerAudioSessionControl *v6; // rsi
  CAudioSession *v9; // rcx
  HANDLE ProcessHeap; // rax
  volatile signed __int32 *v11; // rax
  volatile signed __int32 *v12; // rbx
  __int64 (__fastcall *v13)(CServerAudioSessionControl *, int, bool, struct CAudioSession *); // rax
  int v14; // eax
  int v15; // edi
  __int64 (__fastcall *v16)(CServerAudioSessionControl *); // rax

  v6 = 0LL;
  v9 = WPP_GLOBAL_Control;
  if ( WPP_GLOBAL_Control != (CAudioSession *)&WPP_GLOBAL_Control )
  {
    if ( (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0 && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      WPP_SF_D(*((_QWORD *)WPP_GLOBAL_Control + 2), 17LL, &WPP_b87c05f66e103c86bed05124f7970fa0_Traceguids, a2);
      v9 = WPP_GLOBAL_Control;
    }
    if ( v9 != (CAudioSession *)&WPP_GLOBAL_Control )
    {
      if ( (*((_BYTE *)v9 + 28) & 0x40) != 0 && *((_BYTE *)v9 + 25) >= 4u )
      {
        WPP_SF_S(*((_QWORD *)v9 + 2), 18LL, &WPP_b87c05f66e103c86bed05124f7970fa0_Traceguids, 0LL);
        v9 = WPP_GLOBAL_Control;
      }
      if ( v9 != (CAudioSession *)&WPP_GLOBAL_Control && (*((_BYTE *)v9 + 28) & 0x40) != 0 && *((_BYTE *)v9 + 25) >= 4u )
        WPP_SF_S(*((_QWORD *)v9 + 2), 15LL, &WPP_b87c05f66e103c86bed05124f7970fa0_Traceguids, 0LL);
    }
  }
  ProcessHeap = GetProcessHeap();
  v11 = (volatile signed __int32 *)HeapAlloc(ProcessHeap, 0, 0x58uLL);
  v12 = v11;
  if ( !v11 )
  {
    v12 = 0LL;
    v15 = -2147024882;
LABEL_39:
    AudSrvTraceLoggingErrorHelper("CAudioSessionManager::CreateAudioSessionControl", 0x1D5u, v15);
    goto LABEL_26;
  }
  *((_DWORD *)v11 + 4) = 1;
  *((_DWORD *)v11 + 6) = 0;
  *(_QWORD *)v11 = &CServerAudioSessionControl::`vftable'{for `ISessionInternalEvents'};
  *((_QWORD *)v11 + 1) = &CServerAudioSessionControl::`vftable'{for `CUnknown'};
  ATL::CCriticalSection::CCriticalSection((ATL::CCriticalSection *)(v11 + 8));
  *((_QWORD *)v12 + 9) = 0LL;
  *((_BYTE *)v12 + 84) = 0;
  if ( WPP_GLOBAL_Control != (CAudioSession *)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_S(*((_QWORD *)WPP_GLOBAL_Control + 2), 10LL, &WPP_02a005b273c630b7ddf937521d6439fa_Traceguids, 0LL);
  }
  v13 = *(__int64 (__fastcall **)(CServerAudioSessionControl *, int, bool, struct CAudioSession *))(*(_QWORD *)v12
                                                                                                  + 256LL);
  if ( v13 == CServerAudioSessionControl::FinishConstruction )
    v14 = CServerAudioSessionControl::FinishConstruction((CServerAudioSessionControl *)v12, a2, a3, a4);
  else
    v14 = v13((CServerAudioSessionControl *)v12, a2, a3, a4);
  v15 = v14;
  if ( v14 < 0 )
    goto LABEL_39;
  if ( WPP_GLOBAL_Control != (CAudioSession *)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_qS(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      16,
      (unsigned int)&WPP_b87c05f66e103c86bed05124f7970fa0_Traceguids,
      (_DWORD)v12,
      0LL);
  }
  (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v12 + 8LL))(v12);
  _InterlockedIncrement(v12 + 6);
  v6 = (struct CServerAudioSessionControl *)v12;
LABEL_26:
  if ( v12 )
  {
    v16 = *(__int64 (__fastcall **)(CServerAudioSessionControl *))(*(_QWORD *)v12 + 16LL);
    if ( v16 == CServerAudioSessionControl::Release )
      CServerAudioSessionControl::Release((CServerAudioSessionControl *)v12);
    else
      v16((CServerAudioSessionControl *)v12);
  }
  if ( v15 )
  {
    if ( WPP_GLOBAL_Control != (CAudioSession *)&WPP_GLOBAL_Control
      && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      WPP_SF_D(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        19LL,
        &WPP_b87c05f66e103c86bed05124f7970fa0_Traceguids,
        (unsigned int)v15);
    }
    *a5 = 0LL;
    if ( v15 < 0 )
      AudSrvTraceLoggingErrorHelper("CAudioSessionManager::GetAudioSessionControl", 0x209u, v15);
    if ( v6 )
      (*(void (__fastcall **)(struct CServerAudioSessionControl *))(*(_QWORD *)v6 + 16LL))(v6);
  }
  else
  {
    if ( WPP_GLOBAL_Control != (CAudioSession *)&WPP_GLOBAL_Control
      && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      WPP_SF_qS(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        20,
        (unsigned int)&WPP_b87c05f66e103c86bed05124f7970fa0_Traceguids,
        (_DWORD)v6,
        0LL);
    }
    *a5 = v6;
  }
  return (unsigned int)v15;
}
