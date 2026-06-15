/*
 * XREFs of ?Disconnect@CAudioSession@@UEAAJW4AudioServerSessionDisconnectReason@@_N@Z @ 0x180077550
 * Callers:
 *     ?Disconnect@CPerEndpointVolumeAudioSession@@EEAAJW4AudioServerSessionDisconnectReason@@_N@Z @ 0x180077800 (-Disconnect@CPerEndpointVolumeAudioSession@@EEAAJW4AudioServerSessionDisconnectReason@@_N@Z.c)
 *     ?Disconnect@CPerStreamVolumeAudioSession@@EEAAJW4AudioServerSessionDisconnectReason@@_N@Z @ 0x1800778C0 (-Disconnect@CPerStreamVolumeAudioSession@@EEAAJW4AudioServerSessionDisconnectReason@@_N@Z.c)
 * Callees:
 *     ??1?$CAtlArray@PEAVCAudioStream@@V?$CElementTraits@PEAVCAudioStream@@@ATL@@@ATL@@QEAA@XZ @ 0x180005D34 (--1-$CAtlArray@PEAVCAudioStream@@V-$CElementTraits@PEAVCAudioStream@@@ATL@@@ATL@@QEAA@XZ.c)
 *     ?ForEachEntry@?$CLockedList@V?$CComPtr@UISessionInternalEvents@@@ATL@@$0A@$0A@@@QEAAJAEAVCListWorker@1@@Z @ 0x180017B00 (-ForEachEntry@-$CLockedList@V-$CComPtr@UISessionInternalEvents@@@ATL@@$0A@$0A@@@QEAAJAEAVCListWo.c)
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x180043A70 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 *     ?RemoveAt@?$CAtlArray@PEAVCAudioSessionManager@@V?$CElementTraits@PEAVCAudioSessionManager@@@ATL@@@ATL@@QEAAX_K0@Z @ 0x18006755C (-RemoveAt@-$CAtlArray@PEAVCAudioSessionManager@@V-$CElementTraits@PEAVCAudioSessionManager@@@ATL.c)
 *     ?Add@?$CAtlArray@PEAVCAudioStream@@V?$CElementTraits@PEAVCAudioStream@@@ATL@@@ATL@@QEAA_KAEBQEAVCAudioStream@@@Z @ 0x1800675F4 (-Add@-$CAtlArray@PEAVCAudioStream@@V-$CElementTraits@PEAVCAudioStream@@@ATL@@@ATL@@QEAA_KAEBQEAV.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x180069190 (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 *     ?DisconnectStreamList@CAudioSession@@AEAAJPEAV?$CAtlArray@PEAVCAudioStream@@V?$CElementTraits@PEAVCAudioStream@@@ATL@@@ATL@@@Z @ 0x180077940 (-DisconnectStreamList@CAudioSession@@AEAAJPEAV-$CAtlArray@PEAVCAudioStream@@V-$CElementTraits@PE.c)
 *     ?NotifyClientOfDisconnection@CAudioSession@@QEAAJW4AudioSessionDisconnectReason@@@Z @ 0x18007A06C (-NotifyClientOfDisconnection@CAudioSession@@QEAAJW4AudioSessionDisconnectReason@@@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CAudioSession::Disconnect(__int64 a1, int a2, char a3)
{
  int v3; // edi
  __int64 v4; // r14
  struct _RTL_CRITICAL_SECTION *v5; // rbx
  _QWORD *v7; // rcx
  __int64 v8; // r12
  unsigned int v9; // r13d
  enum AudioSessionDisconnectReason v10; // r15d
  int v11; // edi
  int v12; // edi
  int v13; // edi
  int v14; // edi
  struct _RTL_CRITICAL_SECTION *v15; // kr00_8
  ATL::CAtlException *v16; // rbx
  struct _RTL_CRITICAL_SECTION *v17; // kr10_8
  ATL::CAtlException *v18; // rbx
  _QWORD v19[2]; // [rsp+20h] [rbp-98h] BYREF
  ATL::CAtlException *v20; // [rsp+30h] [rbp-88h] BYREF
  ATL::CAtlException *v21; // [rsp+38h] [rbp-80h] BYREF
  void (__fastcall **v22[2])(_QWORD, volatile signed __int32 **); // [rsp+40h] [rbp-78h] BYREF
  int v23; // [rsp+50h] [rbp-68h]
  void *v24[3]; // [rsp+58h] [rbp-60h] BYREF
  int v25; // [rsp+70h] [rbp-48h]
  int v29; // [rsp+D8h] [rbp+20h]
  int v30; // [rsp+D8h] [rbp+20h]

  v19[1] = -2LL;
  v3 = a2;
  v4 = a1;
  memset(v24, 0, sizeof(v24));
  v25 = 0;
  v5 = (struct _RTL_CRITICAL_SECTION *)(a1 + 32);
  EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 32));
  if ( v3 != 5 )
    goto LABEL_7;
  if ( !*(_QWORD *)(v4 + 88) || *(_BYTE *)(**(_QWORD **)(v4 + 80) + 40LL) || !*(_QWORD *)(v4 + 88) )
  {
    LeaveCriticalSection(v5);
    ATL::CAtlArray<CAudioStream *,ATL::CElementTraits<CAudioStream *>>::~CAtlArray<CAudioStream *,ATL::CElementTraits<CAudioStream *>>(v24);
    return 0LL;
  }
  while ( 1 )
  {
    v7 = (_QWORD *)(v4 + 80);
    if ( !*(_QWORD *)(v4 + 88) )
      ATL::AtlThrowImpl(-2147024809);
    v19[0] = *(_QWORD *)*v7;
    try
    {
      ATL::CAtlArray<CAudioSessionManager *,ATL::CElementTraits<CAudioSessionManager *>>::RemoveAt(v7, 0LL);
    }
    catch ( ATL::CAtlException *v20 )
    {
      v15 = v5;
      v16 = v20;
      if ( *(_DWORD *)v20 == -1073741571 )
        _resetstkoflw();
      v29 = *(_DWORD *)v16;
      v5 = v15;
      v4 = a1;
      v3 = a2;
      if ( v29 < 0 )
        goto LABEL_7;
    }
    try
    {
      ATL::CAtlArray<CAudioStream *,ATL::CElementTraits<CAudioStream *>>::Add(v24, v19);
    }
    catch ( ATL::CAtlException *v21 )
    {
      v17 = v5;
      v18 = v21;
      if ( *(_DWORD *)v21 == -1073741571 )
        _resetstkoflw();
      v30 = *(_DWORD *)v18;
      v5 = v17;
      v4 = a1;
      v3 = a2;
      if ( v30 >= 0 )
        goto LABEL_14;
LABEL_15:
      *(_DWORD *)(v4 + 184) = 0;
      LeaveCriticalSection((LPCRITICAL_SECTION)(v4 + 32));
      v8 = v4 - 16;
      v9 = CAudioSession::DisconnectStreamList(v4 - 16, v24);
      v10 = DisconnectReasonServerShutdown;
      if ( *(_DWORD *)(v4 + 308) == 1 )
        (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v8 + 88LL))(v4 - 16, 0LL);
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 8LL))(v4 - 16);
      v22[0] = (void (__fastcall **)(_QWORD, volatile signed __int32 **))&CAudioSessionDisconnected::`vftable';
      v22[1] = (void (__fastcall **)(_QWORD, volatile signed __int32 **))(v4 - 16);
      v23 = v3;
      CLockedList<ATL::CComPtr<ISessionInternalEvents>,0,0>::ForEachEntry((LPCRITICAL_SECTION)(v4 + 456), v22);
      if ( a3 )
      {
        if ( v3 )
        {
          v11 = v3 - 1;
          if ( v11 )
          {
            v12 = v11 - 1;
            if ( v12 )
            {
              v13 = v12 - 1;
              if ( v13 )
              {
                v14 = v13 - 1;
                if ( v14 )
                {
                  if ( v14 == 1 )
                    v10 = DisconnectReasonExclusiveModeOverride;
                }
                else
                {
                  v10 = DisconnectReasonSessionDisconnected;
                }
              }
              else
              {
                v10 = DisconnectReasonSessionLogoff;
              }
            }
            else
            {
              v10 = DisconnectReasonFormatChanged;
            }
          }
        }
        else
        {
          v10 = DisconnectReasonDeviceRemoval;
        }
        CAudioSession::NotifyClientOfDisconnection((CAudioSession *)(v4 - 16), v10);
      }
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v4 - 16);
      ATL::CAtlArray<CAudioStream *,ATL::CElementTraits<CAudioStream *>>::~CAtlArray<CAudioStream *,ATL::CElementTraits<CAudioStream *>>(v24);
      return v9;
    }
LABEL_14:
    --*(_DWORD *)(v4 + 72);
LABEL_7:
    if ( !*(_QWORD *)(v4 + 88) )
      goto LABEL_15;
  }
}
