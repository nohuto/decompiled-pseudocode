/*
 * XREFs of ?_UpdateClipping@CTransitionVisualController@@IEAAXPEAVCAnimationComponent@@@Z @ 0x18000D0C8
 * Callers:
 *     ?MorphForStoryboard@CTransitionVisualController@@QEAAJPEAVCStoryboard@@@Z @ 0x18000C56C (-MorphForStoryboard@CTransitionVisualController@@QEAAJPEAVCStoryboard@@@Z.c)
 *     ?SetupZOrder@CTransitionVisualController@@QEAAJXZ @ 0x18000D208 (-SetupZOrder@CTransitionVisualController@@QEAAJXZ.c)
 * Callees:
 *     ?_SetAnimationClipRegion@CTransitionVisualController@@IEAAJPEAVCVisual@@PEBUtagRECT@@@Z @ 0x18000EA94 (-_SetAnimationClipRegion@CTransitionVisualController@@IEAAJPEAVCVisual@@PEBUtagRECT@@@Z.c)
 *     ?GetMonitorRectFromRectImpl@CTransitionVisualController@@KAXPEBUtagRECT@@PEAU2@@Z @ 0x180041D38 (-GetMonitorRectFromRectImpl@CTransitionVisualController@@KAXPEBUtagRECT@@PEAU2@@Z.c)
 *     __security_check_cookie @ 0x18004F240 (__security_check_cookie.c)
 *     memset_0 @ 0x1800505A6 (memset_0.c)
 *     Template_pddddq @ 0x18008F634 (Template_pddddq.c)
 */

void __fastcall CTransitionVisualController::_UpdateClipping(
        CTransitionVisualController *this,
        struct CAnimationComponent *a2)
{
  int v2; // ecx
  struct CVisual *v3; // rsi
  unsigned __int64 v5; // rcx
  struct tagRECT rcMonitor; // xmm6
  HMONITOR v7; // rax
  HMONITOR v8; // rbx
  __int64 v9; // rax
  char v10; // al
  int v11; // edx
  int v12; // ecx
  struct tagRECT v13; // xmm0
  struct tagRECT v14; // [rsp+48h] [rbp-9h] BYREF
  struct tagRECT v15; // [rsp+58h] [rbp+7h] BYREF
  struct tagMONITORINFO mi; // [rsp+68h] [rbp+17h] BYREF

  v2 = *((_DWORD *)a2 + 17);
  v3 = 0LL;
  *(_QWORD *)&v14.left = 0LL;
  *(_QWORD *)&v14.right = 0LL;
  if ( !v2 )
  {
    v7 = MonitorFromWindow(*((HWND *)a2 + 2), 1u);
    mi.cbSize = 40;
    v8 = v7;
    memset_0(&mi.rcMonitor, 0, 0x24uLL);
    if ( GetMonitorInfoW(v8, &mi) )
    {
      rcMonitor = mi.rcMonitor;
      goto LABEL_7;
    }
    v13 = *(struct tagRECT *)((char *)a2 + 88);
    goto LABEL_17;
  }
  v5 = (unsigned int)(v2 - 1);
  if ( !(_DWORD)v5 )
  {
    rcMonitor = *(struct tagRECT *)((char *)a2 + 88);
    goto LABEL_7;
  }
  v5 = (unsigned int)(v5 - 1);
  if ( !(_DWORD)v5 )
  {
    rcMonitor = *(struct tagRECT *)((char *)a2 + 104);
LABEL_7:
    v14 = rcMonitor;
    goto LABEL_8;
  }
  if ( (_DWORD)v5 == 1 )
  {
    v13 = *(struct tagRECT *)(*((_QWORD *)a2 + 5) + 840LL);
LABEL_17:
    v15 = v13;
    CTransitionVisualController::GetMonitorRectFromRectImpl(&v15, &v14);
  }
  rcMonitor = v14;
LABEL_8:
  v9 = *((_QWORD *)a2 + 5);
  if ( !*(_BYTE *)(v9 + 970) )
  {
    if ( v9 )
      v3 = (struct CVisual *)(v9 + 8);
    v10 = CTransitionVisualController::_SetAnimationClipRegion((CTransitionVisualController *)v5, v3, &v14);
    if ( (Microsoft_Windows_Dwm_UdwmEnableBits & 1) != 0 )
      Template_pddddq(
        v12,
        v11,
        *((_QWORD *)a2 + 2),
        v14.left,
        _mm_cvtsi128_si32(_mm_srli_si128((__m128i)rcMonitor, 4)),
        v14.right,
        _mm_cvtsi128_si32(_mm_srli_si128((__m128i)rcMonitor, 12)),
        v10);
  }
  *(struct tagRECT *)(*((_QWORD *)a2 + 5) + 824LL) = rcMonitor;
}
