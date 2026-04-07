/*
 * XREFs of ?CreateBitmapAnimationComponent@CTransitionVisualController@@QEAAJPEAUHWND__@@W4DWMTRANSITION_TARGET@@HPEAVCStoryboard@@PEAPEAVCAnimationComponent@@@Z @ 0x18008BE50
 * Callers:
 *     ?_CreateAndAddBitmapAnimationComponent@CStoryboard@@IEAAJPEAUHWND__@@W4DWMTRANSITION_TARGET@@HPEAPEAVCAnimationComponent@@@Z @ 0x18009279C (-_CreateAndAddBitmapAnimationComponent@CStoryboard@@IEAAJPEAUHWND__@@W4DWMTRANSITION_TARGET@@HPE.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180004308 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ??0CAnimationComponent@@QEAA@PEAUHWND__@@W4DWMTRANSITION_TARGET@@HPEAVCStoryboard@@@Z @ 0x1800107A8 (--0CAnimationComponent@@QEAA@PEAUHWND__@@W4DWMTRANSITION_TARGET@@HPEAVCStoryboard@@@Z.c)
 *     ?SetTransitionVisual@CAnimationComponent@@QEAAXPEAVCAnimatedTransitionVisual@@@Z @ 0x1800108B4 (-SetTransitionVisual@CAnimationComponent@@QEAAXPEAVCAnimatedTransitionVisual@@@Z.c)
 *     ?IsRTL@CStoryboard@@SA_NXZ @ 0x180011124 (-IsRTL@CStoryboard@@SA_NXZ.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x1800176E4 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?SetBeginRect@CAnimatedTransitionVisual@@QEAAXPEBUtagRECT@@@Z @ 0x180038C34 (-SetBeginRect@CAnimatedTransitionVisual@@QEAAXPEBUtagRECT@@@Z.c)
 *     ?Create@CAnimatedTransitionVisual@@SAJQEAUMIL_CHANNEL__@@PEAPEAV1@@Z @ 0x18003B528 (-Create@CAnimatedTransitionVisual@@SAJQEAUMIL_CHANNEL__@@PEAPEAV1@@Z.c)
 *     ?OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z @ 0x1800488B0 (-OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z.c)
 *     ?SetBitmap@CAnimatedTransitionVisual@@QEAAJPEAVCBitmapSource@@@Z @ 0x18008969C (-SetBitmap@CAnimatedTransitionVisual@@QEAAJPEAVCBitmapSource@@@Z.c)
 *     ?_GetTransitionBitmapIndex@CTransitionVisualController@@IEAAHPEAUHWND__@@@Z @ 0x18008D45C (-_GetTransitionBitmapIndex@CTransitionVisualController@@IEAAHPEAUHWND__@@@Z.c)
 */

__int64 __fastcall CTransitionVisualController::CreateBitmapAnimationComponent(
        CTransitionVisualController *a1,
        HWND a2,
        int a3,
        int a4,
        __int64 a5,
        __int64 *a6)
{
  int TransitionBitmapIndex; // eax
  __int64 v11; // r12
  __int64 v12; // rax
  __int64 v13; // rbp
  unsigned int v14; // esi
  int v15; // eax
  struct CAnimatedTransitionVisual *v16; // rbx
  struct CAnimatedTransitionVisual *v18; // [rsp+30h] [rbp-38h] BYREF

  v18 = 0LL;
  TransitionBitmapIndex = CTransitionVisualController::_GetTransitionBitmapIndex(a1, a2);
  v11 = (unsigned int)TransitionBitmapIndex;
  if ( TransitionBitmapIndex < 0 )
  {
    v14 = -2147467259;
    MilInstrumentationCheckHR(
      0x14u,
      &CTransitionVisualController::MILINSTRUMENTATIONHRESULTLIST,
      2LL,
      -2147467259,
      0x65Au);
  }
  else
  {
    v12 = (*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 16LL))(
            WPF::g_pProcessHeap,
            144LL);
    if ( v12 )
      v13 = CAnimationComponent::CAnimationComponent(v12, (__int64)a2, a3, a4, a5);
    else
      v13 = 0LL;
    if ( v13 )
    {
      v15 = CAnimatedTransitionVisual::Create(
              *((struct MIL_CHANNEL__ *const *)CDesktopManager::s_pDesktopManagerInstance + 4),
              (CBaseObject ***)&v18);
      v14 = v15;
      if ( v15 >= 0 )
      {
        _mm_lfence();
        v16 = v18;
        CAnimatedTransitionVisual::SetBitmap(
          (CBaseObject **)v18,
          *(struct CResource ***)(*((_QWORD *)a1 + 19) + 56 * v11 + 48));
        *((_QWORD *)v16 + 117) = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)a1 + 19) + 56 * v11 + 48) + 24LL);
        *(_BYTE *)(v13 + 72) = 1;
        *((_DWORD *)v16 + 180) = *(_DWORD *)(a5 + 72);
        *((_DWORD *)v16 + 181) = a4;
        *((_BYTE *)v16 + 956) = CStoryboard::IsRTL();
        CAnimatedTransitionVisual::SetBeginRect(
          (struct tagPOINT *)v16,
          (const struct tagRECT *)(56 * v11 + *((_QWORD *)a1 + 19) + 12LL));
        CAnimatedTransitionVisual::SetBeginRect(
          (struct tagPOINT *)v16,
          (const struct tagRECT *)(56 * v11 + *((_QWORD *)a1 + 19) + 28LL));
        CAnimationComponent::SetTransitionVisual((CAnimationComponent *)v13, v16);
        *a6 = v13;
        _InterlockedIncrement((volatile signed __int32 *)(v13 + 8));
      }
      else
      {
        MilInstrumentationCheckHR(0x14u, &CTransitionVisualController::MILINSTRUMENTATIONHRESULTLIST, 2LL, v15, 0x649u);
      }
      if ( v18 )
        CBaseObject::Release((struct CAnimatedTransitionVisual *)((char *)v18 + 8));
      CBaseObject::Release((CBaseObject *)v13);
    }
    else
    {
      v14 = -2147024882;
      MilInstrumentationCheckHR(
        0x14u,
        &CTransitionVisualController::MILINSTRUMENTATIONHRESULTLIST,
        2LL,
        -2147024882,
        0x647u);
    }
  }
  return v14;
}
