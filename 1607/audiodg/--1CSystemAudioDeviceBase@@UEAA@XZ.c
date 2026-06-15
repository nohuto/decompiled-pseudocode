/*
 * XREFs of ??1CSystemAudioDeviceBase@@UEAA@XZ @ 0x140003468
 * Callers:
 *     ??1CSystemAudioDeviceSharedBase@@UEAA@XZ @ 0x1400058F0 (--1CSystemAudioDeviceSharedBase@@UEAA@XZ.c)
 *     _CSystemAudioDeviceSharedBase::_CSystemAudioDeviceSharedBase_::_1_::dtor$0 @ 0x14001AB04 (_CSystemAudioDeviceSharedBase--_CSystemAudioDeviceSharedBase_--_1_--dtor$0.c)
 *     ??1CSystemAudioDeviceExclusive@@UEAA@XZ @ 0x140029AEC (--1CSystemAudioDeviceExclusive@@UEAA@XZ.c)
 *     _CSystemAudioDeviceExclusive::_CSystemAudioDeviceExclusive_::_1_::dtor$1 @ 0x140029B90 (_CSystemAudioDeviceExclusive--_CSystemAudioDeviceExclusive_--_1_--dtor$1.c)
 *     ??_ECSystemAudioDeviceBase@@UEAAPEAXI@Z @ 0x140029C30 (--_ECSystemAudioDeviceBase@@UEAAPEAXI@Z.c)
 *     ??1CSystemAudioDeviceOffload@@UEAA@XZ @ 0x14002BAC4 (--1CSystemAudioDeviceOffload@@UEAA@XZ.c)
 *     _CSystemAudioDeviceOffload::_CSystemAudioDeviceOffload_::_1_::dtor$1 @ 0x14002BBFA (_CSystemAudioDeviceOffload--_CSystemAudioDeviceOffload_--_1_--dtor$1.c)
 * Callees:
 *     ?Cleanup@CSystemAudioDeviceBase@@MEAAXXZ @ 0x1400036C0 (-Cleanup@CSystemAudioDeviceBase@@MEAAXXZ.c)
 *     ?RemoveAll@?$CAtlList@PEAVCStreamInstance@@V?$CElementTraits@PEAVCStreamInstance@@@ATL@@@ATL@@QEAAXXZ @ 0x14000376C (-RemoveAll@-$CAtlList@PEAVCStreamInstance@@V-$CElementTraits@PEAVCStreamInstance@@@ATL@@@ATL@@QE.c)
 *     ?Release@?$CComObject@VCCrossProcessServerInputEndpoint@@@ATL@@UEAAKXZ @ 0x140011470 (-Release@-$CComObject@VCCrossProcessServerInputEndpoint@@@ATL@@UEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x140019620 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=8
void __fastcall CSystemAudioDeviceBase::~CSystemAudioDeviceBase(CSystemAudioDeviceBase *this)
{
  __int64 v2; // rcx
  __int64 v3; // rcx
  __int64 v4; // rcx
  void *v5; // rcx
  __int64 (__fastcall *v6)(void *); // rax

  *(_QWORD *)this = &CSystemAudioDeviceBase::`vftable'{for `IAudioDeviceGraph'};
  *((_QWORD *)this + 1) = &CSystemAudioDeviceSharedBase::`vftable'{for `IAudioGraphCallback'};
  *((_QWORD *)this + 2) = &CSystemAudioDeviceBase::`vftable'{for `IAudioProtectedOutput'};
  CSystemAudioDeviceBase::Cleanup(this);
  v2 = *((_QWORD *)this + 33);
  if ( v2 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
  v3 = *((_QWORD *)this + 31);
  if ( v3 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3);
  v4 = *((_QWORD *)this + 30);
  if ( v4 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  v5 = (void *)*((_QWORD *)this + 28);
  if ( v5 )
  {
    v6 = *(__int64 (__fastcall **)(void *))(*(_QWORD *)v5 + 16LL);
    if ( v6 == ATL::CComObject<CCrossProcessServerInputEndpoint>::Release )
      ATL::CComObject<CCrossProcessServerInputEndpoint>::Release(v5);
    else
      v6(v5);
  }
  DeleteCriticalSection((LPCRITICAL_SECTION)((char *)this + 176));
  ATL::CAtlList<CStreamInstance *,ATL::CElementTraits<CStreamInstance *>>::RemoveAll((char *)this + 128);
  ATL::CAtlList<CStreamInstance *,ATL::CElementTraits<CStreamInstance *>>::RemoveAll((char *)this + 80);
  ATL::CAtlList<CStreamInstance *,ATL::CElementTraits<CStreamInstance *>>::RemoveAll((char *)this + 32);
}
