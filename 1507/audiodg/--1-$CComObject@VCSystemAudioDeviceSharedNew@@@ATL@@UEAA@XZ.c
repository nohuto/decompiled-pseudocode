/*
 * XREFs of ??1?$CComObject@VCSystemAudioDeviceSharedNew@@@ATL@@UEAA@XZ @ 0x140013C50
 * Callers:
 *     ??_G?$CComObject@VCSystemAudioDeviceSharedNew@@@ATL@@UEAAPEAXI@Z @ 0x140013B30 (--_G-$CComObject@VCSystemAudioDeviceSharedNew@@@ATL@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?Unlock@CAudioDGModule@@UEAAJXZ @ 0x140014630 (-Unlock@CAudioDGModule@@UEAAJXZ.c)
 *     ??1?$CComObjectRootEx@VCComMultiThreadModelNoCS@ATL@@@ATL@@QEAA@XZ @ 0x140026C00 (--1-$CComObjectRootEx@VCComMultiThreadModelNoCS@ATL@@@ATL@@QEAA@XZ.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall ATL::CComObject<CSystemAudioDeviceSharedNew>::~CComObject<CSystemAudioDeviceSharedNew>(
        CSystemAudioDeviceSharedNew *this)
{
  __int64 (__fastcall *v2)(CAudioDGModule *__hidden); // rsi

  *(_QWORD *)this = &ATL::CComObject<CSystemAudioDeviceSharedNew>::`vftable'{for `IAudioDeviceGraph'};
  *((_QWORD *)this + 1) = &ATL::CComObject<CSystemAudioDeviceSharedNew>::`vftable'{for `IAudioGraphCallback'};
  *((_QWORD *)this + 2) = &ATL::CComObject<CSystemAudioDeviceSharedNew>::`vftable'{for `IAudioProtectedOutput'};
  *((_QWORD *)this + 34) = &ATL::CComObject<CSystemAudioDeviceSharedNew>::`vftable'{for `ISaDeviceCallback'};
  *((_QWORD *)this + 35) = &ATL::CComObject<CSystemAudioDeviceSharedNew>::`vftable'{for `ISaDeviceInternal'};
  *((_DWORD *)this + 72) = -1073741823;
  v2 = *(__int64 (__fastcall **)(CAudioDGModule *__hidden))(*(_QWORD *)ATL::_pAtlModule + 16LL);
  if ( v2 == CAudioDGModule::Unlock )
    CAudioDGModule::Unlock(ATL::_pAtlModule);
  else
    v2(ATL::_pAtlModule);
  CSystemAudioDeviceSharedNew::~CSystemAudioDeviceSharedNew(this);
}
