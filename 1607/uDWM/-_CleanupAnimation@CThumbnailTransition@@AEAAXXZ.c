/*
 * XREFs of ?_CleanupAnimation@CThumbnailTransition@@AEAAXXZ @ 0x1800988A0
 * Callers:
 *     ?StartAnimation@CThumbnailTransition@@QEAAJPEAVCThumbnailAnimatedVisual@@H@Z @ 0x1800986E4 (-StartAnimation@CThumbnailTransition@@QEAAJPEAVCThumbnailAnimatedVisual@@H@Z.c)
 *     ?StopAnimation@CThumbnailTransition@@QEAAXXZ @ 0x180098814 (-StopAnimation@CThumbnailTransition@@QEAAXXZ.c)
 * Callees:
 *     ?Release@CAnimationEngine@@UEAAKXZ @ 0x180011580 (-Release@CAnimationEngine@@UEAAKXZ.c)
 *     ?UnregisterForAnimationCompleteNotification@CAnimationEngine@@QEAAJPEAUIAnimationListener@@@Z @ 0x180012EBC (-UnregisterForAnimationCompleteNotification@CAnimationEngine@@QEAAJPEAUIAnimationListener@@@Z.c)
 *     ?ScheduleStopAnimation@CAnimationEngine@@QEAAJI@Z @ 0x180013188 (-ScheduleStopAnimation@CAnimationEngine@@QEAAJI@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180019B60 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?AcquireAnimationEngine@CDesktopManager@@SAPEAVCAnimationEngine@@XZ @ 0x18003A8C0 (-AcquireAnimationEngine@CDesktopManager@@SAPEAVCAnimationEngine@@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800505E0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CThumbnailTransition::_CleanupAnimation(CThumbnailTransition *this)
{
  CAnimationEngine *v2; // rax
  CAnimationEngine *v3; // rdi
  struct IAnimationListener *v4; // rdx
  __int64 v5; // rcx
  CBaseObject *v6; // rcx

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
    CAnimationEngine::Release(v3);
  }
  v5 = *((_QWORD *)this + 3);
  if ( v5 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 184LL))(v5);
    v6 = (CBaseObject *)*((_QWORD *)this + 3);
    if ( v6 )
    {
      CBaseObject::Release(v6);
      *((_QWORD *)this + 3) = 0LL;
    }
  }
  CBaseObject::Release(this);
}
