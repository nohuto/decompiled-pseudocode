/*
 * XREFs of ??1?$CComObject@VCAudioDeviceGraph@@@ATL@@UEAA@XZ @ 0x140005EE8
 * Callers:
 *     ??_G?$CComObject@VCAudioDeviceGraph@@@ATL@@UEAAPEAXI@Z @ 0x140005EB0 (--_G-$CComObject@VCAudioDeviceGraph@@@ATL@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?FinalRelease@CAudioDeviceGraph@@QEAAXXZ @ 0x140007704 (-FinalRelease@CAudioDeviceGraph@@QEAAXXZ.c)
 *     ?Unlock@CAudioDGModule@@UEAAJXZ @ 0x140011DC0 (-Unlock@CAudioDGModule@@UEAAJXZ.c)
 *     _guard_dispatch_icall_nop @ 0x140019620 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall ATL::CComObject<CAudioDeviceGraph>::~CComObject<CAudioDeviceGraph>(CAudioDeviceGraph *this)
{
  __int64 (__fastcall *v2)(CAudioDGModule *__hidden); // rax

  *(_QWORD *)this = &ATL::CComObject<CAudioDeviceGraph>::`vftable'{for `IAudioDeviceGraph'};
  *((_QWORD *)this + 1) = &ATL::CComObject<CAudioDeviceGraph>::`vftable'{for `IAudioProtectedOutput'};
  *((_QWORD *)this + 2) = &ATL::CComObject<CAudioDeviceGraph>::`vftable'{for `IAudioDeviceGraphInternal'};
  *((_DWORD *)this + 6) = -1073741823;
  CAudioDeviceGraph::FinalRelease(this);
  v2 = *(__int64 (__fastcall **)(CAudioDGModule *__hidden))(*(_QWORD *)ATL::_pAtlModule + 16LL);
  if ( v2 == CAudioDGModule::Unlock )
    CAudioDGModule::Unlock(ATL::_pAtlModule);
  else
    v2(ATL::_pAtlModule);
  CAudioDeviceGraph::~CAudioDeviceGraph(this);
}
