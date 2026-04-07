/*
 * XREFs of ?ScheduleStartAnimation@CAnimationEngine@@QEAAJHAEBV?$DynArray@PEAUIAnimatedVisual@@$0A@@@PEAI@Z @ 0x1800131F8
 * Callers:
 *     ?ScheduleStartAnimation@CStoryboard@@QEAAJXZ @ 0x18000F810 (-ScheduleStartAnimation@CStoryboard@@QEAAJXZ.c)
 *     ?StartAnimation@CLoginTransition@@QEAAJHPEAVCVisual@@0_K@Z @ 0x18003A2FC (-StartAnimation@CLoginTransition@@QEAAJHPEAVCVisual@@0_K@Z.c)
 *     ?MidDelayExpired@CScreenRotation@@AEAAJXZ @ 0x18009045C (-MidDelayExpired@CScreenRotation@@AEAAJXZ.c)
 *     ?PreDelayExpired@CScreenRotation@@AEAAJXZ @ 0x18009086C (-PreDelayExpired@CScreenRotation@@AEAAJXZ.c)
 *     ?StartAnimation@CAccentTransition@@QEAAJPEBUACCENT_POLICY@@PEAVCAccent@@@Z @ 0x1800961AC (-StartAnimation@CAccentTransition@@QEAAJPEBUACCENT_POLICY@@PEAVCAccent@@@Z.c)
 * Callees:
 *     ??1?$CGuard@VCDwmCS@@@@QEAA@XZ @ 0x180010F54 (--1-$CGuard@VCDwmCS@@@@QEAA@XZ.c)
 *     ?ScheduleStartAnimation@CAnimationEngine@@QEAAJHPEAPEAUIAnimatedVisual@@IPEAI@Z @ 0x180013314 (-ScheduleStartAnimation@CAnimationEngine@@QEAAJHPEAPEAUIAnimatedVisual@@IPEAI@Z.c)
 *     ?Free@ProcessHeapImpl@WPF@@UEAAXPEAX@Z @ 0x18002ADD0 (-Free@ProcessHeapImpl@WPF@@UEAAXPEAX@Z.c)
 *     ?Alloc@ProcessHeapImpl@WPF@@UEAAPEAX_K@Z @ 0x18002AE50 (-Alloc@ProcessHeapImpl@WPF@@UEAAPEAX_K@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800503F8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800505E0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CAnimationEngine::ScheduleStartAnimation(
        CAnimationEngine *this,
        int a2,
        __int64 a3,
        unsigned int *a4)
{
  struct IAnimatedVisual **v4; // rdi
  unsigned int v9; // ebx
  unsigned __int64 v10; // rdx
  void *(__fastcall *v11)(WPF::ProcessHeapImpl *__hidden, unsigned __int64); // rax
  struct IAnimatedVisual **v12; // rax
  __int64 v13; // r8
  int started; // eax
  void (__fastcall *v15)(WPF::ProcessHeapImpl *__hidden, void *); // rax
  struct _RTL_CRITICAL_SECTION *v17; // [rsp+60h] [rbp+18h] BYREF

  v4 = 0LL;
  v9 = -2147024809;
  if ( *(_DWORD *)(a3 + 24) )
  {
    v17 = &CDesktopManager::s_csDwmInstance;
    EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
    v10 = 8LL * *(unsigned int *)(a3 + 24);
    if ( !is_mul_ok(*(unsigned int *)(a3 + 24), 8uLL) )
      v10 = -1LL;
    v11 = *(void *(__fastcall **)(WPF::ProcessHeapImpl *__hidden, unsigned __int64))(*(_QWORD *)WPF::g_pProcessHeap + 8LL);
    if ( v11 == WPF::ProcessHeapImpl::Alloc )
      v12 = (struct IAnimatedVisual **)WPF::ProcessHeapImpl::Alloc(WPF::g_pProcessHeap, v10);
    else
      v12 = (struct IAnimatedVisual **)((__int64 (__fastcall *)(WPF::ProcessHeapImpl *, unsigned __int64, void *(__fastcall *)(WPF::ProcessHeapImpl *__hidden, unsigned __int64)))v11)(
                                         WPF::g_pProcessHeap,
                                         v10,
                                         WPF::ProcessHeapImpl::Alloc);
    v4 = v12;
    v13 = 0LL;
    if ( v12 )
    {
      if ( *(_DWORD *)(a3 + 24) )
      {
        do
        {
          v12[v13] = *(struct IAnimatedVisual **)(*(_QWORD *)a3 + 8 * v13);
          v13 = (unsigned int)(v13 + 1);
        }
        while ( (unsigned int)v13 < *(_DWORD *)(a3 + 24) );
      }
      started = CAnimationEngine::ScheduleStartAnimation(this, a2, v12, *(_DWORD *)(a3 + 24), a4);
      v9 = started;
      if ( started < 0 )
        MilInstrumentationCheckHR(0x14u, 0LL, 0, started, 0xA2u);
    }
    else
    {
      v9 = -2147024882;
      MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024882, 0x9Cu);
    }
    CGuard<CDwmCS>::~CGuard<CDwmCS>(&v17);
  }
  v15 = *(void (__fastcall **)(WPF::ProcessHeapImpl *__hidden, void *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL);
  if ( v15 == WPF::ProcessHeapImpl::Free )
    WPF::ProcessHeapImpl::Free(WPF::g_pProcessHeap, v4);
  else
    v15(WPF::g_pProcessHeap, v4);
  return v9;
}
