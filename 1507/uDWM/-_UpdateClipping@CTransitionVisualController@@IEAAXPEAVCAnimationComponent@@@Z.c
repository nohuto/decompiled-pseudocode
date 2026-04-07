/*
 * XREFs of ?_UpdateClipping@CTransitionVisualController@@IEAAXPEAVCAnimationComponent@@@Z @ 0x18000D858
 * Callers:
 *     ?MorphForStoryboard@CTransitionVisualController@@QEAAJPEAVCStoryboard@@@Z @ 0x18000CFA8 (-MorphForStoryboard@CTransitionVisualController@@QEAAJPEAVCStoryboard@@@Z.c)
 *     ?SetupZOrder@CTransitionVisualController@@QEAAJXZ @ 0x18000D994 (-SetupZOrder@CTransitionVisualController@@QEAAJXZ.c)
 * Callees:
 *     ?GetMonitorRectFromRectImpl@CTransitionVisualController@@KAXPEBUtagRECT@@PEAU2@@Z @ 0x180009228 (-GetMonitorRectFromRectImpl@CTransitionVisualController@@KAXPEBUtagRECT@@PEAU2@@Z.c)
 *     ?_SetAnimationClipRegion@CTransitionVisualController@@IEAAJPEAVCVisual@@PEBUtagRECT@@@Z @ 0x18000F078 (-_SetAnimationClipRegion@CTransitionVisualController@@IEAAJPEAVCVisual@@PEBUtagRECT@@@Z.c)
 *     __security_check_cookie @ 0x180048580 (__security_check_cookie.c)
 *     memset_0 @ 0x1800498C6 (memset_0.c)
 *     Template_pddddq @ 0x18008D604 (Template_pddddq.c)
 */

void __fastcall CTransitionVisualController::_UpdateClipping(
        CTransitionVisualController *this,
        struct CAnimationComponent *a2)
{
  int v2; // ecx
  struct CVisual *v3; // rsi
  unsigned __int64 v5; // rcx
  struct tagRECT v6; // xmm0
  struct tagRECT rcMonitor; // xmm0
  __int64 v8; // rax
  char v9; // al
  int v10; // edx
  int v11; // ecx
  HMONITOR v12; // rax
  HMONITOR v13; // rbx
  struct tagRECT v14; // [rsp+48h] [rbp+7h] BYREF
  struct tagRECT v15; // [rsp+58h] [rbp+17h] BYREF
  struct tagMONITORINFO mi; // [rsp+68h] [rbp+27h] BYREF

  v2 = *((_DWORD *)a2 + 17);
  v3 = 0LL;
  v14 = 0LL;
  if ( v2 )
  {
    v5 = (unsigned int)(v2 - 1);
    if ( (_DWORD)v5 )
    {
      v5 = (unsigned int)(v5 - 1);
      if ( (_DWORD)v5 )
      {
        if ( (_DWORD)v5 != 1 )
          goto LABEL_9;
        v6 = *(struct tagRECT *)(*((_QWORD *)a2 + 5) + 840LL);
        goto LABEL_6;
      }
      rcMonitor = *(struct tagRECT *)((char *)a2 + 104);
    }
    else
    {
      rcMonitor = *(struct tagRECT *)((char *)a2 + 88);
    }
  }
  else
  {
    v12 = MonitorFromWindow(*((HWND *)a2 + 2), 1u);
    mi.cbSize = 40;
    v13 = v12;
    memset_0(&mi.rcMonitor, 0, 0x24uLL);
    if ( !GetMonitorInfoW(v13, &mi) )
    {
      v6 = *(struct tagRECT *)((char *)a2 + 88);
LABEL_6:
      v15 = v6;
      CTransitionVisualController::GetMonitorRectFromRectImpl(&v15, &v14);
      goto LABEL_9;
    }
    rcMonitor = mi.rcMonitor;
  }
  v14 = rcMonitor;
LABEL_9:
  v8 = *((_QWORD *)a2 + 5);
  if ( !*(_BYTE *)(v8 + 970) )
  {
    if ( v8 )
      v3 = (struct CVisual *)(v8 + 8);
    v9 = CTransitionVisualController::_SetAnimationClipRegion((CTransitionVisualController *)v5, v3, &v14);
    if ( (Microsoft_Windows_Dwm_UdwmEnableBits & 1) != 0 )
      Template_pddddq(v11, v10, *((_QWORD *)a2 + 2), v14.left, v14.top, v14.right, v14.bottom, v9);
  }
  *(struct tagRECT *)(*((_QWORD *)a2 + 5) + 824LL) = v14;
}
