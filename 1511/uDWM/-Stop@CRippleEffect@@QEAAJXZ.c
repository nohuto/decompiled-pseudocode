/*
 * XREFs of ?Stop@CRippleEffect@@QEAAJXZ @ 0x1800842D8
 * Callers:
 *     ?DestroyWindow@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x180031E10 (-DestroyWindow@CWindowList@@UEAAJPEAUIDwmWindow@@@Z.c)
 *     ??1CRippleEffect@@MEAA@XZ @ 0x180083D78 (--1CRippleEffect@@MEAA@XZ.c)
 *     ?Start@CRippleEffect@@QEAAJPEBUtagPOINT@@M@Z @ 0x1800840F0 (-Start@CRippleEffect@@QEAAJPEBUtagPOINT@@M@Z.c)
 *     ?UpdateTransition@CRippleEffect@@AEAAJXZ @ 0x180084340 (-UpdateTransition@CRippleEffect@@AEAAJXZ.c)
 * Callees:
 *     ?SetOpacity@CVisual@@QEAAXN@Z @ 0x180022540 (-SetOpacity@CVisual@@QEAAXN@Z.c)
 *     ?UnregisterForGlobalTimeChangeNotification@CDesktopManager@@SA_NPEAVCVisual@@@Z @ 0x18003D030 (-UnregisterForGlobalTimeChangeNotification@CDesktopManager@@SA_NPEAVCVisual@@@Z.c)
 */

__int64 __fastcall CRippleEffect::Stop(CRippleEffect *this)
{
  __int64 v2; // rcx
  char v3; // al

  if ( *((_BYTE *)this + 296) )
  {
    CDesktopManager::UnregisterForGlobalTimeChangeNotification(this);
    *((_BYTE *)this + 296) = 0;
  }
  v2 = *((_QWORD *)this + 36);
  if ( v2 )
  {
    --*(_DWORD *)(v2 + 8);
    v3 = CDesktopManager::s_fTimelineDirty;
    if ( !*(_DWORD *)(v2 + 8) )
      v3 = 1;
    *((_QWORD *)this + 36) = 0LL;
    CDesktopManager::s_fTimelineDirty = v3;
  }
  CVisual::SetOpacity(this, 0.0);
  return 0LL;
}
