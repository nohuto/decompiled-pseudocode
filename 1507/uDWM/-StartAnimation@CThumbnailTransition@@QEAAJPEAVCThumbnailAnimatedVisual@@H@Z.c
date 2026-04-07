/*
 * XREFs of ?StartAnimation@CThumbnailTransition@@QEAAJPEAVCThumbnailAnimatedVisual@@H@Z @ 0x18009A25C
 * Callers:
 *     ?_UpdateAnimatedProperties@CThumbnailVisual@@AEAAJK@Z @ 0x1800130E0 (-_UpdateAnimatedProperties@CThumbnailVisual@@AEAAJK@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180004308 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ??1?$CGuard@VCDwmCS@@@@QEAA@XZ @ 0x18000C8D8 (--1-$CGuard@VCDwmCS@@@@QEAA@XZ.c)
 *     ?AcquireAnimationEngine@CDesktopManager@@SAPEAVCAnimationEngine@@XZ @ 0x18001116C (-AcquireAnimationEngine@CDesktopManager@@SAPEAVCAnimationEngine@@XZ.c)
 *     ?Release@CAnimationEngine@@UEAAKXZ @ 0x180031480 (-Release@CAnimationEngine@@UEAAKXZ.c)
 *     ?RegisterForAnimationCompleteNotification@CAnimationEngine@@QEAAJPEAUIAnimationListener@@@Z @ 0x180032FE8 (-RegisterForAnimationCompleteNotification@CAnimationEngine@@QEAAJPEAUIAnimationListener@@@Z.c)
 *     ?ScheduleStartAnimation@CAnimationEngine@@QEAAJHPEAPEAUIAnimatedVisual@@IPEAI@Z @ 0x1800333B8 (-ScheduleStartAnimation@CAnimationEngine@@QEAAJHPEAPEAUIAnimatedVisual@@IPEAI@Z.c)
 *     ?OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z @ 0x1800488B0 (-OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z.c)
 *     ?_CleanupAnimation@CThumbnailTransition@@AEAAXXZ @ 0x18009A420 (-_CleanupAnimation@CThumbnailTransition@@AEAAXXZ.c)
 */

__int64 __fastcall CThumbnailTransition::StartAnimation(
        CThumbnailTransition *this,
        struct CThumbnailAnimatedVisual *a2)
{
  CAnimationEngine *v4; // rax
  CAnimationEngine *v5; // rdi
  int v6; // ebx
  int v7; // eax
  unsigned int v8; // edx
  __int64 v9; // rax
  int started; // eax
  struct IAnimatedVisual *v12; // [rsp+40h] [rbp+8h] BYREF
  struct _RTL_CRITICAL_SECTION *v13; // [rsp+48h] [rbp+10h] BYREF

  v13 = &CDesktopManager::s_csDwmInstance;
  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  *((_QWORD *)this + 3) = a2;
  if ( a2 )
    (*(void (__fastcall **)(char *))(*((_QWORD *)a2 + 33) + 264LL))((char *)a2 + 264);
  v4 = CDesktopManager::AcquireAnimationEngine();
  v5 = v4;
  if ( !v4 )
  {
    v6 = -2147024882;
    MilInstrumentationCheckHR(0x14u, 0LL, 0LL, -2147024882, 0x1Cu);
LABEL_15:
    CThumbnailTransition::_CleanupAnimation(this);
    goto LABEL_16;
  }
  v7 = CAnimationEngine::RegisterForAnimationCompleteNotification(v4, (CThumbnailTransition *)((char *)this + 16));
  v6 = v7;
  if ( v7 >= 0 )
  {
    v9 = *((_QWORD *)this + 3);
    if ( v9 )
      v12 = (struct IAnimatedVisual *)(v9 + 264);
    else
      v12 = 0LL;
    started = CAnimationEngine::ScheduleStartAnimation(v5, 63, &v12, 1u, (unsigned int *)this + 8);
    v6 = started;
    if ( started >= 0 )
      *((_BYTE *)this + 36) = 1;
    else
      MilInstrumentationCheckHR(0x14u, 0LL, 0LL, started, 0x23u);
  }
  else
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v7, 0x1Du);
  }
  if ( v6 < 0 )
    goto LABEL_15;
LABEL_16:
  if ( v5 )
    CAnimationEngine::Release(v5, v8);
  CGuard<CDwmCS>::~CGuard<CDwmCS>(&v13);
  return (unsigned int)v6;
}
