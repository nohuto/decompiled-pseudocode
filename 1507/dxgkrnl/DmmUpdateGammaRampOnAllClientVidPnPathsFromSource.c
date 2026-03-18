/*
 * XREFs of DmmUpdateGammaRampOnAllClientVidPnPathsFromSource @ 0x1C00B6F10
 * Callers:
 *     ?SetGammaRamp@ADAPTER_DISPLAY@@QEAAJIPEAVDXGDEVICE@@@Z @ 0x1C00B58D4 (-SetGammaRamp@ADAPTER_DISPLAY@@QEAAJIPEAVDXGDEVICE@@@Z.c)
 * Callees:
 *     ?reset@?$auto_rc@$$CBVDMMVIDPN@@@@QEAAXPEBVDMMVIDPN@@@Z @ 0x1C00012D4 (-reset@-$auto_rc@$$CBVDMMVIDPN@@@@QEAAXPEBVDMMVIDPN@@@Z.c)
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C000250C (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?FindPath@DMMVIDPNTOPOLOGY@@QEBAPEAVDMMVIDPNPRESENTPATH@@II@Z @ 0x1C0004338 (-FindPath@DMMVIDPNTOPOLOGY@@QEBAPEAVDMMVIDPNPRESENTPATH@@II@Z.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C00049CC (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ??0?$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z @ 0x1C0004E90 (--0-$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z.c)
 *     ?reset@?$auto_ptr@VDMMVIDPNPRESENTPATH@@@@QEAAXPEAVDMMVIDPNPRESENTPATH@@@Z @ 0x1C0008180 (-reset@-$auto_ptr@VDMMVIDPNPRESENTPATH@@@@QEAAXPEAVDMMVIDPNPRESENTPATH@@@Z.c)
 *     ??1?$auto_ptr@VDMMVIDPNPRESENTPATH@@@@QEAA@XZ @ 0x1C00081B0 (--1-$auto_ptr@VDMMVIDPNPRESENTPATH@@@@QEAA@XZ.c)
 *     ??0DMMVIDPNPRESENTPATH@@QEAA@AEBV0@@Z @ 0x1C000B100 (--0DMMVIDPNPRESENTPATH@@QEAA@AEBV0@@Z.c)
 *     __security_check_cookie @ 0x1C000FC20 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0010930 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0010C80 (memset.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C008834C (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ?EnumPathTargetsFromSource@DMMVIDPNTOPOLOGY@@QEBAJI_KPEAI@Z @ 0x1C00898AC (-EnumPathTargetsFromSource@DMMVIDPNTOPOLOGY@@QEBAJI_KPEAI@Z.c)
 *     ?SetGammaRamp@DMMVIDPNPRESENTPATH@@QEAAJAEBU_D3DKMDT_GAMMA_RAMP@@@Z @ 0x1C0094FB8 (-SetGammaRamp@DMMVIDPNPRESENTPATH@@QEAAJAEBU_D3DKMDT_GAMMA_RAMP@@@Z.c)
 *     ?DdiUpdateActiveVidPnPresentPath@ADAPTER_DISPLAY@@QEAAJPEBU_DXGKARG_UPDATEACTIVEVIDPNPRESENTPATH@@@Z @ 0x1C00B54FC (-DdiUpdateActiveVidPnPresentPath@ADAPTER_DISPLAY@@QEAAJPEBU_DXGKARG_UPDATEACTIVEVIDPNPRESENTPATH.c)
 *     ?Serialize@DMMVIDPNPRESENTPATH@@QEBAXQEAU_D3DKMDT_VIDPN_PRESENT_PATH@@@Z @ 0x1C00B726C (-Serialize@DMMVIDPNPRESENTPATH@@QEBAXQEAU_D3DKMDT_VIDPN_PRESENT_PATH@@@Z.c)
 *     ?GetContentRotationHw@DMMVIDPNPRESENTPATH@@QEBA?AW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@XZ @ 0x1C00B7350 (-GetContentRotationHw@DMMVIDPNPRESENTPATH@@QEBA-AW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@XZ.c)
 */

__int64 __fastcall DmmUpdateGammaRampOnAllClientVidPnPathsFromSource(
        DXGADAPTER *a1,
        unsigned int a2,
        struct _D3DKMDT_GAMMA_RAMP *a3)
{
  unsigned int v3; // edi
  __int64 v4; // r13
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 v10; // r15
  __int64 v11; // r15
  __int64 v12; // rax
  __int64 v13; // rdx
  __int64 v14; // rcx
  DMMVIDPNTOPOLOGY *v15; // rbx
  __int64 v16; // r12
  int v17; // eax
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v21; // r9
  __int64 v22; // rsi
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // r8
  __int64 v27; // r9
  DMMVIDPNPRESENTPATH *v28; // rsi
  DMMVIDPNPRESENTPATH *v29; // rax
  DMMVIDPNPRESENTPATH *v30; // rax
  __int64 v31; // rcx
  int *v32; // rbx
  __int64 v33; // rcx
  __int64 v34; // r8
  __int64 v35; // r9
  int v36; // eax
  __int64 v37; // rdx
  __int64 v38; // rcx
  __int64 v39; // r8
  __int64 v40; // r9
  __int64 v41; // rdx
  _DXGKARG_UPDATEACTIVEVIDPNPRESENTPATH *v42; // rcx
  _D3DKMDT_VIDPN_PRESENT_PATH *v43; // rax
  __int128 v44; // xmm1
  __int128 v45; // xmm0
  D3DKMDT_COLOR_COEFF_DYNAMIC_RANGES VidPnTargetColorCoeffDynamicRanges; // xmm1
  __int128 v47; // xmm0
  __int128 v48; // xmm1
  __int128 v49; // xmm0
  __int128 v50; // xmm1
  DMMVIDPNPRESENTPATH *v51; // rbx
  __int128 v52; // xmm1
  __int128 v53; // xmm0
  D3DKMDT_COLOR_COEFF_DYNAMIC_RANGES v54; // xmm1
  __int128 v55; // xmm0
  __int128 v56; // xmm1
  __int64 v57; // rax
  enum _D3DKMDT_VIDPN_PRESENT_PATH_ROTATION ContentRotationHw; // eax
  ADAPTER_DISPLAY *v59; // rcx
  __int64 v60; // r8
  int updated; // eax
  __int64 v62; // rcx
  __int64 v63; // r8
  __int64 v64; // r9
  int v65; // eax
  __int64 v66; // r8
  __int64 v67; // r9
  int v68; // eax
  __int64 v69; // rdx
  __int64 v70; // rcx
  __int64 v71; // r8
  __int64 v72; // r9
  __int64 v73; // rax
  __int64 v74; // rax
  __int64 v75; // rax
  __int64 v76; // rax
  __int64 v77; // rax
  __int64 v78; // rax
  _QWORD *v79; // rax
  __int64 v80; // rax
  _QWORD *v81; // rax
  unsigned int v82; // [rsp+20h] [rbp-E0h] BYREF
  DMMVIDPNPRESENTPATH *v83; // [rsp+28h] [rbp-D8h] BYREF
  __int64 v84; // [rsp+30h] [rbp-D0h] BYREF
  struct _D3DKMDT_GAMMA_RAMP *v85; // [rsp+38h] [rbp-C8h]
  __int64 v86; // [rsp+40h] [rbp-C0h] BYREF
  DMMVIDPNPRESENTPATH *Path; // [rsp+48h] [rbp-B8h]
  DMMVIDPNTOPOLOGY *v88; // [rsp+50h] [rbp-B0h]
  __int64 v89; // [rsp+58h] [rbp-A8h] BYREF
  DMMVIDPNPRESENTPATH *v90; // [rsp+60h] [rbp-A0h]
  _D3DKMDT_VIDPN_PRESENT_PATH v91; // [rsp+70h] [rbp-90h] BYREF
  _DXGKARG_UPDATEACTIVEVIDPNPRESENTPATH v92; // [rsp+1E0h] [rbp+E0h] BYREF

  v3 = 0;
  v85 = a3;
  v4 = a2;
  if ( !a1 )
  {
    v73 = WdLogNewEntry5_WdError(0LL);
    *(_QWORD *)(v73 + 24) = 0LL;
    goto LABEL_31;
  }
  if ( !DXGADAPTER::IsCoreResourceSharedOwner(a1) )
  {
    v74 = WdLogNewEntry5_WdAssertion(v7, v6, v8, v9);
    WdLogEvent5_WdAssertion(v74);
  }
  v10 = *((_QWORD *)a1 + 247);
  if ( !v10 )
  {
    v73 = WdLogNewEntry5_WdError(v7);
    *(_QWORD *)(v73 + 24) = a1;
LABEL_31:
    WdLogEvent5_WdError(v73);
    return 3223191554LL;
  }
  v11 = *(_QWORD *)(v10 + 88);
  if ( v11 )
  {
    EXCLUSIVEACCESS<VIDPN_MGR>::EXCLUSIVEACCESS<VIDPN_MGR>((__int64)&v89, v11);
    v12 = *(_QWORD *)(v11 + 80);
    v84 = 0LL;
    if ( v12 )
    {
      _InterlockedIncrement((volatile signed __int32 *)(v12 + 32));
      v13 = *(_QWORD *)(v11 + 80);
    }
    else
    {
      v13 = 0LL;
    }
    auto_rc<DMMVIDPN const>::reset(&v84, v13);
    if ( v84 )
    {
      v15 = (DMMVIDPNTOPOLOGY *)(v84 + 96);
      v16 = 0LL;
      v88 = (DMMVIDPNTOPOLOGY *)(v84 + 96);
      while ( 1 )
      {
        v82 = -1;
        v17 = DMMVIDPNTOPOLOGY::EnumPathTargetsFromSource(v15, (unsigned int)v4, v16, &v82);
        v22 = v17;
        if ( v17 < 0 )
          break;
        if ( v82 == -1 )
        {
          auto_rc<DMMVIDPN const>::reset(&v84, 0LL);
          goto LABEL_13;
        }
        Path = DMMVIDPNTOPOLOGY::FindPath(v15, v4, v82);
        if ( !Path )
        {
          v77 = WdLogNewEntry5_WdAssertion(v25, v24, v26, v27);
          WdLogEvent5_WdAssertion(v77);
        }
        _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(v11 + 72) + 32LL));
        v86 = *(_QWORD *)(v11 + 72);
        v90 = DMMVIDPNTOPOLOGY::FindPath((DMMVIDPNTOPOLOGY *)(v86 + 96), v4, v82);
        v28 = v90;
        if ( v90 )
        {
          v83 = 0LL;
          v29 = (DMMVIDPNPRESENTPATH *)operator new[](0xD0uLL, 0x4E506456u, PagedPool);
          if ( v29 )
            v30 = DMMVIDPNPRESENTPATH::DMMVIDPNPRESENTPATH(v29, v28);
          else
            v30 = 0LL;
          auto_ptr<DMMVIDPNPRESENTPATH>::reset(
            (__int64 (__fastcall ****)(_QWORD, __int64))&v83,
            (__int64 (__fastcall ***)(_QWORD, __int64))v30);
          v32 = (int *)v83;
          if ( !v83 )
          {
            v80 = WdLogNewEntry5_WdLowResource(v31);
            WdLogEvent5_WdLowResource(v80);
            LODWORD(v22) = -1073741801;
            goto LABEL_40;
          }
          if ( !(**((unsigned __int8 (__fastcall ***)(char *))v83 + 7))((char *)v83 + 56) )
          {
            v79 = (_QWORD *)WdLogNewEntry5_WdDmmEvent(v33);
            v79[3] = v4;
            v79[4] = v82;
            v79[5] = v32[16];
            WdLogEvent5_WdDmmEvent(v79);
            LODWORD(v22) = v32[16];
            goto LABEL_40;
          }
          v36 = DMMVIDPNPRESENTPATH::SetGammaRamp((DMMVIDPNPRESENTPATH *)v32, v85, v34, v35);
          v22 = v36;
          if ( v36 < 0 )
            goto LABEL_36;
          memset(&v92, 0, sizeof(v92));
          DMMVIDPNPRESENTPATH::Serialize((DMMVIDPNPRESENTPATH *)v32, &v91);
          v41 = 2LL;
          v42 = &v92;
          v43 = &v91;
          do
          {
            v44 = *(_OWORD *)&v43->ContentTransformation.ScalingSupport;
            *(_OWORD *)&v42->VidPnPresentPathInfo.VidPnSourceId = *(_OWORD *)&v43->VidPnSourceId;
            v45 = *(_OWORD *)&v43->VisibleFromActiveTLOffset.cy;
            *(_OWORD *)&v42->VidPnPresentPathInfo.ContentTransformation.ScalingSupport = v44;
            VidPnTargetColorCoeffDynamicRanges = v43->VidPnTargetColorCoeffDynamicRanges;
            *(_OWORD *)&v42->VidPnPresentPathInfo.VisibleFromActiveTLOffset.cy = v45;
            v47 = *(_OWORD *)&v43->Content;
            v42->VidPnPresentPathInfo.VidPnTargetColorCoeffDynamicRanges = VidPnTargetColorCoeffDynamicRanges;
            v48 = *(_OWORD *)&v43->CopyProtection.OEMCopyProtection[4];
            *(_OWORD *)&v42->VidPnPresentPathInfo.Content = v47;
            v49 = *(_OWORD *)&v43->CopyProtection.OEMCopyProtection[20];
            *(_OWORD *)&v42->VidPnPresentPathInfo.CopyProtection.OEMCopyProtection[4] = v48;
            v50 = *(_OWORD *)&v43->CopyProtection.OEMCopyProtection[36];
            v43 = (_D3DKMDT_VIDPN_PRESENT_PATH *)((char *)v43 + 128);
            *(_OWORD *)&v42->VidPnPresentPathInfo.CopyProtection.OEMCopyProtection[20] = v49;
            v42 = (_DXGKARG_UPDATEACTIVEVIDPNPRESENTPATH *)((char *)v42 + 128);
            *(_OWORD *)&v42[-1].VidPnPresentPathInfo.GammaRamp.DataSize = v50;
            --v41;
          }
          while ( v41 );
          v51 = v90;
          v52 = *(_OWORD *)&v43->ContentTransformation.ScalingSupport;
          *(_OWORD *)&v42->VidPnPresentPathInfo.VidPnSourceId = *(_OWORD *)&v43->VidPnSourceId;
          v53 = *(_OWORD *)&v43->VisibleFromActiveTLOffset.cy;
          *(_OWORD *)&v42->VidPnPresentPathInfo.ContentTransformation.ScalingSupport = v52;
          v54 = v43->VidPnTargetColorCoeffDynamicRanges;
          *(_OWORD *)&v42->VidPnPresentPathInfo.VisibleFromActiveTLOffset.cy = v53;
          v55 = *(_OWORD *)&v43->Content;
          v42->VidPnPresentPathInfo.VidPnTargetColorCoeffDynamicRanges = v54;
          v56 = *(_OWORD *)&v43->CopyProtection.OEMCopyProtection[4];
          v57 = *(_QWORD *)&v43->CopyProtection.OEMCopyProtection[20];
          *(_OWORD *)&v42->VidPnPresentPathInfo.Content = v55;
          *(_OWORD *)&v42->VidPnPresentPathInfo.CopyProtection.OEMCopyProtection[4] = v56;
          *(_QWORD *)&v42->VidPnPresentPathInfo.CopyProtection.OEMCopyProtection[20] = v57;
          ContentRotationHw = DMMVIDPNPRESENTPATH::GetContentRotationHw(v51);
          v59 = (ADAPTER_DISPLAY *)*((_QWORD *)a1 + 247);
          v92.VidPnPresentPathInfo.ContentTransformation.Rotation = ContentRotationHw;
          updated = ADAPTER_DISPLAY::DdiUpdateActiveVidPnPresentPath(v59, &v92, v60);
          v22 = updated;
          if ( updated < 0 )
          {
            v78 = WdLogNewEntry5_WdError(v62);
            *(_QWORD *)(v78 + 24) = Path;
            *(_QWORD *)(v78 + 32) = v22;
            WdLogEvent5_WdError(v78);
            goto LABEL_40;
          }
          v65 = DMMVIDPNPRESENTPATH::SetGammaRamp(v51, v85, v63, v64);
          v22 = v65;
          if ( v65 < 0 )
          {
LABEL_36:
            *(_QWORD *)(WdLogNewEntry5_WdTrace(v38, v37, v39, v40) + 24) = v22;
LABEL_40:
            auto_ptr<DMMVIDPNPRESENTPATH>::~auto_ptr<DMMVIDPNPRESENTPATH>((__int64 (__fastcall ****)(_QWORD, __int64))&v83);
            auto_rc<DMMVIDPN const>::reset(&v86, 0LL);
            goto LABEL_43;
          }
          auto_ptr<DMMVIDPNPRESENTPATH>::~auto_ptr<DMMVIDPNPRESENTPATH>((__int64 (__fastcall ****)(_QWORD, __int64))&v83);
          v15 = v88;
        }
        auto_rc<DMMVIDPN const>::reset(&v86, 0LL);
        v68 = DMMVIDPNPRESENTPATH::SetGammaRamp(Path, v85, v66, v67);
        LODWORD(v22) = v68;
        if ( v68 < 0 )
        {
          *(_QWORD *)(WdLogNewEntry5_WdTrace(v70, v69, v71, v72) + 24) = v68;
          goto LABEL_43;
        }
        ++v16;
      }
      v81 = (_QWORD *)WdLogNewEntry5_WdTrace(v19, v18, v20, v21);
      v81[3] = v16;
      v81[4] = v4;
      v81[5] = v15;
      v81[6] = v22;
    }
    else
    {
      v76 = WdLogNewEntry5_WdError(v14);
      *(_QWORD *)(v76 + 24) = a1;
      WdLogEvent5_WdError(v76);
      LODWORD(v22) = -1071774884;
    }
LABEL_43:
    auto_rc<DMMVIDPN const>::reset(&v84, 0LL);
    v3 = v22;
LABEL_13:
    DXGFASTMUTEX::Release(*(struct _KTHREAD ***)(v89 + 40));
    return v3;
  }
  else
  {
    v75 = WdLogNewEntry5_WdError(v7);
    *(_QWORD *)(v75 + 24) = a1;
    WdLogEvent5_WdError(v75);
    return 3223192373LL;
  }
}
