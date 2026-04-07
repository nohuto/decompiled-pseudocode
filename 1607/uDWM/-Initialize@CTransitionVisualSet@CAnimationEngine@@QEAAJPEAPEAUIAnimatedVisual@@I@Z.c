/*
 * XREFs of ?Initialize@CTransitionVisualSet@CAnimationEngine@@QEAAJPEAPEAUIAnimatedVisual@@I@Z @ 0x18003F714
 * Callers:
 *     ?ScheduleStartAnimation@CAnimationEngine@@QEAAJHPEAPEAUIAnimatedVisual@@IPEAI@Z @ 0x180013314 (-ScheduleStartAnimation@CAnimationEngine@@QEAAJHPEAPEAUIAnimatedVisual@@IPEAI@Z.c)
 * Callees:
 *     ?OnStoryboardBegin@CAnimatedTransitionVisual@@UEAAJI@Z @ 0x180014C00 (-OnStoryboardBegin@CAnimatedTransitionVisual@@UEAAJI@Z.c)
 *     ?Alloc@ProcessHeapImpl@WPF@@UEAAPEAX_K@Z @ 0x18002AE50 (-Alloc@ProcessHeapImpl@WPF@@UEAAPEAX_K@Z.c)
 *     ??_GCTransitionVisual@CAnimationEngine@@QEAAPEAXI@Z @ 0x18003F8C8 (--_GCTransitionVisual@CAnimationEngine@@QEAAPEAXI@Z.c)
 *     ?Initialize@CTransitionVisual@CAnimationEngine@@QEAAJXZ @ 0x18003F968 (-Initialize@CTransitionVisual@CAnimationEngine@@QEAAJXZ.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800503F8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800505E0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CAnimationEngine::CTransitionVisualSet::Initialize(
        CAnimationEngine::CTransitionVisualSet *this,
        struct IAnimatedVisual **a2,
        unsigned int a3)
{
  int v6; // edi
  SIZE_T v7; // rdx
  LPVOID (__fastcall *v8)(WPF::ProcessHeapImpl *, SIZE_T); // rax
  LPVOID v9; // rax
  unsigned int v10; // ebp
  __int64 v11; // rsi
  LPVOID (__fastcall *v12)(WPF::ProcessHeapImpl *, SIZE_T); // rax
  _DWORD *v13; // rax
  _DWORD *v14; // rdi
  struct IAnimatedVisual *v15; // rcx
  CAnimationEngine::CTransitionVisual *v16; // rcx
  int v17; // eax
  CAnimatedTransitionVisual *v18; // rcx
  __int64 (__fastcall *v19)(CAnimatedTransitionVisual *, char); // rax
  __int64 v20; // rdx
  int v21; // eax
  unsigned int v22; // edx
  __int64 i; // rsi
  CAnimationEngine::CTransitionVisual *v25; // rcx
  unsigned int v26; // [rsp+20h] [rbp-28h]

  v6 = 0;
  v7 = 8LL * a3;
  if ( !is_mul_ok(a3, 8uLL) )
    v7 = -1LL;
  v8 = *(LPVOID (__fastcall **)(WPF::ProcessHeapImpl *, SIZE_T))(*(_QWORD *)WPF::g_pProcessHeap + 8LL);
  if ( v8 == WPF::ProcessHeapImpl::Alloc )
    v9 = WPF::ProcessHeapImpl::Alloc(WPF::g_pProcessHeap, v7);
  else
    v9 = (LPVOID)((__int64 (__fastcall *)(WPF::ProcessHeapImpl *, SIZE_T, LPVOID (__fastcall *)(WPF::ProcessHeapImpl *, SIZE_T)))v8)(
                   WPF::g_pProcessHeap,
                   v7,
                   WPF::ProcessHeapImpl::Alloc);
  *((_QWORD *)this + 3) = v9;
  if ( v9 )
  {
    v10 = 0;
    *((_DWORD *)this + 1) = a3;
    if ( a3 )
    {
      v11 = 0LL;
      while ( 1 )
      {
        v12 = *(LPVOID (__fastcall **)(WPF::ProcessHeapImpl *, SIZE_T))(*(_QWORD *)WPF::g_pProcessHeap + 8LL);
        if ( v12 == WPF::ProcessHeapImpl::Alloc )
          v13 = WPF::ProcessHeapImpl::Alloc(WPF::g_pProcessHeap, 0x58uLL);
        else
          v13 = (_DWORD *)v12(WPF::g_pProcessHeap, 88LL);
        v14 = v13;
        if ( v13 )
        {
          v15 = a2[v11];
          v13[16] = 0;
          v13[17] = 0;
          v13[18] = 0;
          v13[19] = 0;
          v13[20] = 0;
          v13[21] = 0;
          *(_QWORD *)v13 = v15;
          if ( v15 )
            (*(void (__fastcall **)(struct IAnimatedVisual *))(*(_QWORD *)v15 + 264LL))(v15);
        }
        *(_QWORD *)(v11 * 8 + *((_QWORD *)this + 3)) = v14;
        v16 = *(CAnimationEngine::CTransitionVisual **)(v11 * 8 + *((_QWORD *)this + 3));
        if ( !v16 )
        {
          v26 = 1619;
          goto LABEL_29;
        }
        v17 = CAnimationEngine::CTransitionVisual::Initialize(v16);
        v6 = v17;
        if ( v17 < 0 )
          break;
        v18 = a2[v11];
        v19 = **(__int64 (__fastcall ***)(CAnimatedTransitionVisual *, char))v18;
        v20 = *(unsigned int *)this;
        if ( v19 == CAnimatedTransitionVisual::OnStoryboardBegin )
          v21 = CAnimatedTransitionVisual::OnStoryboardBegin(v18, v20);
        else
          v21 = v19(v18, v20);
        v6 = v21;
        if ( v21 < 0 )
        {
          MilInstrumentationCheckHR(0x14u, 0LL, 0, v21, 0x655u);
          goto LABEL_19;
        }
        ++v10;
        ++v11;
        if ( v10 >= a3 )
          goto LABEL_19;
      }
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v17, 0x654u);
LABEL_19:
      if ( v6 < 0 )
        goto LABEL_30;
    }
  }
  else
  {
    v26 = 1612;
LABEL_29:
    v6 = -2147024882;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024882, v26);
LABEL_30:
    for ( i = 0LL; (unsigned int)i < *((_DWORD *)this + 1); i = (unsigned int)(i + 1) )
    {
      v25 = *(CAnimationEngine::CTransitionVisual **)(*((_QWORD *)this + 3) + 8 * i);
      if ( v25 )
      {
        CAnimationEngine::CTransitionVisual::`scalar deleting destructor'(v25, v22);
        *(_QWORD *)(*((_QWORD *)this + 3) + 8 * i) = 0LL;
      }
    }
    if ( *((_QWORD *)this + 3) )
    {
      (*(void (__fastcall **)(WPF::ProcessHeapImpl *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(WPF::g_pProcessHeap);
      *((_QWORD *)this + 3) = 0LL;
    }
    *((_DWORD *)this + 1) = 0;
  }
  return (unsigned int)v6;
}
