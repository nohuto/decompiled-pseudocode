/*
 * XREFs of ?StopAnimation@CLoginTransition@@QEAAJXZ @ 0x18003A2D4
 * Callers:
 *     ?DesktopSwitchImmediately@CWindowList@@AEAAJ_K@Z @ 0x180030654 (-DesktopSwitchImmediately@CWindowList@@AEAAJ_K@Z.c)
 *     ?OnAnimationComplete@CLoginTransition@@UEAAJI@Z @ 0x18003A0E0 (-OnAnimationComplete@CLoginTransition@@UEAAJI@Z.c)
 *     ?StartAnimation@CLoginTransition@@QEAAJHPEAVCVisual@@0_K@Z @ 0x18003A2FC (-StartAnimation@CLoginTransition@@QEAAJHPEAVCVisual@@0_K@Z.c)
 *     ??_GCLoginTransition@@QEAAPEAXI@Z @ 0x18007F9C0 (--_GCLoginTransition@@QEAAPEAXI@Z.c)
 * Callees:
 *     ?_CleanupAnimation@CLoginTransition@@AEAAXXZ @ 0x18003A144 (-_CleanupAnimation@CLoginTransition@@AEAAXXZ.c)
 */

__int64 __fastcall CLoginTransition::StopAnimation(CLoginTransition *this)
{
  if ( *((_BYTE *)this + 68) )
  {
    CLoginTransition::_CleanupAnimation(this);
    *((_BYTE *)this + 68) = 0;
  }
  return 0LL;
}
