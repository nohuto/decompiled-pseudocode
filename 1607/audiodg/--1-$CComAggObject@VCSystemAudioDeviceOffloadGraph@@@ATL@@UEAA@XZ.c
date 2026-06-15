/*
 * XREFs of ??1?$CComAggObject@VCSystemAudioDeviceOffloadGraph@@@ATL@@UEAA@XZ @ 0x14002CFD4
 * Callers:
 *     ??_G?$CComAggObject@VCSystemAudioDeviceOffloadGraph@@@ATL@@UEAAPEAXI@Z @ 0x14002D260 (--_G-$CComAggObject@VCSystemAudioDeviceOffloadGraph@@@ATL@@UEAAPEAXI@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x140019620 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall ATL::CComAggObject<CSystemAudioDeviceOffloadGraph>::~CComAggObject<CSystemAudioDeviceOffloadGraph>(
        __int64 a1)
{
  *(_QWORD *)a1 = &ATL::CComAggObject<CSystemAudioDeviceOffloadGraph>::`vftable';
  *(_DWORD *)(a1 + 8) = -1073741823;
  (*(void (__fastcall **)(CAudioDGModule *))(*(_QWORD *)ATL::_pAtlModule + 16LL))(ATL::_pAtlModule);
  CSystemAudioDeviceOffloadGraph::~CSystemAudioDeviceOffloadGraph((CSystemAudioDeviceOffloadGraph *)(a1 + 24));
}
