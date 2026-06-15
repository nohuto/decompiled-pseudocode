/*
 * XREFs of ??1CSystemAudioDeviceShared@@UEAA@XZ @ 0x140016AD0
 * Callers:
 *     ??1?$CComObject@VCSystemAudioDeviceShared@@@ATL@@UEAA@XZ @ 0x140011324 (--1-$CComObject@VCSystemAudioDeviceShared@@@ATL@@UEAA@XZ.c)
 *     _ATL::CComObject_CSystemAudioDeviceShared_::CComObject_CSystemAudioDeviceShared__::_1_::dtor$0 @ 0x14001B68E (_ATL--CComObject_CSystemAudioDeviceShared_--CComObject_CSystemAudioDeviceShared__--_1_--dtor$0.c)
 *     _ATL::CComObject_CSystemAudioDeviceShared_::_CComObject_CSystemAudioDeviceShared__::_1_::dtor$0 @ 0x14001B6A0 (_ATL--CComObject_CSystemAudioDeviceShared_--_CComObject_CSystemAudioDeviceShared__--_1_--dtor$0.c)
 *     ??1?$CComAggObject@VCSystemAudioDeviceShared@@@ATL@@UEAA@XZ @ 0x14002B434 (--1-$CComAggObject@VCSystemAudioDeviceShared@@@ATL@@UEAA@XZ.c)
 *     ??1?$CComContainedObject@VCSystemAudioDeviceShared@@@ATL@@UEAA@XZ @ 0x14002B49C (--1-$CComContainedObject@VCSystemAudioDeviceShared@@@ATL@@UEAA@XZ.c)
 *     ??_E?$CComContainedObject@VCSystemAudioDeviceShared@@@ATL@@UEAAPEAXI@Z @ 0x14002B4F0 (--_E-$CComContainedObject@VCSystemAudioDeviceShared@@@ATL@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??1CSystemAudioDeviceSharedBase@@UEAA@XZ @ 0x1400058F0 (--1CSystemAudioDeviceSharedBase@@UEAA@XZ.c)
 *     ?Cleanup@CSystemAudioDeviceSharedBase@@MEAAXXZ @ 0x140005C10 (-Cleanup@CSystemAudioDeviceSharedBase@@MEAAXXZ.c)
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x140007990 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 */

// Hidden C++ exception states: #wind=3
void __fastcall CSystemAudioDeviceShared::~CSystemAudioDeviceShared(CSystemAudioDeviceShared *this)
{
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+28h] [rbp-20h] BYREF
  char v3; // [rsp+30h] [rbp-18h]

  lpCriticalSection = (LPCRITICAL_SECTION)((char *)this + 176);
  v3 = 0;
  ATL::CCritSecLock::Lock(&lpCriticalSection);
  CSystemAudioDeviceSharedBase::Cleanup(this);
  if ( v3 )
    LeaveCriticalSection(lpCriticalSection);
  CSystemAudioDeviceSharedBase::~CSystemAudioDeviceSharedBase(this);
  if ( *((_BYTE *)this + 392) )
  {
    *((_BYTE *)this + 392) = 0;
    DeleteCriticalSection((LPCRITICAL_SECTION)((char *)this + 352));
  }
}
