/*
 * XREFs of ?EnsureScrollAnimations@CInteractionTracker@@AEAAJXZ @ 0x18014A474
 * Callers:
 *     ?TransitionToInContact@CInteractionTracker@@AEAAXPEAVCManipulation@@@Z @ 0x18014C374 (-TransitionToInContact@CInteractionTracker@@AEAAXPEAVCManipulation@@@Z.c)
 *     ?TransitionToInertia@CInteractionTracker@@AEAAXXZ @ 0x18014C474 (-TransitionToInertia@CInteractionTracker@@AEAAXXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 *     ??$?4VCScrollPositionAnimation@@@?$ComPtr@VCScrollAnimation@@@WRL@Microsoft@@QEAAAEAV012@AEBV?$ComPtr@VCScrollPositionAnimation@@@12@@Z @ 0x1801495F0 (--$-4VCScrollPositionAnimation@@@-$ComPtr@VCScrollAnimation@@@WRL@Microsoft@@QEAAAEAV012@AEBV-$C.c)
 *     ??0CScrollAnimation@@QEAA@PEAVCComposition@@@Z @ 0x18015D508 (--0CScrollAnimation@@QEAA@PEAVCComposition@@@Z.c)
 *     ?Initialize@CScrollAnimation@@IEAAJPEAVCInteractionTracker@@W4ScrollAxis@@@Z @ 0x18015E0D8 (-Initialize@CScrollAnimation@@IEAAJPEAVCInteractionTracker@@W4ScrollAxis@@@Z.c)
 *     ??0CScrollPositionAnimation@@QEAA@PEAVCComposition@@@Z @ 0x18015F99C (--0CScrollPositionAnimation@@QEAA@PEAVCComposition@@@Z.c)
 *     ?Initialize@CScrollPositionAnimation@@QEAAJPEAVCInteractionTracker@@W4ScrollAxis@@@Z @ 0x18015FB0C (-Initialize@CScrollPositionAnimation@@QEAAJPEAVCInteractionTracker@@W4ScrollAxis@@@Z.c)
 */

__int64 __fastcall CInteractionTracker::EnsureScrollAnimations(CInteractionTracker *this)
{
  _QWORD *v2; // r14
  unsigned int v3; // esi
  CScrollAnimation *v4; // rax
  CScrollPositionAnimation *v5; // rbx
  int v6; // eax
  unsigned int v7; // edi
  CScrollPositionAnimation *v8; // rax
  int v9; // eax
  unsigned int v11; // [rsp+20h] [rbp-28h]
  CScrollPositionAnimation *v12; // [rsp+58h] [rbp+10h] BYREF

  v2 = (_QWORD *)((char *)this + 416);
  v3 = 0;
  while ( *v2 )
  {
LABEL_17:
    ++v3;
    ++v2;
    if ( (unsigned __int64)(int)v3 >= 3 )
      return 0;
  }
  if ( v3 != 2 )
  {
    v8 = (CScrollPositionAnimation *)(*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap
                                                                                                + 16LL))(
                                       WPF::g_pProcessHeap,
                                       544LL);
    if ( v8 )
      v5 = CScrollPositionAnimation::CScrollPositionAnimation(v8, *((struct CComposition **)this + 2));
    else
      v5 = 0LL;
    v12 = v5;
    if ( !v5 )
    {
      v11 = 2579;
      goto LABEL_23;
    }
    (*(void (__fastcall **)(CScrollPositionAnimation *))(*(_QWORD *)v5 + 8LL))(v5);
    v9 = CScrollPositionAnimation::Initialize(v5, this, v3);
    v7 = v9;
    if ( v9 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v9, 0xA15u);
      goto LABEL_21;
    }
    Microsoft::WRL::ComPtr<CScrollAnimation>::operator=<CScrollPositionAnimation>(
      (__int64 *)this + (int)v3 + 52,
      (__int64 *)&v12);
    goto LABEL_16;
  }
  v4 = (CScrollAnimation *)(*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap
                                                                                      + 16LL))(
                             WPF::g_pProcessHeap,
                             560LL);
  v5 = v4;
  if ( v4 )
  {
    CScrollAnimation::CScrollAnimation(v4, *((struct CComposition **)this + 2));
    *(_QWORD *)v5 = &CScrollScaleAnimation::`vftable';
  }
  else
  {
    v5 = 0LL;
  }
  v12 = v5;
  if ( v5 )
  {
    (*(void (__fastcall **)(CScrollPositionAnimation *))(*(_QWORD *)v5 + 8LL))(v5);
    v6 = CScrollAnimation::Initialize(v5, this, 2LL);
    v7 = v6;
    if ( v6 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v6, 0x25u);
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v7, 0xA0Cu);
LABEL_21:
      (*(void (__fastcall **)(CScrollPositionAnimation *))(*(_QWORD *)v5 + 16LL))(v5);
      return v7;
    }
    *((_DWORD *)v5 + 92) = 0;
    *((_DWORD *)v5 + 98) = 1056964608;
    *((_DWORD *)v5 + 99) = 1084227584;
    Microsoft::WRL::ComPtr<CScrollAnimation>::operator=<CScrollPositionAnimation>((__int64 *)this + 54, (__int64 *)&v12);
LABEL_16:
    (*(void (__fastcall **)(CScrollPositionAnimation *))(*(_QWORD *)v5 + 16LL))(v5);
    goto LABEL_17;
  }
  v11 = 2570;
LABEL_23:
  v7 = -2147024882;
  MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024882, v11);
  return v7;
}
