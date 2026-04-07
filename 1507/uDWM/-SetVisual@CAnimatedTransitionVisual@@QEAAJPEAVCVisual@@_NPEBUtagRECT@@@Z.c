/*
 * XREFs of ?SetVisual@CAnimatedTransitionVisual@@QEAAJPEAVCVisual@@_NPEBUtagRECT@@@Z @ 0x18000414C
 * Callers:
 *     ?CreateAnimationComponent@CTransitionVisualController@@QEAAJPEAVCWindowData@@W4DWMTRANSITION_TARGET@@_NHPEAVCStoryboard@@PEAUtagRECT@@4H2PEAPEAVCAnimationComponent@@@Z @ 0x18000DB78 (-CreateAnimationComponent@CTransitionVisualController@@QEAAJPEAVCWindowData@@W4DWMTRANSITION_TAR.c)
 *     ?StartAnimation@CLoginTransition@@QEAAJHPEAVCVisual@@0_K@Z @ 0x18003CA5C (-StartAnimation@CLoginTransition@@QEAAJHPEAVCVisual@@0_K@Z.c)
 *     ?CreateDesktopAnimationComponent@CTransitionVisualController@@QEAAJPEAVCWindowData@@HAEBUtagRECT@@_N2PEAVCStoryboard@@PEAPEAVCAnimationComponent@@@Z @ 0x18008C038 (-CreateDesktopAnimationComponent@CTransitionVisualController@@QEAAJPEAVCWindowData@@HAEBUtagRECT.c)
 *     ?Capture@CScreenRotation@@QEAAJXZ @ 0x18008DEC8 (-Capture@CScreenRotation@@QEAAJXZ.c)
 *     ?CreateLiveDesktopVisual@CScreenRotation@@AEAAJXZ @ 0x18008E35C (-CreateLiveDesktopVisual@CScreenRotation@@AEAAJXZ.c)
 *     ?_CreateMonitorSnapshot@CVirtualDesktopSwitch@@AEAAJPEAVCWindowData@@UtagRECT@@_NPEAPEAVCAnimationComponent@@@Z @ 0x180092EE4 (-_CreateMonitorSnapshot@CVirtualDesktopSwitch@@AEAAJPEAVCWindowData@@UtagRECT@@_NPEAPEAVCAnimati.c)
 * Callees:
 *     ?_UpdateBrush@CAnimatedTransitionVisual@@IEAAJPEAVCResource@@@Z @ 0x180003FAC (-_UpdateBrush@CAnimatedTransitionVisual@@IEAAJPEAVCResource@@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180004308 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?GetMonitorRectFromRectImpl@CTransitionVisualController@@KAXPEBUtagRECT@@PEAU2@@Z @ 0x180009228 (-GetMonitorRectFromRectImpl@CTransitionVisualController@@KAXPEBUtagRECT@@PEAU2@@Z.c)
 *     ?Send@CResource@@QEAAJPEAXI@Z @ 0x180017A34 (-Send@CResource@@QEAAJPEAXI@Z.c)
 *     ?EnsureResources@CAnimatedTransitionVisual@@IEAAJXZ @ 0x1800387B4 (-EnsureResources@CAnimatedTransitionVisual@@IEAAJXZ.c)
 *     __security_check_cookie @ 0x180048580 (__security_check_cookie.c)
 *     memset_0 @ 0x1800498C6 (memset_0.c)
 */

__int64 __fastcall CAnimatedTransitionVisual::SetVisual(
        struct CResource **this,
        struct CVisual *a2,
        char a3,
        const struct tagRECT *a4)
{
  int v8; // eax
  unsigned int v9; // ebx
  __m128i v10; // xmm4
  float left; // xmm5_4
  __m128i v12; // xmm3
  __m128i v13; // xmm6
  __m128i v14; // xmm1
  int v15; // eax
  float v16; // xmm0_4
  float v17; // xmm2_4
  float v18; // xmm3_4
  float v19; // xmm4_4
  float v20; // xmm6_4
  float v21; // xmm1_4
  float v22; // xmm1_4
  int v23; // eax
  float v24; // xmm2_4
  float v25; // xmm0_4
  __int64 v26; // rax
  int v27; // eax
  CResource *v28; // rcx
  int v29; // eax
  int updated; // eax
  CResource *v32; // rcx
  int v33; // eax
  float v34; // xmm1_4
  float v35; // xmm2_4
  float v36; // xmm0_4
  float v37; // xmm1_4
  struct tagRECT v38; // [rsp+38h] [rbp-59h] BYREF
  int v39; // [rsp+48h] [rbp-49h] BYREF
  _BYTE v40[4]; // [rsp+4Ch] [rbp-45h] BYREF
  float v41; // [rsp+50h] [rbp-41h]
  float top; // [rsp+54h] [rbp-3Dh]
  float right; // [rsp+58h] [rbp-39h]
  float bottom; // [rsp+5Ch] [rbp-35h]
  int v45; // [rsp+78h] [rbp-19h]
  int v46; // [rsp+7Ch] [rbp-15h]

  v8 = CAnimatedTransitionVisual::EnsureResources((CAnimatedTransitionVisual *)this);
  v9 = v8;
  if ( v8 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v8, 0x2CEu);
  }
  else
  {
    v39 = 152;
    memset_0(v40, 0, 0x40uLL);
    if ( a4 )
    {
      v10 = _mm_cvtsi32_si128(a4->top);
      left = (float)a4->left;
      v12 = _mm_cvtsi32_si128(*((_DWORD *)CDesktopManager::s_pDesktopManagerInstance + 324));
      v13 = _mm_cvtsi32_si128(*((_DWORD *)CDesktopManager::s_pDesktopManagerInstance + 323));
      v14 = _mm_cvtsi32_si128(*((_DWORD *)CDesktopManager::s_pDesktopManagerInstance + 325));
      v15 = a4->right - a4->left;
      v16 = (float)*((int *)CDesktopManager::s_pDesktopManagerInstance + 322);
      if ( v15 < 0 )
        v15 = 0;
      v41 = (float)a4->left;
      v17 = (float)v15;
      v18 = (float)(_mm_cvtepi32_ps(v12).m128_f32[0] + v16) - v16;
      LODWORD(v19) = _mm_cvtepi32_ps(v10).m128_u32[0];
      v20 = _mm_cvtepi32_ps(v13).m128_f32[0];
      top = v19;
      v21 = _mm_cvtepi32_ps(v14).m128_f32[0] + v20;
      if ( v18 <= (float)v15 )
        v17 = v18;
      v22 = v21 - v20;
      v23 = a4->bottom - a4->top;
      v24 = v17 + left;
      if ( v23 < 0 )
        v23 = 0;
      right = v24;
      v25 = (float)v23;
      if ( v22 <= (float)v23 )
        v25 = v22;
      bottom = v25 + v19;
    }
    else
    {
      v34 = (float)*((int *)a2 + 26);
      v35 = (float)*((int *)a2 + 27);
      v41 = v34;
      top = v35;
      if ( *((int *)a2 + 28) <= 0 || *((int *)a2 + 29) <= 0 )
      {
        CTransitionVisualController::GetMonitorRectFromRectImpl(0LL, &v38);
        v41 = (float)v38.left;
        top = (float)v38.top;
        right = (float)v38.right;
        bottom = (float)v38.bottom;
      }
      else
      {
        v36 = (float)*((int *)a2 + 28) + v34;
        v37 = (float)*((int *)a2 + 29);
        right = v36;
        bottom = v37 + v35;
      }
    }
    v26 = *((_QWORD *)a2 + 2);
    v46 = 0;
    if ( v26 )
      v27 = *(_DWORD *)(v26 + 24);
    else
      v27 = 0;
    v28 = this[71];
    v45 = v27;
    v29 = CResource::Send(v28, &v39, 0x44u);
    v9 = v29;
    if ( v29 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v29, 0x2F6u);
    }
    else if ( a3
           && (v32 = this[71], *(_QWORD *)&v38.left = 153LL, v33 = CResource::Send(v32, &v38, 8u), v9 = v33, v33 < 0) )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v33, 0x2FDu);
    }
    else
    {
      updated = CAnimatedTransitionVisual::_UpdateBrush((CAnimatedTransitionVisual *)this, this[71]);
      v9 = updated;
      if ( updated < 0 )
        MilInstrumentationCheckHR(0x14u, 0LL, 0, updated, 0x301u);
    }
  }
  return v9;
}
