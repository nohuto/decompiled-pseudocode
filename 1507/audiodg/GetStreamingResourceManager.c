/*
 * XREFs of GetStreamingResourceManager @ 0x14000DCC0
 * Callers:
 *     ?DestroyStream@CStreamGroup@@UEAAJ_K@Z @ 0x140011E00 (-DestroyStream@CStreamGroup@@UEAAJ_K@Z.c)
 *     ?ConnectToSaDevice@CStreamInstanceNew@@QEAAJPEAUISaDeviceInternal@@PEBVCPipeInstance@@_J@Z @ 0x140014150 (-ConnectToSaDevice@CStreamInstanceNew@@QEAAJPEAUISaDeviceInternal@@PEBVCPipeInstance@@_J@Z.c)
 *     ?DisconnectFromSaDevice@CStreamInstanceNew@@QEAAJPEAUISaDeviceInternal@@@Z @ 0x140034354 (-DisconnectFromSaDevice@CStreamInstanceNew@@QEAAJPEAUISaDeviceInternal@@@Z.c)
 * Callees:
 *     ?QueryInterface@?$CComObject@VCSystemAudioDeviceOffload@@@ATL@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1400013E0 (-QueryInterface@-$CComObject@VCSystemAudioDeviceOffload@@@ATL@@UEAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?GetStreamingResourceManager@CSystemAudioDeviceSharedNew@@UEAAJPEAPEAUIAudioStreamingResourceRegistration@@@Z @ 0x14000DE50 (-GetStreamingResourceManager@CSystemAudioDeviceSharedNew@@UEAAJPEAPEAUIAudioStreamingResourceReg.c)
 *     ?QueryInterface@?$CComObject@VCSystemAudioDeviceSharedNew@@@ATL@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x140013B70 (-QueryInterface@-$CComObject@VCSystemAudioDeviceSharedNew@@@ATL@@UEAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ??1?$CComObjectRootEx@VCComMultiThreadModelNoCS@ATL@@@ATL@@QEAA@XZ @ 0x140026C00 (--1-$CComObjectRootEx@VCComMultiThreadModelNoCS@ATL@@@ATL@@QEAA@XZ.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall GetStreamingResourceManager(
        __int64 (__fastcall ***a1)(void *a1, const struct _GUID *a2, void **a3),
        struct IAudioStreamingResourceRegistration **a2)
{
  unsigned int v3; // esi
  CSystemAudioDeviceSharedNew *v4; // rbx
  __int64 (__fastcall *v5)(void *, const struct _GUID *, void **); // rbx
  int (*v6)(CSystemAudioDeviceSharedNew *__hidden, struct IAudioStreamingResourceRegistration **); // rdi
  int StreamingResourceManager; // eax
  CSystemAudioDeviceSharedNew *v9; // [rsp+40h] [rbp+8h] BYREF

  v3 = -2147467262;
  v4 = 0LL;
  *a2 = 0LL;
  v9 = 0LL;
  if ( a1 )
  {
    v5 = **a1;
    if ( (char *)v5 == (char *)ATL::CComObject<CSystemAudioDeviceSharedNew>::QueryInterface )
    {
      ATL::CComObject<CSystemAudioDeviceSharedNew>::QueryInterface(a1, &GUID_f023913b_e06a_4278_a498_925381e3c23a, &v9);
    }
    else if ( v5 == ATL::CComObject<CSystemAudioDeviceOffload>::QueryInterface )
    {
      ATL::CComObject<CSystemAudioDeviceOffload>::QueryInterface(
        a1,
        &GUID_f023913b_e06a_4278_a498_925381e3c23a,
        (void **)&v9);
    }
    else
    {
      v5(a1, &GUID_f023913b_e06a_4278_a498_925381e3c23a, (void **)&v9);
    }
    v4 = v9;
  }
  if ( v4 )
  {
    v6 = *(int (**)(CSystemAudioDeviceSharedNew *__hidden, struct IAudioStreamingResourceRegistration **))(*(_QWORD *)v4 + 128LL);
    if ( v6 == CSystemAudioDeviceSharedNew::GetStreamingResourceManager )
      StreamingResourceManager = CSystemAudioDeviceSharedNew::GetStreamingResourceManager(v4, a2);
    else
      StreamingResourceManager = ((__int64 (__fastcall *)(CSystemAudioDeviceSharedNew *, struct IAudioStreamingResourceRegistration **))v6)(
                                   v4,
                                   a2);
    v4 = v9;
    v3 = StreamingResourceManager;
  }
  if ( v4 )
    (*(void (__fastcall **)(CSystemAudioDeviceSharedNew *))(*(_QWORD *)v4 + 16LL))(v4);
  return v3;
}
