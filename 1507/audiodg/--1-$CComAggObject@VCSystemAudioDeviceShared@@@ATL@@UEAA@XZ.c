/*
 * XREFs of ??1?$CComAggObject@VCSystemAudioDeviceShared@@@ATL@@UEAA@XZ @ 0x14002BA68
 * Callers:
 *     ??_E?$CComAggObject@VCSystemAudioDeviceShared@@@ATL@@UEAAPEAXI@Z @ 0x14002BCE0 (--_E-$CComAggObject@VCSystemAudioDeviceShared@@@ATL@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??1?$CComObjectRootEx@VCComMultiThreadModelNoCS@ATL@@@ATL@@QEAA@XZ @ 0x140026C00 (--1-$CComObjectRootEx@VCComMultiThreadModelNoCS@ATL@@@ATL@@QEAA@XZ.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall ATL::CComAggObject<CSystemAudioDeviceShared>::~CComAggObject<CSystemAudioDeviceShared>(__int64 a1)
{
  *(_QWORD *)a1 = &ATL::CComAggObject<CSystemAudioDeviceShared>::`vftable';
  *(_DWORD *)(a1 + 8) = -1073741823;
  (*(void (__fastcall **)(CAudioDGModule *))(*(_QWORD *)ATL::_pAtlModule + 16LL))(ATL::_pAtlModule);
  CSystemAudioDeviceShared::~CSystemAudioDeviceShared((CSystemAudioDeviceShared *)(a1 + 24));
}
