/*
 * XREFs of ??1CSystemAudioDeviceExclusive@@UEAA@XZ @ 0x140029AEC
 * Callers:
 *     _ATL::CComObject_CSystemAudioDeviceExclusive_::CComObject_CSystemAudioDeviceExclusive__::_1_::dtor$0 @ 0x14002993A (_ATL--CComObject_CSystemAudioDeviceExclusive_--CComObject_CSystemAudioDeviceExclusive__--_1_--dt.c)
 *     ??1?$CComAggObject@VCSystemAudioDeviceExclusive@@@ATL@@UEAA@XZ @ 0x140029A04 (--1-$CComAggObject@VCSystemAudioDeviceExclusive@@@ATL@@UEAA@XZ.c)
 *     ??1?$CComContainedObject@VCSystemAudioDeviceExclusive@@@ATL@@UEAA@XZ @ 0x140029A6C (--1-$CComContainedObject@VCSystemAudioDeviceExclusive@@@ATL@@UEAA@XZ.c)
 *     ??1?$CComObject@VCSystemAudioDeviceExclusive@@@ATL@@UEAA@XZ @ 0x140029A78 (--1-$CComObject@VCSystemAudioDeviceExclusive@@@ATL@@UEAA@XZ.c)
 *     _ATL::CComObject_CSystemAudioDeviceExclusive_::_CComObject_CSystemAudioDeviceExclusive__::_1_::dtor$0 @ 0x140029ADA (_ATL--CComObject_CSystemAudioDeviceExclusive_--_CComObject_CSystemAudioDeviceExclusive__--_1_--d.c)
 *     ??_ECSystemAudioDeviceExclusive@@UEAAPEAXI@Z @ 0x140029C70 (--_ECSystemAudioDeviceExclusive@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??1CSystemAudioDeviceBase@@UEAA@XZ @ 0x140003468 (--1CSystemAudioDeviceBase@@UEAA@XZ.c)
 *     ?Cleanup@CSystemAudioDeviceExclusive@@MEAAXXZ @ 0x140029CF0 (-Cleanup@CSystemAudioDeviceExclusive@@MEAAXXZ.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall CSystemAudioDeviceExclusive::~CSystemAudioDeviceExclusive(struct _RTL_CRITICAL_SECTION *this)
{
  struct _RTL_CRITICAL_SECTION *v2; // rbx

  this->DebugInfo = (PRTL_CRITICAL_SECTION_DEBUG)&CSystemAudioDeviceExclusive::`vftable'{for `IAudioDeviceGraph'};
  *(_QWORD *)&this->LockCount = &CSystemAudioDeviceOffload::`vftable'{for `IAudioGraphCallback'};
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
