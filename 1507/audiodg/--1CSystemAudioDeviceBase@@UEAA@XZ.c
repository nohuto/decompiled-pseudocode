/*
 * XREFs of ??1CSystemAudioDeviceBase@@UEAA@XZ @ 0x140010740
 * Callers:
 *     ??1CSystemAudioDeviceOffload@@UEAA@XZ @ 0x140001E1C (--1CSystemAudioDeviceOffload@@UEAA@XZ.c)
 *     ??1CSystemAudioDeviceSharedNew@@UEAA@XZ @ 0x14000E9B8 (--1CSystemAudioDeviceSharedNew@@UEAA@XZ.c)
 *     _CSystemAudioDeviceOffload::_CSystemAudioDeviceOffload_::_1_::dtor$1 @ 0x14001A95A (_CSystemAudioDeviceOffload--_CSystemAudioDeviceOffload_--_1_--dtor$1.c)
 *     _CSystemAudioDeviceSharedNew::_CSystemAudioDeviceSharedNew_::_1_::dtor$1 @ 0x14001B635 (_CSystemAudioDeviceSharedNew--_CSystemAudioDeviceSharedNew_--_1_--dtor$1.c)
 *     ??1CSystemAudioDeviceExclusive@@UEAA@XZ @ 0x14002AAE0 (--1CSystemAudioDeviceExclusive@@UEAA@XZ.c)
 *     _CSystemAudioDeviceExclusive::_CSystemAudioDeviceExclusive_::_1_::dtor$1 @ 0x14002AB84 (_CSystemAudioDeviceExclusive--_CSystemAudioDeviceExclusive_--_1_--dtor$1.c)
 *     ??_ECSystemAudioDeviceBase@@UEAAPEAXI@Z @ 0x14002AC60 (--_ECSystemAudioDeviceBase@@UEAAPEAXI@Z.c)
 *     ??1CSystemAudioDeviceShared@@UEAA@XZ @ 0x14002BB94 (--1CSystemAudioDeviceShared@@UEAA@XZ.c)
 *     _CSystemAudioDeviceShared::_CSystemAudioDeviceShared_::_1_::dtor$1 @ 0x14002BC87 (_CSystemAudioDeviceShared--_CSystemAudioDeviceShared_--_1_--dtor$1.c)
 * Callees:
 *     ?Cleanup@CSystemAudioDeviceBase@@MEAAXXZ @ 0x140010E70 (-Cleanup@CSystemAudioDeviceBase@@MEAAXXZ.c)
 *     ?RemoveAll@?$CAtlList@PEAVCStreamInstance@@V?$CElementTraits@PEAVCStreamInstance@@@ATL@@@ATL@@QEAAXXZ @ 0x140010EFC (-RemoveAll@-$CAtlList@PEAVCStreamInstance@@V-$CElementTraits@PEAVCStreamInstance@@@ATL@@@ATL@@QE.c)
 *     ??1?$CComObjectRootEx@VCComMultiThreadModelNoCS@ATL@@@ATL@@QEAA@XZ @ 0x140026C00 (--1-$CComObjectRootEx@VCComMultiThreadModelNoCS@ATL@@@ATL@@QEAA@XZ.c)
 */

// Hidden C++ exception states: #wind=8
void __fastcall CSystemAudioDeviceBase::~CSystemAudioDeviceBase(CSystemAudioDeviceBase *this)
{
  __int64 v2; // rdi
  __int64 v3; // rdi
  __int64 v4; // rbx
  __int64 v5; // rdi

  *(_QWORD *)this = &CSystemAudioDeviceBase::`vftable'{for `IAudioDeviceGraph'};
  *((_QWORD *)this + 1) = &CSystemAudioDeviceBase::`vftable'{for `IAudioGraphCallback'};
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
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v5 + 16LL))(*((_QWORD *)this + 28));
  DeleteCriticalSection((LPCRITICAL_SECTION)((char *)this + 176));
  ATL::CAtlList<CStreamInstance *,ATL::CElementTraits<CStreamInstance *>>::RemoveAll((char *)this + 128);
  ATL::CAtlList<CStreamInstance *,ATL::CElementTraits<CStreamInstance *>>::RemoveAll((char *)this + 80);
  ATL::CAtlList<CStreamInstance *,ATL::CElementTraits<CStreamInstance *>>::RemoveAll((char *)this + 32);
}
