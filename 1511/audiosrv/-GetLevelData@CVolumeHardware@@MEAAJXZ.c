/*
 * XREFs of ?GetLevelData@CVolumeHardware@@MEAAJXZ @ 0x1800416D0
 * Callers:
 *     ?Initialize@CVolumeControlBase@@UEAAJPEAUIMMDevice@@@Z @ 0x180041E10 (-Initialize@CVolumeControlBase@@UEAAJPEAUIMMDevice@@@Z.c)
 * Callees:
 *     WPP_SF_D @ 0x180039528 (WPP_SF_D.c)
 *     ?RecalcMasterFromChannelLevels@CVolumeControlBase@@IEAAXXZ @ 0x180041F08 (-RecalcMasterFromChannelLevels@CVolumeControlBase@@IEAAXXZ.c)
 *     ?SetDB@CVolumeUnit@@QEAAXM@Z @ 0x1800421C4 (-SetDB@CVolumeUnit@@QEAAXM@Z.c)
 *     ?SetTaperOverallRange@CVolumeUnit@@QEAAXMM@Z @ 0x1800421EC (-SetTaperOverallRange@CVolumeUnit@@QEAAXMM@Z.c)
 *     ?SetDBRange@CVolumeUnit@@QEAAXW4TAPERTYPE@@MMM@Z @ 0x180042284 (-SetDBRange@CVolumeUnit@@QEAAXW4TAPERTYPE@@MMM@Z.c)
 *     ??0CVolumeUnit@@QEAA@XZ @ 0x180042358 (--0CVolumeUnit@@QEAA@XZ.c)
 *     ?SetCount@?$CAtlArray@VCVolumeUnit@@V?$CElementTraits@VCVolumeUnit@@@ATL@@@ATL@@QEAA_N_KH@Z @ 0x180042468 (-SetCount@-$CAtlArray@VCVolumeUnit@@V-$CElementTraits@VCVolumeUnit@@@ATL@@@ATL@@QEAA_N_KH@Z.c)
 *     ?SetAtGrow@?$CAtlArray@VCVolumeUnit@@V?$CElementTraits@VCVolumeUnit@@@ATL@@@ATL@@QEAAX_KAEBVCVolumeUnit@@@Z @ 0x1800424D8 (-SetAtGrow@-$CAtlArray@VCVolumeUnit@@V-$CElementTraits@VCVolumeUnit@@@ATL@@@ATL@@QEAAX_KAEBVCVol.c)
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x1800479B0 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 *     WPP_SF_q @ 0x180048AAC (WPP_SF_q.c)
 *     WPP_SF_qD @ 0x180048AE8 (WPP_SF_qD.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x180067B60 (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 *     WPP_SF_qdg @ 0x18006F92C (WPP_SF_qdg.c)
 *     WPP_SF_qdggg @ 0x18006F9E8 (WPP_SF_qdggg.c)
 *     WPP_SF_qgg @ 0x18006FAD0 (WPP_SF_qgg.c)
 */

__int64 __fastcall CVolumeHardware::GetLevelData(CVolumeHardware *this)
{
  CVolumeHardware *v1; // rsi
  int v2; // ebx
  TraceLoggingHProvider v3; // rcx
  int v4; // eax
  __int64 *v5; // rdx
  __int64 v6; // r8
  float v7; // xmm7_4
  float v8; // xmm6_4
  unsigned int i; // r14d
  __int64 v10; // rdx
  __int64 v11; // r8
  float v12; // xmm8_4
  unsigned int j; // edi
  ATL::CAtlException *v15; // rbx
  __int64 v16; // [rsp+0h] [rbp-F8h] BYREF
  __int64 v17; // [rsp+20h] [rbp-D8h]
  unsigned int v18; // [rsp+40h] [rbp-B8h]
  unsigned __int64 v19; // [rsp+44h] [rbp-B4h]
  float v20; // [rsp+4Ch] [rbp-ACh] BYREF
  int v21; // [rsp+50h] [rbp-A8h]
  ATL::CAtlException *v22[2]; // [rsp+58h] [rbp-A0h] BYREF
  _BYTE v23[104]; // [rsp+68h] [rbp-90h] BYREF
  float v25; // [rsp+108h] [rbp+10h] BYREF
  float v26; // [rsp+110h] [rbp+18h] BYREF
  float v27; // [rsp+118h] [rbp+20h] BYREF

  v22[1] = (ATL::CAtlException *)-2LL;
  v1 = this;
  v2 = -2147467259;
  v3 = WPP_GLOBAL_Control;
  if ( WPP_GLOBAL_Control != (TraceLoggingHProvider)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x10000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_q(*((_QWORD *)WPP_GLOBAL_Control + 2), 46LL, &WPP_d155ec871d18c6e5af7e88d93bf1f92f_Traceguids, v1);
    v3 = WPP_GLOBAL_Control;
  }
  if ( !*((_QWORD *)v1 + 12) )
  {
    v2 = -2147418113;
LABEL_45:
    if ( v3 != (TraceLoggingHProvider)&WPP_GLOBAL_Control
      && (*((_DWORD *)v3 + 7) & 0x10000) != 0
      && *((_BYTE *)v3 + 25) >= 2u )
    {
      WPP_SF_D(*((_QWORD *)v3 + 2), 0x33u, (__int64)&WPP_d155ec871d18c6e5af7e88d93bf1f92f_Traceguids, v2);
    }
    return (unsigned int)v2;
  }
  v4 = *((_DWORD *)v1 + 31);
  *((_DWORD *)v1 + 17) = v4;
  if ( WPP_GLOBAL_Control != (TraceLoggingHProvider)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x10000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_qD(*((_QWORD *)WPP_GLOBAL_Control + 2), 47LL, &WPP_d155ec871d18c6e5af7e88d93bf1f92f_Traceguids, v1, v4);
  }
  ATL::CAtlArray<CVolumeUnit,ATL::CElementTraits<CVolumeUnit>>::SetCount((char *)v1 + 32, 0LL);
  if ( !*((_QWORD *)v1 + 12) )
  {
    v2 = -2147418113;
LABEL_44:
    v3 = WPP_GLOBAL_Control;
    goto LABEL_45;
  }
  v7 = FLOAT_1000_0;
  v8 = FLOAT_N1000_0;
  v19 = __PAIR64__(LODWORD(FLOAT_1000_0), LODWORD(FLOAT_N1000_0));
  for ( i = 0; ; ++i )
  {
    v18 = i;
    if ( i >= *((_DWORD *)v1 + 17) )
      break;
    CVolumeUnit::CVolumeUnit((CVolumeUnit *)v23);
    v2 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, float *, float *, float *))(**((_QWORD **)v1 + 12) + 32LL))(
           *((_QWORD *)v1 + 12),
           0LL,
           &v25,
           &v27,
           &v26);
    if ( v2 < 0 )
      goto LABEL_44;
    if ( WPP_GLOBAL_Control != (TraceLoggingHProvider)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x10000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      LODWORD(v17) = i;
      WPP_SF_qdggg(*((_QWORD *)WPP_GLOBAL_Control + 2), v10, v11, v1, v17, v25, v27, v26);
    }
    *(float *)&v17 = v26;
    v12 = v27;
    CVolumeUnit::SetDBRange(v23);
    if ( v7 > v25 )
    {
      v7 = v25;
      *((float *)&v19 + 1) = v25;
    }
    if ( v12 > v8 )
    {
      v8 = v12;
      *(float *)&v19 = v12;
    }
    v2 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, float *))(**((_QWORD **)v1 + 12) + 40LL))(
           *((_QWORD *)v1 + 12),
           i,
           &v20);
    if ( v2 < 0 )
      goto LABEL_44;
    if ( WPP_GLOBAL_Control != (TraceLoggingHProvider)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x10000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      WPP_SF_qdg(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        49LL,
        &WPP_d155ec871d18c6e5af7e88d93bf1f92f_Traceguids,
        v1,
        i,
        v20);
    }
    CVolumeUnit::SetDB((CVolumeUnit *)v23, v20);
    v2 = 0;
    try
    {
      ATL::CAtlArray<CVolumeUnit,ATL::CElementTraits<CVolumeUnit>>::SetAtGrow((char *)v1 + 32, i, v23);
    }
    catch ( ATL::CAtlException *v22 )
    {
      v5 = &v16;
      v15 = v22[0];
      if ( *(_DWORD *)v22[0] == -1073741571 )
        _resetstkoflw();
      v21 = *(_DWORD *)v15;
      v2 = v21;
      if ( v21 < 0 )
        goto LABEL_44;
      v1 = this;
      v7 = *((float *)&v19 + 1);
      v8 = *(float *)&v19;
      i = v18;
    }
  }
  if ( WPP_GLOBAL_Control != (TraceLoggingHProvider)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x10000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_qgg(*((_QWORD *)WPP_GLOBAL_Control + 2), v5, v6, v1, v7, v8);
  }
  for ( j = 0; j < *((_DWORD *)v1 + 17); ++j )
  {
    if ( (unsigned __int64)j >= *((_QWORD *)v1 + 5) )
      ATL::AtlThrowImpl(-2147024809);
    CVolumeUnit::SetTaperOverallRange((CVolumeUnit *)(*((_QWORD *)v1 + 4) + 56LL * j), v7, v8);
  }
  CVolumeControlBase::RecalcMasterFromChannelLevels(v1);
  if ( v2 < 0 )
    goto LABEL_44;
  return (unsigned int)v2;
}
