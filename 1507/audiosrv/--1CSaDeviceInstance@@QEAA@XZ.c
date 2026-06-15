/*
 * XREFs of ??1CSaDeviceInstance@@QEAA@XZ @ 0x1800738F4
 * Callers:
 *     ??_GCSaDeviceInstance@@QEAAPEAXI@Z @ 0x180073B50 (--_GCSaDeviceInstance@@QEAAPEAXI@Z.c)
 * Callees:
 *     WPP_SF_q @ 0x1800448AC (WPP_SF_q.c)
 *     ?ReleaseSaDevice@CSaDeviceInstance@@QEAAXXZ @ 0x180075128 (-ReleaseSaDevice@CSaDeviceInstance@@QEAAXXZ.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall CSaDeviceInstance::~CSaDeviceInstance(struct _RTL_CRITICAL_SECTION *this)
{
  PRTL_CRITICAL_SECTION_DEBUG DebugInfo; // rcx

  DebugInfo = this->DebugInfo;
  if ( DebugInfo )
  {
    CoTaskMemFree(DebugInfo);
    this->DebugInfo = 0LL;
  }
  if ( *(struct _GUID **)&WPP_GLOBAL_Control.Data1 != &WPP_GLOBAL_Control
    && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 28LL) & 0x40000) != 0
    && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 25LL) >= 4u )
  {
    WPP_SF_q(
      *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 16LL),
      0xAu,
      (__int64)&WPP_78ac755cf0ad3a5554bdc1a2f719929e_Traceguids,
      this,
      -2LL);
  }
  CSaDeviceInstance::ReleaseSaDevice((CSaDeviceInstance *)this);
  DeleteCriticalSection(this + 3);
  ATL::CAtlList<IAudioStreamVolumeCallback *,ATL::CElementTraits<IAudioStreamVolumeCallback *>>::RemoveAll((__int64)&this[1].SpinCount);
}
