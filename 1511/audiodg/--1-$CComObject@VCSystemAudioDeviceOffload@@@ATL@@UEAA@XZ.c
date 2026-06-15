/*
 * XREFs of ??1?$CComObject@VCSystemAudioDeviceOffload@@@ATL@@UEAA@XZ @ 0x14002CFD0
 * Callers:
 *     ??_E?$CComObject@VCSystemAudioDeviceOffload@@@ATL@@UEAAPEAXI@Z @ 0x14002D2D0 (--_E-$CComObject@VCSystemAudioDeviceOffload@@@ATL@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??1?$CComObjectRootEx@VCComMultiThreadModelNoCS@ATL@@@ATL@@QEAA@XZ @ 0x140026C60 (--1-$CComObjectRootEx@VCComMultiThreadModelNoCS@ATL@@@ATL@@QEAA@XZ.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall ATL::CComObject<CSystemAudioDeviceOffload>::~CComObject<CSystemAudioDeviceOffload>(
        CSystemAudioDeviceOffload *this)
{
  *(_QWORD *)this = &ATL::CComObject<CSystemAudioDeviceOffload>::`vftable'{for `IAudioDeviceGraph'};
  *((_QWORD *)this + 1) = &ATL::CComObject<CSystemAudioDeviceOffload>::`vftable'{for `IAudioGraphCallback'};
  *((_QWORD *)this + 2) = &ATL::CComObject<CSystemAudioDeviceOffload>::`vftable'{for `IAudioProtectedOutput'};
  *((_QWORD *)this + 34) = &ATL::CComObject<CSystemAudioDeviceOffload>::`vftable'{for `IAudioVolume'};
  *((_QWORD *)this + 35) = &ATL::CComObject<CSystemAudioDeviceOffload>::`vftable'{for `IAudioMuteAPO'};
  *((_QWORD *)this + 36) = &ATL::CComObject<CSystemAudioDeviceOffload>::`vftable'{for `IAudioMeter'};
  *((_DWORD *)this + 74) = -1073741823;
  (*(void (__fastcall **)(CAudioDGModule *))(*(_QWORD *)ATL::_pAtlModule + 16LL))(ATL::_pAtlModule);
  CSystemAudioDeviceOffload::~CSystemAudioDeviceOffload(this);
}
