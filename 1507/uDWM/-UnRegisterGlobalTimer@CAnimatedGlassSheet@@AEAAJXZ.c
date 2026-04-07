/*
 * XREFs of ?UnRegisterGlobalTimer@CAnimatedGlassSheet@@AEAAJXZ @ 0x18007BF70
 * Callers:
 *     ??1CAnimatedGlassSheet@@UEAA@XZ @ 0x18007B224 (--1CAnimatedGlassSheet@@UEAA@XZ.c)
 *     ?StopAnimation@CAnimatedGlassSheet@@QEAAJXZ @ 0x18007BE6C (-StopAnimation@CAnimatedGlassSheet@@QEAAJXZ.c)
 * Callees:
 *     ?UnregisterForGlobalTimeChangeNotification@CDesktopManager@@SA_NPEAVCVisual@@@Z @ 0x18001281C (-UnregisterForGlobalTimeChangeNotification@CDesktopManager@@SA_NPEAVCVisual@@@Z.c)
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
