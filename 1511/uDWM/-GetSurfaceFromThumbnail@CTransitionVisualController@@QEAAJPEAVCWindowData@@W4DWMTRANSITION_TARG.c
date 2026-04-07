/*
 * XREFs of ?GetSurfaceFromThumbnail@CTransitionVisualController@@QEAAJPEAVCWindowData@@W4DWMTRANSITION_TARGET@@PEBUtagRECT@@_NPEAPEAVCResource@@4PEAUMilPoint3F@@@Z @ 0x180008640
 * Callers:
 *     ?CreateAnimationComponent@CTransitionVisualController@@QEAAJPEAVCWindowData@@W4DWMTRANSITION_TARGET@@_NHPEAVCStoryboard@@PEAUtagRECT@@4H2PEAPEAVCAnimationComponent@@@Z @ 0x180009690 (-CreateAnimationComponent@CTransitionVisualController@@QEAAJPEAVCWindowData@@W4DWMTRANSITION_TAR.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800118D8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?Create@CCachedVisualImageBrushResource@@SAJW4MIL_RESOURCE_TYPE@@QEAUMIL_CHANNEL__@@PEAPEAV1@@Z @ 0x180013E8C (-Create@CCachedVisualImageBrushResource@@SAJW4MIL_RESOURCE_TYPE@@QEAUMIL_CHANNEL__@@PEAPEAV1@@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x18001CDE0 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?Send@CResource@@QEAAJPEAXI@Z @ 0x18001D2DC (-Send@CResource@@QEAAJPEAXI@Z.c)
 *     __security_check_cookie @ 0x18004EBE0 (__security_check_cookie.c)
 *     memset_0 @ 0x18004FF66 (memset_0.c)
 *     ?GetCVI@CThumbnailVisual@@QEAAJPEBUtagRECT@@PEAPEAVCResource@@PEAUMilPoint3F@@@Z @ 0x18007D128 (-GetCVI@CThumbnailVisual@@QEAAJPEBUtagRECT@@PEAPEAVCResource@@PEAUMilPoint3F@@@Z.c)
 *     ?GetCVI@CWindowSnapshot@@QEAAJPEBUtagRECT@@PEAPEAVCResource@@PEAM@Z @ 0x180082524 (-GetCVI@CWindowSnapshot@@QEAAJPEBUtagRECT@@PEAPEAVCResource@@PEAM@Z.c)
 */

__int64 __fastcall CTransitionVisualController::GetSurfaceFromThumbnail(
        __int64 a1,
        __int64 a2,
        int a3,
        const struct tagRECT *a4,
        char a5,
        CBaseObject **a6,
        CBaseObject **a7,
        float *a8)
{
  volatile signed __int32 *v8; // rbx
  const struct tagRECT *v9; // r10
  float v10; // r15d
  unsigned int CVI; // esi
  CWindowSnapshot *v13; // rcx
  __int64 v14; // r15
  __int64 v16; // rcx
  float v17; // xmm0_4
  __int64 v18; // rax
  int v19; // eax
  struct CResource *v20; // rdi
  int v21; // eax
  int v22; // eax
  float v23[2]; // [rsp+38h] [rbp-D0h] BYREF
  struct CResource *v24; // [rsp+40h] [rbp-C8h] BYREF
  CResource *v25; // [rsp+48h] [rbp-C0h] BYREF
  __int64 v26; // [rsp+50h] [rbp-B8h] BYREF
  __int64 v27; // [rsp+58h] [rbp-B0h]
  __int64 v28; // [rsp+60h] [rbp-A8h] BYREF
  int v29; // [rsp+68h] [rbp-A0h] BYREF
  _BYTE v30[12]; // [rsp+6Ch] [rbp-9Ch] BYREF
  __int128 v31; // [rsp+78h] [rbp-90h]
  __int128 v32; // [rsp+88h] [rbp-80h]
  int v33; // [rsp+ACh] [rbp-5Ch]
  int v34; // [rsp+B0h] [rbp-58h]
  int v35; // [rsp+B4h] [rbp-54h]
  int v36; // [rsp+B8h] [rbp-50h]
  int v37; // [rsp+C4h] [rbp-44h]
  int v38; // [rsp+C8h] [rbp-40h]
  int v39; // [rsp+CCh] [rbp-3Ch]
  int v40; // [rsp+D0h] [rbp-38h]
  int v41; // [rsp+D8h] [rbp-30h]

  v24 = 0LL;
  v8 = 0LL;
  v9 = a4;
  v10 = *(float *)&a3;
  *a8 = 1.0;
  a8[1] = 1.0;
  CVI = -2147467259;
  a8[2] = 1.0;
  v28 = (__int64)a4;
  LODWORD(v23[0]) = a3;
  v25 = 0LL;
  if ( !a2 )
    return CVI;
  v13 = *(CWindowSnapshot **)(a2 + 400);
  if ( v13 )
  {
    CVI = CWindowSnapshot::GetCVI(v13, a4, &v24, v23);
    v17 = 1.0 / v23[0];
    a8[1] = 1.0 / v23[0];
    *a8 = v17;
  }
  else
  {
    v14 = 0LL;
    if ( !*(_DWORD *)(a2 + 512) )
      return CVI;
    while ( 1 )
    {
      v18 = *(_QWORD *)(a2 + 488);
      v26 = 0x3F8000003F800000LL;
      LODWORD(v27) = 1065353216;
      if ( CThumbnailVisual::GetCVI(
             *(CThumbnailVisual **)(*(_QWORD *)(v18 + 8 * v14) + 88LL),
             v9,
             &v24,
             (struct MilPoint3F *)&v26) >= 0
        && (!a5
         || (float)COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(*(float *)&v26 - 1.0)) & _xmm) <= 0.0000011920929
         && (float)COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(*((float *)&v26 + 1) - 1.0)) & _xmm) <= 0.0000011920929) )
      {
        break;
      }
      v14 = (unsigned int)(v14 + 1);
      if ( (unsigned int)v14 >= *(_DWORD *)(a2 + 512) )
        goto LABEL_26;
      v9 = (const struct tagRECT *)v28;
    }
    CVI = 0;
    v19 = v27;
    v10 = v23[0];
    *(_QWORD *)a8 = v26;
    *((_DWORD *)a8 + 2) = v19;
  }
  if ( (CVI & 0x80000000) != 0 )
    goto LABEL_26;
  v20 = v24;
  if ( (LODWORD(v10) & 0x4000000) != 0 )
  {
    v28 = 163LL;
    CResource::Send(v24, &v28, 8u);
  }
  v21 = CCachedVisualImageBrushResource::Create(v16, *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 4), &v25);
  CVI = v21;
  if ( v21 >= 0 )
  {
    v29 = 257;
    memset_0(v30, 0, 0x70uLL);
    v33 = 0;
    v34 = 0;
    v38 = 0;
    v39 = 0;
    v40 = 0;
    v8 = (volatile signed __int32 *)v25;
    *(double *)&v30[4] = DOUBLE_1_0;
    v35 = 1;
    v31 = _xmm;
    v36 = 1;
    v32 = _xmm;
    v37 = 1;
    v41 = *((_DWORD *)v20 + 6);
    v22 = CResource::Send(v25, &v29, 0x74u);
    CVI = v22;
    if ( v22 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, &CTransitionVisualController::MILINSTRUMENTATIONHRESULTLIST, 2u, v22, 0x994u);
      goto LABEL_27;
    }
    if ( *a7 )
      CBaseObject::Release(*a7);
    *a7 = v20;
    _InterlockedAdd((volatile signed __int32 *)v20 + 2, 1u);
    if ( *a6 )
      CBaseObject::Release(*a6);
    v8 = (volatile signed __int32 *)v25;
    *a6 = v25;
    if ( v8 )
    {
      _InterlockedAdd(v8 + 2, 1u);
      v8 = (volatile signed __int32 *)v25;
    }
LABEL_26:
    v20 = v24;
    goto LABEL_27;
  }
  MilInstrumentationCheckHR(0x14u, &CTransitionVisualController::MILINSTRUMENTATIONHRESULTLIST, 2u, v21, 0x97Eu);
  v8 = (volatile signed __int32 *)v25;
LABEL_27:
  if ( v20 )
    CBaseObject::Release(v20);
  if ( v8 )
    CBaseObject::Release((CBaseObject *)v8);
  return CVI;
}
