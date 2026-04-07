/*
 * XREFs of ?_CleanupAnimation@CLoginTransition@@AEAAXXZ @ 0x180040338
 * Callers:
 *     ?StopAnimation@CLoginTransition@@QEAAJXZ @ 0x180040534 (-StopAnimation@CLoginTransition@@QEAAJXZ.c)
 *     ?StartAnimation@CLoginTransition@@QEAAJHPEAVCVisual@@0_K@Z @ 0x18004055C (-StartAnimation@CLoginTransition@@QEAAJHPEAVCVisual@@0_K@Z.c)
 * Callees:
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x18001CDE0 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?Remove@VisualCollection@@QEAAJPEAVCVisual@@@Z @ 0x18001FCE0 (-Remove@VisualCollection@@QEAAJPEAVCVisual@@@Z.c)
 *     ?SetOffset@CVisual@@QEAAXPEBUtagPOINT@@@Z @ 0x1800224E8 (-SetOffset@CVisual@@QEAAXPEBUtagPOINT@@@Z.c)
 *     ?GetRenderTargetRootVisualForDesktop@CWindowList@@QEAAPEAVCVisual@@_K@Z @ 0x18002C690 (-GetRenderTargetRootVisualForDesktop@CWindowList@@QEAAPEAVCVisual@@_K@Z.c)
 *     ?Release@CAnimationEngine@@UEAAKXZ @ 0x180036E40 (-Release@CAnimationEngine@@UEAAKXZ.c)
 *     ?UnregisterForAnimationCompleteNotification@CAnimationEngine@@QEAAJPEAUIAnimationListener@@@Z @ 0x180038948 (-UnregisterForAnimationCompleteNotification@CAnimationEngine@@QEAAJPEAUIAnimationListener@@@Z.c)
 *     ?ScheduleStopAnimation@CAnimationEngine@@QEAAJI@Z @ 0x180038BEC (-ScheduleStopAnimation@CAnimationEngine@@QEAAJI@Z.c)
 *     ?AcquireAnimationEngine@CDesktopManager@@SAPEAVCAnimationEngine@@XZ @ 0x180040AFC (-AcquireAnimationEngine@CDesktopManager@@SAPEAVCAnimationEngine@@XZ.c)
 *     TemplateEventDescriptor @ 0x180073BC8 (TemplateEventDescriptor.c)
 */

void __fastcall CLoginTransition::_CleanupAnimation(CLoginTransition *this)
{
  CAnimationEngine *v2; // rax
  CAnimationEngine *v3; // rbx
  unsigned int v4; // edx
  __int64 v5; // rcx
  __int64 v6; // rcx
  __int64 v7; // rcx
  CBaseObject *v8; // rcx
  CBaseObject *v9; // rcx
  CBaseObject *v10; // rcx
  __int64 v11; // rax
  struct CVisual *v12; // rdx
  __int64 v13; // rax
  struct CVisual *v14; // rdx
  struct CVisual *v15; // rbx
  struct CVisual *RenderTargetRootVisualForDesktop; // rax

  v2 = CDesktopManager::AcquireAnimationEngine();
  v3 = v2;
  if ( v2 )
  {
    CAnimationEngine::UnregisterForAnimationCompleteNotification(v2, this);
    CAnimationEngine::ScheduleStopAnimation(v3, *((_DWORD *)this + 16));
    CAnimationEngine::Release(v3, v4);
  }
  if ( *((_QWORD *)this + 1) )
    CVisual::SetOffset(*((struct tagPOINT **)this + 4), &stru_1800A5060);
  if ( *((_QWORD *)this + 2) )
    CVisual::SetOffset(*((struct tagPOINT **)this + 5), &stru_1800A5060);
  v5 = *((_QWORD *)this + 6);
  if ( v5 )
  {
    v11 = *((_QWORD *)this + 1);
    if ( v11 )
      v12 = (struct CVisual *)(v11 + 8);
    else
      v12 = 0LL;
    VisualCollection::Remove((VisualCollection *)(v5 + 32), v12);
    v13 = *((_QWORD *)this + 2);
    if ( v13 )
      v14 = (struct CVisual *)(v13 + 8);
    else
      v14 = 0LL;
    VisualCollection::Remove((VisualCollection *)(*((_QWORD *)this + 6) + 32LL), v14);
    v15 = (struct CVisual *)*((_QWORD *)this + 6);
    RenderTargetRootVisualForDesktop = CWindowList::GetRenderTargetRootVisualForDesktop(
                                         *((CWindowList **)CDesktopManager::s_pDesktopManagerInstance + 167),
                                         *((_QWORD *)this + 10));
    VisualCollection::Remove((struct CVisual *)((char *)RenderTargetRootVisualForDesktop + 32), v15);
  }
  v6 = *((_QWORD *)this + 1);
  if ( v6 )
  {
    CBaseObject::Release((CBaseObject *)(v6 + 8));
    *((_QWORD *)this + 1) = 0LL;
  }
  v7 = *((_QWORD *)this + 2);
  if ( v7 )
  {
    CBaseObject::Release((CBaseObject *)(v7 + 8));
    *((_QWORD *)this + 2) = 0LL;
  }
  v8 = (CBaseObject *)*((_QWORD *)this + 4);
  if ( v8 )
  {
    CBaseObject::Release(v8);
    *((_QWORD *)this + 4) = 0LL;
  }
  v9 = (CBaseObject *)*((_QWORD *)this + 5);
  if ( v9 )
  {
    CBaseObject::Release(v9);
    *((_QWORD *)this + 5) = 0LL;
  }
  v10 = (CBaseObject *)*((_QWORD *)this + 6);
  if ( v10 )
  {
    CBaseObject::Release(v10);
    *((_QWORD *)this + 6) = 0LL;
  }
  if ( (Microsoft_Windows_Dwm_UdwmEnableBits & 1) != 0 )
    TemplateEventDescriptor(v10, &UdwmLoginTransition_Stop);
}
