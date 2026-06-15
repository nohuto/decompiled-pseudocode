/*
 * XREFs of ?ReleaseClientReference@CAudioStream@@UEAAKXZ @ 0x18001FA60
 * Callers:
 *     ?DestroyStream@CVADServer@@UEAAJ_K@Z @ 0x180022060 (-DestroyStream@CVADServer@@UEAAJ_K@Z.c)
 *     ?CreateStream@CVADServer@@UEAAJPEAUIAudioProcess@@W4SYSTEM_AUDIO_STREAM_TYPE@@_J2PEBU_GUID@@PEBGPEAUSYSTEM_AUDIO_STREAM@@@Z @ 0x180022650 (-CreateStream@CVADServer@@UEAAJPEAUIAudioProcess@@W4SYSTEM_AUDIO_STREAM_TYPE@@_J2PEBU_GUID@@PEBG.c)
 *     ?FinalRelease@CVADServer@@QEAAXXZ @ 0x18002558C (-FinalRelease@CVADServer@@QEAAXXZ.c)
 *     ?RemoveStream@CAudioSession@@UEAAJPEAVCAudioStream@@_N@Z @ 0x1800265A0 (-RemoveStream@CAudioSession@@UEAAJPEAVCAudioStream@@_N@Z.c)
 *     ?AddStream@CAudioSession@@UEAAJPEAVCAudioStream@@@Z @ 0x1800270A0 (-AddStream@CAudioSession@@UEAAJPEAVCAudioStream@@@Z.c)
 * Callees:
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x1800479B0 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 *     WPP_SF_qD @ 0x180048AE8 (WPP_SF_qD.c)
 */

__int64 __fastcall CAudioStream::ReleaseClientReference(CAudioStream *this)
{
  unsigned __int32 v2; // ebp
  unsigned int (__fastcall *v3)(CAudioStream *__hidden); // rdi

  if ( WPP_GLOBAL_Control != (TraceLoggingHProvider)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x200000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_qD(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      16LL,
      &WPP_2c8db717297dbf78a9a5be3fc6d4b938_Traceguids,
      this,
      *((_DWORD *)this + 9));
  }
  v2 = _InterlockedDecrement((volatile signed __int32 *)this + 9);
  if ( !v2 )
    (*(void (__fastcall **)(char *))(*((_QWORD *)this + 2) + 32LL))((char *)this + 16);
  v3 = *(unsigned int (__fastcall **)(CAudioStream *__hidden))(*(_QWORD *)this + 16LL);
  if ( v3 != CAudioStream::Release )
  {
    v3(this);
    return v2;
  }
  if ( _InterlockedExchangeAdd((volatile signed __int32 *)this + 6, 0xFFFFFFFF) != 1 )
    return v2;
  (*(void (__fastcall **)(char *))(*((_QWORD *)this + 2) + 32LL))((char *)this + 16);
  (*(void (__fastcall **)(char *, __int64))(*((_QWORD *)this + 2) + 24LL))((char *)this + 16, 1LL);
  return v2;
}
