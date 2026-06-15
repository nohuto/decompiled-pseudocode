/*
 * XREFs of ?ReleaseClientReference@CAudioStream@@UEAAKXZ @ 0x18001D380
 * Callers:
 *     ?RemoveStream@CAudioSession@@UEAAJPEAVCAudioStream@@_N@Z @ 0x18000F350 (-RemoveStream@CAudioSession@@UEAAJPEAVCAudioStream@@_N@Z.c)
 *     ?DestroyStream@CVADServer@@UEAAJ_K@Z @ 0x180014540 (-DestroyStream@CVADServer@@UEAAJ_K@Z.c)
 *     ?CreateStream@CVADServer@@UEAAJPEAUIAudioProcess@@W4SYSTEM_AUDIO_STREAM_TYPE@@_J2PEBU_GUID@@PEBGPEAUSYSTEM_AUDIO_STREAM@@@Z @ 0x180014990 (-CreateStream@CVADServer@@UEAAJPEAUIAudioProcess@@W4SYSTEM_AUDIO_STREAM_TYPE@@_J2PEBU_GUID@@PEBG.c)
 *     ?FinalRelease@CVADServer@@QEAAXXZ @ 0x180016B88 (-FinalRelease@CVADServer@@QEAAXXZ.c)
 * Callees:
 *     ?FinalRelease@CPerStreamVolumeAudioStream@@EEAAXXZ @ 0x18002EFE0 (-FinalRelease@CPerStreamVolumeAudioStream@@EEAAXXZ.c)
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x180043A70 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 *     WPP_SF_qD @ 0x1800448E8 (WPP_SF_qD.c)
 */

__int64 __fastcall CAudioStream::ReleaseClientReference(CAudioStream *this)
{
  unsigned __int32 v2; // esi
  unsigned int (__fastcall *v3)(CAudioStream *__hidden); // rdi
  CPerStreamVolumeAudioStream *v4; // rdi
  void (__fastcall *v6)(CPerStreamVolumeAudioStream *__hidden); // rbp
  void (__fastcall *v7)(CPerStreamVolumeAudioStream *__hidden); // rbx

  if ( *(struct _GUID **)&WPP_GLOBAL_Control.Data1 != &WPP_GLOBAL_Control
    && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 28LL) & 0x200000) != 0
    && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 25LL) >= 4u )
  {
    WPP_SF_qD(
      *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 16LL),
      21LL,
      &WPP_ac8bf37043f63ecae5504e787611946d_Traceguids,
      this,
      *((_DWORD *)this + 9));
  }
  v2 = _InterlockedDecrement((volatile signed __int32 *)this + 9);
  if ( !v2 )
  {
    v6 = *(void (__fastcall **)(CPerStreamVolumeAudioStream *__hidden))(*((_QWORD *)this + 2) + 32LL);
    if ( v6 == CPerStreamVolumeAudioStream::FinalRelease )
      CPerStreamVolumeAudioStream::FinalRelease((CAudioStream *)((char *)this + 16));
    else
      v6((CAudioStream *)((char *)this + 16));
  }
  v3 = *(unsigned int (__fastcall **)(CAudioStream *__hidden))(*(_QWORD *)this + 16LL);
  if ( v3 == CAudioStream::Release )
  {
    v4 = (CAudioStream *)((char *)this + 16);
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)this + 6, 0xFFFFFFFF) == 1 )
    {
      v7 = *(void (__fastcall **)(CPerStreamVolumeAudioStream *__hidden))(*(_QWORD *)v4 + 32LL);
      if ( v7 == CPerStreamVolumeAudioStream::FinalRelease )
        CPerStreamVolumeAudioStream::FinalRelease(v4);
      else
        v7(v4);
      (*(void (__fastcall **)(CPerStreamVolumeAudioStream *, __int64))(*(_QWORD *)v4 + 24LL))(v4, 1LL);
    }
  }
  else
  {
    v3(this);
  }
  return v2;
}
