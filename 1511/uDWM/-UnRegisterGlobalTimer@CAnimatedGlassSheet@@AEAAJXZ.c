/*
 * XREFs of ?UnRegisterGlobalTimer@CAnimatedGlassSheet@@AEAAJXZ @ 0x1800839A0
 * Callers:
 *     ??1CAnimatedGlassSheet@@UEAA@XZ @ 0x180082C50 (--1CAnimatedGlassSheet@@UEAA@XZ.c)
 *     ?StopAnimation@CAnimatedGlassSheet@@QEAAJXZ @ 0x18008389C (-StopAnimation@CAnimatedGlassSheet@@QEAAJXZ.c)
 * Callees:
 *     ?UnregisterForGlobalTimeChangeNotification@CDesktopManager@@SA_NPEAVCVisual@@@Z @ 0x18003D030 (-UnregisterForGlobalTimeChangeNotification@CDesktopManager@@SA_NPEAVCVisual@@@Z.c)
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
