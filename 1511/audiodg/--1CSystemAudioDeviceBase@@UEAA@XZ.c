/*
 * XREFs of ??1CSystemAudioDeviceBase@@UEAA@XZ @ 0x14000517C
 * Callers:
 *     ??1CSystemAudioDeviceSharedBase@@UEAA@XZ @ 0x140005E40 (--1CSystemAudioDeviceSharedBase@@UEAA@XZ.c)
 *     _CSystemAudioDeviceSharedBase::_CSystemAudioDeviceSharedBase_::_1_::dtor$0 @ 0x14001AF42 (_CSystemAudioDeviceSharedBase--_CSystemAudioDeviceSharedBase_--_1_--dtor$0.c)
 *     ??1CSystemAudioDeviceExclusive@@UEAA@XZ @ 0x14002AEE8 (--1CSystemAudioDeviceExclusive@@UEAA@XZ.c)
 *     _CSystemAudioDeviceExclusive::_CSystemAudioDeviceExclusive_::_1_::dtor$1 @ 0x14002AF8C (_CSystemAudioDeviceExclusive--_CSystemAudioDeviceExclusive_--_1_--dtor$1.c)
 *     ??_ECSystemAudioDeviceBase@@UEAAPEAXI@Z @ 0x14002B020 (--_ECSystemAudioDeviceBase@@UEAAPEAXI@Z.c)
 *     ??1CSystemAudioDeviceOffload@@UEAA@XZ @ 0x14002D08C (--1CSystemAudioDeviceOffload@@UEAA@XZ.c)
 *     _CSystemAudioDeviceOffload::_CSystemAudioDeviceOffload_::_1_::dtor$1 @ 0x14002D1EB (_CSystemAudioDeviceOffload--_CSystemAudioDeviceOffload_--_1_--dtor$1.c)
 * Callees:
 *     ?Cleanup@CSystemAudioDeviceBase@@MEAAXXZ @ 0x1400050F0 (-Cleanup@CSystemAudioDeviceBase@@MEAAXXZ.c)
 *     ?RemoveAll@?$CAtlList@PEAVCStreamInstance@@V?$CElementTraits@PEAVCStreamInstance@@@ATL@@@ATL@@QEAAXXZ @ 0x1400053AC (-RemoveAll@-$CAtlList@PEAVCStreamInstance@@V-$CElementTraits@PEAVCStreamInstance@@@ATL@@@ATL@@QE.c)
 *     ?Release@?$CComObject@VCCrossProcessServerInputEndpoint@@@ATL@@UEAAKXZ @ 0x140009220 (-Release@-$CComObject@VCCrossProcessServerInputEndpoint@@@ATL@@UEAAKXZ.c)
 *     ??1?$CComObjectRootEx@VCComMultiThreadModelNoCS@ATL@@@ATL@@QEAA@XZ @ 0x140026C60 (--1-$CComObjectRootEx@VCComMultiThreadModelNoCS@ATL@@@ATL@@QEAA@XZ.c)
 */

// Hidden C++ exception states: #wind=8
void __fastcall CSystemAudioDeviceBase::~CSystemAudioDeviceBase(CSystemAudioDeviceBase *this)
{
  __int64 v2; // rsi
  __int64 v3; // rsi
  __int64 v4; // rsi
  __int64 v5; // rbx
  __int64 (__fastcall *v6)(void *); // rsi

  *(_QWORD *)this = &CSystemAudioDeviceBase::`vftable'{for `IAudioDeviceGraph'};
  *((_QWORD *)this + 1) = &CSystemAudioDeviceSharedBase::`vftable'{for `IAudioGraphCallback'};
  *((_QWORD *)this + 2) = &CSystemAudioDeviceBase::`vftable'{for `IAudioProtectedOutput'};
  CSystemAudioDeviceBase::Cleanup(this);
  v2 = *((_QWORD *)this + 33);
  if ( v2 )
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v2 + 16LL))(*((_QWORD *)this + 33));
  v3 = *((_QWORD *)this + 31);
  if ( v3 )
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v3 + 16LL))(*((_QWORD *)this + 31));
  v4 = *((_QWORD *)this + 30);
  if ( v4 )
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v4 + 16LL))(*((_QWORD *)this + 30));
  v5 = *((_QWORD *)this + 28);
  if ( v5 )
  {
    v6 = *(__int64 (__fastcall **)(void *))(*(_QWORD *)v5 + 16LL);
    if ( v6 == ATL::CComObject<CCrossProcessServerInputEndpoint>::Release )
      ATL::CComObject<CCrossProcessServerInputEndpoint>::Release(*((void **)this + 28));
    else
      v6(*((void **)this + 28));
  }
  DeleteCriticalSection((LPCRITICAL_SECTION)((char *)this + 176));
  ATL::CAtlList<CStreamInstance *,ATL::CElementTraits<CStreamInstance *>>::RemoveAll((char *)this + 128);
  ATL::CAtlList<CStreamInstance *,ATL::CElementTraits<CStreamInstance *>>::RemoveAll((char *)this + 80);
  ATL::CAtlList<CStreamInstance *,ATL::CElementTraits<CStreamInstance *>>::RemoveAll((char *)this + 32);
}
