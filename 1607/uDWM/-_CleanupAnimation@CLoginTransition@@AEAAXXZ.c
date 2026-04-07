/*
 * XREFs of ?_CleanupAnimation@CLoginTransition@@AEAAXXZ @ 0x18003A144
 * Callers:
 *     ?StopAnimation@CLoginTransition@@QEAAJXZ @ 0x18003A2D4 (-StopAnimation@CLoginTransition@@QEAAJXZ.c)
 *     ?StartAnimation@CLoginTransition@@QEAAJHPEAVCVisual@@0_K@Z @ 0x18003A2FC (-StartAnimation@CLoginTransition@@QEAAJHPEAVCVisual@@0_K@Z.c)
 * Callees:
 *     ?Release@CAnimationEngine@@UEAAKXZ @ 0x180011580 (-Release@CAnimationEngine@@UEAAKXZ.c)
 *     ?UnregisterForAnimationCompleteNotification@CAnimationEngine@@QEAAJPEAUIAnimationListener@@@Z @ 0x180012EBC (-UnregisterForAnimationCompleteNotification@CAnimationEngine@@QEAAJPEAUIAnimationListener@@@Z.c)
 *     ?ScheduleStopAnimation@CAnimationEngine@@QEAAJI@Z @ 0x180013188 (-ScheduleStopAnimation@CAnimationEngine@@QEAAJI@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180019B60 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?Remove@VisualCollection@@QEAAJPEAVCVisual@@@Z @ 0x18001CD40 (-Remove@VisualCollection@@QEAAJPEAVCVisual@@@Z.c)
 *     ?SetOffset@CVisual@@QEAAXPEBUtagPOINT@@@Z @ 0x18001F7A4 (-SetOffset@CVisual@@QEAAXPEBUtagPOINT@@@Z.c)
 *     ?GetRenderTargetRootVisualForDesktop@CWindowList@@QEAAPEAVCVisual@@_K@Z @ 0x18002BDD0 (-GetRenderTargetRootVisualForDesktop@CWindowList@@QEAAPEAVCVisual@@_K@Z.c)
 *     ?AcquireAnimationEngine@CDesktopManager@@SAPEAVCAnimationEngine@@XZ @ 0x18003A8C0 (-AcquireAnimationEngine@CDesktopManager@@SAPEAVCAnimationEngine@@XZ.c)
 *     TemplateEventDescriptor @ 0x180075A10 (TemplateEventDescriptor.c)
 */

void __fastcall CLoginTransition::_CleanupAnimation(CLoginTransition *this)
{
  CAnimationEngine *v2; // rax
  CAnimationEngine *v3; // rbx
  __int64 v4; // rcx
  __int64 v5; // rcx
  __int64 v6; // rcx
  CBaseObject *v7; // rcx
  CBaseObject *v8; // rcx
  CBaseObject *v9; // rcx
  __int64 v10; // rax
  struct CVisual *v11; // rdx
  __int64 v12; // rax
  struct CVisual *v13; // rdx
  struct CVisual *v14; // rbx
  struct CVisual *RenderTargetRootVisualForDesktop; // rax

  v2 = CDesktopManager::AcquireAnimationEngine();
  v3 = v2;
  if ( v2 )
  {
    CAnimationEngine::UnregisterForAnimationCompleteNotification(v2, this);
    CAnimationEngine::ScheduleStopAnimation(v3, *((_DWORD *)this + 16));
    CAnimationEngine::Release(v3);
  }
  if ( *((_QWORD *)this + 1) )
    CVisual::SetOffset(*((struct tagPOINT **)this + 4), &stru_1800A2ED0);
  if ( *((_QWORD *)this + 2) )
    CVisual::SetOffset(*((struct tagPOINT **)this + 5), &stru_1800A2ED0);
  v4 = *((_QWORD *)this + 6);
  if ( v4 )
  {
    v10 = *((_QWORD *)this + 1);
    if ( v10 )
      v11 = (struct CVisual *)(v10 + 8);
    else
      v11 = 0LL;
    VisualCollection::Remove((VisualCollection *)(v4 + 32), v11);
    v12 = *((_QWORD *)this + 2);
    if ( v12 )
      v13 = (struct CVisual *)(v12 + 8);
    else
      v13 = 0LL;
    VisualCollection::Remove((VisualCollection *)(*((_QWORD *)this + 6) + 32LL), v13);
    v14 = (struct CVisual *)*((_QWORD *)this + 6);
    RenderTargetRootVisualForDesktop = CWindowList::GetRenderTargetRootVisualForDesktop(
                                         *((CWindowList **)CDesktopManager::s_pDesktopManagerInstance + 165),
                                         *((_QWORD *)this + 10));
    VisualCollection::Remove((struct CVisual *)((char *)RenderTargetRootVisualForDesktop + 32), v14);
  }
  v5 = *((_QWORD *)this + 1);
  if ( v5 )
  {
    CBaseObject::Release((CBaseObject *)(v5 + 8));
    *((_QWORD *)this + 1) = 0LL;
  }
  v6 = *((_QWORD *)this + 2);
  if ( v6 )
  {
    CBaseObject::Release((CBaseObject *)(v6 + 8));
    *((_QWORD *)this + 2) = 0LL;
  }
  v7 = (CBaseObject *)*((_QWORD *)this + 4);
  if ( v7 )
  {
    CBaseObject::Release(v7);
    *((_QWORD *)this + 4) = 0LL;
  }
  v8 = (CBaseObject *)*((_QWORD *)this + 5);
  if ( v8 )
  {
    CBaseObject::Release(v8);
    *((_QWORD *)this + 5) = 0LL;
  }
  v9 = (CBaseObject *)*((_QWORD *)this + 6);
  if ( v9 )
  {
    CBaseObject::Release(v9);
    *((_QWORD *)this + 6) = 0LL;
  }
  if ( (Microsoft_Windows_Dwm_UdwmEnableBits & 1) != 0 )
    TemplateEventDescriptor(v9, &UdwmLoginTransition_Stop);
}
