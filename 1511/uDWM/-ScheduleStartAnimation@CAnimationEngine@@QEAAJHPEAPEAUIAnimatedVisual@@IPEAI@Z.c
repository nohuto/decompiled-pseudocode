/*
 * XREFs of ?ScheduleStartAnimation@CAnimationEngine@@QEAAJHPEAPEAUIAnimatedVisual@@IPEAI@Z @ 0x180038D74
 * Callers:
 *     ?ScheduleStartAnimation@CAnimationEngine@@QEAAJHAEBV?$DynArray@PEAUIAnimatedVisual@@$0A@@@PEAI@Z @ 0x180038C5C (-ScheduleStartAnimation@CAnimationEngine@@QEAAJHAEBV-$DynArray@PEAUIAnimatedVisual@@$0A@@@PEAI@Z.c)
 *     ?StartAnimation@CThumbnailTransition@@QEAAJPEAVCThumbnailAnimatedVisual@@H@Z @ 0x18009B94C (-StartAnimation@CThumbnailTransition@@QEAAJPEAVCThumbnailAnimatedVisual@@H@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800118D8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?PostStartAnimations@CDesktopManager@@QEAAJXZ @ 0x180021844 (-PostStartAnimations@CDesktopManager@@QEAAJXZ.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x18002B384 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ??1?$CGuard@VCDwmCS@@@@QEAA@XZ @ 0x180038FB0 (--1-$CGuard@VCDwmCS@@@@QEAA@XZ.c)
 *     ?Initialize@CTransitionVisualSet@CAnimationEngine@@QEAAJPEAPEAUIAnimatedVisual@@I@Z @ 0x180039758 (-Initialize@CTransitionVisualSet@CAnimationEngine@@QEAAJPEAPEAUIAnimatedVisual@@I@Z.c)
 *     ??_GCTransitionVisualSet@CAnimationEngine@@QEAAPEAXI@Z @ 0x1800398EC (--_GCTransitionVisualSet@CAnimationEngine@@QEAAPEAXI@Z.c)
 *     ?OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z @ 0x18004EF10 (-OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z.c)
 *     Template_qdq @ 0x18008F42C (Template_qdq.c)
 */

__int64 __fastcall CAnimationEngine::ScheduleStartAnimation(
        CAnimationEngine *this,
        int a2,
        struct IAnimatedVisual **a3,
        unsigned int a4,
        unsigned int *a5)
{
  int v9; // ecx
  unsigned int v10; // esi
  __int64 v11; // rax
  int started; // eax
  unsigned int v13; // ebx
  unsigned int v14; // eax
  unsigned int v15; // edx
  CDesktopManager *v16; // rcx
  int v18; // eax
  int v19; // edi
  unsigned int v20; // edx
  unsigned int v21; // [rsp+20h] [rbp-48h]
  struct _RTL_CRITICAL_SECTION *v22; // [rsp+30h] [rbp-38h] BYREF
  CAnimationEngine::CTransitionVisualSet *v23; // [rsp+70h] [rbp+8h] BYREF

  v22 = &CDesktopManager::s_csDwmInstance;
  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  v10 = *((_DWORD *)this + 8);
  v23 = 0LL;
  *((_DWORD *)this + 8) = v10 + 1;
  if ( (Microsoft_Windows_Dwm_UdwmEnableBits & 1) != 0 )
    Template_qdq(v9, (unsigned int)&UdwmAnimationEngine_Animation_Start, v10, a2, 0);
  v11 = (*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 8LL))(
          WPF::g_pProcessHeap,
          56LL);
  if ( v11 )
  {
    *(_DWORD *)(v11 + 4) = 0;
    *(_DWORD *)(v11 + 8) = 0;
    *(_QWORD *)(v11 + 16) = 0LL;
    *(_QWORD *)(v11 + 40) = 0LL;
    *(_QWORD *)(v11 + 48) = 0LL;
    *(_QWORD *)(v11 + 24) = 0LL;
    *(_DWORD *)v11 = v10;
    *(_DWORD *)(v11 + 12) = a2;
    *(_WORD *)(v11 + 32) = 0;
  }
  v23 = (CAnimationEngine::CTransitionVisualSet *)v11;
  if ( !v11 )
  {
    v13 = -2147024882;
    MilInstrumentationCheckHR(0x14u, 0LL, 0LL, -2147024882, 0x7Fu);
    goto LABEL_22;
  }
  started = CAnimationEngine::CTransitionVisualSet::Initialize((CAnimationEngine::CTransitionVisualSet *)v11, a3, a4);
  v13 = started;
  if ( started >= 0 )
  {
    v14 = *((_DWORD *)this + 16);
    v15 = v14 + 1;
    if ( v14 + 1 < v14 )
    {
      v19 = -2147024362;
      MilInstrumentationCheckHR(0x14u, 0LL, 0LL, -2147024362, 0xB5u);
      v13 = -2147024362;
    }
    else
    {
      if ( v15 <= *((_DWORD *)this + 15) )
      {
        *(_QWORD *)(*((_QWORD *)this + 5) + 8LL * v14) = v23;
        *((_DWORD *)this + 16) = v15;
LABEL_10:
        v16 = CDesktopManager::s_pDesktopManagerInstance;
        *a5 = v10;
        started = CDesktopManager::PostStartAnimations(v16);
        v13 = started;
        if ( started >= 0 )
          goto LABEL_11;
        v21 = 134;
        goto LABEL_21;
      }
      v18 = DynArrayImpl<0>::AddMultipleAndSet((__int64)this + 40, 8u, 1, &v23);
      v19 = v18;
      if ( v18 < 0 )
        MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v18, 0xC0u);
      v13 = v19;
      if ( v19 >= 0 )
        goto LABEL_10;
    }
    MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v19, 0x82u);
    goto LABEL_22;
  }
  v21 = 129;
LABEL_21:
  MilInstrumentationCheckHR(0x14u, 0LL, 0LL, started, v21);
LABEL_22:
  if ( v23 )
  {
    CAnimationEngine::CTransitionVisualSet::`scalar deleting destructor'(v23, v20);
    v23 = 0LL;
  }
LABEL_11:
  CGuard<CDwmCS>::~CGuard<CDwmCS>(&v22);
  return v13;
}
