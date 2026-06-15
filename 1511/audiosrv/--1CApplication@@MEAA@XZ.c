/*
 * XREFs of ??1CApplication@@MEAA@XZ @ 0x18009F9D4
 * Callers:
 *     ??_ECApplication@@MEAAPEAXI@Z @ 0x18009FBB0 (--_ECApplication@@MEAAPEAXI@Z.c)
 * Callees:
 *     ?CleanupBCMStartupLatencyGracePeriod@CApplication@@QEAAXXZ @ 0x180004D74 (-CleanupBCMStartupLatencyGracePeriod@CApplication@@QEAAXXZ.c)
 *     ?CleanupDelayedInteractivityNotification@CApplication@@IEAAJXZ @ 0x180004EE8 (-CleanupDelayedInteractivityNotification@CApplication@@IEAAJXZ.c)
 *     ?RemoveAll@?$CAtlList@PEAVCProcess@@V?$CElementTraits@PEAVCProcess@@@ATL@@@ATL@@QEAAXXZ @ 0x180030698 (-RemoveAll@-$CAtlList@PEAVCProcess@@V-$CElementTraits@PEAVCProcess@@@ATL@@@ATL@@QEAAXXZ.c)
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x1800479B0 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 */

// Hidden C++ exception states: #wind=9
void __fastcall CApplication::~CApplication(CApplication *this, __int64 a2, bool a3)
{
  void *v4; // rcx

  *(_QWORD *)this = &CApplication::`vftable';
  if ( *((_QWORD *)this + 21) )
  {
    (*(void (__fastcall **)(CAudioThreadPool *, _QWORD, __int64))(*(_QWORD *)ThreadPool + 32LL))(
      ThreadPool,
      *((_QWORD *)this + 21),
      1LL);
    (*(void (__fastcall **)(CAudioThreadPool *, _QWORD))(*(_QWORD *)ThreadPool + 16LL))(
      ThreadPool,
      *((_QWORD *)this + 21));
  }
  CApplication::CleanupBCMStartupLatencyGracePeriod(this, a2, a3);
  CApplication::CleanupDelayedInteractivityNotification(this);
  v4 = (void *)*((_QWORD *)this + 2);
  if ( v4 )
  {
    CoTaskMemFree(v4);
    *((_QWORD *)this + 2) = 0LL;
  }
  DeleteCriticalSection((LPCRITICAL_SECTION)this + 10);
  DeleteCriticalSection((LPCRITICAL_SECTION)((char *)this + 344));
  DeleteCriticalSection((LPCRITICAL_SECTION)((char *)this + 288));
  DeleteCriticalSection((LPCRITICAL_SECTION)this + 6);
  DeleteCriticalSection((LPCRITICAL_SECTION)((char *)this + 184));
  DeleteCriticalSection((LPCRITICAL_SECTION)((char *)this + 128));
  ATL::CAtlList<CProcess *,ATL::CElementTraits<CProcess *>>::RemoveAll((__int64 *)this + 8);
  DeleteCriticalSection((LPCRITICAL_SECTION)((char *)this + 24));
  *(_QWORD *)this = &CRefCountedObject::`vftable';
}
