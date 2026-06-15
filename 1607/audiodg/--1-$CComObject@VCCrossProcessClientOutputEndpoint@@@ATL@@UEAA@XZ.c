/*
 * XREFs of ??1?$CComObject@VCCrossProcessClientOutputEndpoint@@@ATL@@UEAA@XZ @ 0x140034E90
 * Callers:
 *     ??_G?$CComObject@VCCrossProcessClientOutputEndpoint@@@ATL@@UEAAPEAXI@Z @ 0x140035390 (--_G-$CComObject@VCCrossProcessClientOutputEndpoint@@@ATL@@UEAAPEAXI@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x140019620 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall ATL::CComObject<CCrossProcessClientOutputEndpoint>::~CComObject<CCrossProcessClientOutputEndpoint>(
        CCrossProcessClientInputEndpoint *this)
{
  *(_QWORD *)this = &ATL::CComObject<CCrossProcessClientOutputEndpoint>::`vftable'{for `IAudioEndpoint'};
  *((_QWORD *)this + 1) = &ATL::CComObject<CCrossProcessClientOutputEndpoint>::`vftable'{for `IAudioEndpointRT'};
  *((_QWORD *)this + 47) = &ATL::CComObject<CCrossProcessClientOutputEndpoint>::`vftable'{for `IAudioCrossProcessClientEndpoint'};
  *((_QWORD *)this + 48) = &ATL::CComObject<CCrossProcessClientOutputEndpoint>::`vftable'{for `IAudioClock'};
  *((_QWORD *)this + 49) = &ATL::CComObject<CCrossProcessClientOutputEndpoint>::`vftable'{for `IAudioClock2'};
  *((_QWORD *)this + 53) = &ATL::CComObject<CCrossProcessClientOutputEndpoint>::`vftable'{for `CCrossProcessOutputEndpoint'};
  *((_QWORD *)this + 56) = &ATL::CComObject<CCrossProcessClientOutputEndpoint>::`vftable'{for `CCrossProcessControl'};
  *((_DWORD *)this + 116) = -1073741823;
  (*(void (__fastcall **)(CAudioDGModule *))(*(_QWORD *)ATL::_pAtlModule + 16LL))(ATL::_pAtlModule);
  CCrossProcessClientInputEndpoint::~CCrossProcessClientInputEndpoint(this);
}
