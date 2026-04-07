/*
 * XREFs of ?OnAnimationComplete@CStoryboard@@UEAAJI@Z @ 0x18000F790
 * Callers:
 *     ?OnAnimationComplete@CAnimationScheduler@@UEAAJI@Z @ 0x1800105A0 (-OnAnimationComplete@CAnimationScheduler@@UEAAJI@Z.c)
 * Callees:
 *     ?_NotifyStoryboardState@CStoryboard@@IEAAXW4DWMTRANSITION_STORYBOARD_STATE@@@Z @ 0x18000ECE0 (-_NotifyStoryboardState@CStoryboard@@IEAAXW4DWMTRANSITION_STORYBOARD_STATE@@@Z.c)
 *     ?_Cleanup@CStoryboard@@IEAAXXZ @ 0x18000F414 (-_Cleanup@CStoryboard@@IEAAXXZ.c)
 */

__int64 __fastcall CStoryboard::OnAnimationComplete(CStoryboard *this, int a2)
{
  CStoryboard *v3; // rbx

  if ( *((_DWORD *)this + 3) == a2 )
  {
    v3 = (CStoryboard *)((char *)this - 16);
    CStoryboard::_NotifyStoryboardState((__int64)this - 16, 4);
    CStoryboard::_Cleanup(v3);
  }
  return 0LL;
}
