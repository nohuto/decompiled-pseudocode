/*
 * XREFs of ??1?$CComObject@VCSystemAudioDeviceExclusive@@@ATL@@UEAA@XZ @ 0x140029A78
 * Callers:
 *     ??_E?$CComObject@VCSystemAudioDeviceExclusive@@@ATL@@UEAAPEAXI@Z @ 0x140029BF0 (--_E-$CComObject@VCSystemAudioDeviceExclusive@@@ATL@@UEAAPEAXI@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x140019620 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall ATL::CComObject<CSystemAudioDeviceExclusive>::~CComObject<CSystemAudioDeviceExclusive>(
        CSystemAudioDeviceExclusive *this)
{
  *(_QWORD *)this = &ATL::CComObject<CSystemAudioDeviceExclusive>::`vftable'{for `IAudioDeviceGraph'};
  *((_QWORD *)this + 1) = &ATL::CComObject<CSystemAudioDeviceExclusive>::`vftable'{for `IAudioGraphCallback'};
  *((_QWORD *)this + 2) = &ATL::CComObject<CSystemAudioDeviceExclusive>::`vftable'{for `IAudioProtectedOutput'};
  *((_DWORD *)this + 68) = -1073741823;
  (*(void (__fastcall **)(CAudioDGModule *))(*(_QWORD *)ATL::_pAtlModule + 16LL))(ATL::_pAtlModule);
  CSystemAudioDeviceExclusive::~CSystemAudioDeviceExclusive(this);
}
