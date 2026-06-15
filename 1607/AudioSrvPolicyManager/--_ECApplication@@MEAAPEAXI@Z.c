/*
 * XREFs of ??_ECApplication@@MEAAPEAXI@Z @ 0x18000AC50
 * Callers:
 *     <none>
 * Callees:
 *     ?RemoveAll@?$CAtlList@PEAVCPickerHostContext@@V?$CElementTraits@PEAVCPickerHostContext@@@ATL@@@ATL@@QEAAXXZ @ 0x180009DD4 (-RemoveAll@-$CAtlList@PEAVCPickerHostContext@@V-$CElementTraits@PEAVCPickerHostContext@@@ATL@@@A.c)
 *     ?CleanupDelayedInteractivityNotification@CApplication@@IEAAJXZ @ 0x18000C6E4 (-CleanupDelayedInteractivityNotification@CApplication@@IEAAJXZ.c)
 *     ?CleanupBCMStartupLatencyGracePeriod@CApplication@@QEAAXXZ @ 0x18000D444 (-CleanupBCMStartupLatencyGracePeriod@CApplication@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x180024CF0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=9
CApplication *__fastcall CApplication::`vector deleting destructor'(CApplication *this, char a2)
{
  __int64 v4; // rdx
  void *v5; // rcx
  HANDLE ProcessHeap; // rax

  *(_QWORD *)this = &CApplication::`vftable';
  v4 = *((_QWORD *)this + 21);
  if ( v4 )
  {
    (*(void (__fastcall **)(struct CAudioThreadPool *, __int64, __int64))(*(_QWORD *)ThreadPool + 32LL))(
      ThreadPool,
      v4,
      1LL);
    (*(void (__fastcall **)(struct CAudioThreadPool *, _QWORD))(*(_QWORD *)ThreadPool + 16LL))(
      ThreadPool,
      *((_QWORD *)this + 21));
  }
  CApplication::CleanupBCMStartupLatencyGracePeriod(this);
  CApplication::CleanupDelayedInteractivityNotification(this);
  v5 = (void *)*((_QWORD *)this + 2);
  if ( v5 )
  {
    CoTaskMemFree(v5);
    *((_QWORD *)this + 2) = 0LL;
  }
  DeleteCriticalSection((LPCRITICAL_SECTION)this + 10);
  DeleteCriticalSection((LPCRITICAL_SECTION)((char *)this + 344));
  DeleteCriticalSection((LPCRITICAL_SECTION)((char *)this + 288));
  DeleteCriticalSection((LPCRITICAL_SECTION)this + 6);
  DeleteCriticalSection((LPCRITICAL_SECTION)((char *)this + 184));
  DeleteCriticalSection((LPCRITICAL_SECTION)((char *)this + 128));
  ATL::CAtlList<CPickerHostContext *,ATL::CElementTraits<CPickerHostContext *>>::RemoveAll((__int64)this + 64);
  DeleteCriticalSection((LPCRITICAL_SECTION)((char *)this + 24));
  *(_QWORD *)this = &CRefCountedObject::`vftable';
  if ( (a2 & 1) != 0 )
  {
    ProcessHeap = GetProcessHeap();
    HeapFree(ProcessHeap, 0, this);
  }
  return this;
}
