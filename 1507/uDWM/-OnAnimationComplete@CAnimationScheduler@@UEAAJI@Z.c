/*
 * XREFs of ?OnAnimationComplete@CAnimationScheduler@@UEAAJI@Z @ 0x18000BF70
 * Callers:
 *     ?OnAnimationClockChanged@CAnimationScheduler@@UEAAXU_GUID@@W4AnimationClockState@@@Z @ 0x18000BB40 (-OnAnimationClockChanged@CAnimationScheduler@@UEAAXU_GUID@@W4AnimationClockState@@@Z.c)
 * Callees:
 *     ?_CleanupTransition@CAnimationScheduler@@AEAAXXZ @ 0x18000BFF0 (-_CleanupTransition@CAnimationScheduler@@AEAAXXZ.c)
 *     ?OnAnimationComplete@CStoryboard@@UEAAJI@Z @ 0x18000FCB0 (-OnAnimationComplete@CStoryboard@@UEAAJI@Z.c)
 */

__int64 __fastcall CAnimationScheduler::OnAnimationComplete(CAnimationScheduler *this, unsigned int a2)
{
  __int64 v2; // rbx
  unsigned int i; // esi

  v2 = 0LL;
  for ( i = 0; i < *((_DWORD *)this + 10); ++i )
    CStoryboard::OnAnimationComplete((CStoryboard *)(*(_QWORD *)(*((_QWORD *)this + 2) + 8LL * i) + 16LL), a2);
  if ( *((_DWORD *)this + 10) )
  {
    while ( *(_DWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 8 * v2) + 24LL) == 4 )
    {
      v2 = (unsigned int)(v2 + 1);
      if ( (unsigned int)v2 >= *((_DWORD *)this + 10) )
        goto LABEL_6;
    }
  }
  else
  {
LABEL_6:
    CAnimationScheduler::_CleanupTransition(this);
  }
  return 0LL;
}
