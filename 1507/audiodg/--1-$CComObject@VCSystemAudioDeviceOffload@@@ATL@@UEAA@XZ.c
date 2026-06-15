/*
 * XREFs of ??1?$CComObject@VCSystemAudioDeviceOffload@@@ATL@@UEAA@XZ @ 0x1400014BC
 * Callers:
 *     ??_E?$CComObject@VCSystemAudioDeviceOffload@@@ATL@@UEAAPEAXI@Z @ 0x1400013A0 (--_E-$CComObject@VCSystemAudioDeviceOffload@@@ATL@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?Unlock@CAudioDGModule@@UEAAJXZ @ 0x140014630 (-Unlock@CAudioDGModule@@UEAAJXZ.c)
 *     ??1?$CComObjectRootEx@VCComMultiThreadModelNoCS@ATL@@@ATL@@QEAA@XZ @ 0x140026C00 (--1-$CComObjectRootEx@VCComMultiThreadModelNoCS@ATL@@@ATL@@QEAA@XZ.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall ATL::CComObject<CSystemAudioDeviceOffload>::~CComObject<CSystemAudioDeviceOffload>(
        CSystemAudioDeviceOffload *this)
{
  __int64 (__fastcall *v2)(CAudioDGModule *__hidden); // rsi

  *(_QWORD *)this = &ATL::CComObject<CSystemAudioDeviceOffload>::`vftable'{for `IAudioDeviceGraph'};
  *((_QWORD *)this + 1) = &ATL::CComObject<CSystemAudioDeviceOffload>::`vftable'{for `IAudioGraphCallback'};
  *((_QWORD *)this + 2) = &ATL::CComObject<CSystemAudioDeviceOffload>::`vftable'{for `IAudioProtectedOutput'};
  *((_QWORD *)this + 34) = &ATL::CComObject<CSystemAudioDeviceOffload>::`vftable'{for `IAudioVolume'};
  *((_QWORD *)this + 35) = &ATL::CComObject<CSystemAudioDeviceOffload>::`vftable'{for `IAudioMuteAPO'};
  *((_QWORD *)this + 36) = &ATL::CComObject<CSystemAudioDeviceOffload>::`vftable'{for `IAudioMeter'};
  *((_DWORD *)this + 74) = -1073741823;
  v2 = *(__int64 (__fastcall **)(CAudioDGModule *__hidden))(*(_QWORD *)ATL::_pAtlModule + 16LL);
  if ( v2 == CAudioDGModule::Unlock )
    CAudioDGModule::Unlock(ATL::_pAtlModule);
  else
    v2(ATL::_pAtlModule);
  CSystemAudioDeviceOffload::~CSystemAudioDeviceOffload(this);
}
