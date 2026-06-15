/*
 * XREFs of ?LoadVolumeState@CVolumeSoftware@@AEAAJXZ @ 0x18006DAA4
 * Callers:
 *     ?GetLevelData@CVolumeSoftware@@MEAAJXZ @ 0x18006D220 (-GetLevelData@CVolumeSoftware@@MEAAJXZ.c)
 * Callees:
 *     WPP_SF_D @ 0x180039528 (WPP_SF_D.c)
 *     ?RecalcMasterFromChannelLevels@CVolumeControlBase@@IEAAXXZ @ 0x180041F08 (-RecalcMasterFromChannelLevels@CVolumeControlBase@@IEAAXXZ.c)
 *     ?SetDB@CVolumeUnit@@QEAAXM@Z @ 0x1800421C4 (-SetDB@CVolumeUnit@@QEAAXM@Z.c)
 *     ?SetDBRange@CVolumeUnit@@QEAAXW4TAPERTYPE@@MMM@Z @ 0x180042284 (-SetDBRange@CVolumeUnit@@QEAAXW4TAPERTYPE@@MMM@Z.c)
 *     ??0CVolumeUnit@@QEAA@XZ @ 0x180042358 (--0CVolumeUnit@@QEAA@XZ.c)
 *     ?SetAtGrow@?$CAtlArray@VCVolumeUnit@@V?$CElementTraits@VCVolumeUnit@@@ATL@@@ATL@@QEAAX_KAEBVCVolumeUnit@@@Z @ 0x1800424D8 (-SetAtGrow@-$CAtlArray@VCVolumeUnit@@V-$CElementTraits@VCVolumeUnit@@@ATL@@@ATL@@QEAAX_KAEBVCVol.c)
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x1800479B0 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 *     WPP_SF_q @ 0x180048AAC (WPP_SF_q.c)
 *     WPP_SF_qS @ 0x18006BDEC (WPP_SF_qS.c)
 *     WPP_SF_qdg @ 0x18006F92C (WPP_SF_qdg.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CVolumeSoftware::LoadVolumeState(CVolumeSoftware *this)
{
  CVolumeSoftware *v1; // rsi
  int v2; // r15d
  _BYTE *v3; // rdx
  __int64 v4; // rdi
  __int64 i; // rbx
  __int64 v6; // rdx
  float v7; // xmm3_4
  size_t v8; // rdx
  unsigned int j; // ebx
  __int64 v10; // rdx
  float v11; // xmm3_4
  int *v13; // rbx
  int *v14; // rbx
  _BYTE v15[32]; // [rsp+0h] [rbp-E8h] BYREF
  __int64 v16; // [rsp+30h] [rbp-B8h] BYREF
  __int64 v17; // [rsp+38h] [rbp-B0h] BYREF
  PROPVARIANT pvar; // [rsp+40h] [rbp-A8h] BYREF
  __int64 v19; // [rsp+48h] [rbp-A0h]
  __int64 v20; // [rsp+50h] [rbp-98h]
  __int64 v21; // [rsp+58h] [rbp-90h]
  _BYTE v22[56]; // [rsp+60h] [rbp-88h] BYREF
  __int64 v23; // [rsp+98h] [rbp-50h]
  ATL::CAtlException *v24; // [rsp+A0h] [rbp-48h] BYREF
  ATL::CAtlException *v25; // [rsp+A8h] [rbp-40h] BYREF
  int v27; // [rsp+100h] [rbp+18h]
  int v28; // [rsp+108h] [rbp+20h]
  unsigned int v29; // [rsp+108h] [rbp+20h]

  v23 = -2LL;
  v1 = this;
  v16 = 0LL;
  v17 = 0LL;
  if ( WPP_GLOBAL_Control != (TraceLoggingHProvider)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x10000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_qS(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      0x47u,
      (__int64)&WPP_d155ec871d18c6e5af7e88d93bf1f92f_Traceguids,
      this,
      *((_QWORD *)this + 2));
  }
  pvar = 0LL;
  v19 = 0LL;
  v20 = 0LL;
  v2 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64 *))(**(_QWORD **)&g_DeviceEnumerator + 40LL))(
         *(_QWORD *)&g_DeviceEnumerator,
         *((_QWORD *)v1 + 2),
         &v16);
  if ( v2 >= 0 )
  {
    v2 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64 *))(*(_QWORD *)v16 + 32LL))(v16, 0LL, &v17);
    v27 = v2;
    if ( v2 >= 0 )
    {
      if ( WPP_GLOBAL_Control != (TraceLoggingHProvider)&WPP_GLOBAL_Control
        && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x10000) != 0
        && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
      {
        WPP_SF_q(
          *((_QWORD *)WPP_GLOBAL_Control + 2),
          0x48u,
          (__int64)&WPP_d155ec871d18c6e5af7e88d93bf1f92f_Traceguids,
          (__int64)v1);
      }
      if ( (*(int (__fastcall **)(__int64, void *, PROPVARIANT *))(*(_QWORD *)v17 + 40LL))(
             v17,
             &PKEY_APO_MasterVolumeLevel,
             &pvar) >= 0 )
      {
        if ( (_WORD)pvar == 65 && (unsigned int)v19 == 4LL * *((unsigned int *)v1 + 17) )
        {
          v4 = v20;
          v21 = v20;
          for ( i = 0LL; ; i = (unsigned int)(i + 1) )
          {
            v28 = i;
            if ( (unsigned int)i >= *((_DWORD *)v1 + 17) )
              break;
            if ( WPP_GLOBAL_Control != (TraceLoggingHProvider)&WPP_GLOBAL_Control
              && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x10000) != 0
              && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
            {
              WPP_SF_qdg(
                *((_QWORD *)WPP_GLOBAL_Control + 2),
                74LL,
                &WPP_d155ec871d18c6e5af7e88d93bf1f92f_Traceguids,
                v1,
                i,
                *(float *)(v4 + 4 * i));
            }
            CVolumeUnit::CVolumeUnit((CVolumeUnit *)v22, (__int64)v3);
            if ( *((_DWORD *)v1 + 34) == 4 )
              v7 = FLOAT_30_0;
            else
              v7 = 0.0;
            CVolumeUnit::SetDBRange((__int64)v22, v6, -96.0, v7, SLODWORD(FLOAT_1_5));
            CVolumeUnit::SetDB((CVolumeUnit *)v22, *(float *)(v4 + 4 * i));
            try
            {
              ATL::CAtlArray<CVolumeUnit,ATL::CElementTraits<CVolumeUnit>>::SetAtGrow(
                (__int64)v1 + 32,
                v8,
                (__int64)v22);
            }
            catch ( ATL::CAtlException *v24 )
            {
              v3 = v15;
              v14 = (int *)v24;
              if ( *(_DWORD *)v24 == -1073741571 )
                _resetstkoflw();
              if ( *v14 < 0 )
                goto LABEL_41;
              v1 = this;
              v2 = v27;
              v4 = v21;
              LODWORD(i) = v28;
            }
          }
          CVolumeControlBase::RecalcMasterFromChannelLevels(v1);
        }
        else
        {
          if ( WPP_GLOBAL_Control != (TraceLoggingHProvider)&WPP_GLOBAL_Control
            && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x10000) != 0
            && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
          {
            WPP_SF_q(
              *((_QWORD *)WPP_GLOBAL_Control + 2),
              0x49u,
              (__int64)&WPP_d155ec871d18c6e5af7e88d93bf1f92f_Traceguids,
              (__int64)v1);
          }
          for ( j = 0; ; ++j )
          {
            v29 = j;
            if ( j >= *((_DWORD *)v1 + 17) )
              break;
            CVolumeUnit::CVolumeUnit((CVolumeUnit *)v22, (__int64)v3);
            if ( *((_DWORD *)v1 + 34) == 4 )
              v11 = FLOAT_30_0;
            else
              v11 = 0.0;
            CVolumeUnit::SetDBRange((__int64)v22, v10, -96.0, v11, SLODWORD(FLOAT_1_5));
            CVolumeUnit::SetDB((CVolumeUnit *)v22, 0.0);
            try
            {
              ATL::CAtlArray<CVolumeUnit,ATL::CElementTraits<CVolumeUnit>>::SetAtGrow((__int64)v1 + 32, j, (__int64)v22);
            }
            catch ( ATL::CAtlException *v25 )
            {
              v3 = v15;
              v13 = (int *)v25;
              if ( *(_DWORD *)v25 == -1073741571 )
                _resetstkoflw();
              if ( *v13 < 0 )
              {
LABEL_41:
                v2 = v27;
                break;
              }
              v1 = this;
              v2 = v27;
              j = v29;
            }
          }
        }
      }
    }
  }
  PropVariantClear(&pvar);
  if ( v2 < 0
    && WPP_GLOBAL_Control != (TraceLoggingHProvider)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x10000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
  {
    WPP_SF_D(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x4Bu, (__int64)&WPP_d155ec871d18c6e5af7e88d93bf1f92f_Traceguids, v2);
  }
  if ( v17 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v17 + 16LL))(v17);
  if ( v16 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v16 + 16LL))(v16);
  return (unsigned int)v2;
}
