/*
 * XREFs of ?ScheduleStartAnimation@CAnimationEngine@@QEAAJHPEAPEAUIAnimatedVisual@@IPEAI@Z @ 0x180013314
 * Callers:
 *     ?ScheduleStartAnimation@CAnimationEngine@@QEAAJHAEBV?$DynArray@PEAUIAnimatedVisual@@$0A@@@PEAI@Z @ 0x1800131F8 (-ScheduleStartAnimation@CAnimationEngine@@QEAAJHAEBV-$DynArray@PEAUIAnimatedVisual@@$0A@@@PEAI@Z.c)
 *     ?StartAnimation@CThumbnailTransition@@QEAAJPEAVCThumbnailAnimatedVisual@@H@Z @ 0x1800986E4 (-StartAnimation@CThumbnailTransition@@QEAAJPEAVCThumbnailAnimatedVisual@@H@Z.c)
 * Callees:
 *     ??1?$CGuard@VCDwmCS@@@@QEAA@XZ @ 0x180010F54 (--1-$CGuard@VCDwmCS@@@@QEAA@XZ.c)
 *     ?PostStartAnimations@CDesktopManager@@QEAAJXZ @ 0x18001E5C4 (-PostStartAnimations@CDesktopManager@@QEAAJXZ.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x18002AD08 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?Alloc@ProcessHeapImpl@WPF@@UEAAPEAX_K@Z @ 0x18002AE50 (-Alloc@ProcessHeapImpl@WPF@@UEAAPEAX_K@Z.c)
 *     ?Initialize@CTransitionVisualSet@CAnimationEngine@@QEAAJPEAPEAUIAnimatedVisual@@I@Z @ 0x18003F714 (-Initialize@CTransitionVisualSet@CAnimationEngine@@QEAAJPEAPEAUIAnimatedVisual@@I@Z.c)
 *     ??_GCTransitionVisualSet@CAnimationEngine@@QEAAPEAXI@Z @ 0x18003F880 (--_GCTransitionVisualSet@CAnimationEngine@@QEAAPEAXI@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800503F8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800505E0 (_guard_dispatch_icall_nop.c)
 *     Template_qdq @ 0x18008E1F0 (Template_qdq.c)
 */

__int64 __fastcall CAnimationEngine::ScheduleStartAnimation(
        CAnimationEngine *this,
        unsigned int a2,
        struct IAnimatedVisual **a3,
        unsigned int a4,
        unsigned int *a5)
{
  int v9; // ecx
  unsigned int v10; // esi
  void *(__fastcall *v11)(WPF::ProcessHeapImpl *__hidden, unsigned __int64); // rax
  unsigned int *v12; // rax
  int started; // eax
  unsigned int v14; // ebx
  unsigned int v15; // eax
  unsigned int v16; // edx
  CDesktopManager *v17; // rcx
  int v19; // eax
  int v20; // edi
  unsigned int v21; // edx
  unsigned int v22; // [rsp+20h] [rbp-38h]
  struct _RTL_CRITICAL_SECTION *v23; // [rsp+30h] [rbp-28h] BYREF
  CAnimationEngine::CTransitionVisualSet *v24; // [rsp+60h] [rbp+8h] BYREF

  v23 = &CDesktopManager::s_csDwmInstance;
  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  v10 = *((_DWORD *)this + 8);
  v24 = 0LL;
  *((_DWORD *)this + 8) = v10 + 1;
  if ( (Microsoft_Windows_Dwm_UdwmEnableBits & 1) != 0 )
    Template_qdq(v9, (unsigned int)&UdwmAnimationEngine_Animation_Start, v10, a2, 0);
  v11 = *(void *(__fastcall **)(WPF::ProcessHeapImpl *__hidden, unsigned __int64))(*(_QWORD *)WPF::g_pProcessHeap + 8LL);
  if ( v11 == WPF::ProcessHeapImpl::Alloc )
    v12 = (unsigned int *)WPF::ProcessHeapImpl::Alloc(WPF::g_pProcessHeap, 0x38uLL);
  else
    v12 = (unsigned int *)v11(WPF::g_pProcessHeap, 56uLL);
  if ( v12 )
  {
    v12[1] = 0;
    v12[2] = 0;
    *((_QWORD *)v12 + 2) = 0LL;
    *((_WORD *)v12 + 16) = 0;
    *((_QWORD *)v12 + 5) = 0LL;
    *((_QWORD *)v12 + 6) = 0LL;
    *((_QWORD *)v12 + 3) = 0LL;
    *v12 = v10;
    v12[3] = a2;
  }
  v24 = (CAnimationEngine::CTransitionVisualSet *)v12;
  if ( !v12 )
  {
    v14 = -2147024882;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024882, 0x7Fu);
    goto LABEL_25;
  }
  started = CAnimationEngine::CTransitionVisualSet::Initialize((CAnimationEngine::CTransitionVisualSet *)v12, a3, a4);
  v14 = started;
  if ( started >= 0 )
  {
    v15 = *((_DWORD *)this + 16);
    v16 = v15 + 1;
    if ( v15 + 1 < v15 )
    {
      v20 = -2147024362;
      MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024362, 0xB5u);
      v14 = -2147024362;
    }
    else
    {
      if ( v16 <= *((_DWORD *)this + 15) )
      {
        *(_QWORD *)(*((_QWORD *)this + 5) + 8LL * v15) = v24;
        *((_DWORD *)this + 16) = v16;
LABEL_12:
        v17 = CDesktopManager::s_pDesktopManagerInstance;
        *a5 = v10;
        started = CDesktopManager::PostStartAnimations(v17);
        v14 = started;
        if ( started >= 0 )
          goto LABEL_13;
        v22 = 134;
        goto LABEL_24;
      }
      v19 = DynArrayImpl<0>::AddMultipleAndSet((char *)this + 40, 8LL, 1LL, &v24);
      v20 = v19;
      if ( v19 < 0 )
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v19, 0xC0u);
      v14 = v20;
      if ( v20 >= 0 )
        goto LABEL_12;
    }
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v20, 0x82u);
    goto LABEL_25;
  }
  v22 = 129;
LABEL_24:
  MilInstrumentationCheckHR(0x14u, 0LL, 0, started, v22);
LABEL_25:
  if ( v24 )
  {
    CAnimationEngine::CTransitionVisualSet::`scalar deleting destructor'(v24, v21);
    v24 = 0LL;
  }
LABEL_13:
  CGuard<CDwmCS>::~CGuard<CDwmCS>(&v23);
  return v14;
}
