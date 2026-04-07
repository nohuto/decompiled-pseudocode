/*
 * XREFs of ?Stop@CScreenRotation@@QEAAX_N@Z @ 0x180090DA4
 * Callers:
 *     ?SwitchDesktop@CWindowList@@UEAAJK_K@Z @ 0x18002D4D0 (-SwitchDesktop@CWindowList@@UEAAJK_K@Z.c)
 *     ??1CScreenRotation@@MEAA@XZ @ 0x18008FDEC (--1CScreenRotation@@MEAA@XZ.c)
 *     ?Capture@CScreenRotation@@QEAAJXZ @ 0x18008FE28 (-Capture@CScreenRotation@@QEAAJXZ.c)
 *     ?CreateLiveDesktopVisual@CScreenRotation@@AEAAJXZ @ 0x180090278 (-CreateLiveDesktopVisual@CScreenRotation@@AEAAJXZ.c)
 *     ?OnAnimationComplete@CScreenRotation@@UEAAJI@Z @ 0x1800906C0 (-OnAnimationComplete@CScreenRotation@@UEAAJI@Z.c)
 *     ?OnGlobalTimeUpdated@CScreenRotation@@MEAAJXZ @ 0x1800907D0 (-OnGlobalTimeUpdated@CScreenRotation@@MEAAJXZ.c)
 * Callees:
 *     ?Release@CAnimationEngine@@UEAAKXZ @ 0x180011580 (-Release@CAnimationEngine@@UEAAKXZ.c)
 *     ?UnregisterForAnimationCompleteNotification@CAnimationEngine@@QEAAJPEAUIAnimationListener@@@Z @ 0x180012EBC (-UnregisterForAnimationCompleteNotification@CAnimationEngine@@QEAAJPEAUIAnimationListener@@@Z.c)
 *     ?ScheduleStopAnimation@CAnimationEngine@@QEAAJI@Z @ 0x180013188 (-ScheduleStopAnimation@CAnimationEngine@@QEAAJI@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180019B60 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?RemoveAll@VisualCollection@@QEAAJXZ @ 0x18001CBB0 (-RemoveAll@VisualCollection@@QEAAJXZ.c)
 *     ?Remove@VisualCollection@@QEAAJPEAVCVisual@@@Z @ 0x18001CD40 (-Remove@VisualCollection@@QEAAJPEAVCVisual@@@Z.c)
 *     ?ClearInstructions@CVisual@@QEAAJXZ @ 0x180020310 (-ClearInstructions@CVisual@@QEAAJXZ.c)
 *     ?AcquireAnimationEngine@CDesktopManager@@SAPEAVCAnimationEngine@@XZ @ 0x18003A8C0 (-AcquireAnimationEngine@CDesktopManager@@SAPEAVCAnimationEngine@@XZ.c)
 *     Template_q @ 0x180075A2C (Template_q.c)
 *     ?CleanupTimeline@CScreenRotation@@AEAAXXZ @ 0x18009017C (-CleanupTimeline@CScreenRotation@@AEAAXXZ.c)
 */

void __fastcall CScreenRotation::Stop(CScreenRotation *this, char a2)
{
  CAnimationEngine *v4; // rax
  __int64 v5; // rcx
  CAnimationEngine *v6; // rdi
  struct IAnimationListener *v7; // rdx
  int v8; // edx
  int v9; // edx
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
    CAnimationEngine::Release(v6);
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
    *((_WORD *)this + 157) = 0;
    *((_DWORD *)this + 81) = 0;
    v13 = *((_QWORD *)this + 37);
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
