/*
 * XREFs of ?InitializeAPOs@CSystemAudioDeviceBase@@UEAAJ_KIPEAPEAUIAudioProcessingObject@@@Z @ 0x1400106D0
 * Callers:
 *     ?ConfigureAPOInterfaces@CPipeInstance@@AEAAJPEAUIAudioGraphCallback@@@Z @ 0x140004630 (-ConfigureAPOInterfaces@CPipeInstance@@AEAAJPEAUIAudioGraphCallback@@@Z.c)
 * Callees:
 *     ?InnerInitializeAPO@CSystemAudioDeviceSharedNew@@MEAAJ_KIPEAPEAUIAudioProcessingObject@@@Z @ 0x14000DDD0 (-InnerInitializeAPO@CSystemAudioDeviceSharedNew@@MEAAJ_KIPEAPEAUIAudioProcessingObject@@@Z.c)
 *     ??1?$CComObjectRootEx@VCComMultiThreadModelNoCS@ATL@@@ATL@@QEAA@XZ @ 0x140026C00 (--1-$CComObjectRootEx@VCComMultiThreadModelNoCS@ATL@@@ATL@@QEAA@XZ.c)
 */

__int64 __fastcall CSystemAudioDeviceBase::InitializeAPOs(
        CSystemAudioDeviceBase *this,
        __int64 a2,
        unsigned int a3,
        struct IAudioProcessingObject **a4)
{
  __int64 (__fastcall *v4)(CSystemAudioDeviceSharedNew *, __int64, unsigned int, struct IAudioProcessingObject **); // rdi

  v4 = *(__int64 (__fastcall **)(CSystemAudioDeviceSharedNew *, __int64, unsigned int, struct IAudioProcessingObject **))(*((_QWORD *)this - 1) + 176LL);
  if ( v4 == CSystemAudioDeviceSharedNew::InnerInitializeAPO )
    return CSystemAudioDeviceSharedNew::InnerInitializeAPO((CSystemAudioDeviceBase *)((char *)this - 8), a2, a3, a4);
  else
    return v4((CSystemAudioDeviceBase *)((char *)this - 8), a2, a3, a4);
}
