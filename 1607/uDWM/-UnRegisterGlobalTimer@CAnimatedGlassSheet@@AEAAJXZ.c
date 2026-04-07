/*
 * XREFs of ?UnRegisterGlobalTimer@CAnimatedGlassSheet@@AEAAJXZ @ 0x1800840E4
 * Callers:
 *     ??1CAnimatedGlassSheet@@UEAA@XZ @ 0x180083414 (--1CAnimatedGlassSheet@@UEAA@XZ.c)
 *     ?StopAnimation@CAnimatedGlassSheet@@QEAAJXZ @ 0x180083FE8 (-StopAnimation@CAnimatedGlassSheet@@QEAAJXZ.c)
 * Callees:
 *     ?UnregisterForGlobalTimeChangeNotification@CDesktopManager@@SA_NPEAVCVisual@@@Z @ 0x18003DC64 (-UnregisterForGlobalTimeChangeNotification@CDesktopManager@@SA_NPEAVCVisual@@@Z.c)
 */

__int64 __fastcall CAnimatedGlassSheet::UnRegisterGlobalTimer(CAnimatedGlassSheet *this)
{
  if ( *((_BYTE *)this + 512) )
  {
    CDesktopManager::UnregisterForGlobalTimeChangeNotification(this);
    *((_BYTE *)this + 512) = 0;
  }
  return 0LL;
}
