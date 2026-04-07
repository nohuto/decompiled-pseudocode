/*
 * XREFs of ?StopAllTimelines@CTouchPressHoldVisual@@IEAAXXZ @ 0x18009AC28
 * Callers:
 *     ?StartAbort@CTouchPressHoldVisual@@QEAAJPEBUtagPOINT@@@Z @ 0x18009A718 (-StartAbort@CTouchPressHoldVisual@@QEAAJPEBUtagPOINT@@@Z.c)
 *     ?StartHold@CTouchPressHoldVisual@@QEAAJPEBUtagPOINT@@@Z @ 0x18009A8C0 (-StartHold@CTouchPressHoldVisual@@QEAAJPEBUtagPOINT@@@Z.c)
 *     ?StartRightTap@CTouchPressHoldVisual@@QEAAJPEBUtagPOINT@@@Z @ 0x18009AA50 (-StartRightTap@CTouchPressHoldVisual@@QEAAJPEBUtagPOINT@@@Z.c)
 *     ?StopTimer@CTouchPressHoldVisual@@MEAAJXZ @ 0x18009ACC0 (-StopTimer@CTouchPressHoldVisual@@MEAAJXZ.c)
 * Callees:
 *     <none>
 */

void __fastcall CTouchPressHoldVisual::StopAllTimelines(CTouchPressHoldVisual *this)
{
  __int64 v1; // rdx
  bool v2; // al
  __int64 v3; // rdx
  __int64 v4; // rdx

  v1 = *((_QWORD *)this + 40);
  if ( v1 )
  {
    --*(_DWORD *)(v1 + 8);
    v2 = CDesktopManager::s_fTimelineDirty;
    if ( !*(_DWORD *)(v1 + 8) )
      v2 = 1;
    *((_QWORD *)this + 40) = 0LL;
    CDesktopManager::s_fTimelineDirty = v2;
  }
  else
  {
    v2 = CDesktopManager::s_fTimelineDirty;
  }
  v3 = *((_QWORD *)this + 41);
  if ( v3 )
  {
    if ( !--*(_DWORD *)(v3 + 8) )
      v2 = 1;
    *((_QWORD *)this + 41) = 0LL;
    CDesktopManager::s_fTimelineDirty = v2;
  }
  v4 = *((_QWORD *)this + 42);
  if ( v4 )
  {
    if ( !--*(_DWORD *)(v4 + 8) )
      v2 = 1;
    *((_QWORD *)this + 42) = 0LL;
    CDesktopManager::s_fTimelineDirty = v2;
  }
}
