/*
 * XREFs of ?GetSurfaceFromThumbnail@CTransitionVisualController@@QEAAJPEAVCWindowData@@W4DWMTRANSITION_TARGET@@PEBUtagRECT@@_NPEAPEAVCResource@@4PEAUMilPoint3F@@@Z @ 0x18000D124
 * Callers:
 *     ?CreateAnimationComponent@CTransitionVisualController@@QEAAJPEAVCWindowData@@W4DWMTRANSITION_TARGET@@_NHPEAVCStoryboard@@PEAUtagRECT@@4H2PEAPEAVCAnimationComponent@@@Z @ 0x18000DB78 (-CreateAnimationComponent@CTransitionVisualController@@QEAAJPEAVCWindowData@@W4DWMTRANSITION_TAR.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180004308 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?Create@CCachedVisualImageBrushResource@@SAJW4MIL_RESOURCE_TYPE@@QEAUMIL_CHANNEL__@@PEAPEAV1@@Z @ 0x180012308 (-Create@CCachedVisualImageBrushResource@@SAJW4MIL_RESOURCE_TYPE@@QEAUMIL_CHANNEL__@@PEAPEAV1@@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x1800176E4 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?Send@CResource@@QEAAJPEAXI@Z @ 0x180017A34 (-Send@CResource@@QEAAJPEAXI@Z.c)
 *     __security_check_cookie @ 0x180048580 (__security_check_cookie.c)
 *     memset_0 @ 0x1800498C6 (memset_0.c)
 *     ?GetCVI@CThumbnailVisual@@QEAAJPEBUtagRECT@@PEAPEAVCResource@@PEAUMilPoint3F@@@Z @ 0x180075098 (-GetCVI@CThumbnailVisual@@QEAAJPEBUtagRECT@@PEAPEAVCResource@@PEAUMilPoint3F@@@Z.c)
 *     ?GetCVI@CWindowSnapshot@@QEAAJPEBUtagRECT@@PEAPEAVCResource@@PEAM@Z @ 0x18007AAF8 (-GetCVI@CWindowSnapshot@@QEAAJPEBUtagRECT@@PEAPEAVCResource@@PEAM@Z.c)
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
  float v19; // xmm2_4
  float v20; // xmm2_4
  int v21; // eax
  struct CResource *v22; // rdi
  int v23; // eax
  int v24; // eax
  float v25[2]; // [rsp+38h] [rbp-D0h] BYREF
  struct CResource *v26; // [rsp+40h] [rbp-C8h] BYREF
  CResource *v27; // [rsp+48h] [rbp-C0h] BYREF
  __int64 v28; // [rsp+50h] [rbp-B8h] BYREF
  __int64 v29; // [rsp+58h] [rbp-B0h]
  __int64 v30; // [rsp+60h] [rbp-A8h] BYREF
  int v31; // [rsp+68h] [rbp-A0h] BYREF
  _BYTE v32[12]; // [rsp+6Ch] [rbp-9Ch] BYREF
  __int128 v33; // [rsp+78h] [rbp-90h]
  __int128 v34; // [rsp+88h] [rbp-80h]
  int v35; // [rsp+ACh] [rbp-5Ch]
  int v36; // [rsp+B0h] [rbp-58h]
  int v37; // [rsp+B4h] [rbp-54h]
  int v38; // [rsp+B8h] [rbp-50h]
  int v39; // [rsp+C4h] [rbp-44h]
  int v40; // [rsp+C8h] [rbp-40h]
  int v41; // [rsp+CCh] [rbp-3Ch]
  int v42; // [rsp+D0h] [rbp-38h]
  int v43; // [rsp+D8h] [rbp-30h]

  v26 = 0LL;
  v8 = 0LL;
  v9 = a4;
  v10 = *(float *)&a3;
  *a8 = 1.0;
  a8[1] = 1.0;
  CVI = -2147467259;
  a8[2] = 1.0;
  v30 = (__int64)a4;
  LODWORD(v25[0]) = a3;
  v27 = 0LL;
  if ( !a2 )
    return CVI;
  v13 = *(CWindowSnapshot **)(a2 + 384);
  if ( v13 )
  {
    CVI = CWindowSnapshot::GetCVI(v13, a4, &v26, v25);
    v17 = 1.0 / v25[0];
    a8[1] = 1.0 / v25[0];
    *a8 = v17;
  }
  else
  {
    v14 = 0LL;
    if ( !*(_DWORD *)(a2 + 496) )
      return CVI;
    while ( 1 )
    {
      v18 = *(_QWORD *)(a2 + 472);
      v28 = 0x3F8000003F800000LL;
      LODWORD(v29) = 1065353216;
      if ( CThumbnailVisual::GetCVI(
             *(CThumbnailVisual **)(*(_QWORD *)(v18 + 8 * v14) + 88LL),
             v9,
             &v26,
             (struct MilPoint3F *)&v28) >= 0 )
      {
        if ( !a5 )
          break;
        v19 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(*(float *)&v28 - 1.0)) & _xmm);
        if ( v19 <= 0.0000011920929 )
        {
          v20 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(*((float *)&v28 + 1) - 1.0)) & _xmm);
          if ( v20 <= 0.0000011920929 )
            break;
        }
      }
      v14 = (unsigned int)(v14 + 1);
      if ( (unsigned int)v14 >= *(_DWORD *)(a2 + 496) )
        goto LABEL_26;
      v9 = (const struct tagRECT *)v30;
    }
    CVI = 0;
    v21 = v29;
    v10 = v25[0];
    *(_QWORD *)a8 = v28;
    *((_DWORD *)a8 + 2) = v21;
  }
  if ( (CVI & 0x80000000) != 0 )
    goto LABEL_26;
  v22 = v26;
  if ( (LODWORD(v10) & 0x4000000) != 0 )
  {
    v30 = 153LL;
    CResource::Send(v26, &v30, 8u);
  }
  v23 = CCachedVisualImageBrushResource::Create(v16, *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 4), &v27);
  CVI = v23;
  if ( v23 >= 0 )
  {
    v31 = 250;
    memset_0(v32, 0, 0x70uLL);
    v35 = 0;
    v36 = 0;
    v40 = 0;
    v41 = 0;
    v42 = 0;
    v8 = (volatile signed __int32 *)v27;
    *(double *)&v32[4] = DOUBLE_1_0;
    v37 = 1;
    v33 = _xmm;
    v38 = 1;
    v34 = _xmm;
    v39 = 1;
    v43 = *((_DWORD *)v22 + 6);
    v24 = CResource::Send(v27, &v31, 0x74u);
    CVI = v24;
    if ( v24 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, &CTransitionVisualController::MILINSTRUMENTATIONHRESULTLIST, 2LL, v24, 0x922u);
      goto LABEL_27;
    }
    if ( *a7 )
      CBaseObject::Release(*a7);
    *a7 = v22;
    _InterlockedAdd((volatile signed __int32 *)v22 + 2, 1u);
    if ( *a6 )
      CBaseObject::Release(*a6);
    v8 = (volatile signed __int32 *)v27;
    *a6 = v27;
    if ( v8 )
    {
      _InterlockedAdd(v8 + 2, 1u);
      v8 = (volatile signed __int32 *)v27;
    }
LABEL_26:
    v22 = v26;
    goto LABEL_27;
  }
  MilInstrumentationCheckHR(0x14u, &CTransitionVisualController::MILINSTRUMENTATIONHRESULTLIST, 2LL, v23, 0x90Cu);
  v8 = (volatile signed __int32 *)v27;
LABEL_27:
  if ( v22 )
    CBaseObject::Release(v22);
  if ( v8 )
    CBaseObject::Release((CBaseObject *)v8);
  return CVI;
}
