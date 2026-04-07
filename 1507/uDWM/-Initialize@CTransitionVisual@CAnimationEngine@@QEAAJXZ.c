/*
 * XREFs of ?Initialize@CTransitionVisual@CAnimationEngine@@QEAAJXZ @ 0x18003B40C
 * Callers:
 *     ?Initialize@CTransitionVisualSet@CAnimationEngine@@QEAAJPEAPEAUIAnimatedVisual@@I@Z @ 0x18003B1C0 (-Initialize@CTransitionVisualSet@CAnimationEngine@@QEAAJPEAPEAUIAnimatedVisual@@I@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180004308 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?Alloc@ProcessHeapImpl@WPF@@UEAAPEAX_K@Z @ 0x1800284D0 (-Alloc@ProcessHeapImpl@WPF@@UEAAPEAX_K@Z.c)
 *     ??_GCTransitionVariable@CAnimationEngine@@QEAAPEAXI@Z @ 0x18003B4B0 (--_GCTransitionVariable@CAnimationEngine@@QEAAPEAXI@Z.c)
 *     ?OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z @ 0x1800488B0 (-OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z.c)
 */

__int64 __fastcall CAnimationEngine::CTransitionVisual::Initialize(CAnimationEngine::CTransitionVisual *this)
{
  unsigned int v1; // r14d
  CAnimationEngine::CTransitionVariable **v2; // rbx
  unsigned int v3; // ebp
  _QWORD *v4; // rsi
  __int64 v5; // rdi
  LPVOID (__fastcall *v6)(WPF::ProcessHeapImpl *, SIZE_T); // r12
  _QWORD *v7; // rax
  unsigned int v9; // edx

  v1 = 0;
  v2 = (CAnimationEngine::CTransitionVariable **)((char *)this + 8);
  v3 = 0;
  v4 = (_QWORD *)((char *)this + 8);
  v5 = 7LL;
  while ( 1 )
  {
    v6 = *(LPVOID (__fastcall **)(WPF::ProcessHeapImpl *, SIZE_T))(*(_QWORD *)WPF::g_pProcessHeap + 8LL);
    if ( v6 == WPF::ProcessHeapImpl::Alloc )
      v7 = WPF::ProcessHeapImpl::Alloc(WPF::g_pProcessHeap, 0x18uLL);
    else
      v7 = (_QWORD *)v6(WPF::g_pProcessHeap, 24LL);
    if ( v7 )
    {
      *v7 = 0LL;
      v7[1] = 0LL;
    }
    *v4 = v7;
    if ( !v7 )
      break;
    ++v3;
    ++v4;
    if ( v3 >= 7 )
      return v1;
  }
  v1 = -2147024882;
  MilInstrumentationCheckHR(0x14u, 0LL, 0LL, -2147024882, 0x602u);
  do
  {
    if ( *v2 )
    {
      CAnimationEngine::CTransitionVariable::`scalar deleting destructor'(*v2, v9);
      *v2 = 0LL;
    }
    ++v2;
    --v5;
  }
  while ( v5 );
  return v1;
}
