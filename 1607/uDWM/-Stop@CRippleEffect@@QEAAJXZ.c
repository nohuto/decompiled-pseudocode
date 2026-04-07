/*
 * XREFs of ?Stop@CRippleEffect@@QEAAJXZ @ 0x1800849DC
 * Callers:
 *     ?DestroyWindow@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x18002C3C0 (-DestroyWindow@CWindowList@@UEAAJPEAUIDwmWindow@@@Z.c)
 *     ??1CRippleEffect@@MEAA@XZ @ 0x1800844A8 (--1CRippleEffect@@MEAA@XZ.c)
 *     ?Start@CRippleEffect@@QEAAJPEBUtagPOINT@@M@Z @ 0x1800847FC (-Start@CRippleEffect@@QEAAJPEBUtagPOINT@@M@Z.c)
 *     ?UpdateTransition@CRippleEffect@@AEAAJXZ @ 0x180084A40 (-UpdateTransition@CRippleEffect@@AEAAJXZ.c)
 * Callees:
 *     ?SetOpacity@CVisual@@QEAAXN@Z @ 0x18001F7E4 (-SetOpacity@CVisual@@QEAAXN@Z.c)
 *     ?UnregisterForGlobalTimeChangeNotification@CDesktopManager@@SA_NPEAVCVisual@@@Z @ 0x18003DC64 (-UnregisterForGlobalTimeChangeNotification@CDesktopManager@@SA_NPEAVCVisual@@@Z.c)
 */

__int64 __fastcall CRippleEffect::Stop(CRippleEffect *this)
{
  __int64 v2; // rax
  bool v3; // zf
  char v4; // al

  if ( *((_BYTE *)this + 296) )
  {
    CDesktopManager::UnregisterForGlobalTimeChangeNotification(this);
    *((_BYTE *)this + 296) = 0;
  }
  v2 = *((_QWORD *)this + 36);
  if ( v2 )
  {
    v3 = (*(_DWORD *)(v2 + 8))-- == 1;
    v4 = CDesktopManager::s_fTimelineDirty;
    if ( v3 )
      v4 = 1;
    *((_QWORD *)this + 36) = 0LL;
    CDesktopManager::s_fTimelineDirty = v4;
  }
  CVisual::SetOpacity(this, 0.0);
  return 0LL;
}
