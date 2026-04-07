/*
 * XREFs of ?SetVisual@CAnimatedTransitionVisual@@QEAAJPEAVCVisual@@_NPEBUtagRECT@@@Z @ 0x1800059BC
 * Callers:
 *     ?CreateDesktopSnapshotComponent@CTransitionVisualController@@QEAAJW4DWMTRANSITION_TARGET@@AEBUtagRECT@@PEAVCStoryboard@@PEAPEAVCAnimationComponent@@@Z @ 0x1800048A8 (-CreateDesktopSnapshotComponent@CTransitionVisualController@@QEAAJW4DWMTRANSITION_TARGET@@AEBUta.c)
 *     ?CreateAnimationComponent@CTransitionVisualController@@QEAAJPEAVCWindowData@@W4DWMTRANSITION_TARGET@@_NHPEAVCStoryboard@@PEAUtagRECT@@4H2PEAPEAVCAnimationComponent@@@Z @ 0x18000D3E0 (-CreateAnimationComponent@CTransitionVisualController@@QEAAJPEAVCWindowData@@W4DWMTRANSITION_TAR.c)
 *     ?StartAnimation@CLoginTransition@@QEAAJHPEAVCVisual@@0_K@Z @ 0x18003A2FC (-StartAnimation@CLoginTransition@@QEAAJHPEAVCVisual@@0_K@Z.c)
 *     ?CreateDesktopAnimationComponent@CTransitionVisualController@@QEAAJPEAVCWindowData@@HAEBUtagRECT@@_N2PEAVCStoryboard@@PEAPEAVCAnimationComponent@@@Z @ 0x18008E680 (-CreateDesktopAnimationComponent@CTransitionVisualController@@QEAAJPEAVCWindowData@@HAEBUtagRECT.c)
 *     ?Capture@CScreenRotation@@QEAAJXZ @ 0x18008FE28 (-Capture@CScreenRotation@@QEAAJXZ.c)
 *     ?CreateLiveDesktopVisual@CScreenRotation@@AEAAJXZ @ 0x180090278 (-CreateLiveDesktopVisual@CScreenRotation@@AEAAJXZ.c)
 *     ?_CreateMonitorSnapshot@CVirtualDesktopSwitch@@AEAAJPEAVCWindowData@@UtagRECT@@_NPEAPEAVCAnimationComponent@@@Z @ 0x180093B24 (-_CreateMonitorSnapshot@CVirtualDesktopSwitch@@AEAAJPEAVCWindowData@@UtagRECT@@_NPEAPEAVCAnimati.c)
 * Callees:
 *     ?_UpdateBrush@CAnimatedTransitionVisual@@IEAAJPEAVCResource@@@Z @ 0x180005830 (-_UpdateBrush@CAnimatedTransitionVisual@@IEAAJPEAVCResource@@@Z.c)
 *     ?EnsureResources@CAnimatedTransitionVisual@@IEAAJXZ @ 0x180014640 (-EnsureResources@CAnimatedTransitionVisual@@IEAAJXZ.c)
 *     ?GetMonitorRectFromRectImpl@CTransitionVisualController@@KAXPEBUtagRECT@@PEAU2@@Z @ 0x180041D38 (-GetMonitorRectFromRectImpl@CTransitionVisualController@@KAXPEBUtagRECT@@PEAU2@@Z.c)
 *     __security_check_cookie @ 0x18004F240 (__security_check_cookie.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800503F8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800505E0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CAnimatedTransitionVisual::SetVisual(
        struct CResource **this,
        struct CVisual *a2,
        char a3,
        const struct tagRECT *a4)
{
  int v8; // eax
  unsigned int v9; // ebx
  __m128i v10; // xmm6
  float left; // xmm3_4
  __m128i v12; // xmm1
  __m128i v13; // xmm5
  __m128i v14; // xmm4
  signed int v15; // eax
  float v16; // xmm2_4
  __m128i v17; // xmm0
  int v18; // eax
  float v19; // xmm0_4
  float v20; // xmm5_4
  struct CResource *v21; // rdx
  int v22; // ecx
  __int64 v23; // rax
  int v24; // eax
  int v25; // eax
  int updated; // eax
  float v28; // xmm1_4
  float v29; // xmm2_4
  float v30; // xmm0_4
  float v31; // xmm1_4
  __int64 v32; // [rsp+58h] [rbp-19h] BYREF
  __int64 v33; // [rsp+60h] [rbp-11h]
  struct tagRECT v34; // [rsp+68h] [rbp-9h] BYREF

  v8 = CAnimatedTransitionVisual::EnsureResources((CAnimatedTransitionVisual *)this);
  v9 = v8;
  if ( v8 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v8, 0x2CCu);
  }
  else
  {
    v32 = 0LL;
    v33 = 0LL;
    if ( a4 )
    {
      v10 = _mm_cvtsi32_si128(a4->top);
      left = (float)a4->left;
      v12 = _mm_cvtsi32_si128(*((_DWORD *)CDesktopManager::s_pDesktopManagerInstance + 320));
      v13 = _mm_cvtsi32_si128(*((_DWORD *)CDesktopManager::s_pDesktopManagerInstance + 319));
      v14 = _mm_cvtsi32_si128(*((_DWORD *)CDesktopManager::s_pDesktopManagerInstance + 321));
      v15 = a4->right - a4->left;
      v16 = (float)*((int *)CDesktopManager::s_pDesktopManagerInstance + 318);
      if ( v15 < 0 )
        v15 = 0;
      *(float *)&v32 = (float)a4->left;
      v17 = _mm_cvtsi32_si128(v15);
      v18 = a4->bottom - a4->top;
      LODWORD(v19) = _mm_cvtepi32_ps(v17).m128_u32[0];
      if ( v18 < 0 )
        v18 = 0;
      v20 = _mm_cvtepi32_ps(v13).m128_f32[0];
      *((float *)&v32 + 1) = _mm_cvtepi32_ps(v10).m128_f32[0];
      *(float *)&v33 = fminf(v19, (float)(_mm_cvtepi32_ps(v12).m128_f32[0] + v16) - v16) + left;
      *((float *)&v33 + 1) = fminf((float)v18, (float)(_mm_cvtepi32_ps(v14).m128_f32[0] + v20) - v20)
                           + *((float *)&v32 + 1);
    }
    else
    {
      v28 = (float)*((int *)a2 + 26);
      v29 = (float)*((int *)a2 + 27);
      *(float *)&v32 = v28;
      *((float *)&v32 + 1) = v29;
      if ( *((int *)a2 + 28) <= 0 || *((int *)a2 + 29) <= 0 )
      {
        CTransitionVisualController::GetMonitorRectFromRectImpl(0LL, &v34);
        *(float *)&v32 = (float)v34.left;
        *((float *)&v32 + 1) = (float)v34.top;
        *(float *)&v33 = (float)v34.right;
        *((float *)&v33 + 1) = (float)v34.bottom;
      }
      else
      {
        v30 = (float)*((int *)a2 + 28) + v28;
        v31 = (float)*((int *)a2 + 29);
        *(float *)&v33 = v30;
        *((float *)&v33 + 1) = v31 + v29;
      }
    }
    v21 = this[71];
    *(_QWORD *)&v34.left = 0LL;
    v22 = 0;
    *(_QWORD *)&v34.right = 0LL;
    v23 = *((_QWORD *)a2 + 2);
    if ( v23 )
      v22 = *(_DWORD *)(v23 + 24);
    v24 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64 *, struct tagRECT *, _DWORD, _DWORD, int, _DWORD))(**((_QWORD **)v21 + 2) + 952LL))(
            *((_QWORD *)v21 + 2),
            *((unsigned int *)v21 + 6),
            &v32,
            &v34,
            0,
            0,
            v22,
            0);
    v9 = v24;
    if ( v24 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v24, 0x2FAu);
    }
    else if ( a3
           && (v25 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)this[71] + 2) + 960LL))(
                       *((_QWORD *)this[71] + 2),
                       *((unsigned int *)this[71] + 6)),
               v9 = v25,
               v25 < 0) )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v25, 0x301u);
    }
    else
    {
      updated = CAnimatedTransitionVisual::_UpdateBrush((CAnimatedTransitionVisual *)this, this[71]);
      v9 = updated;
      if ( updated < 0 )
        MilInstrumentationCheckHR(0x14u, 0LL, 0, updated, 0x305u);
    }
  }
  return v9;
}
