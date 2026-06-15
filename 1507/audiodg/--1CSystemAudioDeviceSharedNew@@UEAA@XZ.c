/*
 * XREFs of ??1CSystemAudioDeviceSharedNew@@UEAA@XZ @ 0x14000E9B8
 * Callers:
 *     ??1?$CComObject@VCSystemAudioDeviceSharedNew@@@ATL@@UEAA@XZ @ 0x140013C50 (--1-$CComObject@VCSystemAudioDeviceSharedNew@@@ATL@@UEAA@XZ.c)
 *     _ATL::CComObject_CSystemAudioDeviceSharedNew_::_CComObject_CSystemAudioDeviceSharedNew__::_1_::dtor$0 @ 0x14001BD29 (_ATL--CComObject_CSystemAudioDeviceSharedNew_--_CComObject_CSystemAudioDeviceSharedNew__--_1_--d.c)
 *     ??1?$CComAggObject@VCSystemAudioDeviceSharedNew@@@ATL@@UEAA@XZ @ 0x14002DB14 (--1-$CComAggObject@VCSystemAudioDeviceSharedNew@@@ATL@@UEAA@XZ.c)
 *     ??1?$CComContainedObject@VCSystemAudioDeviceSharedNew@@@ATL@@UEAA@XZ @ 0x14002DB94 (--1-$CComContainedObject@VCSystemAudioDeviceSharedNew@@@ATL@@UEAA@XZ.c)
 *     ??_G?$CComContainedObject@VCSystemAudioDeviceSharedNew@@@ATL@@UEAAPEAXI@Z @ 0x14002DBE0 (--_G-$CComContainedObject@VCSystemAudioDeviceSharedNew@@@ATL@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?Cleanup@CSystemAudioDeviceSharedNew@@MEAAXXZ @ 0x14000E8A0 (-Cleanup@CSystemAudioDeviceSharedNew@@MEAAXXZ.c)
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x140010670 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ??1CSystemAudioDeviceBase@@UEAA@XZ @ 0x140010740 (--1CSystemAudioDeviceBase@@UEAA@XZ.c)
 *     ??1?$CComObjectRootEx@VCComMultiThreadModelNoCS@ATL@@@ATL@@QEAA@XZ @ 0x140026C00 (--1-$CComObjectRootEx@VCComMultiThreadModelNoCS@ATL@@@ATL@@QEAA@XZ.c)
 */

// Hidden C++ exception states: #wind=5
void __fastcall CSystemAudioDeviceSharedNew::~CSystemAudioDeviceSharedNew(CSystemAudioDeviceSharedNew *this)
{
  __int64 v2; // rsi
  __int64 v3; // rsi
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+28h] [rbp-20h] BYREF
  char v5; // [rsp+30h] [rbp-18h]

  lpCriticalSection = (LPCRITICAL_SECTION)((char *)this + 176);
  v5 = 0;
  ATL::CCritSecLock::Lock((ATL::CCritSecLock *)&lpCriticalSection);
  CSystemAudioDeviceSharedNew::Cleanup(this);
  if ( v5 )
    LeaveCriticalSection(lpCriticalSection);
  v2 = *((_QWORD *)this + 45);
  if ( v2 )
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v2 + 16LL))(*((_QWORD *)this + 45));
  v3 = *((_QWORD *)this + 44);
  if ( v3 )
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v3 + 16LL))(*((_QWORD *)this + 44));
  CSystemAudioDeviceBase::~CSystemAudioDeviceBase(this);
  if ( *((_BYTE *)this + 336) )
  {
    *((_BYTE *)this + 336) = 0;
    DeleteCriticalSection((LPCRITICAL_SECTION)((char *)this + 296));
  }
}
