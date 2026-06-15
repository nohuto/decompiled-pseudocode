/*
 * XREFs of ?GetAudioSessionControl@CAudioSessionManager@@UEAAJK_NPEAVCAudioSession@@PEAPEAVCServerAudioSessionControl@@@Z @ 0x180016FD0
 * Callers:
 *     ?GetCurrentSession@CAudioSessionManager@@UEAAJPEAUIAudioProcess@@PEBU_GUID@@KKHPEAPEAXPEAPEAG@Z @ 0x180016310 (-GetCurrentSession@CAudioSessionManager@@UEAAJPEAUIAudioProcess@@PEBU_GUID@@KKHPEAPEAXPEAPEAG@Z.c)
 *     ?get_AudioSession@CVADServer@@UEAAJPEAPEAVCServerAudioSessionControl@@@Z @ 0x180024AB0 (-get_AudioSession@CVADServer@@UEAAJPEAPEAVCServerAudioSessionControl@@@Z.c)
 * Callees:
 *     ?Release@CServerAudioSessionControl@@UEAAKXZ @ 0x180015730 (-Release@CServerAudioSessionControl@@UEAAKXZ.c)
 *     ?FinishConstruction@CServerAudioSessionControl@@UEAAJK_NPEAVCAudioSession@@@Z @ 0x180016160 (-FinishConstruction@CServerAudioSessionControl@@UEAAJK_NPEAVCAudioSession@@@Z.c)
 *     ??0CCriticalSection@ATL@@QEAA@XZ @ 0x180019650 (--0CCriticalSection@ATL@@QEAA@XZ.c)
 *     WPP_SF_D @ 0x180039528 (WPP_SF_D.c)
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x1800479B0 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 *     WPP_SF_S @ 0x180069E40 (WPP_SF_S.c)
 *     WPP_SF_qS @ 0x18006BDEC (WPP_SF_qS.c)
 */

__int64 __fastcall CAudioSessionManager::GetAudioSessionControl(
        CAudioSessionManager *this,
        unsigned int a2,
        bool a3,
        struct CAudioSession *a4,
        struct CServerAudioSessionControl **a5)
{
  struct CServerAudioSessionControl *v5; // r14
  TraceLoggingHProvider v9; // rcx
  HANDLE ProcessHeap; // rax
  volatile signed __int32 *v11; // rax
  volatile signed __int32 *v12; // rbx
  __int64 (__fastcall *v13)(CServerAudioSessionControl *, int, bool, struct CAudioSession *); // rdi
  int v14; // eax
  unsigned int v15; // esi
  TraceLoggingHProvider v16; // rcx
  __int64 (__fastcall *v17)(CServerAudioSessionControl *); // rdi

  v5 = 0LL;
  v9 = WPP_GLOBAL_Control;
  if ( WPP_GLOBAL_Control != (TraceLoggingHProvider)&WPP_GLOBAL_Control )
  {
    if ( (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0 && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      WPP_SF_D(*((_QWORD *)WPP_GLOBAL_Control + 2), 19LL, &WPP_9fafadcf3cd06ed99ec4193376114500_Traceguids, a2);
      v9 = WPP_GLOBAL_Control;
    }
    if ( v9 != (TraceLoggingHProvider)&WPP_GLOBAL_Control )
    {
      if ( (*((_BYTE *)v9 + 28) & 0x40) != 0 && *((_BYTE *)v9 + 25) >= 4u )
      {
        WPP_SF_S(*((_QWORD *)v9 + 2), 20LL, &WPP_9fafadcf3cd06ed99ec4193376114500_Traceguids, 0LL);
        v9 = WPP_GLOBAL_Control;
      }
      if ( v9 != (TraceLoggingHProvider)&WPP_GLOBAL_Control
        && (*((_BYTE *)v9 + 28) & 0x40) != 0
        && *((_BYTE *)v9 + 25) >= 4u )
      {
        WPP_SF_S(*((_QWORD *)v9 + 2), 16LL, &WPP_9fafadcf3cd06ed99ec4193376114500_Traceguids, 0LL);
      }
    }
  }
  ProcessHeap = GetProcessHeap();
  v11 = (volatile signed __int32 *)HeapAlloc(ProcessHeap, 0, 0x58uLL);
  v12 = v11;
  if ( v11 )
  {
    *((_DWORD *)v11 + 4) = 1;
    *((_DWORD *)v11 + 6) = 0;
    *(_QWORD *)v11 = &CServerAudioSessionControl::`vftable'{for `ISessionInternalEvents'};
    *((_QWORD *)v11 + 1) = &CServerAudioSessionControl::`vftable'{for `CUnknown'};
    ATL::CCriticalSection::CCriticalSection((ATL::CCriticalSection *)(v11 + 8));
    *((_QWORD *)v12 + 9) = 0LL;
    *((_BYTE *)v12 + 84) = 0;
    if ( WPP_GLOBAL_Control != (TraceLoggingHProvider)&WPP_GLOBAL_Control
      && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      WPP_SF_S(*((_QWORD *)WPP_GLOBAL_Control + 2), 10LL, &WPP_72a29e54739c88f9bde176df428e8cf6_Traceguids, 0LL);
    }
    v13 = *(__int64 (__fastcall **)(CServerAudioSessionControl *, int, bool, struct CAudioSession *))(*(_QWORD *)v12 + 256LL);
    if ( v13 == CServerAudioSessionControl::FinishConstruction )
      v14 = CServerAudioSessionControl::FinishConstruction((CServerAudioSessionControl *)v12, a2, a3, a4);
    else
      v14 = v13((CServerAudioSessionControl *)v12, a2, a3, a4);
    v15 = v14;
    if ( v14 >= 0 )
    {
      if ( WPP_GLOBAL_Control != (TraceLoggingHProvider)&WPP_GLOBAL_Control
        && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
        && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
      {
        WPP_SF_qS(
          *((_QWORD *)WPP_GLOBAL_Control + 2),
          17,
          (unsigned int)&WPP_9fafadcf3cd06ed99ec4193376114500_Traceguids,
          (_DWORD)v12,
          0LL);
      }
      (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v12 + 8LL))(v12);
      _InterlockedIncrement(v12 + 6);
      v5 = (struct CServerAudioSessionControl *)v12;
      goto LABEL_26;
    }
  }
  else
  {
    v12 = 0LL;
    v15 = -2147024882;
  }
  v16 = WPP_GLOBAL_Control;
  if ( WPP_GLOBAL_Control != (TraceLoggingHProvider)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
  {
    WPP_SF_D(*((_QWORD *)WPP_GLOBAL_Control + 2), 18LL, &WPP_9fafadcf3cd06ed99ec4193376114500_Traceguids, v15);
LABEL_26:
    v16 = WPP_GLOBAL_Control;
  }
  if ( v12 )
  {
    v17 = *(__int64 (__fastcall **)(CServerAudioSessionControl *))(*(_QWORD *)v12 + 16LL);
    if ( v17 == CServerAudioSessionControl::Release )
      CServerAudioSessionControl::Release((CServerAudioSessionControl *)v12);
    else
      v17((CServerAudioSessionControl *)v12);
    v16 = WPP_GLOBAL_Control;
  }
  if ( v15 )
  {
    if ( v16 != (TraceLoggingHProvider)&WPP_GLOBAL_Control
      && (*((_BYTE *)v16 + 28) & 0x40) != 0
      && *((_BYTE *)v16 + 25) >= 4u )
    {
      WPP_SF_D(*((_QWORD *)v16 + 2), 21LL, &WPP_9fafadcf3cd06ed99ec4193376114500_Traceguids, v15);
    }
    *a5 = 0LL;
    if ( (v15 & 0x80000000) != 0
      && WPP_GLOBAL_Control != (TraceLoggingHProvider)&WPP_GLOBAL_Control
      && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
    {
      WPP_SF_D(*((_QWORD *)WPP_GLOBAL_Control + 2), 23LL, &WPP_9fafadcf3cd06ed99ec4193376114500_Traceguids, v15);
    }
    if ( v5 )
      (*(void (__fastcall **)(struct CServerAudioSessionControl *))(*(_QWORD *)v5 + 16LL))(v5);
  }
  else
  {
    if ( v16 != (TraceLoggingHProvider)&WPP_GLOBAL_Control
      && (*((_BYTE *)v16 + 28) & 0x40) != 0
      && *((_BYTE *)v16 + 25) >= 4u )
    {
      WPP_SF_qS(
        *((_QWORD *)v16 + 2),
        22,
        (unsigned int)&WPP_9fafadcf3cd06ed99ec4193376114500_Traceguids,
        (_DWORD)v5,
        0LL);
    }
    *a5 = v5;
  }
  return v15;
}
