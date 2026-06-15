/*
 * XREFs of ??1?$CComAggObject@VCAudioDeviceGraph@@@ATL@@UEAA@XZ @ 0x140025BE8
 * Callers:
 *     ??_G?$CComAggObject@VCAudioDeviceGraph@@@ATL@@UEAAPEAXI@Z @ 0x140025CE0 (--_G-$CComAggObject@VCAudioDeviceGraph@@@ATL@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?FinalRelease@CAudioDeviceGraph@@QEAAXXZ @ 0x140007704 (-FinalRelease@CAudioDeviceGraph@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x140019620 (_guard_dispatch_icall_nop.c)
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
