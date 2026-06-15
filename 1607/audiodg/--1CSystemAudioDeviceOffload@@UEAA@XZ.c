/*
 * XREFs of ??1CSystemAudioDeviceOffload@@UEAA@XZ @ 0x14002BAC4
 * Callers:
 *     _ATL::CComObject_CSystemAudioDeviceOffload_::CComObject_CSystemAudioDeviceOffload__::_1_::dtor$0 @ 0x14002B8A0 (_ATL--CComObject_CSystemAudioDeviceOffload_--CComObject_CSystemAudioDeviceOffload__--_1_--dtor$0.c)
 *     ??1?$CComAggObject@VCSystemAudioDeviceOffload@@@ATL@@UEAA@XZ @ 0x14002B9B0 (--1-$CComAggObject@VCSystemAudioDeviceOffload@@@ATL@@UEAA@XZ.c)
 *     ??1?$CComContainedObject@VCSystemAudioDeviceOffload@@@ATL@@UEAA@XZ @ 0x14002BA18 (--1-$CComContainedObject@VCSystemAudioDeviceOffload@@@ATL@@UEAA@XZ.c)
 *     ??1?$CComObject@VCSystemAudioDeviceOffload@@@ATL@@UEAA@XZ @ 0x14002BA24 (--1-$CComObject@VCSystemAudioDeviceOffload@@@ATL@@UEAA@XZ.c)
 *     _ATL::CComObject_CSystemAudioDeviceOffload_::_CComObject_CSystemAudioDeviceOffload__::_1_::dtor$0 @ 0x14002BAB0 (_ATL--CComObject_CSystemAudioDeviceOffload_--_CComObject_CSystemAudioDeviceOffload__--_1_--dtor$.c)
 *     ??_GCSystemAudioDeviceOffload@@UEAAPEAXI@Z @ 0x14002BCA0 (--_GCSystemAudioDeviceOffload@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??1CSystemAudioDeviceBase@@UEAA@XZ @ 0x140003468 (--1CSystemAudioDeviceBase@@UEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x140019620 (_guard_dispatch_icall_nop.c)
 *     ?Cleanup@CSystemAudioDeviceOffload@@MEAAXXZ @ 0x14002BD60 (-Cleanup@CSystemAudioDeviceOffload@@MEAAXXZ.c)
 */

// Hidden C++ exception states: #wind=6
void __fastcall CSystemAudioDeviceOffload::~CSystemAudioDeviceOffload(CSystemAudioDeviceOffload *this)
{
  struct _RTL_CRITICAL_SECTION *v2; // rbx
  __int64 v3; // rcx
  __int64 v4; // rcx
  __int64 v5; // rcx
  __int64 v6; // rcx

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
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3);
  v4 = *((_QWORD *)this + 50);
  if ( v4 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  v5 = *((_QWORD *)this + 49);
  if ( v5 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
  v6 = *((_QWORD *)this + 48);
  if ( v6 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
  CSystemAudioDeviceBase::~CSystemAudioDeviceBase(this);
  if ( *((_BYTE *)this + 344) )
  {
    *((_BYTE *)this + 344) = 0;
    DeleteCriticalSection((LPCRITICAL_SECTION)((char *)this + 304));
  }
}
