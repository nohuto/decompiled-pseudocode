/*
 * XREFs of ?Stop@CScreenRotation@@QEAAX_N@Z @ 0x18008EEC8
 * Callers:
 *     ?SwitchDesktop@CWindowList@@UEAAJK_K@Z @ 0x180029DC0 (-SwitchDesktop@CWindowList@@UEAAJK_K@Z.c)
 *     ??1CScreenRotation@@MEAA@XZ @ 0x18008DE8C (--1CScreenRotation@@MEAA@XZ.c)
 *     ?Capture@CScreenRotation@@QEAAJXZ @ 0x18008DEC8 (-Capture@CScreenRotation@@QEAAJXZ.c)
 *     ?CreateLiveDesktopVisual@CScreenRotation@@AEAAJXZ @ 0x18008E35C (-CreateLiveDesktopVisual@CScreenRotation@@AEAAJXZ.c)
 *     ?OnAnimationComplete@CScreenRotation@@UEAAJI@Z @ 0x18008E7B0 (-OnAnimationComplete@CScreenRotation@@UEAAJI@Z.c)
 *     ?OnGlobalTimeUpdated@CScreenRotation@@MEAAJXZ @ 0x18008E8C0 (-OnGlobalTimeUpdated@CScreenRotation@@MEAAJXZ.c)
 * Callees:
 *     ?AcquireAnimationEngine@CDesktopManager@@SAPEAVCAnimationEngine@@XZ @ 0x18001116C (-AcquireAnimationEngine@CDesktopManager@@SAPEAVCAnimationEngine@@XZ.c)
 *     ?Remove@VisualCollection@@QEAAJPEAVCVisual@@@Z @ 0x180014F60 (-Remove@VisualCollection@@QEAAJPEAVCVisual@@@Z.c)
 *     ?RemoveAll@VisualCollection@@QEAAJXZ @ 0x1800150D0 (-RemoveAll@VisualCollection@@QEAAJXZ.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x1800176E4 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?ClearInstructions@CVisual@@QEAAJXZ @ 0x18001DF40 (-ClearInstructions@CVisual@@QEAAJXZ.c)
 *     ?Release@CAnimationEngine@@UEAAKXZ @ 0x180031480 (-Release@CAnimationEngine@@UEAAKXZ.c)
 *     ?UnregisterForAnimationCompleteNotification@CAnimationEngine@@QEAAJPEAUIAnimationListener@@@Z @ 0x180032F8C (-UnregisterForAnimationCompleteNotification@CAnimationEngine@@QEAAJPEAUIAnimationListener@@@Z.c)
 *     ?ScheduleStopAnimation@CAnimationEngine@@QEAAJI@Z @ 0x180033230 (-ScheduleStopAnimation@CAnimationEngine@@QEAAJI@Z.c)
 *     Template_q @ 0x180074F24 (Template_q.c)
 *     ?CleanupTimeline@CScreenRotation@@AEAAXXZ @ 0x18008E230 (-CleanupTimeline@CScreenRotation@@AEAAXXZ.c)
 */

void __fastcall CScreenRotation::Stop(CScreenRotation *this, char a2)
{
  CAnimationEngine *v4; // rax
  __int64 v5; // rcx
  CAnimationEngine *v6; // rdi
  struct IAnimationListener *v7; // rdx
  int v8; // edx
  unsigned int v9; // edx
  bool v10; // zf
  void *v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // rcx
  __int64 v14; // rcx

  CScreenRotation::CleanupTimeline(this);
  v4 = CDesktopManager::AcquireAnimationEngine();
  v6 = v4;
  if ( v4 )
  {
    if ( this )
      v7 = (CScreenRotation *)((char *)this + 264);
    else
      v7 = 0LL;
    CAnimationEngine::UnregisterForAnimationCompleteNotification(v4, v7);
    v8 = *((_DWORD *)this + 85);
    if ( v8 != -1 )
    {
      CAnimationEngine::ScheduleStopAnimation(v6, v8);
      *((_DWORD *)this + 85) = -1;
    }
    v9 = *((_DWORD *)this + 86);
    if ( v9 != -1 )
    {
      CAnimationEngine::ScheduleStopAnimation(v6, v9);
      *((_DWORD *)this + 86) = -1;
    }
    CAnimationEngine::Release(v6, v9);
  }
  v10 = *((_BYTE *)this + 312) == 0;
  *((_BYTE *)this + 313) = 0;
  if ( !v10 )
  {
    v10 = *((_BYTE *)this + 364) == 0;
    *((_BYTE *)this + 312) = 0;
    if ( v10 )
    {
      if ( (Microsoft_Windows_Dwm_UdwmEnableBits & 1) == 0 )
        goto LABEL_17;
      v11 = &UdwmScreenRotation_Animation_Stop;
    }
    else
    {
      if ( (Microsoft_Windows_Dwm_UdwmEnableBits & 1) == 0 )
        goto LABEL_17;
      v11 = &UdwmHardwareExpression_Animation_Stop;
    }
    Template_q(v5, (__int64)v11, *((_DWORD *)this + 82));
  }
LABEL_17:
  VisualCollection::RemoveAll((CScreenRotation *)((char *)this + 32));
  CVisual::ClearInstructions(this);
  if ( !a2 )
  {
    CVisual::ClearInstructions(this);
    v12 = *((_QWORD *)this + 3);
    if ( v12 )
      VisualCollection::Remove((VisualCollection *)(v12 + 32), this);
    *((_DWORD *)this + 81) = 0;
    v13 = *((_QWORD *)this + 37);
    *((_WORD *)this + 157) = 0;
    if ( v13 )
    {
      CBaseObject::Release((CBaseObject *)(v13 + 8));
      *((_QWORD *)this + 37) = 0LL;
    }
  }
  v14 = *((_QWORD *)this + 38);
  if ( v14 )
  {
    CBaseObject::Release((CBaseObject *)(v14 + 8));
    *((_QWORD *)this + 38) = 0LL;
  }
}
