/*
 * XREFs of ??_GCStreamInstance@@QEAAPEAXI@Z @ 0x140029858
 * Callers:
 *     ?Cleanup@CSystemAudioDeviceBase@@MEAAXXZ @ 0x140010E70 (-Cleanup@CSystemAudioDeviceBase@@MEAAXXZ.c)
 *     ?CreateStream@CSystemAudioDeviceShared@@UEAAJPEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@PEAUAUDIO_DEVICE_MODE_DESCRIPTOR@@PEAUIAudioGraphCallback@@PEAUSYSTEM_AUDIO_STREAM@@@Z @ 0x14002C340 (-CreateStream@CSystemAudioDeviceShared@@UEAAJPEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@PEAUAUDIO_DEVIC.c)
 *     ?DestroyStream@CSystemAudioDeviceShared@@UEAAJ_K@Z @ 0x14002C520 (-DestroyStream@CSystemAudioDeviceShared@@UEAAJ_K@Z.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x140018AB8 (--3@YAXPEAX@Z.c)
 *     ??1?$CComObjectRootEx@VCComMultiThreadModelNoCS@ATL@@@ATL@@QEAA@XZ @ 0x140026C00 (--1-$CComObjectRootEx@VCComMultiThreadModelNoCS@ATL@@@ATL@@QEAA@XZ.c)
 */

CStreamInstance *__fastcall CStreamInstance::`scalar deleting destructor'(CStreamInstance *this)
{
  __int64 v2; // rsi

  if ( *(_QWORD *)this )
    (*(void (__fastcall **)(_QWORD))(**(_QWORD **)this + 16LL))(*(_QWORD *)this);
  v2 = *((_QWORD *)this + 1);
  if ( v2 )
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v2 + 16LL))(*((_QWORD *)this + 1));
  operator delete(this);
  return this;
}
