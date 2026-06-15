/*
 * XREFs of ?SetAudioHandle@CAudioStream@@QEAAJ_KPEAUIAudioDeviceGraph@@0K@Z @ 0x1800667D8
 * Callers:
 *     ?RemoveStream@CAudioSession@@UEAAJPEAVCAudioStream@@_N@Z @ 0x18000F350 (-RemoveStream@CAudioSession@@UEAAJPEAVCAudioStream@@_N@Z.c)
 *     ?CreateStream@CVADServer@@UEAAJPEAUIAudioProcess@@W4SYSTEM_AUDIO_STREAM_TYPE@@_J2PEBU_GUID@@PEBGPEAUSYSTEM_AUDIO_STREAM@@@Z @ 0x180014990 (-CreateStream@CVADServer@@UEAAJPEAUIAudioProcess@@W4SYSTEM_AUDIO_STREAM_TYPE@@_J2PEBU_GUID@@PEBG.c)
 * Callees:
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x180043A70 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 *     ?RegisterStream@CAudioStream@@QEAAJXZ @ 0x1800824C0 (-RegisterStream@CAudioStream@@QEAAJXZ.c)
 */

__int64 __fastcall CAudioStream::SetAudioHandle(
        CAudioStream *this,
        __int64 a2,
        struct IAudioDeviceGraph *a3,
        __int64 a4,
        unsigned int a5)
{
  unsigned int v5; // edi
  __int64 v9; // r14

  v5 = 0;
  *((_QWORD *)this + 7) = a2;
  if ( g_UseNewGraphBuilder )
  {
    v9 = *((_QWORD *)this + 8);
    if ( v9 )
      (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v9 + 16LL))(*((_QWORD *)this + 8));
    *((_QWORD *)this + 8) = a4;
    if ( a4 )
    {
      *((_DWORD *)this + 49) = a5;
      return (unsigned int)(*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD, __int64))(*(_QWORD *)a4 + 168LL))(
                             a4,
                             0LL,
                             a5,
                             0xFFFFFFFFLL);
    }
  }
  else if ( a3 )
  {
    (*(void (__fastcall **)(struct IAudioDeviceGraph *))(*(_QWORD *)a3 + 8LL))(a3);
    *((_QWORD *)this + 6) = a3;
    return (unsigned int)CAudioStream::RegisterStream(this);
  }
  return v5;
}
