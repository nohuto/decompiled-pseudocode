/*
 * XREFs of ?AbandonTransition@CAnimationScheduler@@QEAAJH@Z @ 0x18001065C
 * Callers:
 *     ?OnAnimationStart@CAppArrangementDelayed@@EEAAJXZ @ 0x180002D20 (-OnAnimationStart@CAppArrangementDelayed@@EEAAJXZ.c)
 *     ?OnEndTransitionRequest@CSlideOutCharm@@UEAAJXZ @ 0x18000F9F0 (-OnEndTransitionRequest@CSlideOutCharm@@UEAAJXZ.c)
 *     ?OnEndTransitionRequest@CDialogSwitch@@UEAAJXZ @ 0x180092BB0 (-OnEndTransitionRequest@CDialogSwitch@@UEAAJXZ.c)
 *     ?OnEndTransitionRequest@CShrinkPanel@@UEAAJXZ @ 0x180092D00 (-OnEndTransitionRequest@CShrinkPanel@@UEAAJXZ.c)
 *     ?_WindowEnumCallback@CTDBN@@MEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStoryboard@@PEAJ@Z @ 0x180095A40 (-_WindowEnumCallback@CTDBN@@MEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStoryboard@@PEAJ@Z.c)
 * Callees:
 *     ?Abandon@CStoryboard@@QEAAXXZ @ 0x18000436C (-Abandon@CStoryboard@@QEAAXXZ.c)
 */

__int64 __fastcall CAnimationScheduler::AbandonTransition(CAnimationScheduler *this, int a2)
{
  __int64 v2; // rbx
  unsigned int i; // r9d
  __int64 v6; // rcx

  v2 = 0LL;
  for ( i = -2147467259; (unsigned int)v2 < *((_DWORD *)this + 10); v2 = (unsigned int)(v2 + 1) )
  {
    v6 = *(_QWORD *)(*((_QWORD *)this + 2) + 8 * v2);
    if ( *(_DWORD *)(v6 + 24) == 3 && *(_DWORD *)(v6 + 72) == a2 )
    {
      CStoryboard::Abandon((struct _GUID *)v6);
      i = 0;
    }
  }
  return i;
}
