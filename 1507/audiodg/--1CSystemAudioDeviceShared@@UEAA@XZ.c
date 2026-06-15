/*
 * XREFs of ??1CSystemAudioDeviceShared@@UEAA@XZ @ 0x14002BB94
 * Callers:
 *     _ATL::CComObject_CSystemAudioDeviceShared_::CComObject_CSystemAudioDeviceShared__::_1_::dtor$0 @ 0x14002B99F (_ATL--CComObject_CSystemAudioDeviceShared_--CComObject_CSystemAudioDeviceShared__--_1_--dtor$0.c)
 *     ??1?$CComAggObject@VCSystemAudioDeviceShared@@@ATL@@UEAA@XZ @ 0x14002BA68 (--1-$CComAggObject@VCSystemAudioDeviceShared@@@ATL@@UEAA@XZ.c)
 *     ??1?$CComContainedObject@VCSystemAudioDeviceShared@@@ATL@@UEAA@XZ @ 0x14002BAE8 (--1-$CComContainedObject@VCSystemAudioDeviceShared@@@ATL@@UEAA@XZ.c)
 *     ??1?$CComObject@VCSystemAudioDeviceShared@@@ATL@@UEAA@XZ @ 0x14002BAF4 (--1-$CComObject@VCSystemAudioDeviceShared@@@ATL@@UEAA@XZ.c)
 *     _ATL::CComObject_CSystemAudioDeviceShared_::_CComObject_CSystemAudioDeviceShared__::_1_::dtor$0 @ 0x14002BB7F (_ATL--CComObject_CSystemAudioDeviceShared_--_CComObject_CSystemAudioDeviceShared__--_1_--dtor$0.c)
 *     ??_E?$CComContainedObject@VCSystemAudioDeviceShared@@@ATL@@UEAAPEAXI@Z @ 0x14002BD20 (--_E-$CComContainedObject@VCSystemAudioDeviceShared@@@ATL@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??1CSystemAudioDeviceBase@@UEAA@XZ @ 0x140010740 (--1CSystemAudioDeviceBase@@UEAA@XZ.c)
 *     ??1?$CComObjectRootEx@VCComMultiThreadModelNoCS@ATL@@@ATL@@QEAA@XZ @ 0x140026C00 (--1-$CComObjectRootEx@VCComMultiThreadModelNoCS@ATL@@@ATL@@QEAA@XZ.c)
 *     ?Cleanup@CSystemAudioDeviceShared@@MEAAXXZ @ 0x14002BEB0 (-Cleanup@CSystemAudioDeviceShared@@MEAAXXZ.c)
 */

// Hidden C++ exception states: #wind=5
void __fastcall CSystemAudioDeviceShared::~CSystemAudioDeviceShared(CSystemAudioDeviceShared *this)
{
  struct _RTL_CRITICAL_SECTION *v2; // rbx
  __int64 v3; // rsi
  __int64 v4; // rsi
  __int64 v5; // rsi

  if ( !*((_DWORD *)this + 98) )
  {
    v2 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 176);
    EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 176));
    CSystemAudioDeviceShared::Cleanup(this);
    LeaveCriticalSection(v2);
  }
  v3 = *((_QWORD *)this + 45);
  if ( v3 )
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v3 + 16LL))(*((_QWORD *)this + 45));
  v4 = *((_QWORD *)this + 44);
  if ( v4 )
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v4 + 16LL))(*((_QWORD *)this + 44));
  v5 = *((_QWORD *)this + 43);
  if ( v5 )
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v5 + 16LL))(*((_QWORD *)this + 43));
  CSystemAudioDeviceBase::~CSystemAudioDeviceBase(this);
  if ( *((_BYTE *)this + 328) )
  {
    *((_BYTE *)this + 328) = 0;
    DeleteCriticalSection((LPCRITICAL_SECTION)((char *)this + 288));
  }
}
