/*
 * XREFs of ?AddClientReference@CAudioStream@@UEAAKXZ @ 0x18001DE50
 * Callers:
 *     ?AddStream@CAudioSession@@UEAAJPEAVCAudioStream@@@Z @ 0x18000F940 (-AddStream@CAudioSession@@UEAAJPEAVCAudioStream@@@Z.c)
 *     ?CreateStream@CVADServer@@UEAAJPEAUIAudioProcess@@W4SYSTEM_AUDIO_STREAM_TYPE@@_J2PEBU_GUID@@PEBGPEAUSYSTEM_AUDIO_STREAM@@@Z @ 0x180014990 (-CreateStream@CVADServer@@UEAAJPEAUIAudioProcess@@W4SYSTEM_AUDIO_STREAM_TYPE@@_J2PEBU_GUID@@PEBG.c)
 * Callees:
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x180043A70 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 *     WPP_SF_qD @ 0x1800448E8 (WPP_SF_qD.c)
 */

__int64 __fastcall CAudioStream::AddClientReference(CAudioStream *this)
{
  if ( *(struct _GUID **)&WPP_GLOBAL_Control.Data1 != &WPP_GLOBAL_Control
    && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 28LL) & 0x200000) != 0
    && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 25LL) >= 4u )
  {
    WPP_SF_qD(
      *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 16LL),
      20LL,
      &WPP_ac8bf37043f63ecae5504e787611946d_Traceguids,
      this,
      *((_DWORD *)this + 9));
  }
  (*(void (__fastcall **)(CAudioStream *))(*(_QWORD *)this + 8LL))(this);
  return (unsigned int)_InterlockedIncrement((volatile signed __int32 *)this + 9);
}
