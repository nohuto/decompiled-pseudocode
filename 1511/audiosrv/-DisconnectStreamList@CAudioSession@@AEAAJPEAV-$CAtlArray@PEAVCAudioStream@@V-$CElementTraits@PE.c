/*
 * XREFs of ?DisconnectStreamList@CAudioSession@@AEAAJPEAV?$CAtlArray@PEAVCAudioStream@@V?$CElementTraits@PEAVCAudioStream@@@ATL@@@ATL@@@Z @ 0x1800725C0
 * Callers:
 *     ?Disconnect@CAudioSession@@UEAAJW4AudioServerSessionDisconnectReason@@_N@Z @ 0x1800721B0 (-Disconnect@CAudioSession@@UEAAJW4AudioServerSessionDisconnectReason@@_N@Z.c)
 *     ?DisconnectStreamsForResource@CAudioSession@@UEAAJ_K@Z @ 0x180072AC0 (-DisconnectStreamsForResource@CAudioSession@@UEAAJ_K@Z.c)
 * Callees:
 *     ?ForEachEntry@?$CLockedList@V?$CComPtr@UISessionInternalEvents@@@ATL@@$0A@$0A@@@QEAAJAEAVCListWorker@1@@Z @ 0x180014FF0 (-ForEachEntry@-$CLockedList@V-$CComPtr@UISessionInternalEvents@@@ATL@@$0A@$0A@@@QEAAJAEAVCListWo.c)
 *     ?Unlock@CCritSecLock@ATL@@QEAAXXZ @ 0x18001F9E8 (-Unlock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ??0CCritSecLock@ATL@@QEAA@AEAU_RTL_CRITICAL_SECTION@@_N@Z @ 0x18001FA0C (--0CCritSecLock@ATL@@QEAA@AEAU_RTL_CRITICAL_SECTION@@_N@Z.c)
 *     ?CloseAudioHandle@CAudioStream@@QEAAJXZ @ 0x180020BA8 (-CloseAudioHandle@CAudioStream@@QEAAJXZ.c)
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x1800479B0 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 *     ?RemoveAt@?$CAtlArray@PEAVCAudioSessionManager@@V?$CElementTraits@PEAVCAudioSessionManager@@@ATL@@@ATL@@QEAAX_K0@Z @ 0x180065DF8 (-RemoveAt@-$CAtlArray@PEAVCAudioSessionManager@@V-$CElementTraits@PEAVCAudioSessionManager@@@ATL.c)
 *     ?Add@?$CAtlArray@PEAVCAudioStream@@V?$CElementTraits@PEAVCAudioStream@@@ATL@@@ATL@@QEAA_KAEBQEAVCAudioStream@@@Z @ 0x180065E90 (-Add@-$CAtlArray@PEAVCAudioStream@@V-$CElementTraits@PEAVCAudioStream@@@ATL@@@ATL@@QEAA_KAEBQEAV.c)
 *     ?RemoteDisconnect@CAudioStream@@QEAAJXZ @ 0x18007D90C (-RemoteDisconnect@CAudioStream@@QEAAJXZ.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CAudioSession::DisconnectStreamList(__int64 a1, __int64 **a2)
{
  __int64 **v2; // r15
  __int64 v3; // rsi
  int v4; // r14d
  __int64 v5; // rdi
  ATL::CAtlException *v9; // rbx
  ATL::CAtlException *v10; // rbx
  ATL::CAtlException *v11; // [rsp+30h] [rbp-68h] BYREF
  ATL::CAtlException *v12; // [rsp+38h] [rbp-60h] BYREF
  LPCRITICAL_SECTION v13; // [rsp+40h] [rbp-58h] BYREF
  char v14; // [rsp+48h] [rbp-50h]
  void (__fastcall **v15[2])(_QWORD, volatile signed __int32 **); // [rsp+50h] [rbp-48h] BYREF
  int v16; // [rsp+60h] [rbp-38h]
  int v17; // [rsp+64h] [rbp-34h]
  __int64 v18; // [rsp+68h] [rbp-30h]
  __int64 v25; // [rsp+B8h] [rbp+20h] BYREF

  v2 = a2;
  v3 = a1;
  v4 = 0;
  while ( v2[1] )
  {
    v5 = **v2;
    v25 = v5;
    v4 = 0;
    try
    {
      ATL::CAtlArray<CAudioSessionManager *,ATL::CElementTraits<CAudioSessionManager *>>::RemoveAt(v2, 0LL);
    }
    catch ( ATL::CAtlException *v11 )
    {
      v9 = v11;
      if ( *(_DWORD *)v11 == -1073741571 )
        _resetstkoflw();
      v3 = a1;
      v2 = a2;
      v4 = *(_DWORD *)v9;
      v5 = v25;
    }
    if ( *(_BYTE *)(v5 + 104) )
    {
      if ( *(_BYTE *)(v5 + 184) )
      {
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 8LL))(v3);
        v15[0] = (void (__fastcall **)(_QWORD, volatile signed __int32 **))&CAudioStreamStateChanged::`vftable';
        v15[1] = (void (__fastcall **)(_QWORD, volatile signed __int32 **))v3;
        v16 = 1;
        v17 = 0;
        v18 = v5;
        CLockedList<ATL::CComPtr<ISessionInternalEvents>,0,0>::ForEachEntry((LPCRITICAL_SECTION)(v3 + 624), v15);
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3);
      }
      CAudioStream::CloseAudioHandle((CAudioStream *)v5);
      *(_QWORD *)(v5 + 64) = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 72LL))(v5);
    }
    else
    {
      ATL::CCritSecLock::CCritSecLock((ATL::CCritSecLock *)&v13, (struct _RTL_CRITICAL_SECTION *)(v3 + 128));
      v4 = 0;
      try
      {
        ATL::CAtlArray<CAudioStream *,ATL::CElementTraits<CAudioStream *>>::Add((_QWORD *)(v3 + 168), &v25);
      }
      catch ( ATL::CAtlException *v12 )
      {
        v10 = v12;
        if ( *(_DWORD *)v12 == -1073741571 )
          _resetstkoflw();
        v3 = a1;
        v2 = a2;
        v4 = *(_DWORD *)v10;
        v5 = v25;
      }
      if ( v14 )
        ATL::CCritSecLock::Unlock(&v13);
      if ( v4 < 0 )
        return (unsigned int)v4;
      CAudioStream::RemoteDisconnect((CAudioStream *)v5);
    }
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 72LL))(v5);
  }
  return (unsigned int)v4;
}
