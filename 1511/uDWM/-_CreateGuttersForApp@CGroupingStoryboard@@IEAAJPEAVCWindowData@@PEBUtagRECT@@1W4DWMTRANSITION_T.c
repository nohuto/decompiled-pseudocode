/*
 * XREFs of ?_CreateGuttersForApp@CGroupingStoryboard@@IEAAJPEAVCWindowData@@PEBUtagRECT@@1W4DWMTRANSITION_TARGET@@PEAPEAVCAnimationComponent@@3@Z @ 0x1800955A0
 * Callers:
 *     ?_WindowEnumCallback@CAppArrangementDelayed@@EEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStoryboard@@PEAJ@Z @ 0x180004000 (-_WindowEnumCallback@CAppArrangementDelayed@@EEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStoryboar.c)
 *     ?_Create3DComponent@CGroupingStoryboard@@IEAAJPEAVCWindowData@@@Z @ 0x180094CE0 (-_Create3DComponent@CGroupingStoryboard@@IEAAJPEAVCWindowData@@@Z.c)
 *     ?_HandleThumbnailTag@CAppArrangementImmediate@@AEAAJPEAVCWindowData@@_N@Z @ 0x180095990 (-_HandleThumbnailTag@CAppArrangementImmediate@@AEAAJPEAVCWindowData@@_N@Z.c)
 *     ?_WindowEnumCallback@CAppArrangementImmediate@@EEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStoryboard@@PEAJ@Z @ 0x180096330 (-_WindowEnumCallback@CAppArrangementImmediate@@EEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStorybo.c)
 *     ?_WindowEnumCallback@CAppSwitch@@EEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStoryboard@@PEAJ@Z @ 0x1800977D0 (-_WindowEnumCallback@CAppSwitch@@EEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStoryboard@@PEAJ@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800118D8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?GetMonitorRectFromRectImpl@CTransitionVisualController@@KAXPEBUtagRECT@@PEAU2@@Z @ 0x1800133C8 (-GetMonitorRectFromRectImpl@CTransitionVisualController@@KAXPEBUtagRECT@@PEAU2@@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x18001CDE0 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z @ 0x18004EF10 (-OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z.c)
 *     ?_CreateAndAddGutterAnimationComponentsForRect@CStoryboard@@IEAAJPEAUHWND__@@W4DWMTRANSITION_TARGET@@HPEBUtagRECT@@2PEAPEAVCAnimationComponent@@3@Z @ 0x180095400 (-_CreateAndAddGutterAnimationComponentsForRect@CStoryboard@@IEAAJPEAUHWND__@@W4DWMTRANSITION_TAR.c)
 */

__int64 __fastcall CGroupingStoryboard::_CreateGuttersForApp(
        CStoryboard *a1,
        __int64 a2,
        struct tagRECT *a3,
        int *a4,
        unsigned int a5,
        CBaseObject **a6,
        CBaseObject **a7)
{
  struct CAnimationComponent *v11; // rsi
  struct CAnimationComponent *v12; // rdi
  int v13; // eax
  int v14; // eax
  unsigned int v15; // edi
  CBaseObject *v16; // rcx
  CBaseObject **v17; // rax
  struct tagRECT v18; // xmm0
  CBaseObject *v19; // rbx
  CBaseObject **v20; // rax
  struct tagRECT v21; // xmm0
  struct tagRECT v23; // [rsp+40h] [rbp-10h] BYREF
  CBaseObject *v24; // [rsp+90h] [rbp+40h] BYREF
  CBaseObject *v25; // [rsp+98h] [rbp+48h] BYREF

  v24 = 0LL;
  v25 = 0LL;
  *a6 = 0LL;
  *a7 = 0LL;
  v11 = (struct CAnimationComponent *)((unsigned __int64)&v25 & -(__int64)((*(_DWORD *)(a2 + 576) & 0x8000) != 0));
  v12 = (struct CAnimationComponent *)((unsigned __int64)&v24 & -(__int64)((*(_DWORD *)(a2 + 576) & 0x10000) != 0));
  v13 = (*(__int64 (__fastcall **)(CStoryboard *, _QWORD))(*(_QWORD *)a1 + 88LL))(a1, a5);
  v14 = CStoryboard::_CreateAndAddGutterAnimationComponentsForRect(
          a1,
          *(_QWORD *)(a2 + 40),
          a5,
          v13,
          &a3->left,
          a4,
          v12,
          v11);
  v15 = v14;
  if ( v14 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, &CStoryboard::MILINSTRUMENTATIONHRESULTLIST, 1LL, v14, 0x833u);
LABEL_7:
    v19 = v25;
    v16 = v24;
    goto LABEL_8;
  }
  CTransitionVisualController::GetMonitorRectFromRectImpl(a3, &v23);
  v16 = v24;
  if ( v24 )
  {
    v17 = a6;
    v18 = v23;
    *((_DWORD *)v24 + 17) = 2;
    *v17 = v16;
    *(struct tagRECT *)((char *)v16 + 104) = v18;
    _InterlockedIncrement((volatile signed __int32 *)v16 + 2);
    v16 = v24;
  }
  v19 = v25;
  if ( v25 )
  {
    v20 = a7;
    v21 = v23;
    *((_DWORD *)v25 + 17) = 2;
    *v20 = v19;
    *(struct tagRECT *)((char *)v19 + 104) = v21;
    _InterlockedIncrement((volatile signed __int32 *)v19 + 2);
    goto LABEL_7;
  }
LABEL_8:
  if ( v16 )
    CBaseObject::Release(v16);
  if ( v19 )
    CBaseObject::Release(v19);
  return v15;
}
