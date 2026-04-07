/*
 * XREFs of ?Initialize@CTransitionVisualSet@CAnimationEngine@@QEAAJPEAPEAUIAnimatedVisual@@I@Z @ 0x180039758
 * Callers:
 *     ?ScheduleStartAnimation@CAnimationEngine@@QEAAJHPEAPEAUIAnimatedVisual@@IPEAI@Z @ 0x180038D74 (-ScheduleStartAnimation@CAnimationEngine@@QEAAJHPEAPEAUIAnimatedVisual@@IPEAI@Z.c)
 * Callees:
 *     ?OnStoryboardBegin@CAnimatedTransitionVisual@@UEAAJI@Z @ 0x18000DDC0 (-OnStoryboardBegin@CAnimatedTransitionVisual@@UEAAJI@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800118D8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?Alloc@ProcessHeapImpl@WPF@@UEAAPEAX_K@Z @ 0x18002B4D0 (-Alloc@ProcessHeapImpl@WPF@@UEAAPEAX_K@Z.c)
 *     ??_GCTransitionVisual@CAnimationEngine@@QEAAPEAXI@Z @ 0x18003993C (--_GCTransitionVisual@CAnimationEngine@@QEAAPEAXI@Z.c)
 *     ?Initialize@CTransitionVisual@CAnimationEngine@@QEAAJXZ @ 0x1800399E8 (-Initialize@CTransitionVisual@CAnimationEngine@@QEAAJXZ.c)
 *     ?OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z @ 0x18004EF10 (-OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z.c)
 */

__int64 __fastcall CAnimationEngine::CTransitionVisualSet::Initialize(
        CAnimationEngine::CTransitionVisualSet *this,
        struct IAnimatedVisual **a2,
        unsigned int a3)
{
  struct IAnimatedVisual **v4; // r15
  int v6; // ebp
  __int64 v7; // rbx
  __int64 v8; // rax
  unsigned int v9; // r12d
  __int64 v10; // rsi
  LPVOID (__fastcall *v11)(WPF::ProcessHeapImpl *, SIZE_T); // rdi
  _DWORD *v12; // rax
  _DWORD *v13; // rdi
  struct IAnimatedVisual *v14; // r15
  CAnimationEngine::CTransitionVisual *v15; // rcx
  int v16; // eax
  int v17; // ebp
  __int64 (__fastcall *v18)(CAnimatedTransitionVisual *, char); // rdi
  int v19; // eax
  unsigned int v20; // edx
  __int64 i; // rbx
  CAnimationEngine::CTransitionVisual *v23; // rcx
  unsigned int v24; // [rsp+20h] [rbp-38h]

  v4 = a2;
  v6 = 0;
  v7 = 8LL * a3;
  if ( !is_mul_ok(a3, 8uLL) )
    v7 = -1LL;
  v8 = (*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 8LL))(
         WPF::g_pProcessHeap,
         v7);
  *((_QWORD *)this + 3) = v8;
  if ( v8 )
  {
    v9 = 0;
    *((_DWORD *)this + 1) = a3;
    if ( a3 )
    {
      v10 = 0LL;
      while ( 1 )
      {
        v11 = *(LPVOID (__fastcall **)(WPF::ProcessHeapImpl *, SIZE_T))(*(_QWORD *)WPF::g_pProcessHeap + 8LL);
        if ( v11 == WPF::ProcessHeapImpl::Alloc )
          v12 = WPF::ProcessHeapImpl::Alloc(WPF::g_pProcessHeap, 0x58uLL);
        else
          v12 = (_DWORD *)v11(WPF::g_pProcessHeap, 88LL);
        v13 = v12;
        if ( v12 )
        {
          v14 = v4[v10];
          v12[16] = 0;
          v12[17] = 0;
          v12[18] = 0;
          v12[19] = 0;
          v12[20] = 0;
          v12[21] = 0;
          *(_QWORD *)v12 = v14;
          if ( v14 )
            (*(void (__fastcall **)(struct IAnimatedVisual *))(*(_QWORD *)v14 + 264LL))(v14);
          v4 = a2;
        }
        *(_QWORD *)(v10 * 8 + *((_QWORD *)this + 3)) = v13;
        v15 = *(CAnimationEngine::CTransitionVisual **)(v10 * 8 + *((_QWORD *)this + 3));
        if ( !v15 )
        {
          v24 = 1619;
          goto LABEL_27;
        }
        v16 = CAnimationEngine::CTransitionVisual::Initialize(v15);
        v6 = v16;
        if ( v16 < 0 )
          break;
        v17 = *(_DWORD *)this;
        v18 = **(__int64 (__fastcall ***)(CAnimatedTransitionVisual *, char))v4[v10];
        if ( v18 == CAnimatedTransitionVisual::OnStoryboardBegin )
          v19 = CAnimatedTransitionVisual::OnStoryboardBegin(v4[v10], v17);
        else
          v19 = v18(v4[v10], v17);
        v6 = v19;
        if ( v19 < 0 )
        {
          MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v19, 0x655u);
          goto LABEL_18;
        }
        ++v9;
        ++v10;
        if ( v9 >= a3 )
          goto LABEL_18;
      }
      MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v16, 0x654u);
LABEL_18:
      if ( v6 < 0 )
        goto LABEL_28;
    }
  }
  else
  {
    v24 = 1612;
LABEL_27:
    v6 = -2147024882;
    MilInstrumentationCheckHR(0x14u, 0LL, 0LL, -2147024882, v24);
LABEL_28:
    for ( i = 0LL; (unsigned int)i < *((_DWORD *)this + 1); i = (unsigned int)(i + 1) )
    {
      v23 = *(CAnimationEngine::CTransitionVisual **)(*((_QWORD *)this + 3) + 8 * i);
      if ( v23 )
      {
        CAnimationEngine::CTransitionVisual::`scalar deleting destructor'(v23, v20);
        *(_QWORD *)(*((_QWORD *)this + 3) + 8 * i) = 0LL;
      }
    }
    if ( *((_QWORD *)this + 3) )
    {
      (*(void (__fastcall **)(WPF::ProcessHeapImpl *, _QWORD))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
        WPF::g_pProcessHeap,
        *((_QWORD *)this + 3));
      *((_QWORD *)this + 3) = 0LL;
    }
    *((_DWORD *)this + 1) = 0;
  }
  return (unsigned int)v6;
}
