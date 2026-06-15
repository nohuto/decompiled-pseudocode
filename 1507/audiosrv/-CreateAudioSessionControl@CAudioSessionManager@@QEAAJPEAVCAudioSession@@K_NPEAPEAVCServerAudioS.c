/*
 * XREFs of ?CreateAudioSessionControl@CAudioSessionManager@@QEAAJPEAVCAudioSession@@K_NPEAPEAVCServerAudioSessionControl@@@Z @ 0x180019EA0
 * Callers:
 *     ?GetAudioSessionControl@CAudioSessionManager@@UEAAJK_NPEAVCAudioSession@@PEAPEAVCServerAudioSessionControl@@@Z @ 0x180019DB0 (-GetAudioSessionControl@CAudioSessionManager@@UEAAJK_NPEAVCAudioSession@@PEAPEAVCServerAudioSess.c)
 *     ?GetAudioSessions@CAudioSessionManager@@UEAAJPEAUIAudioProcess@@PEAKPEAPEAPEAXPEAPEAPEAG@Z @ 0x18007F590 (-GetAudioSessions@CAudioSessionManager@@UEAAJPEAUIAudioProcess@@PEAKPEAPEAPEAXPEAPEAPEAG@Z.c)
 * Callees:
 *     ??0CCriticalSection@ATL@@QEAA@XZ @ 0x180013560 (--0CCriticalSection@ATL@@QEAA@XZ.c)
 *     ?Release@CServerAudioSessionControl@@UEAAKXZ @ 0x180018180 (-Release@CServerAudioSessionControl@@UEAAKXZ.c)
 *     ?FinishConstruction@CServerAudioSessionControl@@UEAAJK_NPEAVCAudioSession@@@Z @ 0x180018B50 (-FinishConstruction@CServerAudioSessionControl@@UEAAJK_NPEAVCAudioSession@@@Z.c)
 *     WPP_SF_D @ 0x180031934 (WPP_SF_D.c)
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x180043A70 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 *     WPP_SF_S @ 0x18006B12C (WPP_SF_S.c)
 *     WPP_SF_qS @ 0x18006D1E0 (WPP_SF_qS.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall CAudioSessionManager::CreateAudioSessionControl(
        CAudioSessionManager *this,
        struct CAudioSession *a2,
        unsigned int a3,
        unsigned __int8 a4,
        struct CServerAudioSessionControl **a5)
{
  HANDLE ProcessHeap; // rax
  char *v9; // rax
  volatile signed __int32 *v10; // rbx
  __int64 v11; // rcx
  __int64 (__fastcall *v12)(CServerAudioSessionControl *, int, char, struct CAudioSession *); // rdi
  int v13; // eax
  unsigned int v14; // esi
  __int64 (__fastcall *v15)(CServerAudioSessionControl *); // rdi

  if ( *(struct _GUID **)&WPP_GLOBAL_Control.Data1 != &WPP_GLOBAL_Control
    && (*(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 28LL) & 0x40) != 0
    && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 25LL) >= 4u )
  {
    WPP_SF_S(
      *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 16LL),
      16LL,
      &WPP_9fafadcf3cd06ed99ec4193376114500_Traceguids,
      0LL);
  }
  ProcessHeap = GetProcessHeap();
  v9 = (char *)HeapAlloc(ProcessHeap, 0, 0x58uLL);
  v10 = (volatile signed __int32 *)v9;
  if ( v9 )
  {
    *((_DWORD *)v9 + 4) = 1;
    *(_QWORD *)v9 = &CServerAudioSessionControl::`vftable'{for `ISessionInternalEvents'};
    *((_QWORD *)v9 + 1) = &CServerAudioSessionControl::`vftable'{for `CUnknown'};
    *((_DWORD *)v9 + 6) = 0;
    ATL::CCriticalSection::CCriticalSection((struct _RTL_CRITICAL_SECTION *)(v9 + 32));
    *((_QWORD *)v10 + 9) = 0LL;
    *((_BYTE *)v10 + 84) = 0;
    v11 = *(_QWORD *)&WPP_GLOBAL_Control.Data1;
    if ( *(struct _GUID **)&WPP_GLOBAL_Control.Data1 != &WPP_GLOBAL_Control
      && (*(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 28LL) & 0x40) != 0
      && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 25LL) >= 4u )
    {
      WPP_SF_S(
        *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 16LL),
        10LL,
        &WPP_72a29e54739c88f9bde176df428e8cf6_Traceguids,
        0LL);
      v11 = *(_QWORD *)&WPP_GLOBAL_Control.Data1;
    }
  }
  else
  {
    v10 = 0LL;
    v11 = *(_QWORD *)&WPP_GLOBAL_Control.Data1;
  }
  if ( v10 )
  {
    v12 = *(__int64 (__fastcall **)(CServerAudioSessionControl *, int, char, struct CAudioSession *))(*(_QWORD *)v10 + 256LL);
    if ( v12 == CServerAudioSessionControl::FinishConstruction )
      v13 = CServerAudioSessionControl::FinishConstruction((CServerAudioSessionControl *)v10, a3, a4, a2);
    else
      v13 = v12((CServerAudioSessionControl *)v10, a3, a4, a2);
    v14 = v13;
    if ( v13 >= 0 )
    {
      if ( *(struct _GUID **)&WPP_GLOBAL_Control.Data1 != &WPP_GLOBAL_Control
        && (*(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 28LL) & 0x40) != 0
        && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 25LL) >= 4u )
      {
        WPP_SF_qS(
          *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 16LL),
          17,
          (unsigned int)&WPP_9fafadcf3cd06ed99ec4193376114500_Traceguids,
          (_DWORD)v10,
          0LL);
      }
      (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v10 + 8LL))(v10);
      _InterlockedIncrement(v10 + 6);
      *a5 = (struct CServerAudioSessionControl *)v10;
      goto LABEL_19;
    }
    v11 = *(_QWORD *)&WPP_GLOBAL_Control.Data1;
  }
  else
  {
    v14 = -2147024882;
  }
  if ( (struct _GUID *)v11 != &WPP_GLOBAL_Control && (*(_BYTE *)(v11 + 28) & 0x40) != 0 && *(_BYTE *)(v11 + 25) >= 2u )
    WPP_SF_D(*(_QWORD *)(v11 + 16), 18LL, &WPP_9fafadcf3cd06ed99ec4193376114500_Traceguids, v14);
LABEL_19:
  if ( v10 )
  {
    v15 = *(__int64 (__fastcall **)(CServerAudioSessionControl *))(*(_QWORD *)v10 + 16LL);
    if ( v15 == CServerAudioSessionControl::Release )
      CServerAudioSessionControl::Release((CServerAudioSessionControl *)v10);
    else
      v15((CServerAudioSessionControl *)v10);
  }
  return v14;
}
