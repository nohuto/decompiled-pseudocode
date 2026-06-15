/*
 * XREFs of ??1?$CComObject@VCSystemAudioDeviceOffloadGraph@@@ATL@@UEAA@XZ @ 0x14002E740
 * Callers:
 *     ??_E?$CComObject@VCSystemAudioDeviceOffloadGraph@@@ATL@@UEAAPEAXI@Z @ 0x14002EA20 (--_E-$CComObject@VCSystemAudioDeviceOffloadGraph@@@ATL@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??1?$CComObjectRootEx@VCComMultiThreadModelNoCS@ATL@@@ATL@@QEAA@XZ @ 0x140026C60 (--1-$CComObjectRootEx@VCComMultiThreadModelNoCS@ATL@@@ATL@@QEAA@XZ.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall ATL::CComObject<CSystemAudioDeviceOffloadGraph>::~CComObject<CSystemAudioDeviceOffloadGraph>(
        CSystemAudioDeviceOffloadGraph *this)
{
  *(_QWORD *)this = &ATL::CComObject<CSystemAudioDeviceOffloadGraph>::`vftable'{for `IAudioDeviceGraph'};
  *((_QWORD *)this + 1) = &ATL::CComObject<CSystemAudioDeviceOffloadGraph>::`vftable'{for `IAudioGraphCallback'};
  *((_QWORD *)this + 2) = &ATL::CComObject<CSystemAudioDeviceOffloadGraph>::`vftable'{for `IAudioProtectedOutput'};
  *((_QWORD *)this + 34) = &ATL::CComObject<CSystemAudioDeviceOffloadGraph>::`vftable'{for `ISaDeviceCallback'};
  *((_QWORD *)this + 35) = &ATL::CComObject<CSystemAudioDeviceOffloadGraph>::`vftable'{for `ISaDeviceInternal'};
  *((_QWORD *)this + 43) = &ATL::CComObject<CSystemAudioDeviceOffloadGraph>::`vftable'{for `IAudioVolume'};
  *((_QWORD *)this + 44) = &ATL::CComObject<CSystemAudioDeviceOffloadGraph>::`vftable'{for `IAudioMuteAPO'};
  *((_QWORD *)this + 45) = &ATL::CComObject<CSystemAudioDeviceOffloadGraph>::`vftable'{for `IAudioMeter'};
  *((_DWORD *)this + 92) = -1073741823;
  (*(void (__fastcall **)(CAudioDGModule *))(*(_QWORD *)ATL::_pAtlModule + 16LL))(ATL::_pAtlModule);
  CSystemAudioDeviceOffloadGraph::~CSystemAudioDeviceOffloadGraph(this);
}
