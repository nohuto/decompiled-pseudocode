/*
 * XREFs of ?CloseAudioHandle@CAudioStream@@QEAAJXZ @ 0x18001E630
 * Callers:
 *     ?RemoveStream@CAudioSession@@UEAAJPEAVCAudioStream@@_N@Z @ 0x18000F350 (-RemoveStream@CAudioSession@@UEAAJPEAVCAudioStream@@_N@Z.c)
 *     ?CreateStream@CVADServer@@UEAAJPEAUIAudioProcess@@W4SYSTEM_AUDIO_STREAM_TYPE@@_J2PEBU_GUID@@PEBGPEAUSYSTEM_AUDIO_STREAM@@@Z @ 0x180014990 (-CreateStream@CVADServer@@UEAAJPEAUIAudioProcess@@W4SYSTEM_AUDIO_STREAM_TYPE@@_J2PEBU_GUID@@PEBG.c)
 *     ?DisconnectStreamList@CAudioSession@@AEAAJPEAV?$CAtlArray@PEAVCAudioStream@@V?$CElementTraits@PEAVCAudioStream@@@ATL@@@ATL@@@Z @ 0x180077940 (-DisconnectStreamList@CAudioSession@@AEAAJPEAV-$CAtlArray@PEAVCAudioStream@@V-$CElementTraits@PE.c)
 * Callees:
 *     ?Release@?$CComPtrBase@UIAudioMeter@@@ATL@@QEAAXXZ @ 0x180001A70 (-Release@-$CComPtrBase@UIAudioMeter@@@ATL@@QEAAXXZ.c)
 *     ?DestroyStream@CAudioResourceManager@@UEAAJPEAUIStreamGroupProxy@@PEAUIAudioStreamInfo@@@Z @ 0x1800250A0 (-DestroyStream@CAudioResourceManager@@UEAAJPEAUIStreamGroupProxy@@PEAUIAudioStreamInfo@@@Z.c)
 *     ?UpdateStreamResourcePriority@CBaseStreamGroupProxy@@UEAAJW4_ResourcePriorityAction@@KK@Z @ 0x1800266A0 (-UpdateStreamResourcePriority@CBaseStreamGroupProxy@@UEAAJW4_ResourcePriorityAction@@KK@Z.c)
 *     WPP_SF_D @ 0x180031934 (WPP_SF_D.c)
 *     ?AtlComPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@@Z @ 0x1800342D0 (-AtlComPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@@Z.c)
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x180043A70 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 *     ?Release@?$CComPtrBase@UIPart@@@ATL@@QEAAXXZ @ 0x180068230 (-Release@-$CComPtrBase@UIPart@@@ATL@@QEAAXXZ.c)
 *     ?ReleaseSaDevice@CAudioStream@@SAXPEAUIAudioDeviceGraph@@@Z @ 0x1800826BC (-ReleaseSaDevice@CAudioStream@@SAXPEAUIAudioDeviceGraph@@@Z.c)
 *     ?UnregisterStream@CAudioStream@@QEAAJXZ @ 0x180082C18 (-UnregisterStream@CAudioStream@@QEAAJXZ.c)
 */

__int64 __fastcall CAudioStream::CloseAudioHandle(CAudioStream *this)
{
  struct IAudioStreamInfo *v2; // rbx
  int (*v3)(CAudioResourceManager *__hidden, struct IStreamGroupProxy *, struct IAudioStreamInfo *); // rbp
  int v4; // eax
  int v5; // edi
  unsigned int v6; // r14d
  void (__fastcall *v7)(_QWORD, __int64, __int64, _QWORD); // rbp
  __int64 v8; // r14
  char *v9; // rcx

  if ( g_UseNewGraphBuilder )
  {
    if ( this )
      v2 = (CAudioStream *)((char *)this + 8);
    else
      v2 = 0LL;
    v3 = *(int (**)(CAudioResourceManager *__hidden, struct IStreamGroupProxy *, struct IAudioStreamInfo *))(*(_QWORD *)g_AudioResourceManager + 32LL);
    if ( v3 == CAudioResourceManager::DestroyStream )
      v4 = CAudioResourceManager::DestroyStream(g_AudioResourceManager, *((struct IStreamGroupProxy **)this + 8), v2);
    else
      v4 = ((__int64 (__fastcall *)(CAudioResourceManager *, _QWORD, struct IAudioStreamInfo *))v3)(
             g_AudioResourceManager,
             *((_QWORD *)this + 8),
             v2);
    v5 = v4;
    v6 = *((_DWORD *)this + 49);
    v7 = *(void (__fastcall **)(_QWORD, __int64, __int64, _QWORD))(**((_QWORD **)this + 8) + 168LL);
    if ( (char *)v7 == (char *)CBaseStreamGroupProxy::UpdateStreamResourcePriority )
      CBaseStreamGroupProxy::UpdateStreamResourcePriority(*((_QWORD *)this + 8), 2LL, 0xFFFFFFFFLL, v6);
    else
      v7(*((_QWORD *)this + 8), 2LL, 0xFFFFFFFFLL, v6);
    v8 = *((_QWORD *)this + 8);
    if ( v8 )
    {
      *((_QWORD *)this + 8) = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
    }
  }
  else
  {
    v5 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)this + 6) + 56LL))(
           *((_QWORD *)this + 6),
           *((_QWORD *)this + 7));
  }
  *((_QWORD *)this + 7) = 0LL;
  if ( *((_DWORD *)this + 29) == 2 )
  {
    if ( *((_QWORD *)this + 20) )
    {
      ATL::CComPtrBase<IPart>::Release((char *)this + 160);
      if ( *((_QWORD *)this + 20) )
        ATL::AtlComPtrAssign((struct IUnknown **)this + 20, 0LL);
    }
    if ( *((_QWORD *)this + 21) )
    {
      ATL::CComPtrBase<IPart>::Release((char *)this + 168);
      if ( *((_QWORD *)this + 21) )
        ATL::AtlComPtrAssign((struct IUnknown **)this + 21, 0LL);
    }
    if ( *((_QWORD *)this + 22) )
    {
      ATL::CComPtrBase<IAudioMeter>::Release((__int64 *)this + 22);
      if ( *((_QWORD *)this + 22) )
        ATL::AtlComPtrAssign((struct IUnknown **)this + 22, 0LL);
    }
  }
  if ( !g_UseNewGraphBuilder )
  {
    CAudioStream::UnregisterStream(this);
    CAudioStream::ReleaseSaDevice(*((struct IAudioDeviceGraph **)this + 6));
    *((_QWORD *)this + 6) = 0LL;
  }
  if ( v5 < 0
    && *(struct _GUID **)&WPP_GLOBAL_Control.Data1 != &WPP_GLOBAL_Control
    && (*(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 28LL) & 0x40) != 0
    && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 25LL) >= 2u )
  {
    WPP_SF_D(
      *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 16LL),
      19LL,
      &WPP_ac8bf37043f63ecae5504e787611946d_Traceguids,
      (unsigned int)v5);
  }
  v9 = (char *)*((_QWORD *)this + 36);
  if ( (unsigned __int64)(v9 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
    SetEvent(v9);
  return (unsigned int)v5;
}
