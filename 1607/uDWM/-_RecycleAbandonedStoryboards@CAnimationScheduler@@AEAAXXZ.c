/*
 * XREFs of ?_RecycleAbandonedStoryboards@CAnimationScheduler@@AEAAXXZ @ 0x18000FE7C
 * Callers:
 *     ?OnAnimationClockChanged@CAnimationScheduler@@UEAAXU_GUID@@W4AnimationClockState@@@Z @ 0x1800100A0 (-OnAnimationClockChanged@CAnimationScheduler@@UEAAXU_GUID@@W4AnimationClockState@@@Z.c)
 *     ?_CleanupTransition@CAnimationScheduler@@AEAAXXZ @ 0x180010620 (-_CleanupTransition@CAnimationScheduler@@AEAAXXZ.c)
 *     ?OnEndTransitionRequestFromStoryboard@CAnimationScheduler@@QEAAJHPEAVCStoryboard@@@Z @ 0x1800106BC (-OnEndTransitionRequestFromStoryboard@CAnimationScheduler@@QEAAJHPEAVCStoryboard@@@Z.c)
 *     ?OnBeginTransitionRequestFromStoryboard@CAnimationScheduler@@QEAAJHPEBU_GUID@@PEAVCStoryboard@@PEAU2@@Z @ 0x1800107F4 (-OnBeginTransitionRequestFromStoryboard@CAnimationScheduler@@QEAAJHPEBU_GUID@@PEAVCStoryboard@@P.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800503F8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800505E0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CAnimationScheduler::_RecycleAbandonedStoryboards(CAnimationScheduler *this, __int64 a2)
{
  __int64 v2; // rbx
  _DWORD *v4; // rsi
  unsigned int v5; // eax
  __int64 v6; // r8
  __int64 v7; // rcx

  v2 = 0LL;
  while ( (unsigned int)v2 < *((_DWORD *)this + 10) )
  {
    v4 = *(_DWORD **)(*((_QWORD *)this + 2) + 8 * v2);
    if ( v4[6] == 4 )
    {
      v5 = *((_DWORD *)this + 10);
      if ( (unsigned int)v2 >= v5 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024809, 0x194u);
      }
      else
      {
        v6 = *((_QWORD *)this + 2);
        v7 = (unsigned int)v2;
        if ( (unsigned int)v2 < v5 - 1 )
        {
          do
          {
            a2 = (unsigned int)(v7 + 1);
            *(_QWORD *)(v6 + 8 * v7) = *(_QWORD *)(v6 + 8 * a2);
            v7 = a2;
          }
          while ( (unsigned int)a2 < *((_DWORD *)this + 10) - 1 );
        }
        --*((_DWORD *)this + 10);
      }
      (*(void (__fastcall **)(_DWORD *, __int64, __int64))(*(_QWORD *)v4 + 56LL))(v4, a2, v6);
    }
    else
    {
      v2 = (unsigned int)(v2 + 1);
    }
  }
}
