/*
 * XREFs of ?CreateBlurBehindAnimationComponent@CTransitionVisualController@@QEAAJPEAVCWindowData@@HPEAVCStoryboard@@PEAPEAVCAnimationComponent@@@Z @ 0x18000E578
 * Callers:
 *     ?_CreateAndAddBlurBehindComponent@CStoryboard@@IEAAJPEAVCWindowData@@HPEAPEAVCAnimationComponent@@@Z @ 0x18000F470 (-_CreateAndAddBlurBehindComponent@CStoryboard@@IEAAJPEAVCWindowData@@HPEAPEAVCAnimationComponent.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180004308 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?_SetDesktopId@CTransitionVisualController@@IEAAJ_K@Z @ 0x18000C950 (-_SetDesktopId@CTransitionVisualController@@IEAAJ_K@Z.c)
 *     ??0CAnimationComponent@@QEAA@PEAUHWND__@@W4DWMTRANSITION_TARGET@@HPEAVCStoryboard@@@Z @ 0x1800107A8 (--0CAnimationComponent@@QEAA@PEAUHWND__@@W4DWMTRANSITION_TARGET@@HPEAVCStoryboard@@@Z.c)
 *     ?SetTransitionVisual@CAnimationComponent@@QEAAXPEAVCAnimatedTransitionVisual@@@Z @ 0x1800108B4 (-SetTransitionVisual@CAnimationComponent@@QEAAXPEAVCAnimatedTransitionVisual@@@Z.c)
 *     ?IsRTL@CStoryboard@@SA_NXZ @ 0x180011124 (-IsRTL@CStoryboard@@SA_NXZ.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x1800176E4 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?GetAccentBlurBehindBrush@CTopLevelWindow@@QEAAJPEAPEAVCCachedVisualImageBrushResource@@PEAPEAVCResource@@PEAUMilPoint3F@@@Z @ 0x180024694 (-GetAccentBlurBehindBrush@CTopLevelWindow@@QEAAJPEAPEAVCCachedVisualImageBrushResource@@PEAPEAVC.c)
 *     ?SetClientAreaBrush@CAnimatedTransitionVisual@@QEAAJPEAVCResource@@0PEAUMilPoint3F@@@Z @ 0x18003892C (-SetClientAreaBrush@CAnimatedTransitionVisual@@QEAAJPEAVCResource@@0PEAUMilPoint3F@@@Z.c)
 *     ?Create@CAnimatedTransitionVisual@@SAJQEAUMIL_CHANNEL__@@PEAPEAV1@@Z @ 0x18003B528 (-Create@CAnimatedTransitionVisual@@SAJQEAUMIL_CHANNEL__@@PEAPEAV1@@Z.c)
 *     ?OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z @ 0x1800488B0 (-OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z.c)
 */

__int64 __fastcall CTransitionVisualController::CreateBlurBehindAnimationComponent(
        CTransitionVisualController *this,
        struct CWindowData *a2,
        unsigned int a3,
        struct CStoryboard *a4,
        struct CAnimationComponent **a5)
{
  int v5; // r12d
  struct CAnimatedTransitionVisual *v8; // rdi
  volatile signed __int32 *v9; // rsi
  unsigned int v10; // r12d
  int v11; // eax
  unsigned int v12; // ebx
  int AccentBlurBehindBrush; // eax
  struct CResource *v14; // r15
  struct CResource *v15; // r14
  __int64 v17; // rax
  int v18; // eax
  int v19; // eax
  __int64 v20; // rcx
  unsigned __int64 v21; // xmm0_8
  int v22; // eax
  int v23; // r8d
  CBaseObject *v24; // [rsp+30h] [rbp-40h] BYREF
  CBaseObject *v25; // [rsp+38h] [rbp-38h] BYREF
  __int64 v26; // [rsp+40h] [rbp-30h]
  unsigned __int64 v27[2]; // [rsp+48h] [rbp-28h] BYREF
  _DWORD v28[6]; // [rsp+58h] [rbp-18h] BYREF
  struct CAnimatedTransitionVisual *v29; // [rsp+B8h] [rbp+48h] BYREF
  unsigned int v30; // [rsp+C0h] [rbp+50h]
  struct CStoryboard *v31; // [rsp+C8h] [rbp+58h]

  v31 = a4;
  v30 = a3;
  v5 = *((_DWORD *)a2 + 142);
  v29 = 0LL;
  v24 = 0LL;
  v25 = 0LL;
  v8 = 0LL;
  *a5 = 0LL;
  v9 = 0LL;
  v28[0] = 1065353216;
  v10 = v5 & 0xFFF;
  v28[1] = 1065353216;
  v28[2] = 1065353216;
  if ( !(unsigned int)GetDesktopID(1LL, v27) )
  {
    v12 = -2147467259;
    MilInstrumentationCheckHR(
      0x14u,
      &CTransitionVisualController::MILINSTRUMENTATIONHRESULTLIST,
      2LL,
      -2147467259,
      0x341u);
    return v12;
  }
  v11 = CTransitionVisualController::_SetDesktopId(this, v27[0]);
  v12 = v11;
  if ( v11 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, &CTransitionVisualController::MILINSTRUMENTATIONHRESULTLIST, 2LL, v11, 0x345u);
    return v12;
  }
  AccentBlurBehindBrush = CTopLevelWindow::GetAccentBlurBehindBrush(
                            *((CTopLevelWindow **)a2 + 46),
                            &v24,
                            &v25,
                            (struct MilPoint3F *)v28);
  v12 = AccentBlurBehindBrush;
  if ( AccentBlurBehindBrush < 0 )
  {
    MilInstrumentationCheckHR(
      0x14u,
      &CTransitionVisualController::MILINSTRUMENTATIONHRESULTLIST,
      2LL,
      AccentBlurBehindBrush,
      0x347u);
    v14 = v24;
    v15 = v25;
  }
  else
  {
    v14 = v24;
    v15 = v25;
    if ( !v24 || !v25 )
    {
      *a5 = 0LL;
LABEL_6:
      if ( v9 )
        CBaseObject::Release((CBaseObject *)v9);
      if ( v8 )
        CBaseObject::Release((struct CAnimatedTransitionVisual *)((char *)v8 + 8));
      goto LABEL_10;
    }
    v17 = (*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 16LL))(
            WPF::g_pProcessHeap,
            144LL);
    if ( v17 )
      v9 = (volatile signed __int32 *)CAnimationComponent::CAnimationComponent(v17, *((_QWORD *)a2 + 5), v10, v30, v31);
    if ( v9 )
    {
      v18 = CAnimatedTransitionVisual::Create(
              *((struct MIL_CHANNEL__ *const *)CDesktopManager::s_pDesktopManagerInstance + 4),
              &v29);
      v12 = v18;
      if ( v18 < 0 )
      {
        MilInstrumentationCheckHR(0x14u, &CTransitionVisualController::MILINSTRUMENTATIONHRESULTLIST, 2LL, v18, 0x34Eu);
        v8 = v29;
      }
      else
      {
        v8 = v29;
        v19 = CAnimatedTransitionVisual::SetClientAreaBrush(v29, v14, v15, (struct MilPoint3F *)v28);
        v12 = v19;
        if ( v19 < 0 )
        {
          MilInstrumentationCheckHR(
            0x14u,
            &CTransitionVisualController::MILINSTRUMENTATIONHRESULTLIST,
            2LL,
            v19,
            0x350u);
        }
        else
        {
          v20 = *((_QWORD *)a2 + 6);
          v21 = _mm_srli_si128(*((__m128i *)a2 + 3), 8).m128i_u64[0];
          v22 = v21 - v20;
          if ( (int)v21 - (int)v20 < 0 )
            v22 = 0;
          LODWORD(v26) = v22;
          v23 = HIDWORD(v21) - HIDWORD(v20);
          if ( HIDWORD(v21) - HIDWORD(v20) < 0 )
            v23 = 0;
          *((_QWORD *)v8 + 116) = 0LL;
          v27[1] = 0LL;
          HIDWORD(v26) = v23;
          *((_QWORD *)v8 + 117) = v26;
          *((_DWORD *)v8 + 180) = *((_DWORD *)v31 + 18);
          *((_DWORD *)v8 + 181) = v30;
          *((_BYTE *)v8 + 956) = CStoryboard::IsRTL();
          CAnimationComponent::SetTransitionVisual((CAnimationComponent *)v9, v8);
          *a5 = (struct CAnimationComponent *)v9;
          _InterlockedIncrement(v9 + 2);
          v8 = v29;
          v14 = v24;
          v15 = v25;
        }
      }
      goto LABEL_6;
    }
    v12 = -2147024882;
    MilInstrumentationCheckHR(
      0x14u,
      &CTransitionVisualController::MILINSTRUMENTATIONHRESULTLIST,
      2LL,
      -2147024882,
      0x34Du);
  }
LABEL_10:
  if ( v14 )
    CBaseObject::Release(v14);
  if ( v15 )
    CBaseObject::Release(v15);
  return v12;
}
