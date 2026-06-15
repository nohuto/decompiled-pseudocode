/*
 * XREFs of ?ForEachEntry@?$CLockedList@V?$CComPtr@UISessionInternalEvents@@@ATL@@$0A@$0A@@@QEAAJAEAVCListWorker@1@@Z @ 0x180014FF0
 * Callers:
 *     ?RecalculateSessionVolume@CAudioSession@@UEAAXW4AudioVolumeChangeType@@PEBU_GUID@@K_NPEA_J@Z @ 0x180025C90 (-RecalculateSessionVolume@CAudioSession@@UEAAXW4AudioVolumeChangeType@@PEBU_GUID@@K_NPEA_J@Z.c)
 *     ?RemoveStream@CAudioSession@@UEAAJPEAVCAudioStream@@_N@Z @ 0x1800265A0 (-RemoveStream@CAudioSession@@UEAAJPEAVCAudioStream@@_N@Z.c)
 *     ?StopStream@CAudioSession@@UEAAJPEAVCAudioStream@@@Z @ 0x180026CB0 (-StopStream@CAudioSession@@UEAAJPEAVCAudioStream@@@Z.c)
 *     ?StartStream@CAudioSession@@UEAAJPEAVCAudioStream@@@Z @ 0x180026EA0 (-StartStream@CAudioSession@@UEAAJPEAVCAudioStream@@@Z.c)
 *     ?AddStream@CAudioSession@@UEAAJPEAVCAudioStream@@@Z @ 0x1800270A0 (-AddStream@CAudioSession@@UEAAJPEAVCAudioStream@@@Z.c)
 *     ?SetGroupingParam@CAudioSession@@UEAAJPEBU_GUID@@0@Z @ 0x1800287E0 (-SetGroupingParam@CAudioSession@@UEAAJPEBU_GUID@@0@Z.c)
 *     ?NewState@CPerStreamVolumeAudioSession@@EEAAXW4_AudioSessionState@@@Z @ 0x180035880 (-NewState@CPerStreamVolumeAudioSession@@EEAAXW4_AudioSessionState@@@Z.c)
 *     ?NewState@CAudioSession@@MEAAXW4_AudioSessionState@@@Z @ 0x180064D00 (-NewState@CAudioSession@@MEAAXW4_AudioSessionState@@@Z.c)
 *     ?Disconnect@CAudioSession@@UEAAJW4AudioServerSessionDisconnectReason@@_N@Z @ 0x1800721B0 (-Disconnect@CAudioSession@@UEAAJW4AudioServerSessionDisconnectReason@@_N@Z.c)
 *     ?DisconnectStreamList@CAudioSession@@AEAAJPEAV?$CAtlArray@PEAVCAudioStream@@V?$CElementTraits@PEAVCAudioStream@@@ATL@@@ATL@@@Z @ 0x1800725C0 (-DisconnectStreamList@CAudioSession@@AEAAJPEAV-$CAtlArray@PEAVCAudioStream@@V-$CElementTraits@PE.c)
 *     ?SetDisplayName@CAudioSession@@UEAAJPEBGPEBU_GUID@@_N@Z @ 0x180076C70 (-SetDisplayName@CAudioSession@@UEAAJPEBGPEBU_GUID@@_N@Z.c)
 *     ?SetIconPath@CAudioSession@@UEAAJPEBGPEBU_GUID@@@Z @ 0x180076E10 (-SetIconPath@CAudioSession@@UEAAJPEBGPEBU_GUID@@@Z.c)
 * Callees:
 *     ?FinalRelease@CServerAudioSessionControl@@UEAAXXZ @ 0x180015F90 (-FinalRelease@CServerAudioSessionControl@@UEAAXXZ.c)
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x1800479B0 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 *     WPP_SF_qD @ 0x180048AE8 (WPP_SF_qD.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x180067B60 (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CLockedList<ATL::CComPtr<ISessionInternalEvents>,0,0>::ForEachEntry(
        LPCRITICAL_SECTION lpCriticalSection,
        void (__fastcall ***a2)(_QWORD, volatile signed __int32 **))
{
  LPCRITICAL_SECTION v2; // r13
  __int64 v3; // r12
  char *v4; // r14
  unsigned __int64 v5; // rsi
  size_t v6; // r15
  unsigned int i; // edi
  volatile signed __int32 **v8; // rbx
  unsigned __int64 v9; // rdx
  size_t v10; // rcx
  size_t v11; // rax
  char *v12; // rax
  errno_t v13; // eax
  volatile signed __int32 **v14; // rax
  volatile signed __int32 *v15; // rbx
  unsigned int (__fastcall *v16)(CAudioSessionManager *__hidden); // r15
  unsigned int j; // ebx
  volatile signed __int32 *v18; // rdi
  unsigned int (__fastcall *v19)(CAudioSessionManager *__hidden); // r15
  volatile signed __int32 *v20; // rbx
  unsigned int (__fastcall *v21)(CServerAudioSessionControl *__hidden); // rdi
  CServerAudioSessionControl *v22; // rdi
  void (__fastcall *v24)(CServerAudioSessionControl *__hidden); // rbx
  volatile signed __int32 *v25; // [rsp+30h] [rbp-88h] BYREF
  char *v26; // [rsp+38h] [rbp-80h]
  __int64 v27; // [rsp+40h] [rbp-78h]
  ATL::CAtlException *v28; // [rsp+48h] [rbp-70h] BYREF
  ATL::CAtlException *v29; // [rsp+50h] [rbp-68h] BYREF
  char *v30; // [rsp+58h] [rbp-60h]
  unsigned __int64 v31; // [rsp+60h] [rbp-58h]
  size_t v32; // [rsp+68h] [rbp-50h]
  int v33; // [rsp+70h] [rbp-48h]
  unsigned __int64 v36; // [rsp+D8h] [rbp+20h]

  v27 = -2LL;
  v2 = lpCriticalSection;
  v3 = 0LL;
  v4 = 0LL;
  v30 = 0LL;
  v5 = 0LL;
  v31 = 0LL;
  v6 = 0LL;
  v36 = 0LL;
  v32 = 0LL;
  v33 = 0;
  EnterCriticalSection(lpCriticalSection);
  for ( i = 0; (unsigned __int64)i < *(_QWORD *)&v2[1].LockCount; ++i )
  {
    try
    {
      if ( (unsigned __int64)i >= *(_QWORD *)&v2[1].LockCount )
        ATL::AtlThrowImpl(-2147024809);
      v8 = (volatile signed __int32 **)((char *)v2[1].DebugInfo + 8 * i);
      if ( v5 >= v6 )
      {
        v9 = v5 + 1;
        if ( v5 + 1 > v6 )
        {
          if ( v4 )
          {
            v10 = v33;
            if ( !v33 )
            {
              v10 = v6 >> 1;
              if ( v9 - v6 > v6 >> 1 )
                v10 = v9 - v6;
            }
            v11 = v6 + v10;
            v6 = v5 + 1;
            if ( v9 < v11 )
              v6 = v11;
            v36 = v6;
            v12 = (char *)calloc(v6, 8uLL);
            v26 = v12;
            if ( !v12 )
              goto LABEL_73;
            v13 = memmove_s(v12, 8 * v5, v4, 8 * v5);
            if ( v13 )
            {
              if ( v13 == 12 )
                ATL::AtlThrowImpl(-2147024882);
              if ( v13 == 22 || v13 == 34 )
                ATL::AtlThrowImpl(-2147024809);
              if ( v13 != 80 )
                ATL::AtlThrowImpl(-2147467259);
            }
            free(v4);
            v4 = v26;
            v30 = v26;
          }
          else
          {
            v6 = v33;
            v36 = v33;
            if ( v33 <= v9 )
            {
              v6 = v5 + 1;
              v36 = v5 + 1;
            }
            v4 = (char *)calloc(v6, 8uLL);
            v30 = v4;
            if ( !v4 )
LABEL_73:
              ATL::AtlThrowImpl(-2147024882);
          }
          v32 = v6;
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
            if ( WPP_GLOBAL_Control != (TraceLoggingHProvider)&WPP_GLOBAL_Control
              && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
              && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
            {
              WPP_SF_qD(
                *((_QWORD *)WPP_GLOBAL_Control + 2),
                62LL,
                &WPP_9fafadcf3cd06ed99ec4193376114500_Traceguids,
                v15,
                *((_DWORD *)v15 + 4) + 1);
            }
            _InterlockedIncrement(v15 + 4);
            v6 = v32;
            v36 = v32;
            v5 = v31;
            v4 = v30;
          }
          else
          {
            ((void (__fastcall *)(volatile signed __int32 *, unsigned int (__fastcall *)(CAudioSessionManager *__hidden)))v16)(
              v15,
              CAudioSessionManager::AddRef);
            v6 = v36;
          }
        }
      }
      v31 = ++v5;
    }
    catch ( ATL::CAtlException *v28 )
    {
      if ( *(_DWORD *)v28 == -1073741571 )
        _resetstkoflw();
      v3 = 0LL;
      v2 = lpCriticalSection;
      v6 = v32;
      v36 = v32;
      v5 = v31;
      v4 = v30;
      continue;
    }
  }
  LeaveCriticalSection(v2);
  for ( j = 0; j < v5; ++j )
  {
    try
    {
      v18 = *(volatile signed __int32 **)&v4[8 * j];
      v25 = v18;
      if ( v18 )
      {
        v19 = *(unsigned int (__fastcall **)(CAudioSessionManager *__hidden))(*(_QWORD *)v18 + 8LL);
        if ( v19 == CAudioSessionManager::AddRef )
        {
          if ( WPP_GLOBAL_Control != (TraceLoggingHProvider)&WPP_GLOBAL_Control
            && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
            && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
          {
            WPP_SF_qD(
              *((_QWORD *)WPP_GLOBAL_Control + 2),
              62LL,
              &WPP_9fafadcf3cd06ed99ec4193376114500_Traceguids,
              v18,
              *((_DWORD *)v18 + 4) + 1);
          }
          _InterlockedIncrement(v18 + 4);
          v5 = v31;
          v4 = v30;
        }
        else
        {
          v19((CAudioSessionManager *)v18);
        }
      }
      (**a2)(a2, &v25);
    }
    catch ( ATL::CAtlException *v29 )
    {
      if ( *(_DWORD *)v29 == -1073741571 )
        _resetstkoflw();
      v3 = 0LL;
      v5 = v31;
      v4 = v30;
      continue;
    }
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
LABEL_37:
        if ( ++v3 >= v5 )
          goto LABEL_38;
      }
      v21 = *(unsigned int (__fastcall **)(CServerAudioSessionControl *__hidden))(*(_QWORD *)v20 + 16LL);
      if ( v21 == CServerAudioSessionControl::Release )
      {
        v22 = (CServerAudioSessionControl *)(v20 + 2);
        if ( _InterlockedExchangeAdd(v20 + 4, 0xFFFFFFFF) != 1 )
        {
LABEL_36:
          v5 = v31;
          v4 = v30;
          goto LABEL_37;
        }
        v24 = *(void (__fastcall **)(CServerAudioSessionControl *__hidden))(*(_QWORD *)v22 + 32LL);
        if ( v24 == CServerAudioSessionControl::FinalRelease )
        {
          CServerAudioSessionControl::FinalRelease(v22);
LABEL_64:
          (*(void (__fastcall **)(CServerAudioSessionControl *, __int64))(*(_QWORD *)v22 + 24LL))(v22, 1LL);
          goto LABEL_36;
        }
      }
      else
      {
        if ( v21 != CAudioSessionManager::Release )
        {
          v21(*(CServerAudioSessionControl **)&v4[8 * v3]);
          goto LABEL_37;
        }
        if ( WPP_GLOBAL_Control != (TraceLoggingHProvider)&WPP_GLOBAL_Control
          && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
          && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
        {
          WPP_SF_qD(
            *((_QWORD *)WPP_GLOBAL_Control + 2),
            63LL,
            &WPP_9fafadcf3cd06ed99ec4193376114500_Traceguids,
            v20,
            *((_DWORD *)v20 + 4) - 1);
        }
        v22 = (CServerAudioSessionControl *)(v20 + 2);
        if ( _InterlockedExchangeAdd(v20 + 4, 0xFFFFFFFF) != 1 )
          goto LABEL_36;
        v24 = *(void (__fastcall **)(CServerAudioSessionControl *__hidden))(*(_QWORD *)v22 + 32LL);
      }
      v24(v22);
      goto LABEL_64;
    }
LABEL_38:
    free(v4);
  }
  return 0LL;
}
