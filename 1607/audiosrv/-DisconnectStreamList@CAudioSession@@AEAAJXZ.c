/*
 * XREFs of ?DisconnectStreamList@CAudioSession@@AEAAJXZ @ 0x18005ADCC
 * Callers:
 *     ?Disconnect@CAudioSession@@UEAAJW4AudioServerSessionDisconnectReason@@_N@Z @ 0x18005AA40 (-Disconnect@CAudioSession@@UEAAJW4AudioServerSessionDisconnectReason@@_N@Z.c)
 *     ?DisconnectStreams@CAudioSession@@UEAAJW4StreamDisconnect_StreamType@@@Z @ 0x18005B070 (-DisconnectStreams@CAudioSession@@UEAAJW4StreamDisconnect_StreamType@@@Z.c)
 *     ?DisconnectStreamsForResource@CAudioSession@@UEAAJ_K@Z @ 0x18005B2B0 (-DisconnectStreamsForResource@CAudioSession@@UEAAJ_K@Z.c)
 * Callees:
 *     ?ForEachEntry@?$CLockedList@V?$CComPtr@UISessionInternalEvents@@@ATL@@$0A@$0A@@@QEAAJAEAVCListWorker@1@@Z @ 0x18000E430 (-ForEachEntry@-$CLockedList@V-$CComPtr@UISessionInternalEvents@@@ATL@@$0A@$0A@@@QEAAJAEAVCListWo.c)
 *     ??0CAudioStreamStateChanged@@QEAA@PEAVCAudioSession@@W4_AudioStreamState@@1PEAVCAudioStream@@PEBG@Z @ 0x180010F2C (--0CAudioStreamStateChanged@@QEAA@PEAVCAudioSession@@W4_AudioStreamState@@1PEAVCAudioStream@@PEB.c)
 *     ??0CCritSecLock@ATL@@QEAA@AEAU_RTL_CRITICAL_SECTION@@_N@Z @ 0x180017B40 (--0CCritSecLock@ATL@@QEAA@AEAU_RTL_CRITICAL_SECTION@@_N@Z.c)
 *     ?Unlock@CCritSecLock@ATL@@QEAAXXZ @ 0x180017BA0 (-Unlock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x180038F30 (_guard_dispatch_icall_nop.c)
 *     ??1?$CAtlArray@PEAVCAudioStream@@V?$CElementTraits@PEAVCAudioStream@@@ATL@@@ATL@@QEAA@XZ @ 0x180050464 (--1-$CAtlArray@PEAVCAudioStream@@V-$CElementTraits@PEAVCAudioStream@@@ATL@@@ATL@@QEAA@XZ.c)
 *     ?RemoveAt@?$CAtlArray@PEAVCAudioSessionManager@@V?$CElementTraits@PEAVCAudioSessionManager@@@ATL@@@ATL@@QEAAX_K0@Z @ 0x180050484 (-RemoveAt@-$CAtlArray@PEAVCAudioSessionManager@@V-$CElementTraits@PEAVCAudioSessionManager@@@ATL.c)
 *     ?Add@?$CAtlArray@PEAVCAudioStream@@V?$CElementTraits@PEAVCAudioStream@@@ATL@@@ATL@@QEAA_KAEBQEAVCAudioStream@@@Z @ 0x180050510 (-Add@-$CAtlArray@PEAVCAudioStream@@V-$CElementTraits@PEAVCAudioStream@@@ATL@@@ATL@@QEAA_KAEBQEAV.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x180052240 (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 *     ?PrepareForDisconnect@CAudioStream@@QEAAJXZ @ 0x180064C58 (-PrepareForDisconnect@CAudioStream@@QEAAJXZ.c)
 *     ?RemoteDisconnect@CAudioStream@@QEAAJXZ @ 0x180064E58 (-RemoteDisconnect@CAudioStream@@QEAAJXZ.c)
 *     ?SendRemoteDisconnectionRequest@CAudioStream@@QEAAJXZ @ 0x180064FF0 (-SendRemoteDisconnectionRequest@CAudioStream@@QEAAJXZ.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CAudioSession::DisconnectStreamList(CAudioSession *this)
{
  CAudioSession *v1; // rbx
  unsigned int v2; // r14d
  __int64 v3; // rsi
  unsigned __int64 i; // rdi
  __int64 v5; // rcx
  CAudioStream *v6; // rdi
  void (__fastcall ***v7)(_QWORD, volatile signed __int32 **); // rax
  __int64 v8; // r8
  ATL::CAtlException *v10; // rbx
  ATL::CAtlException *v11; // rbx
  ATL::CAtlException *v12; // [rsp+38h] [rbp-70h] BYREF
  ATL::CAtlException *v13; // [rsp+40h] [rbp-68h] BYREF
  LPCRITICAL_SECTION v14; // [rsp+48h] [rbp-60h] BYREF
  char v15; // [rsp+50h] [rbp-58h]
  CAudioStream **v16; // [rsp+68h] [rbp-40h] BYREF
  __int64 v17; // [rsp+70h] [rbp-38h]
  __int64 v18; // [rsp+78h] [rbp-30h]
  int v19; // [rsp+80h] [rbp-28h]
  unsigned int v21; // [rsp+B8h] [rbp+10h]
  unsigned int v22; // [rsp+B8h] [rbp+10h]
  CAudioStream *v23; // [rsp+C0h] [rbp+18h]

  v1 = this;
  v2 = 0;
  v16 = 0LL;
  v3 = 0LL;
  v17 = 0LL;
  v18 = 0LL;
  v19 = 0;
  ATL::CCritSecLock::CCritSecLock((ATL::CCritSecLock *)&v14, (struct _RTL_CRITICAL_SECTION *)((char *)this + 128));
  for ( i = 0LL; i < *((_QWORD *)v1 + 22); ++i )
  {
    CAudioStream::PrepareForDisconnect(*(CAudioStream **)(*((_QWORD *)v1 + 21) + 8 * i));
    v2 = 0;
    try
    {
      if ( i >= *((_QWORD *)v1 + 22) )
        ATL::AtlThrowImpl(-2147024809);
      ATL::CAtlArray<CAudioStream *,ATL::CElementTraits<CAudioStream *>>::Add(
        &v16,
        (_QWORD *)(*((_QWORD *)v1 + 21) + 8 * i));
    }
    catch ( ATL::CAtlException *v12 )
    {
      v10 = v12;
      if ( *(_DWORD *)v12 == -1073741571 )
        _o__resetstkoflw();
      v21 = *(_DWORD *)v10;
      v1 = this;
      v2 = v21;
    }
    if ( i >= *((_QWORD *)v1 + 22) )
      ATL::AtlThrowImpl(-2147024809);
    v5 = *(_QWORD *)(*((_QWORD *)v1 + 21) + 8 * i);
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 64LL))(v5);
    v3 = v17;
  }
  if ( v15 )
    ATL::CCritSecLock::Unlock(&v14);
  while ( v3 )
  {
    v6 = *v16;
    v23 = *v16;
    v2 = 0;
    try
    {
      ATL::CAtlArray<CAudioSessionManager *,ATL::CElementTraits<CAudioSessionManager *>>::RemoveAt(&v16, 0LL);
    }
    catch ( ATL::CAtlException *v13 )
    {
      v11 = v13;
      if ( *(_DWORD *)v13 == -1073741571 )
        _o__resetstkoflw();
      v22 = *(_DWORD *)v11;
      v1 = this;
      v2 = v22;
      v6 = v23;
    }
    if ( *((_BYTE *)v6 + 120) )
    {
      if ( *((_BYTE *)v6 + 344) )
      {
        (*(void (__fastcall **)(CAudioSession *))(*(_QWORD *)v1 + 8LL))(v1);
        v7 = (void (__fastcall ***)(_QWORD, volatile signed __int32 **))CAudioStreamStateChanged::CAudioStreamStateChanged(
                                                                          (__int64)&v14,
                                                                          (__int64)v1,
                                                                          1,
                                                                          0,
                                                                          (__int64)v6,
                                                                          (__int64)L"CAudioSession::DisconnectStreamList");
        CLockedList<ATL::CComPtr<ISessionInternalEvents>,0,0>::ForEachEntry((LPCRITICAL_SECTION)((char *)v1 + 624), v7);
        (*(void (__fastcall **)(CAudioSession *))(*(_QWORD *)v1 + 16LL))(v1);
      }
      LOBYTE(v8) = 1;
      (*(void (__fastcall **)(CAudioSession *, CAudioStream *, __int64, _QWORD))(*(_QWORD *)v1 + 264LL))(
        v1,
        v6,
        v8,
        0LL);
      CAudioStream::SendRemoteDisconnectionRequest(v6);
    }
    else
    {
      CAudioStream::RemoteDisconnect(v6);
    }
    (*(void (__fastcall **)(CAudioStream *))(*(_QWORD *)v6 + 72LL))(v6);
    v3 = v17;
  }
  ATL::CAtlArray<CAudioStream *,ATL::CElementTraits<CAudioStream *>>::~CAtlArray<CAudioStream *,ATL::CElementTraits<CAudioStream *>>((void **)&v16);
  return v2;
}
