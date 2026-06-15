/*
 * XREFs of ?ForEachEntry@?$CLockedList@V?$CComPtr@UISessionInternalEvents@@@ATL@@$0A@$0A@@@QEAAJAEAVCListWorker@1@@Z @ 0x18000E430
 * Callers:
 *     ?RecalculateSessionVolume@CAudioSession@@UEAAXW4AudioVolumeChangeType@@PEBU_GUID@@K_NPEA_J@Z @ 0x180013280 (-RecalculateSessionVolume@CAudioSession@@UEAAXW4AudioVolumeChangeType@@PEBU_GUID@@K_NPEA_J@Z.c)
 *     ?NewState@CAudioSession@@MEAAXW4_AudioSessionState@@@Z @ 0x180013A60 (-NewState@CAudioSession@@MEAAXW4_AudioSessionState@@@Z.c)
 *     ?RemoveStream@CAudioSession@@UEAAJPEAVCAudioStream@@_N1@Z @ 0x180013D40 (-RemoveStream@CAudioSession@@UEAAJPEAVCAudioStream@@_N1@Z.c)
 *     ?StopStream@CAudioSession@@UEAAJPEAVCAudioStream@@@Z @ 0x180014130 (-StopStream@CAudioSession@@UEAAJPEAVCAudioStream@@@Z.c)
 *     ?StartStream@CAudioSession@@UEAAJPEAVCAudioStream@@@Z @ 0x180014330 (-StartStream@CAudioSession@@UEAAJPEAVCAudioStream@@@Z.c)
 *     ?AddStream@CAudioSession@@UEAAJPEAVCAudioStream@@@Z @ 0x180014540 (-AddStream@CAudioSession@@UEAAJPEAVCAudioStream@@@Z.c)
 *     ?SetGroupingParam@CAudioSession@@UEAAJPEBU_GUID@@0@Z @ 0x180015D80 (-SetGroupingParam@CAudioSession@@UEAAJPEBU_GUID@@0@Z.c)
 *     ?Disconnect@CAudioSession@@UEAAJW4AudioServerSessionDisconnectReason@@_N@Z @ 0x18005AA40 (-Disconnect@CAudioSession@@UEAAJW4AudioServerSessionDisconnectReason@@_N@Z.c)
 *     ?DisconnectStreamList@CAudioSession@@AEAAJXZ @ 0x18005ADCC (-DisconnectStreamList@CAudioSession@@AEAAJXZ.c)
 *     ?SetDisplayName@CAudioSession@@UEAAJPEBGPEBU_GUID@@_N@Z @ 0x18005F2D0 (-SetDisplayName@CAudioSession@@UEAAJPEBGPEBU_GUID@@_N@Z.c)
 *     ?SetIconPath@CAudioSession@@UEAAJPEBGPEBU_GUID@@@Z @ 0x18005F450 (-SetIconPath@CAudioSession@@UEAAJPEBGPEBU_GUID@@@Z.c)
 * Callees:
 *     ?FinalRelease@CServerAudioSessionControl@@UEAAXXZ @ 0x18000EF70 (-FinalRelease@CServerAudioSessionControl@@UEAAXXZ.c)
 *     WPP_SF_qD @ 0x180038C8C (WPP_SF_qD.c)
 *     _guard_dispatch_icall_nop @ 0x180038F30 (_guard_dispatch_icall_nop.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x180052240 (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CLockedList<ATL::CComPtr<ISessionInternalEvents>,0,0>::ForEachEntry(
        LPCRITICAL_SECTION lpCriticalSection,
        void (__fastcall ***a2)(_QWORD, volatile signed __int32 **))
{
  LPCRITICAL_SECTION v2; // r13
  __int64 v3; // r15
  char *v4; // r14
  unsigned __int64 v5; // rdi
  unsigned __int64 v6; // r12
  unsigned int i; // esi
  volatile signed __int32 **v8; // rbx
  unsigned __int64 v9; // rdx
  unsigned __int64 v10; // rcx
  size_t v11; // rax
  size_t v12; // rcx
  char *v13; // rax
  volatile signed __int32 **v14; // rax
  volatile signed __int32 *v15; // rbx
  unsigned int (__fastcall *v16)(CAudioSessionManager *__hidden); // rax
  unsigned int v17; // esi
  volatile signed __int32 *v18; // rbx
  unsigned int (__fastcall *v19)(CAudioSessionManager *__hidden); // rax
  volatile signed __int32 *v20; // rbx
  unsigned int (__fastcall *v21)(CServerAudioSessionControl *__hidden); // rax
  volatile signed __int32 *v22; // rbx
  size_t v24; // rax
  void (__fastcall *v25)(CServerAudioSessionControl *__hidden); // rax
  __int64 v26; // rax
  volatile signed __int32 *v27; // rcx
  unsigned __int64 v28; // [rsp+30h] [rbp-88h]
  volatile signed __int32 *v29; // [rsp+38h] [rbp-80h] BYREF
  char *v30; // [rsp+40h] [rbp-78h]
  __int64 v31; // [rsp+48h] [rbp-70h]
  ATL::CAtlException *v32; // [rsp+50h] [rbp-68h] BYREF
  ATL::CAtlException *v33; // [rsp+58h] [rbp-60h] BYREF
  char *v34; // [rsp+60h] [rbp-58h]
  unsigned __int64 v35; // [rsp+68h] [rbp-50h]
  unsigned __int64 v36; // [rsp+70h] [rbp-48h]
  int v37; // [rsp+78h] [rbp-40h]
  int v39; // [rsp+C0h] [rbp+8h]
  unsigned __int64 v41; // [rsp+D8h] [rbp+20h]

  v31 = -2LL;
  v2 = lpCriticalSection;
  v3 = 0LL;
  v4 = 0LL;
  v34 = 0LL;
  v5 = 0LL;
  v35 = 0LL;
  v41 = 0LL;
  v36 = 0LL;
  v37 = 0;
  v6 = 0LL;
  v28 = 0LL;
  EnterCriticalSection(lpCriticalSection);
  for ( i = 0; (unsigned __int64)i < *(_QWORD *)&v2[1].LockCount; ++i )
  {
    try
    {
      if ( (unsigned __int64)i >= *(_QWORD *)&v2[1].LockCount )
        ATL::AtlThrowImpl(-2147024809);
      v8 = (volatile signed __int32 **)((char *)v2[1].DebugInfo + 8 * i);
      if ( v5 >= v41 )
      {
        v9 = v5 + 1;
        if ( v5 + 1 > v41 )
        {
          if ( v4 )
          {
            v10 = v37;
            if ( !v37 )
            {
              v10 = v41 >> 1;
              if ( v9 - v41 > v41 >> 1 )
                v10 = v9 - v41;
            }
            v11 = v41 + v10;
            v12 = v5 + 1;
            if ( v9 < v11 )
              v12 = v11;
            v41 = v12;
            v13 = (char *)calloc(v12, 8uLL);
            v30 = v13;
            if ( !v13 )
              goto LABEL_70;
            if ( 8 * v5 )
              memmove(v13, v4, 8 * v5);
            free(v4);
            v4 = v30;
            v34 = v30;
          }
          else
          {
            v24 = v37;
            v41 = v37;
            if ( v37 <= v9 )
            {
              v24 = v5 + 1;
              v41 = v5 + 1;
            }
            v4 = (char *)calloc(v24, 8uLL);
            v34 = v4;
            if ( !v4 )
LABEL_70:
              ATL::AtlThrowImpl(-2147024882);
          }
          v36 = v41;
        }
      }
      v14 = (volatile signed __int32 **)&v4[8 * v5];
      if ( v14 )
      {
        v15 = *v8;
        *v14 = v15;
        if ( v15 )
        {
          v16 = *(unsigned int (__fastcall **)(CAudioSessionManager *__hidden))(*(_QWORD *)v15 + 8LL);
          if ( v16 == CAudioSessionManager::AddRef )
          {
            if ( WPP_GLOBAL_Control != (CAudioSession *)&WPP_GLOBAL_Control
              && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
              && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
            {
              WPP_SF_qD(
                *((_QWORD *)WPP_GLOBAL_Control + 2),
                54LL,
                &WPP_b87c05f66e103c86bed05124f7970fa0_Traceguids,
                v15,
                *((_DWORD *)v15 + 4) + 1);
            }
            _InterlockedIncrement(v15 + 4);
            v41 = v36;
            v5 = v35;
            v4 = v34;
          }
          else
          {
            ((void (__fastcall *)(volatile signed __int32 *, unsigned int (__fastcall *)(CAudioSessionManager *__hidden)))v16)(
              v15,
              CAudioSessionManager::AddRef);
          }
        }
      }
      v35 = ++v5;
      v28 = ++v6;
    }
    catch ( ATL::CAtlException *v32 )
    {
      if ( *(_DWORD *)v32 == -1073741571 )
        _o__resetstkoflw();
      v3 = 0LL;
      v2 = lpCriticalSection;
      v41 = v36;
      v5 = v35;
      v4 = v34;
      v6 = v28;
      continue;
    }
  }
  LeaveCriticalSection(v2);
  v17 = 0;
  v39 = 0;
  while ( v17 < v6 )
  {
    try
    {
      if ( v17 >= v5 )
        ATL::AtlThrowImpl(-2147024809);
      v18 = *(volatile signed __int32 **)&v4[8 * v17];
      v29 = v18;
      if ( v18 )
      {
        v19 = *(unsigned int (__fastcall **)(CAudioSessionManager *__hidden))(*(_QWORD *)v18 + 8LL);
        if ( v19 == CAudioSessionManager::AddRef )
        {
          if ( WPP_GLOBAL_Control != (CAudioSession *)&WPP_GLOBAL_Control
            && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
            && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
          {
            WPP_SF_qD(
              *((_QWORD *)WPP_GLOBAL_Control + 2),
              54LL,
              &WPP_b87c05f66e103c86bed05124f7970fa0_Traceguids,
              v18,
              *((_DWORD *)v18 + 4) + 1);
          }
          _InterlockedIncrement(v18 + 4);
          v5 = v35;
          v4 = v34;
        }
        else
        {
          v19((CAudioSessionManager *)v18);
        }
      }
      (**a2)(a2, &v29);
    }
    catch ( ATL::CAtlException *v33 )
    {
      if ( *(_DWORD *)v33 == -1073741571 )
        _o__resetstkoflw();
      v3 = 0LL;
      v5 = v35;
      v4 = v34;
      v6 = v28;
      v17 = v39;
    }
    v39 = ++v17;
  }
  if ( v4 )
  {
    if ( v5 )
    {
      while ( 1 )
      {
        v20 = *(volatile signed __int32 **)&v4[8 * v3];
        if ( v20 )
          break;
LABEL_39:
        if ( ++v3 >= v5 )
          goto LABEL_40;
      }
      v21 = *(unsigned int (__fastcall **)(CServerAudioSessionControl *__hidden))(*(_QWORD *)v20 + 16LL);
      if ( v21 == CServerAudioSessionControl::Release )
      {
        v22 = v20 + 2;
        if ( _InterlockedExchangeAdd(v22 + 2, 0xFFFFFFFF) != 1 )
        {
LABEL_38:
          v5 = v35;
          v4 = v34;
          goto LABEL_39;
        }
        v25 = *(void (__fastcall **)(CServerAudioSessionControl *__hidden))(*(_QWORD *)v22 + 32LL);
        if ( v25 == CServerAudioSessionControl::FinalRelease )
          CServerAudioSessionControl::FinalRelease((CServerAudioSessionControl *)v22);
        else
          v25((CServerAudioSessionControl *)v22);
        v26 = *(_QWORD *)v22;
        v27 = v22;
      }
      else
      {
        if ( v21 != CAudioSessionManager::Release )
        {
          v21(*(CServerAudioSessionControl **)&v4[8 * v3]);
          goto LABEL_39;
        }
        if ( WPP_GLOBAL_Control != (CAudioSession *)&WPP_GLOBAL_Control
          && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
          && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
        {
          WPP_SF_qD(
            *((_QWORD *)WPP_GLOBAL_Control + 2),
            55LL,
            &WPP_b87c05f66e103c86bed05124f7970fa0_Traceguids,
            v20,
            *((_DWORD *)v20 + 4) - 1);
        }
        if ( _InterlockedExchangeAdd(v20 + 4, 0xFFFFFFFF) != 1 )
          goto LABEL_38;
        (*(void (__fastcall **)(volatile signed __int32 *))(*((_QWORD *)v20 + 1) + 32LL))(v20 + 2);
        v26 = *((_QWORD *)v20 + 1);
        v27 = v20 + 2;
      }
      (*(void (__fastcall **)(volatile signed __int32 *, __int64))(v26 + 24))(v27, 1LL);
      goto LABEL_38;
    }
LABEL_40:
    free(v4);
  }
  return 0LL;
}
