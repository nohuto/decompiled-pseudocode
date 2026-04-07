/*
 * XREFs of ?_CleanupAnimation@CThumbnailTransition@@AEAAXXZ @ 0x18009A420
 * Callers:
 *     ?StartAnimation@CThumbnailTransition@@QEAAJPEAVCThumbnailAnimatedVisual@@H@Z @ 0x18009A25C (-StartAnimation@CThumbnailTransition@@QEAAJPEAVCThumbnailAnimatedVisual@@H@Z.c)
 *     ?StopAnimation@CThumbnailTransition@@QEAAXXZ @ 0x18009A394 (-StopAnimation@CThumbnailTransition@@QEAAXXZ.c)
 * Callees:
 *     ?AcquireAnimationEngine@CDesktopManager@@SAPEAVCAnimationEngine@@XZ @ 0x18001116C (-AcquireAnimationEngine@CDesktopManager@@SAPEAVCAnimationEngine@@XZ.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x1800176E4 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?Release@CAnimationEngine@@UEAAKXZ @ 0x180031480 (-Release@CAnimationEngine@@UEAAKXZ.c)
 *     ?UnregisterForAnimationCompleteNotification@CAnimationEngine@@QEAAJPEAUIAnimationListener@@@Z @ 0x180032F8C (-UnregisterForAnimationCompleteNotification@CAnimationEngine@@QEAAJPEAUIAnimationListener@@@Z.c)
 *     ?ScheduleStopAnimation@CAnimationEngine@@QEAAJI@Z @ 0x180033230 (-ScheduleStopAnimation@CAnimationEngine@@QEAAJI@Z.c)
 *     ?OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z @ 0x1800488B0 (-OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z.c)
 */

void __fastcall CThumbnailTransition::_CleanupAnimation(CThumbnailTransition *this)
{
  CAnimationEngine *v2; // rax
  CAnimationEngine *v3; // rbx
  struct IAnimationListener *v4; // rdx
  unsigned int v5; // edx
  __int64 v6; // rsi
  CBaseObject *v7; // rcx

  _InterlockedIncrement((volatile signed __int32 *)this + 2);
  v2 = CDesktopManager::AcquireAnimationEngine();
  v3 = v2;
  if ( v2 )
  {
    if ( this )
      v4 = (CThumbnailTransition *)((char *)this + 16);
    else
      v4 = 0LL;
    CAnimationEngine::UnregisterForAnimationCompleteNotification(v2, v4);
    CAnimationEngine::ScheduleStopAnimation(v3, *((_DWORD *)this + 8));
    CAnimationEngine::Release(v3, v5);
  }
  v6 = *((_QWORD *)this + 3);
  if ( v6 )
  {
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v6 + 184LL))(*((_QWORD *)this + 3));
    v7 = (CBaseObject *)*((_QWORD *)this + 3);
    if ( v7 )
    {
      CBaseObject::Release(v7);
      *((_QWORD *)this + 3) = 0LL;
    }
  }
  CBaseObject::Release(this);
}
