/*
 * XREFs of ?_UpdateClipping@CTransitionVisualController@@IEAAXPEAVCAnimationComponent@@@Z @ 0x180008F58
 * Callers:
 *     ?MorphForStoryboard@CTransitionVisualController@@QEAAJPEAVCStoryboard@@@Z @ 0x180008498 (-MorphForStoryboard@CTransitionVisualController@@QEAAJPEAVCStoryboard@@@Z.c)
 *     ?SetupZOrder@CTransitionVisualController@@QEAAJXZ @ 0x18000908C (-SetupZOrder@CTransitionVisualController@@QEAAJXZ.c)
 * Callees:
 *     ?_SetAnimationClipRegion@CTransitionVisualController@@IEAAJPEAVCVisual@@PEBUtagRECT@@@Z @ 0x18000AD74 (-_SetAnimationClipRegion@CTransitionVisualController@@IEAAJPEAVCVisual@@PEBUtagRECT@@@Z.c)
 *     ?GetMonitorRectFromRectImpl@CTransitionVisualController@@KAXPEBUtagRECT@@PEAU2@@Z @ 0x1800133C8 (-GetMonitorRectFromRectImpl@CTransitionVisualController@@KAXPEBUtagRECT@@PEAU2@@Z.c)
 *     __security_check_cookie @ 0x18004EBE0 (__security_check_cookie.c)
 *     memset_0 @ 0x18004FF66 (memset_0.c)
 *     Template_pddddq @ 0x180090B7C (Template_pddddq.c)
 */

void __fastcall CTransitionVisualController::_UpdateClipping(
        CTransitionVisualController *this,
        struct CAnimationComponent *a2)
{
  int v2; // ecx
  struct CVisual *v3; // rsi
  unsigned __int64 v5; // rcx
  struct tagRECT rcMonitor; // xmm0
  __int64 v7; // rax
  char v8; // al
  int v9; // edx
  int v10; // ecx
  HMONITOR v11; // rax
  HMONITOR v12; // rbx
  struct tagRECT v13; // xmm0
  struct tagRECT v14; // [rsp+48h] [rbp+7h] BYREF
  struct tagRECT v15; // [rsp+58h] [rbp+17h] BYREF
  struct tagMONITORINFO mi; // [rsp+68h] [rbp+27h] BYREF

  v2 = *((_DWORD *)a2 + 17);
  v3 = 0LL;
  v14 = 0LL;
  if ( !v2 )
  {
    v11 = MonitorFromWindow(*((HWND *)a2 + 2), 1u);
    mi.cbSize = 40;
    v12 = v11;
    memset_0(&mi.rcMonitor, 0, 0x24uLL);
    if ( GetMonitorInfoW(v12, &mi) )
    {
      rcMonitor = mi.rcMonitor;
      goto LABEL_4;
    }
    v13 = *(struct tagRECT *)((char *)a2 + 88);
    goto LABEL_17;
  }
  v5 = (unsigned int)(v2 - 1);
  if ( !(_DWORD)v5 )
  {
    rcMonitor = *(struct tagRECT *)((char *)a2 + 88);
LABEL_4:
    v14 = rcMonitor;
    goto LABEL_5;
  }
  v5 = (unsigned int)(v5 - 1);
  if ( !(_DWORD)v5 )
  {
    rcMonitor = *(struct tagRECT *)((char *)a2 + 104);
    goto LABEL_4;
  }
  if ( (_DWORD)v5 == 1 )
  {
    v13 = *(struct tagRECT *)(*((_QWORD *)a2 + 5) + 840LL);
LABEL_17:
    v15 = v13;
    CTransitionVisualController::GetMonitorRectFromRectImpl(&v15, &v14);
  }
LABEL_5:
  v7 = *((_QWORD *)a2 + 5);
  if ( !*(_BYTE *)(v7 + 970) )
  {
    if ( v7 )
      v3 = (struct CVisual *)(v7 + 8);
    v8 = CTransitionVisualController::_SetAnimationClipRegion((CTransitionVisualController *)v5, v3, &v14);
    if ( (Microsoft_Windows_Dwm_UdwmEnableBits & 1) != 0 )
      Template_pddddq(v10, v9, *((_QWORD *)a2 + 2), v14.left, v14.top, v14.right, v14.bottom, v8);
  }
  *(struct tagRECT *)(*((_QWORD *)a2 + 5) + 824LL) = v14;
}
