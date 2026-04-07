/*
 * XREFs of ?Initialize@CTransitionVisualSet@CAnimationEngine@@QEAAJPEAPEAUIAnimatedVisual@@I@Z @ 0x18003B1C0
 * Callers:
 *     ?ScheduleStartAnimation@CAnimationEngine@@QEAAJHPEAPEAUIAnimatedVisual@@IPEAI@Z @ 0x1800333B8 (-ScheduleStartAnimation@CAnimationEngine@@QEAAJHPEAPEAUIAnimatedVisual@@IPEAI@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180004308 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ??_GCTransitionVisual@CAnimationEngine@@QEAAPEAXI@Z @ 0x18003B380 (--_GCTransitionVisual@CAnimationEngine@@QEAAPEAXI@Z.c)
 *     ?Initialize@CTransitionVisual@CAnimationEngine@@QEAAJXZ @ 0x18003B40C (-Initialize@CTransitionVisual@CAnimationEngine@@QEAAJXZ.c)
 *     ?OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z @ 0x1800488B0 (-OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z.c)
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
  __int64 v11; // rax
  __int64 v12; // rdi
  struct IAnimatedVisual *v13; // r15
  CAnimationEngine::CTransitionVisual *v14; // rcx
  int v15; // eax
  int v16; // eax
  unsigned int v17; // edx
  __int64 i; // rbx
  CAnimationEngine::CTransitionVisual *v20; // rcx
  unsigned int v21; // [rsp+20h] [rbp-38h]

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
        v11 = (*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 8LL))(
                WPF::g_pProcessHeap,
                88LL);
        v12 = v11;
        if ( v11 )
        {
          v13 = v4[v10];
          *(_DWORD *)(v11 + 64) = 0;
          *(_DWORD *)(v11 + 68) = 0;
          *(_DWORD *)(v11 + 72) = 0;
          *(_DWORD *)(v11 + 76) = 0;
          *(_DWORD *)(v11 + 80) = 0;
          *(_DWORD *)(v11 + 84) = 0;
          *(_QWORD *)v11 = v13;
          if ( v13 )
            (*(void (__fastcall **)(struct IAnimatedVisual *))(*(_QWORD *)v13 + 264LL))(v13);
          v4 = a2;
        }
        else
        {
          v12 = 0LL;
        }
        *(_QWORD *)(v10 * 8 + *((_QWORD *)this + 3)) = v12;
        v14 = *(CAnimationEngine::CTransitionVisual **)(v10 * 8 + *((_QWORD *)this + 3));
        if ( !v14 )
        {
          v21 = 1619;
          goto LABEL_22;
        }
        v15 = CAnimationEngine::CTransitionVisual::Initialize(v14);
        v6 = v15;
        if ( v15 < 0 )
          break;
        v16 = (**(__int64 (__fastcall ***)(struct IAnimatedVisual *, _QWORD))v4[v10])(v4[v10], *(unsigned int *)this);
        v6 = v16;
        if ( v16 < 0 )
        {
          MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v16, 0x655u);
          goto LABEL_14;
        }
        ++v9;
        ++v10;
        if ( v9 >= a3 )
          goto LABEL_14;
      }
      MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v15, 0x654u);
LABEL_14:
      if ( v6 < 0 )
        goto LABEL_23;
    }
  }
  else
  {
    v21 = 1612;
LABEL_22:
    v6 = -2147024882;
    MilInstrumentationCheckHR(0x14u, 0LL, 0LL, -2147024882, v21);
LABEL_23:
    for ( i = 0LL; (unsigned int)i < *((_DWORD *)this + 1); i = (unsigned int)(i + 1) )
    {
      v20 = *(CAnimationEngine::CTransitionVisual **)(*((_QWORD *)this + 3) + 8 * i);
      if ( v20 )
      {
        CAnimationEngine::CTransitionVisual::`scalar deleting destructor'(v20, v17);
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
