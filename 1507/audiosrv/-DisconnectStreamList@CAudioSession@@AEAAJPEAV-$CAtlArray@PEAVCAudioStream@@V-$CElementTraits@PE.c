/*
 * XREFs of ?DisconnectStreamList@CAudioSession@@AEAAJPEAV?$CAtlArray@PEAVCAudioStream@@V?$CElementTraits@PEAVCAudioStream@@@ATL@@@ATL@@@Z @ 0x180077940
 * Callers:
 *     ?Disconnect@CAudioSession@@UEAAJW4AudioServerSessionDisconnectReason@@_N@Z @ 0x180077550 (-Disconnect@CAudioSession@@UEAAJW4AudioServerSessionDisconnectReason@@_N@Z.c)
 *     ?DisconnectStreamsForResource@CAudioSession@@UEAAJ_K@Z @ 0x180077DF0 (-DisconnectStreamsForResource@CAudioSession@@UEAAJ_K@Z.c)
 * Callees:
 *     ?ForEachEntry@?$CLockedList@V?$CComPtr@UISessionInternalEvents@@@ATL@@$0A@$0A@@@QEAAJAEAVCListWorker@1@@Z @ 0x180017B00 (-ForEachEntry@-$CLockedList@V-$CComPtr@UISessionInternalEvents@@@ATL@@$0A@$0A@@@QEAAJAEAVCListWo.c)
 *     ?Unlock@CCritSecLock@ATL@@QEAAXXZ @ 0x18001B220 (-Unlock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ??0CCritSecLock@ATL@@QEAA@AEAU_RTL_CRITICAL_SECTION@@_N@Z @ 0x18001B244 (--0CCritSecLock@ATL@@QEAA@AEAU_RTL_CRITICAL_SECTION@@_N@Z.c)
 *     ?CloseAudioHandle@CAudioStream@@QEAAJXZ @ 0x18001E630 (-CloseAudioHandle@CAudioStream@@QEAAJXZ.c)
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x180043A70 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 *     ?RemoveAt@?$CAtlArray@PEAVCAudioSessionManager@@V?$CElementTraits@PEAVCAudioSessionManager@@@ATL@@@ATL@@QEAAX_K0@Z @ 0x18006755C (-RemoveAt@-$CAtlArray@PEAVCAudioSessionManager@@V-$CElementTraits@PEAVCAudioSessionManager@@@ATL.c)
 *     ?Add@?$CAtlArray@PEAVCAudioStream@@V?$CElementTraits@PEAVCAudioStream@@@ATL@@@ATL@@QEAA_KAEBQEAVCAudioStream@@@Z @ 0x1800675F4 (-Add@-$CAtlArray@PEAVCAudioStream@@V-$CElementTraits@PEAVCAudioStream@@@ATL@@@ATL@@QEAA_KAEBQEAV.c)
 *     ?RemoteDisconnect@CAudioStream@@QEAAJXZ @ 0x1800827F4 (-RemoteDisconnect@CAudioStream@@QEAAJXZ.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CAudioSession::DisconnectStreamList(__int64 a1, __int64 **a2)
{
  void (__fastcall *v2)(_QWORD); // rbx
  __int64 **v3; // r15
  __int64 v4; // rsi
  int v5; // r14d
  __int64 v6; // rdi
  void (__fastcall *v8)(_QWORD); // kr00_8
  ATL::CAtlException *v9; // rbx
  void (__fastcall *v10)(_QWORD); // kr10_8
  ATL::CAtlException *v11; // rbx
  ATL::CAtlException *v12; // [rsp+28h] [rbp-70h] BYREF
  ATL::CAtlException *v13; // [rsp+30h] [rbp-68h] BYREF
  LPCRITICAL_SECTION v14; // [rsp+38h] [rbp-60h] BYREF
  char v15; // [rsp+40h] [rbp-58h]
  void (__fastcall **v16[2])(_QWORD, volatile signed __int32 **); // [rsp+48h] [rbp-50h] BYREF
  int v17; // [rsp+58h] [rbp-40h]
  int v18; // [rsp+5Ch] [rbp-3Ch]
  __int64 v19; // [rsp+60h] [rbp-38h]
  int v28; // [rsp+B0h] [rbp+18h]
  int v29; // [rsp+B0h] [rbp+18h]
  __int64 v30; // [rsp+B8h] [rbp+20h] BYREF

  v3 = a2;
  v4 = a1;
  v5 = 0;
  while ( v3[1] )
  {
    v6 = **v3;
    v30 = v6;
    v5 = 0;
    try
    {
      ATL::CAtlArray<CAudioSessionManager *,ATL::CElementTraits<CAudioSessionManager *>>::RemoveAt(v3, 0LL);
    }
    catch ( ATL::CAtlException *v12 )
    {
      v8 = v2;
      v9 = v12;
      if ( *(_DWORD *)v12 == -1073741571 )
        _resetstkoflw();
      v28 = *(_DWORD *)v9;
      v2 = v8;
      v4 = a1;
      v3 = a2;
      v5 = v28;
      v6 = v30;
    }
    if ( *(_BYTE *)(v6 + 112) )
    {
      if ( *(_BYTE *)(v6 + 192) )
      {
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 8LL))(v4);
        v16[0] = (void (__fastcall **)(_QWORD, volatile signed __int32 **))&CAudioStreamStateChanged::`vftable';
        v16[1] = (void (__fastcall **)(_QWORD, volatile signed __int32 **))v4;
        v17 = 1;
        v18 = 0;
        v19 = v6;
        CLockedList<ATL::CComPtr<ISessionInternalEvents>,0,0>::ForEachEntry((LPCRITICAL_SECTION)(v4 + 472), v16);
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
      }
      CAudioStream::CloseAudioHandle((CAudioStream *)v6);
      *(_QWORD *)(v6 + 72) = 0LL;
      v2 = *(void (__fastcall **)(_QWORD))(*(_QWORD *)v6 + 72LL);
      v2(v6);
    }
    else
    {
      ATL::CCritSecLock::CCritSecLock((ATL::CCritSecLock *)&v14, (struct _RTL_CRITICAL_SECTION *)(v4 + 128));
      v5 = 0;
      try
      {
        ATL::CAtlArray<CAudioStream *,ATL::CElementTraits<CAudioStream *>>::Add((_QWORD *)(v4 + 168), &v30);
      }
      catch ( ATL::CAtlException *v13 )
      {
        v10 = v2;
        v11 = v13;
        if ( *(_DWORD *)v13 == -1073741571 )
          _resetstkoflw();
        v29 = *(_DWORD *)v11;
        v2 = v10;
        v4 = a1;
        v3 = a2;
        v5 = v29;
        v6 = v30;
      }
      if ( v15 )
        ATL::CCritSecLock::Unlock(&v14);
      if ( v5 < 0 )
        return (unsigned int)v5;
      CAudioStream::RemoteDisconnect((CAudioStream *)v6);
    }
  }
  return (unsigned int)v5;
}
