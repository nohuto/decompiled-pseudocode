/*
 * XREFs of ??1CSystemAudioDeviceExclusive@@UEAA@XZ @ 0x14002AAE0
 * Callers:
 *     _ATL::CComObject_CSystemAudioDeviceExclusive_::CComObject_CSystemAudioDeviceExclusive__::_1_::dtor$0 @ 0x14002A8F9 (_ATL--CComObject_CSystemAudioDeviceExclusive_--CComObject_CSystemAudioDeviceExclusive__--_1_--dt.c)
 *     ??1?$CComAggObject@VCSystemAudioDeviceExclusive@@@ATL@@UEAA@XZ @ 0x14002A9C4 (--1-$CComAggObject@VCSystemAudioDeviceExclusive@@@ATL@@UEAA@XZ.c)
 *     ??1?$CComContainedObject@VCSystemAudioDeviceExclusive@@@ATL@@UEAA@XZ @ 0x14002AA44 (--1-$CComContainedObject@VCSystemAudioDeviceExclusive@@@ATL@@UEAA@XZ.c)
 *     ??1?$CComObject@VCSystemAudioDeviceExclusive@@@ATL@@UEAA@XZ @ 0x14002AA50 (--1-$CComObject@VCSystemAudioDeviceExclusive@@@ATL@@UEAA@XZ.c)
 *     _ATL::CComObject_CSystemAudioDeviceExclusive_::_CComObject_CSystemAudioDeviceExclusive__::_1_::dtor$0 @ 0x14002AACD (_ATL--CComObject_CSystemAudioDeviceExclusive_--_CComObject_CSystemAudioDeviceExclusive__--_1_--d.c)
 *     ??_ECSystemAudioDeviceExclusive@@UEAAPEAXI@Z @ 0x14002ABE0 (--_ECSystemAudioDeviceExclusive@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??1CSystemAudioDeviceBase@@UEAA@XZ @ 0x140010740 (--1CSystemAudioDeviceBase@@UEAA@XZ.c)
 *     ?Cleanup@CSystemAudioDeviceExclusive@@MEAAXXZ @ 0x14002AD00 (-Cleanup@CSystemAudioDeviceExclusive@@MEAAXXZ.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall CSystemAudioDeviceExclusive::~CSystemAudioDeviceExclusive(struct _RTL_CRITICAL_SECTION *this)
{
  struct _RTL_CRITICAL_SECTION *v2; // rbx

  this->DebugInfo = (PRTL_CRITICAL_SECTION_DEBUG)&CSystemAudioDeviceExclusive::`vftable'{for `IAudioDeviceGraph'};
  *(_QWORD *)&this->LockCount = &CSystemAudioDeviceExclusive::`vftable'{for `IAudioGraphCallback'};
  this->OwningThread = &CSystemAudioDeviceExclusive::`vftable'{for `IAudioProtectedOutput'};
  if ( !LODWORD(this[9].DebugInfo) )
  {
    v2 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 176);
    EnterCriticalSection((struct _RTL_CRITICAL_SECTION *)((char *)this + 176));
    CSystemAudioDeviceExclusive::Cleanup((CSystemAudioDeviceExclusive *)this);
    LeaveCriticalSection(v2);
  }
  CSystemAudioDeviceBase::~CSystemAudioDeviceBase((CSystemAudioDeviceBase *)this);
  if ( LOBYTE(this[8].DebugInfo) )
  {
    LOBYTE(this[8].DebugInfo) = 0;
    DeleteCriticalSection(this + 7);
  }
}
