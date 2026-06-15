/*
 * XREFs of GetStreamingResourceManager @ 0x1400050F0
 * Callers:
 *     ?DisconnectFromSaDevice@CStreamInstance@@QEAAJPEAUISaDeviceInternal@@@Z @ 0x140001764 (-DisconnectFromSaDevice@CStreamInstance@@QEAAJPEAUISaDeviceInternal@@@Z.c)
 *     ?ConnectToSaDevice@CStreamInstance@@QEAAJPEAUISaDeviceInternal@@PEBVCPipeInstance@@_J@Z @ 0x140001810 (-ConnectToSaDevice@CStreamInstance@@QEAAJPEAUISaDeviceInternal@@PEBVCPipeInstance@@_J@Z.c)
 *     ?DestroyStream@CStreamGroup@@UEAAJ_K@Z @ 0x140002530 (-DestroyStream@CStreamGroup@@UEAAJ_K@Z.c)
 * Callees:
 *     ?GetStreamingResourceManager@CSystemAudioDeviceSharedBase@@UEAAJPEAPEAUIAudioStreamingResourceRegistration@@@Z @ 0x140005210 (-GetStreamingResourceManager@CSystemAudioDeviceSharedBase@@UEAAJPEAPEAUIAudioStreamingResourceRe.c)
 *     ?QueryInterface@?$CComObject@VCSystemAudioDeviceShared@@@ATL@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x140011450 (-QueryInterface@-$CComObject@VCSystemAudioDeviceShared@@@ATL@@UEAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x140019620 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall GetStreamingResourceManager(
        void (__fastcall ***a1)(_QWORD, GUID *, CSystemAudioDeviceSharedBase **),
        struct IAudioStreamingResourceRegistration **a2)
{
  unsigned int v4; // ebx
  CSystemAudioDeviceSharedBase *v5; // rcx
  int (*v6)(CSystemAudioDeviceSharedBase *__hidden, struct IAudioStreamingResourceRegistration **); // rax
  int StreamingResourceManager; // eax
  CSystemAudioDeviceSharedBase *v9; // [rsp+40h] [rbp+8h] BYREF

  v4 = -2147467262;
  v5 = 0LL;
  *a2 = 0LL;
  v9 = 0LL;
  if ( a1 )
  {
    if ( (char *)**a1 == (char *)ATL::CComObject<CSystemAudioDeviceShared>::QueryInterface )
      ATL::CComObject<CSystemAudioDeviceShared>::QueryInterface(a1, &GUID_f023913b_e06a_4278_a498_925381e3c23a, &v9);
    else
      (**a1)(a1, &GUID_f023913b_e06a_4278_a498_925381e3c23a, &v9);
    v5 = v9;
  }
  if ( v5 )
  {
    v6 = *(int (**)(CSystemAudioDeviceSharedBase *__hidden, struct IAudioStreamingResourceRegistration **))(*(_QWORD *)v5 + 128LL);
    if ( v6 == CSystemAudioDeviceSharedBase::GetStreamingResourceManager )
      StreamingResourceManager = CSystemAudioDeviceSharedBase::GetStreamingResourceManager(v5, a2);
    else
      StreamingResourceManager = ((__int64 (__fastcall *)(CSystemAudioDeviceSharedBase *, struct IAudioStreamingResourceRegistration **))v6)(
                                   v5,
                                   a2);
    v5 = v9;
    v4 = StreamingResourceManager;
  }
  if ( v5 )
    (*(void (__fastcall **)(CSystemAudioDeviceSharedBase *))(*(_QWORD *)v5 + 16LL))(v5);
  return v4;
}
