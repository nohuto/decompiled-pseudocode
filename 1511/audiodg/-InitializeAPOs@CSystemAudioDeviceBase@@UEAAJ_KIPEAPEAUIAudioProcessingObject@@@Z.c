/*
 * XREFs of ?InitializeAPOs@CSystemAudioDeviceBase@@UEAAJ_KIPEAPEAUIAudioProcessingObject@@@Z @ 0x140005000
 * Callers:
 *     ?ConfigureAPOInterfaces@CPipeInstance@@AEAAJPEAUIAudioGraphCallback@@@Z @ 0x14000C380 (-ConfigureAPOInterfaces@CPipeInstance@@AEAAJPEAUIAudioGraphCallback@@@Z.c)
 * Callees:
 *     ?InnerInitializeAPO@CSystemAudioDeviceSharedBase@@MEAAJ_KIPEAPEAUIAudioProcessingObject@@@Z @ 0x140006350 (-InnerInitializeAPO@CSystemAudioDeviceSharedBase@@MEAAJ_KIPEAPEAUIAudioProcessingObject@@@Z.c)
 *     ??1?$CComObjectRootEx@VCComMultiThreadModelNoCS@ATL@@@ATL@@QEAA@XZ @ 0x140026C60 (--1-$CComObjectRootEx@VCComMultiThreadModelNoCS@ATL@@@ATL@@QEAA@XZ.c)
 */

__int64 __fastcall CSystemAudioDeviceBase::InitializeAPOs(
        CSystemAudioDeviceBase *this,
        unsigned __int64 a2,
        unsigned int a3,
        struct IAudioProcessingObject **a4)
{
  __int64 (__fastcall *v4)(CSystemAudioDeviceSharedBase *__hidden, unsigned __int64, unsigned int, struct IAudioProcessingObject **); // rdi

  v4 = *(__int64 (__fastcall **)(CSystemAudioDeviceSharedBase *__hidden, unsigned __int64, unsigned int, struct IAudioProcessingObject **))(*((_QWORD *)this - 1) + 192LL);
  if ( v4 == CSystemAudioDeviceSharedBase::InnerInitializeAPO )
    return CSystemAudioDeviceSharedBase::InnerInitializeAPO((CSystemAudioDeviceBase *)((char *)this - 8), a2, a3, a4);
  else
    return v4((CSystemAudioDeviceBase *)((char *)this - 8), a2, a3, a4);
}
