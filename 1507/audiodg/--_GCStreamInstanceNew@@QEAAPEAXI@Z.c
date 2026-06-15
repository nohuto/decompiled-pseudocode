/*
 * XREFs of ??_GCStreamInstanceNew@@QEAAPEAXI@Z @ 0x14002681C
 * Callers:
 *     ?CreateStream@CStreamGroup@@UEAAJPEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@PEAUIAudioGraphCallback@@PEAUSYSTEM_AUDIO_STREAM@@@Z @ 0x140011FB0 (-CreateStream@CStreamGroup@@UEAAJPEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@PEAUIAudioGraphCallback@@PE.c)
 *     ??1CStreamGroup@@QEAA@XZ @ 0x140012810 (--1CStreamGroup@@QEAA@XZ.c)
 *     ??1?$CAutoPtr@VCStreamInstanceNew@@@ATL@@QEAA@XZ @ 0x140026A50 (--1-$CAutoPtr@VCStreamInstanceNew@@@ATL@@QEAA@XZ.c)
 * Callees:
 *     ?Free@?$CAutoPtr@VCPipeInstance@@@ATL@@QEAAXXZ @ 0x14001893C (-Free@-$CAutoPtr@VCPipeInstance@@@ATL@@QEAAXXZ.c)
 *     ??3@YAXPEAX@Z @ 0x140018AB8 (--3@YAXPEAX@Z.c)
 *     ??1?$CComObjectRootEx@VCComMultiThreadModelNoCS@ATL@@@ATL@@QEAA@XZ @ 0x140026C00 (--1-$CComObjectRootEx@VCComMultiThreadModelNoCS@ATL@@@ATL@@QEAA@XZ.c)
 */

CStreamInstanceNew *__fastcall CStreamInstanceNew::`scalar deleting destructor'(CStreamInstanceNew *this)
{
  void *v2; // rcx
  __int64 v3; // rsi
  __int64 v4; // rsi

  v2 = (void *)*((_QWORD *)this + 5);
  if ( v2 )
  {
    CloseHandle(v2);
    *((_QWORD *)this + 5) = 0LL;
  }
  v3 = *((_QWORD *)this + 4);
  if ( v3 )
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v3 + 16LL))(*((_QWORD *)this + 4));
  v4 = *((_QWORD *)this + 3);
  if ( v4 )
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v4 + 16LL))(*((_QWORD *)this + 3));
  ATL::CAutoPtr<CPipeInstance>::Free((CPipeInstance **)this);
  operator delete(this);
  return this;
}
