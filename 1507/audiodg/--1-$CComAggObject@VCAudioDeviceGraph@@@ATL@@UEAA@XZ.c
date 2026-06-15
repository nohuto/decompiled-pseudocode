/*
 * XREFs of ??1?$CComAggObject@VCAudioDeviceGraph@@@ATL@@UEAA@XZ @ 0x140026CC8
 * Callers:
 *     ??_G?$CComAggObject@VCAudioDeviceGraph@@@ATL@@UEAAPEAXI@Z @ 0x140026D60 (--_G-$CComAggObject@VCAudioDeviceGraph@@@ATL@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?FinalRelease@CAudioDeviceGraph@@QEAAXXZ @ 0x14001037C (-FinalRelease@CAudioDeviceGraph@@QEAAXXZ.c)
 *     ??1?$CComObjectRootEx@VCComMultiThreadModelNoCS@ATL@@@ATL@@QEAA@XZ @ 0x140026C00 (--1-$CComObjectRootEx@VCComMultiThreadModelNoCS@ATL@@@ATL@@QEAA@XZ.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall ATL::CComAggObject<CAudioDeviceGraph>::~CComAggObject<CAudioDeviceGraph>(_DWORD *a1)
{
  *(_QWORD *)a1 = &ATL::CComAggObject<CAudioDeviceGraph>::`vftable';
  a1[2] = -1073741823;
  CAudioDeviceGraph::FinalRelease((CAudioDeviceGraph *)a1);
  (*(void (__fastcall **)(CAudioDGModule *))(*(_QWORD *)ATL::_pAtlModule + 16LL))(ATL::_pAtlModule);
  CAudioDeviceGraph::~CAudioDeviceGraph((CAudioDeviceGraph *)(a1 + 6));
}
