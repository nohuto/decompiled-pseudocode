/*
 * XREFs of ??1CSystemAudioDeviceOffloadGraph@@UEAA@XZ @ 0x14002D104
 * Callers:
 *     _ATL::CComObject_CSystemAudioDeviceOffloadGraph_::CComObject_CSystemAudioDeviceOffloadGraph__::_1_::dtor$0 @ 0x14002CF34 (_ATL--CComObject_CSystemAudioDeviceOffloadGraph_--CComObject_CSystemAudioDeviceOffloadGraph__--_.c)
 *     ??1?$CComAggObject@VCSystemAudioDeviceOffloadGraph@@@ATL@@UEAA@XZ @ 0x14002CFD4 (--1-$CComAggObject@VCSystemAudioDeviceOffloadGraph@@@ATL@@UEAA@XZ.c)
 *     ??1?$CComContainedObject@VCSystemAudioDeviceOffloadGraph@@@ATL@@UEAA@XZ @ 0x14002D03C (--1-$CComContainedObject@VCSystemAudioDeviceOffloadGraph@@@ATL@@UEAA@XZ.c)
 *     ??1?$CComObject@VCSystemAudioDeviceOffloadGraph@@@ATL@@UEAA@XZ @ 0x14002D048 (--1-$CComObject@VCSystemAudioDeviceOffloadGraph@@@ATL@@UEAA@XZ.c)
 *     _ATL::CComObject_CSystemAudioDeviceOffloadGraph_::_CComObject_CSystemAudioDeviceOffloadGraph__::_1_::dtor$0 @ 0x14002D0F0 (_ATL--CComObject_CSystemAudioDeviceOffloadGraph_--_CComObject_CSystemAudioDeviceOffloadGraph__--.c)
 *     ??_E?$CComContainedObject@VCSystemAudioDeviceOffloadGraph@@@ATL@@UEAAPEAXI@Z @ 0x14002D2A0 (--_E-$CComContainedObject@VCSystemAudioDeviceOffloadGraph@@@ATL@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??1CSystemAudioDeviceSharedBase@@UEAA@XZ @ 0x1400058F0 (--1CSystemAudioDeviceSharedBase@@UEAA@XZ.c)
 *     ?Cleanup@CSystemAudioDeviceSharedBase@@MEAAXXZ @ 0x140005C10 (-Cleanup@CSystemAudioDeviceSharedBase@@MEAAXXZ.c)
 *     ??0CCritSecLock@ATL@@QEAA@AEAU_RTL_CRITICAL_SECTION@@_N@Z @ 0x1400079C0 (--0CCritSecLock@ATL@@QEAA@AEAU_RTL_CRITICAL_SECTION@@_N@Z.c)
 *     _guard_dispatch_icall_nop @ 0x140019620 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=7
void __fastcall CSystemAudioDeviceOffloadGraph::~CSystemAudioDeviceOffloadGraph(CSystemAudioDeviceOffloadGraph *this)
{
  __int64 v2; // rcx
  __int64 v3; // rcx
  __int64 v4; // rcx
  __int64 v5; // rcx
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+28h] [rbp-20h] BYREF
  char v7; // [rsp+30h] [rbp-18h]

  ATL::CCritSecLock::CCritSecLock(
    (ATL::CCritSecLock *)&lpCriticalSection,
    (struct _RTL_CRITICAL_SECTION *)((char *)this + 176));
  CSystemAudioDeviceSharedBase::Cleanup(this);
  if ( v7 )
    LeaveCriticalSection(lpCriticalSection);
  v2 = *((_QWORD *)this + 56);
  if ( v2 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
  v3 = *((_QWORD *)this + 55);
  if ( v3 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3);
  v4 = *((_QWORD *)this + 54);
  if ( v4 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  v5 = *((_QWORD *)this + 53);
  if ( v5 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
  CSystemAudioDeviceSharedBase::~CSystemAudioDeviceSharedBase(this);
  if ( *((_BYTE *)this + 416) )
  {
    *((_BYTE *)this + 416) = 0;
    DeleteCriticalSection((LPCRITICAL_SECTION)((char *)this + 376));
  }
}
