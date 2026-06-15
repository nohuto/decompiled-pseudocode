/*
 * XREFs of ?GetLevelData@CVolumeHardware@@MEAAJXZ @ 0x18003EA40
 * Callers:
 *     ?Initialize@CVolumeControlBase@@UEAAJPEAUIMMDevice@@@Z @ 0x18003E5C0 (-Initialize@CVolumeControlBase@@UEAAJPEAUIMMDevice@@@Z.c)
 * Callees:
 *     WPP_SF_D @ 0x180031934 (WPP_SF_D.c)
 *     ?RecalcMasterFromChannelLevels@CVolumeControlBase@@IEAAXXZ @ 0x18003E6B8 (-RecalcMasterFromChannelLevels@CVolumeControlBase@@IEAAXXZ.c)
 *     ?SetCount@?$CAtlArray@VCVolumeUnit@@V?$CElementTraits@VCVolumeUnit@@@ATL@@@ATL@@QEAA_N_KH@Z @ 0x18003F43C (-SetCount@-$CAtlArray@VCVolumeUnit@@V-$CElementTraits@VCVolumeUnit@@@ATL@@@ATL@@QEAA_N_KH@Z.c)
 *     ?SetAtGrow@?$CAtlArray@VCVolumeUnit@@V?$CElementTraits@VCVolumeUnit@@@ATL@@@ATL@@QEAAX_KAEBVCVolumeUnit@@@Z @ 0x18003F4AC (-SetAtGrow@-$CAtlArray@VCVolumeUnit@@V-$CElementTraits@VCVolumeUnit@@@ATL@@@ATL@@QEAAX_KAEBVCVol.c)
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x180043A70 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 *     WPP_SF_q @ 0x1800448AC (WPP_SF_q.c)
 *     WPP_SF_qD @ 0x1800448E8 (WPP_SF_qD.c)
 *     log10_0 @ 0x1800449E2 (log10_0.c)
 *     pow_0 @ 0x1800449FA (pow_0.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x180069190 (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 *     WPP_SF_qdg @ 0x180071214 (WPP_SF_qdg.c)
 *     WPP_SF_qdggg @ 0x1800712D0 (WPP_SF_qdggg.c)
 *     WPP_SF_qgg @ 0x1800713B8 (WPP_SF_qgg.c)
 */

__int64 __fastcall CVolumeHardware::GetLevelData(CVolumeHardware *this)
{
  CVolumeHardware *v1; // rsi
  int v2; // ebx
  __int64 v3; // rcx
  int v4; // eax
  __int64 *v5; // rdx
  __int64 v6; // r8
  float v7; // xmm13_4
  float v8; // xmm12_4
  unsigned int v9; // r15d
  unsigned int v10; // r14d
  double v11; // xmm14_8
  double v12; // xmm10_8
  double v13; // xmm11_8
  double v14; // xmm6_8
  double v15; // xmm7_8
  double v16; // xmm6_8
  double v17; // xmm2_8
  double v18; // xmm2_8
  double v19; // xmm1_8
  double v20; // xmm0_8
  double v21; // xmm6_8
  double v22; // xmm8_8
  double v23; // xmm0_8
  float v24; // xmm0_4
  __int64 v25; // rdx
  __int64 v26; // r8
  float v27; // xmm7_4
  float v28; // xmm6_4
  double v29; // xmm9_8
  double v30; // xmm8_8
  double v31; // xmm1_8
  double v32; // xmm1_8
  float v33; // xmm0_4
  __int64 v34; // rdi
  double v35; // xmm7_8
  double v36; // xmm0_8
  double v37; // xmm6_8
  int v38; // r14d
  double v39; // xmm0_8
  double v40; // xmm0_8
  ATL::CAtlException *v42; // rbx
  __int64 v43; // [rsp+0h] [rbp-178h] BYREF
  __int64 v44; // [rsp+20h] [rbp-158h]
  int v45; // [rsp+40h] [rbp-138h]
  unsigned __int64 v46; // [rsp+44h] [rbp-134h]
  float v47; // [rsp+4Ch] [rbp-12Ch] BYREF
  int v48; // [rsp+50h] [rbp-128h]
  int v49; // [rsp+58h] [rbp-120h] BYREF
  float v50; // [rsp+5Ch] [rbp-11Ch]
  __int128 v51; // [rsp+60h] [rbp-118h]
  double v52; // [rsp+70h] [rbp-108h]
  double v53; // [rsp+78h] [rbp-100h]
  double v54; // [rsp+80h] [rbp-F8h]
  double v55; // [rsp+88h] [rbp-F0h]
  ATL::CAtlException *v56[23]; // [rsp+90h] [rbp-E8h] BYREF
  float v58; // [rsp+188h] [rbp+10h] BYREF
  float v59; // [rsp+190h] [rbp+18h] BYREF
  float v60; // [rsp+198h] [rbp+20h] BYREF

  v56[1] = (ATL::CAtlException *)-2LL;
  v1 = this;
  v2 = -2147467259;
  v3 = *(_QWORD *)&WPP_GLOBAL_Control.Data1;
  if ( *(struct _GUID **)&WPP_GLOBAL_Control.Data1 != &WPP_GLOBAL_Control
    && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 28LL) & 0x10000) != 0
    && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 25LL) >= 4u )
  {
    WPP_SF_q(
      *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 16LL),
      46LL,
      &WPP_b999b71a7868065e7997871bd7ab5ae5_Traceguids,
      v1);
    v3 = *(_QWORD *)&WPP_GLOBAL_Control.Data1;
  }
  if ( !*((_QWORD *)v1 + 12) )
  {
    v2 = -2147418113;
    goto LABEL_80;
  }
  v4 = *((_DWORD *)v1 + 31);
  *((_DWORD *)v1 + 17) = v4;
  if ( *(struct _GUID **)&WPP_GLOBAL_Control.Data1 != &WPP_GLOBAL_Control
    && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 28LL) & 0x10000) != 0
    && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 25LL) >= 4u )
  {
    WPP_SF_qD(
      *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 16LL),
      47LL,
      &WPP_b999b71a7868065e7997871bd7ab5ae5_Traceguids,
      v1,
      v4);
  }
  ATL::CAtlArray<CVolumeUnit,ATL::CElementTraits<CVolumeUnit>>::SetCount((char *)v1 + 32, 0LL);
  if ( !*((_QWORD *)v1 + 12) )
  {
    v2 = -2147418113;
    goto LABEL_79;
  }
  v7 = FLOAT_1000_0;
  v8 = FLOAT_N1000_0;
  v46 = __PAIR64__(LODWORD(FLOAT_1000_0), LODWORD(FLOAT_N1000_0));
  v9 = 0;
  v10 = 0;
  v45 = 0;
  v11 = DOUBLE_10_0;
  v12 = DOUBLE_1_0;
  v13 = DOUBLE_0_5714285714285714;
  while ( v10 < *((_DWORD *)v1 + 17) )
  {
    v49 = 1;
    v51 = _xmm;
    v14 = pow_0(v11, -4.8);
    v15 = pow_0(v11, 0.0);
    if ( v12 < v14 )
      v16 = 2.0 - pow_0(v14, -0.5714285714285714);
    else
      v16 = pow_0(v14, v13);
    v52 = v16;
    if ( v12 < v15 )
      v17 = 2.0 - pow_0(v15, -0.5714285714285714);
    else
      v17 = pow_0(v15, v13);
    v53 = v17;
    v18 = (v17 - v16) * 0.0 + v16;
    if ( v12 < v18 )
    {
      v20 = 2.0 - v18;
      v19 = DOUBLE_N1_75;
    }
    else
    {
      v19 = DOUBLE_1_75;
      v20 = v18;
    }
    v21 = pow_0(v20, v19);
    if ( pow_0(v11, -9.6) > v21 )
    {
      v23 = DOUBLE_N192_0;
      v22 = DOUBLE_20_0;
    }
    else
    {
      v22 = DOUBLE_20_0;
      v23 = log10_0(v21) * 20.0;
    }
    v24 = v23;
    if ( v24 >= 0.0 )
      v50 = 0.0;
    v2 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, float *, float *, float *))(**((_QWORD **)v1 + 12) + 32LL))(
           *((_QWORD *)v1 + 12),
           0LL,
           &v58,
           &v59,
           &v60);
    if ( v2 < 0 )
      goto LABEL_79;
    if ( *(struct _GUID **)&WPP_GLOBAL_Control.Data1 != &WPP_GLOBAL_Control
      && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 28LL) & 0x10000) != 0
      && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 25LL) >= 4u )
    {
      LODWORD(v44) = v10;
      WPP_SF_qdggg(*(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 16LL), v25, v26, v1, v44, v58, v59, v60);
    }
    v49 = 1;
    v27 = v58;
    *(_QWORD *)&v51 = __PAIR64__(LODWORD(v59), LODWORD(v58));
    v28 = v59;
    *((_QWORD *)&v51 + 1) = __PAIR64__(LODWORD(v59), LODWORD(v60));
    v29 = pow_0(v11, v58 / v22);
    v55 = v29;
    v30 = pow_0(v11, v28 / v22);
    v54 = v30;
    if ( v12 < v29 )
      v31 = 2.0 - pow_0(v29, -0.5714285714285714);
    else
      v31 = pow_0(v29, v13);
    v52 = v31;
    if ( v12 < v30 )
      v32 = 2.0 - pow_0(v30, -0.5714285714285714);
    else
      v32 = pow_0(v30, v13);
    v53 = v32;
    if ( v7 > v27 )
    {
      v7 = v27;
      *((float *)&v46 + 1) = v27;
    }
    if ( v28 > v8 )
    {
      v8 = v28;
      *(float *)&v46 = v28;
    }
    v2 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, float *))(**((_QWORD **)v1 + 12) + 40LL))(
           *((_QWORD *)v1 + 12),
           v10,
           &v47);
    if ( v2 < 0 )
      goto LABEL_79;
    if ( *(struct _GUID **)&WPP_GLOBAL_Control.Data1 != &WPP_GLOBAL_Control
      && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 28LL) & 0x10000) != 0
      && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 25LL) >= 4u )
    {
      WPP_SF_qdg(
        *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 16LL),
        49LL,
        &WPP_b999b71a7868065e7997871bd7ab5ae5_Traceguids,
        v1,
        v10,
        v47);
    }
    v33 = v47;
    if ( v28 <= v47 )
      v33 = v28;
    if ( v33 <= v27 )
      v33 = v27;
    v50 = v33;
    v2 = 0;
    try
    {
      ATL::CAtlArray<CVolumeUnit,ATL::CElementTraits<CVolumeUnit>>::SetAtGrow((char *)v1 + 32, v10, &v49);
    }
    catch ( ATL::CAtlException *v56 )
    {
      v5 = &v43;
      v42 = v56[0];
      if ( *(_DWORD *)v56[0] == -1073741571 )
        _resetstkoflw();
      v48 = *(_DWORD *)v42;
      v2 = v48;
      if ( v48 < 0 )
        goto LABEL_79;
      v9 = 0;
      v1 = this;
      v7 = *((float *)&v46 + 1);
      v8 = *(float *)&v46;
      v10 = v45;
      v11 = DOUBLE_10_0;
      v12 = DOUBLE_1_0;
      v13 = DOUBLE_0_5714285714285714;
    }
    v45 = ++v10;
  }
  if ( *(struct _GUID **)&WPP_GLOBAL_Control.Data1 != &WPP_GLOBAL_Control
    && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 28LL) & 0x10000) != 0
    && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 25LL) >= 4u )
  {
    WPP_SF_qgg(*(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 16LL), v5, v6, v1, v7, v8);
  }
  while ( v9 < *((_DWORD *)v1 + 17) )
  {
    if ( (unsigned __int64)v9 >= *((_QWORD *)v1 + 5) )
      ATL::AtlThrowImpl(-2147024809);
    v34 = *((_QWORD *)v1 + 4) + 56LL * v9;
    v35 = pow_0(v11, v7 / 20.0);
    v36 = pow_0(v11, v8 / 20.0);
    v37 = v36;
    v38 = *(_DWORD *)v34;
    if ( *(_DWORD *)v34 == 1 )
    {
      v39 = v35;
      if ( v12 >= v35 )
        goto LABEL_55;
      v35 = 2.0 - pow_0(v35, -0.5714285714285714);
    }
    else if ( v38 == 2 )
    {
      v39 = v35 / v36;
LABEL_55:
      v35 = pow_0(v39, v13);
    }
    *(double *)(v34 + 24) = v35;
    if ( v38 == 1 )
    {
      v40 = v37;
      if ( v12 >= v37 )
        goto LABEL_58;
      v37 = 2.0 - pow_0(v37, -0.5714285714285714);
    }
    else if ( v38 == 2 )
    {
      v40 = v37 / v37;
LABEL_58:
      v37 = pow_0(v40, v13);
    }
    *(double *)(v34 + 32) = v37;
    ++v9;
  }
  CVolumeControlBase::RecalcMasterFromChannelLevels(v1);
  if ( v2 >= 0 )
    return (unsigned int)v2;
LABEL_79:
  v3 = *(_QWORD *)&WPP_GLOBAL_Control.Data1;
LABEL_80:
  if ( (struct _GUID *)v3 != &WPP_GLOBAL_Control && (*(_DWORD *)(v3 + 28) & 0x10000) != 0 && *(_BYTE *)(v3 + 25) >= 2u )
    WPP_SF_D(*(_QWORD *)(v3 + 16), 0x33u, (__int64)&WPP_b999b71a7868065e7997871bd7ab5ae5_Traceguids, v2);
  return (unsigned int)v2;
}
