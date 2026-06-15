/*
 * XREFs of ?GetStreamingResourceManager@CSystemAudioDeviceSharedBase@@UEAAJPEAPEAUIAudioStreamingResourceRegistration@@@Z @ 0x140005630
 * Callers:
 *     GetStreamingResourceManager @ 0x1400054D0 (GetStreamingResourceManager.c)
 * Callees:
 *     ?QueryInterface@?$CComObject@VCAudioDeviceGraph@@@ATL@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x140006560 (-QueryInterface@-$CComObject@VCAudioDeviceGraph@@@ATL@@UEAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?GetStreamingResourceManager@CAudioDeviceGraph@@UEAAJPEAPEAUIAudioStreamingResourceRegistration@@@Z @ 0x140006D40 (-GetStreamingResourceManager@CAudioDeviceGraph@@UEAAJPEAPEAUIAudioStreamingResourceRegistration@.c)
 *     ??1?$CComObjectRootEx@VCComMultiThreadModelNoCS@ATL@@@ATL@@QEAA@XZ @ 0x140026C60 (--1-$CComObjectRootEx@VCComMultiThreadModelNoCS@ATL@@@ATL@@QEAA@XZ.c)
 */

__int64 __fastcall CSystemAudioDeviceSharedBase::GetStreamingResourceManager(
        CSystemAudioDeviceSharedBase *this,
        struct IAudioStreamingResourceRegistration **a2)
{
  CAudioDeviceGraph *v2; // rbx
  void (__fastcall ***v4)(_QWORD, GUID *, CAudioDeviceGraph **); // rdi
  void (__fastcall *v5)(_QWORD, GUID *, CAudioDeviceGraph **); // rbx
  __int64 (__fastcall *v6)(CAudioDeviceGraph *__hidden, struct IAudioStreamingResourceRegistration **); // rdi
  unsigned int StreamingResourceManager; // eax
  unsigned int v8; // esi
  CAudioDeviceGraph *v10; // [rsp+30h] [rbp+8h] BYREF

  v2 = 0LL;
  *a2 = 0LL;
  v4 = (void (__fastcall ***)(_QWORD, GUID *, CAudioDeviceGraph **))*((_QWORD *)this + 3);
  v10 = 0LL;
  if ( v4 )
  {
    v5 = **v4;
    if ( (char *)v5 == (char *)ATL::CComObject<CAudioDeviceGraph>::QueryInterface )
      ATL::CComObject<CAudioDeviceGraph>::QueryInterface(v4, &GUID_0576b5aa_7951_4359_8e0c_367830add031, &v10);
    else
      v5(v4, &GUID_0576b5aa_7951_4359_8e0c_367830add031, &v10);
    v2 = v10;
  }
  v6 = *(__int64 (__fastcall **)(CAudioDeviceGraph *__hidden, struct IAudioStreamingResourceRegistration **))(*(_QWORD *)v2 + 88LL);
  if ( v6 == CAudioDeviceGraph::GetStreamingResourceManager )
    StreamingResourceManager = CAudioDeviceGraph::GetStreamingResourceManager(v2, a2);
  else
    StreamingResourceManager = v6(v2, a2);
  v8 = StreamingResourceManager;
  if ( v10 )
    (*(void (__fastcall **)(CAudioDeviceGraph *))(*(_QWORD *)v10 + 16LL))(v10);
  return v8;
}
