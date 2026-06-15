/*
 * XREFs of GetStreamingResourceManager @ 0x1400054D0
 * Callers:
 *     ?DisconnectFromSaDevice@CStreamInstance@@QEAAJPEAUISaDeviceInternal@@@Z @ 0x140003378 (-DisconnectFromSaDevice@CStreamInstance@@QEAAJPEAUISaDeviceInternal@@@Z.c)
 *     ?ConnectToSaDevice@CStreamInstance@@QEAAJPEAUISaDeviceInternal@@PEBVCPipeInstance@@_J@Z @ 0x140003430 (-ConnectToSaDevice@CStreamInstance@@QEAAJPEAUISaDeviceInternal@@PEBVCPipeInstance@@_J@Z.c)
 *     ?DestroyStream@CStreamGroup@@UEAAJ_K@Z @ 0x140003DB0 (-DestroyStream@CStreamGroup@@UEAAJ_K@Z.c)
 * Callees:
 *     ?GetStreamingResourceManager@CSystemAudioDeviceSharedBase@@UEAAJPEAPEAUIAudioStreamingResourceRegistration@@@Z @ 0x140005630 (-GetStreamingResourceManager@CSystemAudioDeviceSharedBase@@UEAAJPEAPEAUIAudioStreamingResourceRe.c)
 *     ?QueryInterface@?$CComObject@VCSystemAudioDeviceShared@@@ATL@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x140008FE0 (-QueryInterface@-$CComObject@VCSystemAudioDeviceShared@@@ATL@@UEAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ??1?$CComObjectRootEx@VCComMultiThreadModelNoCS@ATL@@@ATL@@QEAA@XZ @ 0x140026C60 (--1-$CComObjectRootEx@VCComMultiThreadModelNoCS@ATL@@@ATL@@QEAA@XZ.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall GetStreamingResourceManager(
        void (__fastcall ***a1)(_QWORD, GUID *, CSystemAudioDeviceSharedBase **),
        struct IAudioStreamingResourceRegistration **a2)
{
  unsigned int v3; // esi
  CSystemAudioDeviceSharedBase *v4; // rbx
  void (__fastcall *v5)(_QWORD, GUID *, CSystemAudioDeviceSharedBase **); // rbx
  int (*v6)(CSystemAudioDeviceSharedBase *__hidden, struct IAudioStreamingResourceRegistration **); // rdi
  int StreamingResourceManager; // eax
  CSystemAudioDeviceSharedBase *v9; // [rsp+40h] [rbp+8h] BYREF

  v3 = -2147467262;
  v4 = 0LL;
  *a2 = 0LL;
  v9 = 0LL;
  if ( a1 )
  {
    v5 = **a1;
    if ( (char *)v5 == (char *)ATL::CComObject<CSystemAudioDeviceShared>::QueryInterface )
      ATL::CComObject<CSystemAudioDeviceShared>::QueryInterface(a1, &GUID_f023913b_e06a_4278_a498_925381e3c23a, &v9);
    else
      v5(a1, &GUID_f023913b_e06a_4278_a498_925381e3c23a, &v9);
    v4 = v9;
  }
  if ( v4 )
  {
    v6 = *(int (**)(CSystemAudioDeviceSharedBase *__hidden, struct IAudioStreamingResourceRegistration **))(*(_QWORD *)v4 + 128LL);
    if ( v6 == CSystemAudioDeviceSharedBase::GetStreamingResourceManager )
      StreamingResourceManager = CSystemAudioDeviceSharedBase::GetStreamingResourceManager(v4, a2);
    else
      StreamingResourceManager = ((__int64 (__fastcall *)(CSystemAudioDeviceSharedBase *, struct IAudioStreamingResourceRegistration **))v6)(
                                   v4,
                                   a2);
    v4 = v9;
    v3 = StreamingResourceManager;
  }
  if ( v4 )
    (*(void (__fastcall **)(CSystemAudioDeviceSharedBase *))(*(_QWORD *)v4 + 16LL))(v4);
  return v3;
}
