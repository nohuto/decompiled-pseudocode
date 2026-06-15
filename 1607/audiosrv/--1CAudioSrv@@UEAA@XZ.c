/*
 * XREFs of ??1CAudioSrv@@UEAA@XZ @ 0x180051EEC
 * Callers:
 *     ??_GCAudioSrv@@UEAAPEAXI@Z @ 0x180052020 (--_GCAudioSrv@@UEAAPEAXI@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180038F30 (_guard_dispatch_icall_nop.c)
 *     ?RemoveAll@?$CAtlList@PEAUIAudioStreamVolumeCallback@@V?$CElementTraits@PEAUIAudioStreamVolumeCallback@@@ATL@@@ATL@@QEAAXXZ @ 0x180050384 (-RemoveAll@-$CAtlList@PEAUIAudioStreamVolumeCallback@@V-$CElementTraits@PEAUIAudioStreamVolumeCa.c)
 */

// Hidden C++ exception states: #wind=3
void __fastcall CAudioSrv::~CAudioSrv(CAudioSrv *this)
{
  void (__fastcall ***v2)(_QWORD, __int64); // rcx

  *(_QWORD *)this = &CAudioSrv::`vftable'{for `IAudioService'};
  *((_QWORD *)this + 9) = &CAudioSrv::`vftable'{for `IMMNotificationClient'};
  *((_QWORD *)this + 10) = &CAudioSrv::`vftable'{for `IMonitorDGTermination'};
  v2 = (void (__fastcall ***)(_QWORD, __int64))*((_QWORD *)this + 11);
  if ( v2 )
    (**v2)(v2, 1LL);
  *((_QWORD *)this + 11) = 0LL;
  ATL::CAtlList<IAudioStreamVolumeCallback *,ATL::CElementTraits<IAudioStreamVolumeCallback *>>::RemoveAll((__int64)this + 152);
  DeleteCriticalSection((LPCRITICAL_SECTION)((char *)this + 112));
  *(_QWORD *)this = &IAudioService::`vftable';
}
