/*
 * XREFs of ?Disconnect@CAudioSession@@UEAAJW4AudioServerSessionDisconnectReason@@_N@Z @ 0x1800721B0
 * Callers:
 *     ?Disconnect@CPerEndpointVolumeAudioSession@@EEAAJW4AudioServerSessionDisconnectReason@@_N@Z @ 0x180072480 (-Disconnect@CPerEndpointVolumeAudioSession@@EEAAJW4AudioServerSessionDisconnectReason@@_N@Z.c)
 *     ?Disconnect@CPerStreamVolumeAudioSession@@EEAAJW4AudioServerSessionDisconnectReason@@_N@Z @ 0x180072540 (-Disconnect@CPerStreamVolumeAudioSession@@EEAAJW4AudioServerSessionDisconnectReason@@_N@Z.c)
 * Callees:
 *     ?ForEachEntry@?$CLockedList@V?$CComPtr@UISessionInternalEvents@@@ATL@@$0A@$0A@@@QEAAJAEAVCListWorker@1@@Z @ 0x180014FF0 (-ForEachEntry@-$CLockedList@V-$CComPtr@UISessionInternalEvents@@@ATL@@$0A@$0A@@@QEAAJAEAVCListWo.c)
 *     ??1?$CAtlArray@PEAVCAudioStream@@V?$CElementTraits@PEAVCAudioStream@@@ATL@@@ATL@@QEAA@XZ @ 0x18002FA1C (--1-$CAtlArray@PEAVCAudioStream@@V-$CElementTraits@PEAVCAudioStream@@@ATL@@@ATL@@QEAA@XZ.c)
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x1800479B0 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 *     ?RemoveAt@?$CAtlArray@PEAVCAudioSessionManager@@V?$CElementTraits@PEAVCAudioSessionManager@@@ATL@@@ATL@@QEAAX_K0@Z @ 0x180065DF8 (-RemoveAt@-$CAtlArray@PEAVCAudioSessionManager@@V-$CElementTraits@PEAVCAudioSessionManager@@@ATL.c)
 *     ?Add@?$CAtlArray@PEAVCAudioStream@@V?$CElementTraits@PEAVCAudioStream@@@ATL@@@ATL@@QEAA_KAEBQEAVCAudioStream@@@Z @ 0x180065E90 (-Add@-$CAtlArray@PEAVCAudioStream@@V-$CElementTraits@PEAVCAudioStream@@@ATL@@@ATL@@QEAA_KAEBQEAV.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x180067B60 (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 *     ?DisconnectStreamList@CAudioSession@@AEAAJPEAV?$CAtlArray@PEAVCAudioStream@@V?$CElementTraits@PEAVCAudioStream@@@ATL@@@ATL@@@Z @ 0x1800725C0 (-DisconnectStreamList@CAudioSession@@AEAAJPEAV-$CAtlArray@PEAVCAudioStream@@V-$CElementTraits@PE.c)
 *     ?NotifyClientOfDisconnection@CAudioSession@@QEAAJW4AudioSessionDisconnectReason@@@Z @ 0x1800754AC (-NotifyClientOfDisconnection@CAudioSession@@QEAAJW4AudioSessionDisconnectReason@@@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CAudioSession::Disconnect(__int64 a1, int a2, char a3)
{
  int v3; // edi
  __int64 v4; // r14
  struct _RTL_CRITICAL_SECTION *v5; // rbx
  __int64 **v7; // rcx
  __int64 v8; // r15
  __int64 v9; // r12
  unsigned int v10; // r13d
  enum AudioSessionDisconnectReason v11; // r15d
  int v12; // edi
  int v13; // edi
  int v14; // edi
  int v15; // edi
  struct _RTL_CRITICAL_SECTION *v16; // kr00_8
  ATL::CAtlException *v17; // rbx
  int *v18; // rbx
  _QWORD v19[2]; // [rsp+20h] [rbp-98h] BYREF
  ATL::CAtlException *v20; // [rsp+30h] [rbp-88h] BYREF
  ATL::CAtlException *v21; // [rsp+38h] [rbp-80h] BYREF
  void (__fastcall **v22[2])(_QWORD, volatile signed __int32 **); // [rsp+40h] [rbp-78h] BYREF
  int v23; // [rsp+50h] [rbp-68h]
  void *v24[3]; // [rsp+58h] [rbp-60h] BYREF
  int v25; // [rsp+70h] [rbp-48h]
  int v29; // [rsp+D8h] [rbp+20h]

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
    v7 = (__int64 **)(v4 + 80);
    if ( !*(_QWORD *)(v4 + 88) )
      ATL::AtlThrowImpl(-2147024809);
    v8 = **v7;
    v19[0] = v8;
    try
    {
      ATL::CAtlArray<CAudioSessionManager *,ATL::CElementTraits<CAudioSessionManager *>>::RemoveAt(v7, 0LL);
    }
    catch ( ATL::CAtlException *v20 )
    {
      v16 = v5;
      v17 = v20;
      if ( *(_DWORD *)v20 == -1073741571 )
        _resetstkoflw();
      v29 = *(_DWORD *)v17;
      v5 = v16;
      v4 = a1;
      v3 = a2;
      if ( v29 < 0 )
        goto LABEL_7;
      v8 = v19[0];
    }
    try
    {
      ATL::CAtlArray<CAudioStream *,ATL::CElementTraits<CAudioStream *>>::Add(v24, v19);
    }
    catch ( ATL::CAtlException *v21 )
    {
      v18 = (int *)v21;
      if ( *(_DWORD *)v21 == -1073741571 )
        _resetstkoflw();
      v4 = a1;
      v3 = a2;
      if ( *v18 >= 0 )
      {
        v8 = v19[0];
        goto LABEL_15;
      }
LABEL_16:
      *(_DWORD *)(v4 + 328) = 0;
      LeaveCriticalSection((LPCRITICAL_SECTION)(v4 + 32));
      v9 = v4 - 16;
      v10 = CAudioSession::DisconnectStreamList(v4 - 16, v24);
      v11 = DisconnectReasonServerShutdown;
      if ( *(_DWORD *)(v4 + 456) == 1 )
        (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v9 + 88LL))(v4 - 16, 0LL);
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 8LL))(v4 - 16);
      v22[0] = (void (__fastcall **)(_QWORD, volatile signed __int32 **))&CAudioSessionDisconnected::`vftable';
      v22[1] = (void (__fastcall **)(_QWORD, volatile signed __int32 **))(v4 - 16);
      v23 = v3;
      CLockedList<ATL::CComPtr<ISessionInternalEvents>,0,0>::ForEachEntry((LPCRITICAL_SECTION)(v4 + 608), v22);
      if ( a3 )
      {
        if ( v3 )
        {
          v12 = v3 - 1;
          if ( v12 )
          {
            v13 = v12 - 1;
            if ( v13 )
            {
              v14 = v13 - 1;
              if ( v14 )
              {
                v15 = v14 - 1;
                if ( v15 )
                {
                  if ( v15 == 1 )
                    v11 = DisconnectReasonExclusiveModeOverride;
                }
                else
                {
                  v11 = DisconnectReasonSessionDisconnected;
                }
              }
              else
              {
                v11 = DisconnectReasonSessionLogoff;
              }
            }
            else
            {
              v11 = DisconnectReasonFormatChanged;
            }
          }
        }
        else
        {
          v11 = DisconnectReasonDeviceRemoval;
        }
        CAudioSession::NotifyClientOfDisconnection((CAudioSession *)(v4 - 16), v11);
      }
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v4 - 16);
      ATL::CAtlArray<CAudioStream *,ATL::CElementTraits<CAudioStream *>>::~CAtlArray<CAudioStream *,ATL::CElementTraits<CAudioStream *>>(v24);
      return v10;
    }
LABEL_15:
    v5 = *(struct _RTL_CRITICAL_SECTION **)(*(_QWORD *)v8 + 64LL);
    ((void (__fastcall *)(__int64))v5)(v8);
    --*(_DWORD *)(v4 + 72);
LABEL_7:
    if ( !*(_QWORD *)(v4 + 88) )
      goto LABEL_16;
  }
}
