/*
 * XREFs of ?CloseAudioHandle@CAudioStream@@QEAAJXZ @ 0x180020BA8
 * Callers:
 *     ?CreateStream@CVADServer@@UEAAJPEAUIAudioProcess@@W4SYSTEM_AUDIO_STREAM_TYPE@@_J2PEBU_GUID@@PEBGPEAUSYSTEM_AUDIO_STREAM@@@Z @ 0x180022650 (-CreateStream@CVADServer@@UEAAJPEAUIAudioProcess@@W4SYSTEM_AUDIO_STREAM_TYPE@@_J2PEBU_GUID@@PEBG.c)
 *     ?DisconnectStreamList@CAudioSession@@AEAAJPEAV?$CAtlArray@PEAVCAudioStream@@V?$CElementTraits@PEAVCAudioStream@@@ATL@@@ATL@@@Z @ 0x1800725C0 (-DisconnectStreamList@CAudioSession@@AEAAJPEAV-$CAtlArray@PEAVCAudioStream@@V-$CElementTraits@PE.c)
 * Callees:
 *     ??1WeakRef@WRL@Microsoft@@QEAA@XZ @ 0x180002254 (--1WeakRef@WRL@Microsoft@@QEAA@XZ.c)
 *     WPP_SF_D @ 0x180039528 (WPP_SF_D.c)
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x1800479B0 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 *     ?AtlComPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@@Z @ 0x180071BD4 (-AtlComPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@@Z.c)
 */

__int64 __fastcall CAudioStream::CloseAudioHandle(CAudioStream *this)
{
  struct IUnknown **v2; // rbx
  int v3; // esi
  __int64 v4; // rdi
  char *v5; // rcx

  if ( *((_DWORD *)this + 27) == 2 )
  {
    v2 = (struct IUnknown **)((char *)this + 152);
    if ( *((_QWORD *)this + 19) )
    {
      Microsoft::WRL::WeakRef::~WeakRef((CAudioStream *)((char *)this + 152));
      if ( *v2 )
        ATL::AtlComPtrAssign(v2, 0LL);
    }
    if ( *((_QWORD *)this + 20) )
    {
      Microsoft::WRL::WeakRef::~WeakRef((CAudioStream *)((char *)this + 160));
      if ( *((_QWORD *)this + 20) )
        ATL::AtlComPtrAssign((struct IUnknown **)this + 20, 0LL);
    }
    if ( *((_QWORD *)this + 21) )
    {
      Microsoft::WRL::WeakRef::~WeakRef((CAudioStream *)((char *)this + 168));
      if ( *((_QWORD *)this + 21) )
        ATL::AtlComPtrAssign((struct IUnknown **)this + 21, 0LL);
    }
  }
  v3 = (*(__int64 (__fastcall **)(CAudioResourceManager *, _QWORD, char *))(*(_QWORD *)g_AudioResourceManager + 32LL))(
         g_AudioResourceManager,
         *((_QWORD *)this + 7),
         (char *)this + 8);
  (*(void (__fastcall **)(_QWORD, __int64, __int64, _QWORD))(**((_QWORD **)this + 7) + 192LL))(
    *((_QWORD *)this + 7),
    2LL,
    0xFFFFFFFFLL,
    *((unsigned int *)this + 47));
  v4 = *((_QWORD *)this + 7);
  if ( v4 )
  {
    *((_QWORD *)this + 7) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  }
  *((_QWORD *)this + 6) = 0LL;
  if ( v3 < 0
    && WPP_GLOBAL_Control != (TraceLoggingHProvider)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
  {
    WPP_SF_D(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      14LL,
      &WPP_2c8db717297dbf78a9a5be3fc6d4b938_Traceguids,
      (unsigned int)v3);
  }
  v5 = (char *)*((_QWORD *)this + 35);
  if ( (unsigned __int64)(v5 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
    SetEvent(v5);
  return (unsigned int)v3;
}
