/*
 * XREFs of ??1CSystemAudioDeviceOffload@@UEAA@XZ @ 0x140001E1C
 * Callers:
 *     ??1?$CComObject@VCSystemAudioDeviceOffload@@@ATL@@UEAA@XZ @ 0x1400014BC (--1-$CComObject@VCSystemAudioDeviceOffload@@@ATL@@UEAA@XZ.c)
 *     _ATL::CComObject_CSystemAudioDeviceOffload_::_CComObject_CSystemAudioDeviceOffload__::_1_::dtor$0 @ 0x14001A8E5 (_ATL--CComObject_CSystemAudioDeviceOffload_--_CComObject_CSystemAudioDeviceOffload__--_1_--dtor$.c)
 *     ??1?$CComAggObject@VCSystemAudioDeviceOffload@@@ATL@@UEAA@XZ @ 0x14002E5A4 (--1-$CComAggObject@VCSystemAudioDeviceOffload@@@ATL@@UEAA@XZ.c)
 *     ??1?$CComContainedObject@VCSystemAudioDeviceOffload@@@ATL@@UEAA@XZ @ 0x14002E624 (--1-$CComContainedObject@VCSystemAudioDeviceOffload@@@ATL@@UEAA@XZ.c)
 *     ??_GCSystemAudioDeviceOffload@@UEAAPEAXI@Z @ 0x14002E670 (--_GCSystemAudioDeviceOffload@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?Cleanup@CSystemAudioDeviceOffload@@MEAAXXZ @ 0x140001DD0 (-Cleanup@CSystemAudioDeviceOffload@@MEAAXXZ.c)
 *     ??1CSystemAudioDeviceBase@@UEAA@XZ @ 0x140010740 (--1CSystemAudioDeviceBase@@UEAA@XZ.c)
 *     ??1?$CComObjectRootEx@VCComMultiThreadModelNoCS@ATL@@@ATL@@QEAA@XZ @ 0x140026C00 (--1-$CComObjectRootEx@VCComMultiThreadModelNoCS@ATL@@@ATL@@QEAA@XZ.c)
 */

// Hidden C++ exception states: #wind=6
void __fastcall CSystemAudioDeviceOffload::~CSystemAudioDeviceOffload(CSystemAudioDeviceOffload *this)
{
  struct _RTL_CRITICAL_SECTION *v2; // rbx
  __int64 v3; // rsi
  __int64 v4; // rsi
  __int64 v5; // rsi
  __int64 v6; // rsi

  *(_QWORD *)this = &CSystemAudioDeviceOffload::`vftable'{for `IAudioDeviceGraph'};
  *((_QWORD *)this + 1) = &CSystemAudioDeviceOffload::`vftable'{for `IAudioGraphCallback'};
  *((_QWORD *)this + 2) = &CSystemAudioDeviceOffload::`vftable'{for `IAudioProtectedOutput'};
  *((_QWORD *)this + 34) = &CSystemAudioDeviceOffload::`vftable'{for `IAudioVolume'};
  *((_QWORD *)this + 35) = &CSystemAudioDeviceOffload::`vftable'{for `IAudioMuteAPO'};
  *((_QWORD *)this + 36) = &CSystemAudioDeviceOffload::`vftable'{for `IAudioMeter'};
  if ( !*((_DWORD *)this + 104) )
  {
    v2 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 176);
    EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 176));
    CSystemAudioDeviceOffload::Cleanup(this);
    LeaveCriticalSection(v2);
  }
  v3 = *((_QWORD *)this + 51);
  if ( v3 )
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v3 + 16LL))(*((_QWORD *)this + 51));
  v4 = *((_QWORD *)this + 50);
  if ( v4 )
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v4 + 16LL))(*((_QWORD *)this + 50));
  v5 = *((_QWORD *)this + 49);
  if ( v5 )
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v5 + 16LL))(*((_QWORD *)this + 49));
  v6 = *((_QWORD *)this + 48);
  if ( v6 )
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v6 + 16LL))(*((_QWORD *)this + 48));
  CSystemAudioDeviceBase::~CSystemAudioDeviceBase(this);
  if ( *((_BYTE *)this + 344) )
  {
    *((_BYTE *)this + 344) = 0;
    DeleteCriticalSection((LPCRITICAL_SECTION)((char *)this + 304));
  }
}
