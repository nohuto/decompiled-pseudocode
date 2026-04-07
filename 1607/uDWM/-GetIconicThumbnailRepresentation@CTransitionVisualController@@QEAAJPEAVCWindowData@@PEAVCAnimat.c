/*
 * XREFs of ?GetIconicThumbnailRepresentation@CTransitionVisualController@@QEAAJPEAVCWindowData@@PEAVCAnimationComponent@@PEBUtagRECT@@U?$TMILFlagsEnum@W4FlagsEnum@SWRUsage@@@@PEAPEAVCVisual@@@Z @ 0x18008F054
 * Callers:
 *     ?CreateAnimationComponent@CTransitionVisualController@@QEAAJPEAVCWindowData@@W4DWMTRANSITION_TARGET@@_NHPEAVCStoryboard@@PEAUtagRECT@@4H2PEAPEAVCAnimationComponent@@@Z @ 0x18000D3E0 (-CreateAnimationComponent@CTransitionVisualController@@QEAAJPEAVCWindowData@@W4DWMTRANSITION_TAR.c)
 * Callees:
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180019B60 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?RenderRecursive@CVisual@@QEAAJXZ @ 0x18001F650 (-RenderRecursive@CVisual@@QEAAJXZ.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800503F8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800505E0 (_guard_dispatch_icall_nop.c)
 *     ?RegisterIconicAnimatedVisual@CImmersiveIconicBitmapRegistry@@QEAAJPEAVCIconicAnimatedVisual@@@Z @ 0x180079B44 (-RegisterIconicAnimatedVisual@CImmersiveIconicBitmapRegistry@@QEAAJPEAVCIconicAnimatedVisual@@@Z.c)
 *     ?Create@CIconicAnimatedVisual@@SAJPEAUIDwmChannel@@PEAPEAV1@@Z @ 0x18008E3D0 (-Create@CIconicAnimatedVisual@@SAJPEAUIDwmChannel@@PEAPEAV1@@Z.c)
 *     ?SetIconicData@CIconicAnimatedVisual@@QEAAJPEAVCWindowData@@PEBUtagRECT@@PEAU?$TMILFlagsEnum@W4FlagsEnum@SWRUsage@@@@@Z @ 0x180099BF0 (-SetIconicData@CIconicAnimatedVisual@@QEAAJPEAVCWindowData@@PEBUtagRECT@@PEAU-$TMILFlagsEnum@W4F.c)
 */

__int64 __fastcall CTransitionVisualController::GetIconicThumbnailRepresentation(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        _DWORD *a4,
        char a5,
        CBaseObject **a6)
{
  int v9; // eax
  unsigned int v10; // edi
  __int64 v11; // rdx
  volatile signed __int32 *v12; // rbx
  int v13; // eax
  int v14; // ecx
  int v15; // eax
  int v16; // eax
  int v17; // eax
  struct CIconicAnimatedVisual *v18; // rsi
  CBaseObject **v19; // r14
  _DWORD v21[10]; // [rsp+30h] [rbp-28h] BYREF
  struct CIconicAnimatedVisual *v22; // [rsp+60h] [rbp+8h] BYREF

  v22 = 0LL;
  v9 = CIconicAnimatedVisual::Create(*((struct IDwmChannel **)CDesktopManager::s_pDesktopManagerInstance + 4), &v22);
  v10 = v9;
  if ( v9 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, &CTransitionVisualController::MILINSTRUMENTATIONHRESULTLIST, 2LL, v9, 0x9C2u);
LABEL_17:
    v12 = (volatile signed __int32 *)v22;
    goto LABEL_18;
  }
  v11 = a2;
  v12 = (volatile signed __int32 *)v22;
  v13 = CIconicAnimatedVisual::SetIconicData(v22, v11, a4, &a5);
  v10 = v13;
  if ( v13 >= 0 )
  {
    v14 = a4[3] - a4[1];
    if ( v14 < 0 )
      v14 = 0;
    v15 = a4[2] - *a4;
    v21[1] = v14;
    if ( v15 < 0 )
      v15 = 0;
    v21[0] = v15;
    v16 = (*(__int64 (__fastcall **)(volatile signed __int32 *, _DWORD *))(*(_QWORD *)v12 + 80LL))(v12, v21);
    v10 = v16;
    if ( v16 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, &CTransitionVisualController::MILINSTRUMENTATIONHRESULTLIST, 2LL, v16, 0x9C5u);
      goto LABEL_18;
    }
    v17 = CVisual::RenderRecursive((CVisual *)v12);
    v10 = v17;
    if ( v17 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, &CTransitionVisualController::MILINSTRUMENTATIONHRESULTLIST, 2LL, v17, 0x9C7u);
      goto LABEL_18;
    }
    *(_QWORD *)(a3 + 136) = v12;
    _InterlockedIncrement(v12 + 2);
    v18 = v22;
    CImmersiveIconicBitmapRegistry::RegisterIconicAnimatedVisual(
      *((CImmersiveIconicBitmapRegistry **)CDesktopManager::s_pDesktopManagerInstance + 27),
      v22);
    v19 = a6;
    if ( *a6 )
      CBaseObject::Release(*a6);
    *v19 = v18;
    _InterlockedIncrement(v12 + 2);
    goto LABEL_17;
  }
  MilInstrumentationCheckHR(0x14u, &CTransitionVisualController::MILINSTRUMENTATIONHRESULTLIST, 2LL, v13, 0x9C4u);
LABEL_18:
  if ( v12 )
    CBaseObject::Release((CBaseObject *)v12);
  return v10;
}
