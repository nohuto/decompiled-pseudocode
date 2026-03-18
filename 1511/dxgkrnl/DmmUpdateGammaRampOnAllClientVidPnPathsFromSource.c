/*
 * XREFs of DmmUpdateGammaRampOnAllClientVidPnPathsFromSource @ 0x1C00BE454
 * Callers:
 *     ?SetGammaRamp@ADAPTER_DISPLAY@@QEAAJIPEAVDXGDEVICE@@@Z @ 0x1C009A06C (-SetGammaRamp@ADAPTER_DISPLAY@@QEAAJIPEAVDXGDEVICE@@@Z.c)
 * Callees:
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00031F4 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ??0?$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z @ 0x1C0004934 (--0-$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z.c)
 *     ?FindPath@DMMVIDPNTOPOLOGY@@QEBAPEAVDMMVIDPNPRESENTPATH@@II@Z @ 0x1C0004E38 (-FindPath@DMMVIDPNTOPOLOGY@@QEBAPEAVDMMVIDPNPRESENTPATH@@II@Z.c)
 *     ?reset@?$auto_rc@$$CBVDMMVIDPN@@@@QEAAXPEBVDMMVIDPN@@@Z @ 0x1C0004F74 (-reset@-$auto_rc@$$CBVDMMVIDPN@@@@QEAAXPEBVDMMVIDPN@@@Z.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0006CC0 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ??0DMMVIDPNPRESENTPATH@@QEAA@AEBV0@@Z @ 0x1C0009498 (--0DMMVIDPNPRESENTPATH@@QEAA@AEBV0@@Z.c)
 *     ?reset@?$auto_ptr@VDMMVIDPNPRESENTPATH@@@@QEAAXPEAVDMMVIDPNPRESENTPATH@@@Z @ 0x1C000C54C (-reset@-$auto_ptr@VDMMVIDPNPRESENTPATH@@@@QEAAXPEAVDMMVIDPNPRESENTPATH@@@Z.c)
 *     ??1?$auto_ptr@VDMMVIDPNPRESENTPATH@@@@QEAA@XZ @ 0x1C000C57C (--1-$auto_ptr@VDMMVIDPNPRESENTPATH@@@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1C0011390 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00120A0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0012400 (memset.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0065FA0 (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ?EnumPathTargetsFromSource@DMMVIDPNTOPOLOGY@@QEBAJI_KPEAI@Z @ 0x1C009060C (-EnumPathTargetsFromSource@DMMVIDPNTOPOLOGY@@QEBAJI_KPEAI@Z.c)
 *     ?DdiUpdateActiveVidPnPresentPath@ADAPTER_DISPLAY@@QEAAJPEBU_DXGKARG_UPDATEACTIVEVIDPNPRESENTPATH@@@Z @ 0x1C00998F4 (-DdiUpdateActiveVidPnPresentPath@ADAPTER_DISPLAY@@QEAAJPEBU_DXGKARG_UPDATEACTIVEVIDPNPRESENTPATH.c)
 *     ?SetGammaRamp@DMMVIDPNPRESENTPATH@@QEAAJAEBU_D3DKMDT_GAMMA_RAMP@@@Z @ 0x1C00A10A4 (-SetGammaRamp@DMMVIDPNPRESENTPATH@@QEAAJAEBU_D3DKMDT_GAMMA_RAMP@@@Z.c)
 *     ?Serialize@DMMVIDPNPRESENTPATH@@QEBAXQEAU_D3DKMDT_VIDPN_PRESENT_PATH@@@Z @ 0x1C00A1410 (-Serialize@DMMVIDPNPRESENTPATH@@QEBAXQEAU_D3DKMDT_VIDPN_PRESENT_PATH@@@Z.c)
 *     ?GetContentRotationHw@DMMVIDPNPRESENTPATH@@QEBA?AW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@XZ @ 0x1C00A14F4 (-GetContentRotationHw@DMMVIDPNPRESENTPATH@@QEBA-AW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@XZ.c)
 */

__int64 __fastcall DmmUpdateGammaRampOnAllClientVidPnPathsFromSource(
        DXGADAPTER *a1,
        unsigned int a2,
        struct _D3DKMDT_GAMMA_RAMP *a3)
{
  unsigned int v3; // edi
  __int64 v4; // r13
  __int64 v6; // rcx
  __int64 v7; // r15
  __int64 v8; // r15
  __int64 v9; // rax
  __int64 v10; // rdx
  __int64 v11; // rcx
  DMMVIDPNTOPOLOGY *v12; // rbx
  __int64 v13; // r12
  int v14; // eax
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // r9
  __int64 v19; // rsi
  __int64 v21; // rcx
  DMMVIDPNPRESENTPATH *v22; // rsi
  DMMVIDPNPRESENTPATH *v23; // rax
  DMMVIDPNPRESENTPATH *v24; // rax
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // r8
  __int64 v28; // r9
  int *v29; // rbx
  __int64 v30; // rcx
  int v31; // eax
  __int64 v32; // rdx
  __int64 v33; // rcx
  __int64 v34; // r8
  __int64 v35; // r9
  __int64 v36; // rdx
  _DXGKARG_UPDATEACTIVEVIDPNPRESENTPATH *v37; // rcx
  _D3DKMDT_VIDPN_PRESENT_PATH *v38; // rax
  __int128 v39; // xmm1
  __int128 v40; // xmm0
  D3DKMDT_COLOR_COEFF_DYNAMIC_RANGES VidPnTargetColorCoeffDynamicRanges; // xmm1
  __int128 v42; // xmm0
  __int128 v43; // xmm1
  __int128 v44; // xmm0
  __int128 v45; // xmm1
  DMMVIDPNPRESENTPATH *v46; // rbx
  __int128 v47; // xmm1
  __int128 v48; // xmm0
  D3DKMDT_COLOR_COEFF_DYNAMIC_RANGES v49; // xmm1
  __int128 v50; // xmm0
  __int128 v51; // xmm1
  __int64 v52; // rax
  D3DKMDT_VIDPN_PRESENT_PATH_ROTATION ContentRotationHw; // eax
  ADAPTER_DISPLAY *v54; // rcx
  __int64 v55; // r8
  int updated; // eax
  __int64 v57; // rcx
  int v58; // eax
  int v59; // eax
  __int64 v60; // rdx
  __int64 v61; // rcx
  __int64 v62; // r8
  __int64 v63; // r9
  __int64 v64; // rax
  __int64 v65; // rax
  __int64 v66; // rax
  __int64 v67; // rax
  __int64 v68; // rax
  __int64 v69; // rax
  _QWORD *v70; // rax
  __int64 v71; // rax
  _QWORD *v72; // rax
  unsigned int v73; // [rsp+20h] [rbp-E0h] BYREF
  DMMVIDPNPRESENTPATH *v74; // [rsp+28h] [rbp-D8h] BYREF
  __int64 v75; // [rsp+30h] [rbp-D0h] BYREF
  struct _D3DKMDT_GAMMA_RAMP *v76; // [rsp+38h] [rbp-C8h]
  __int64 v77; // [rsp+40h] [rbp-C0h] BYREF
  DMMVIDPNPRESENTPATH *Path; // [rsp+48h] [rbp-B8h]
  DMMVIDPNTOPOLOGY *v79; // [rsp+50h] [rbp-B0h]
  __int64 v80; // [rsp+58h] [rbp-A8h] BYREF
  DMMVIDPNPRESENTPATH *v81; // [rsp+60h] [rbp-A0h]
  _D3DKMDT_VIDPN_PRESENT_PATH v82; // [rsp+70h] [rbp-90h] BYREF
  _DXGKARG_UPDATEACTIVEVIDPNPRESENTPATH v83; // [rsp+1E0h] [rbp+E0h] BYREF

  v3 = 0;
  v76 = a3;
  v4 = a2;
  if ( !a1 )
  {
    v64 = WdLogNewEntry5_WdError(0LL);
    *(_QWORD *)(v64 + 24) = 0LL;
    goto LABEL_30;
  }
  if ( !DXGADAPTER::IsCoreResourceSharedOwner(a1) )
  {
    v65 = WdLogNewEntry5_WdAssertion(v6);
    WdLogEvent5_WdAssertion(v65);
  }
  v7 = *((_QWORD *)a1 + 248);
  if ( !v7 )
  {
    v64 = WdLogNewEntry5_WdError(v6);
    *(_QWORD *)(v64 + 24) = a1;
LABEL_30:
    WdLogEvent5_WdError(v64);
    return 3223191554LL;
  }
  v8 = *(_QWORD *)(v7 + 112);
  if ( v8 )
  {
    EXCLUSIVEACCESS<VIDPN_MGR>::EXCLUSIVEACCESS<VIDPN_MGR>((__int64)&v80, v8);
    v9 = *(_QWORD *)(v8 + 80);
    v75 = 0LL;
    if ( v9 )
    {
      _InterlockedIncrement((volatile signed __int32 *)(v9 + 32));
      v10 = *(_QWORD *)(v8 + 80);
    }
    else
    {
      v10 = 0LL;
    }
    auto_rc<DMMVIDPN const>::reset(&v75, v10);
    if ( v75 )
    {
      v12 = (DMMVIDPNTOPOLOGY *)(v75 + 96);
      v13 = 0LL;
      v79 = (DMMVIDPNTOPOLOGY *)(v75 + 96);
      while ( 1 )
      {
        v73 = -1;
        v14 = DMMVIDPNTOPOLOGY::EnumPathTargetsFromSource(v12, v4, v13, &v73);
        v19 = v14;
        if ( v14 < 0 )
          break;
        if ( v73 == -1 )
        {
          auto_rc<DMMVIDPN const>::reset(&v75, 0LL);
          goto LABEL_13;
        }
        Path = DMMVIDPNTOPOLOGY::FindPath(v12, v4, v73);
        if ( !Path )
        {
          v68 = WdLogNewEntry5_WdAssertion(v21);
          WdLogEvent5_WdAssertion(v68);
        }
        _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(v8 + 72) + 32LL));
        v77 = *(_QWORD *)(v8 + 72);
        v81 = DMMVIDPNTOPOLOGY::FindPath((DMMVIDPNTOPOLOGY *)(v77 + 96), v4, v73);
        v22 = v81;
        if ( v81 )
        {
          v74 = 0LL;
          v23 = (DMMVIDPNPRESENTPATH *)operator new[](0xD0uLL, 0x4E506456u, PagedPool);
          if ( v23 )
            v24 = DMMVIDPNPRESENTPATH::DMMVIDPNPRESENTPATH(v23, v22);
          else
            v24 = 0LL;
          auto_ptr<DMMVIDPNPRESENTPATH>::reset(
            (__int64 (__fastcall ****)(_QWORD, __int64))&v74,
            (__int64 (__fastcall ***)(_QWORD, __int64))v24);
          v29 = (int *)v74;
          if ( !v74 )
          {
            v71 = WdLogNewEntry5_WdLowResource(v26, v25, v27, v28);
            WdLogEvent5_WdLowResource(v71);
            LODWORD(v19) = -1073741801;
            goto LABEL_40;
          }
          if ( !(**((unsigned __int8 (__fastcall ***)(char *))v74 + 7))((char *)v74 + 56) )
          {
            v70 = (_QWORD *)WdLogNewEntry5_WdDmmEvent(v30);
            v70[3] = v4;
            v70[4] = v73;
            v70[5] = v29[16];
            WdLogEvent5_WdDmmEvent(v70);
            LODWORD(v19) = v29[16];
            goto LABEL_40;
          }
          v31 = DMMVIDPNPRESENTPATH::SetGammaRamp((DMMVIDPNPRESENTPATH *)v29, v76);
          v19 = v31;
          if ( v31 < 0 )
            goto LABEL_36;
          memset(&v83, 0, sizeof(v83));
          DMMVIDPNPRESENTPATH::Serialize((DMMVIDPNPRESENTPATH *)v29, &v82);
          v36 = 2LL;
          v37 = &v83;
          v38 = &v82;
          do
          {
            v39 = *(_OWORD *)&v38->ContentTransformation.ScalingSupport;
            *(_OWORD *)&v37->VidPnPresentPathInfo.VidPnSourceId = *(_OWORD *)&v38->VidPnSourceId;
            v40 = *(_OWORD *)&v38->VisibleFromActiveTLOffset.cy;
            *(_OWORD *)&v37->VidPnPresentPathInfo.ContentTransformation.ScalingSupport = v39;
            VidPnTargetColorCoeffDynamicRanges = v38->VidPnTargetColorCoeffDynamicRanges;
            *(_OWORD *)&v37->VidPnPresentPathInfo.VisibleFromActiveTLOffset.cy = v40;
            v42 = *(_OWORD *)&v38->Content;
            v37->VidPnPresentPathInfo.VidPnTargetColorCoeffDynamicRanges = VidPnTargetColorCoeffDynamicRanges;
            v43 = *(_OWORD *)&v38->CopyProtection.OEMCopyProtection[4];
            *(_OWORD *)&v37->VidPnPresentPathInfo.Content = v42;
            v44 = *(_OWORD *)&v38->CopyProtection.OEMCopyProtection[20];
            *(_OWORD *)&v37->VidPnPresentPathInfo.CopyProtection.OEMCopyProtection[4] = v43;
            v45 = *(_OWORD *)&v38->CopyProtection.OEMCopyProtection[36];
            v38 = (_D3DKMDT_VIDPN_PRESENT_PATH *)((char *)v38 + 128);
            *(_OWORD *)&v37->VidPnPresentPathInfo.CopyProtection.OEMCopyProtection[20] = v44;
            v37 = (_DXGKARG_UPDATEACTIVEVIDPNPRESENTPATH *)((char *)v37 + 128);
            *(_OWORD *)&v37[-1].VidPnPresentPathInfo.GammaRamp.DataSize = v45;
            --v36;
          }
          while ( v36 );
          v46 = v81;
          v47 = *(_OWORD *)&v38->ContentTransformation.ScalingSupport;
          *(_OWORD *)&v37->VidPnPresentPathInfo.VidPnSourceId = *(_OWORD *)&v38->VidPnSourceId;
          v48 = *(_OWORD *)&v38->VisibleFromActiveTLOffset.cy;
          *(_OWORD *)&v37->VidPnPresentPathInfo.ContentTransformation.ScalingSupport = v47;
          v49 = v38->VidPnTargetColorCoeffDynamicRanges;
          *(_OWORD *)&v37->VidPnPresentPathInfo.VisibleFromActiveTLOffset.cy = v48;
          v50 = *(_OWORD *)&v38->Content;
          v37->VidPnPresentPathInfo.VidPnTargetColorCoeffDynamicRanges = v49;
          v51 = *(_OWORD *)&v38->CopyProtection.OEMCopyProtection[4];
          v52 = *(_QWORD *)&v38->CopyProtection.OEMCopyProtection[20];
          *(_OWORD *)&v37->VidPnPresentPathInfo.Content = v50;
          *(_OWORD *)&v37->VidPnPresentPathInfo.CopyProtection.OEMCopyProtection[4] = v51;
          *(_QWORD *)&v37->VidPnPresentPathInfo.CopyProtection.OEMCopyProtection[20] = v52;
          ContentRotationHw = (unsigned int)DMMVIDPNPRESENTPATH::GetContentRotationHw(v46);
          v54 = (ADAPTER_DISPLAY *)*((_QWORD *)a1 + 248);
          v83.VidPnPresentPathInfo.ContentTransformation.Rotation = ContentRotationHw;
          updated = ADAPTER_DISPLAY::DdiUpdateActiveVidPnPresentPath(v54, &v83, v55);
          v19 = updated;
          if ( updated < 0 )
          {
            v69 = WdLogNewEntry5_WdError(v57);
            *(_QWORD *)(v69 + 24) = Path;
            *(_QWORD *)(v69 + 32) = v19;
            WdLogEvent5_WdError(v69);
            goto LABEL_40;
          }
          v58 = DMMVIDPNPRESENTPATH::SetGammaRamp(v46, v76);
          v19 = v58;
          if ( v58 < 0 )
          {
LABEL_36:
            *(_QWORD *)(WdLogNewEntry5_WdTrace(v33, v32, v34, v35) + 24) = v19;
LABEL_40:
            auto_ptr<DMMVIDPNPRESENTPATH>::~auto_ptr<DMMVIDPNPRESENTPATH>((__int64 (__fastcall ****)(_QWORD, __int64))&v74);
            auto_rc<DMMVIDPN const>::reset(&v77, 0LL);
            goto LABEL_43;
          }
          auto_ptr<DMMVIDPNPRESENTPATH>::~auto_ptr<DMMVIDPNPRESENTPATH>((__int64 (__fastcall ****)(_QWORD, __int64))&v74);
          v12 = v79;
        }
        auto_rc<DMMVIDPN const>::reset(&v77, 0LL);
        v59 = DMMVIDPNPRESENTPATH::SetGammaRamp(Path, v76);
        LODWORD(v19) = v59;
        if ( v59 < 0 )
        {
          *(_QWORD *)(WdLogNewEntry5_WdTrace(v61, v60, v62, v63) + 24) = v59;
          goto LABEL_43;
        }
        ++v13;
      }
      v72 = (_QWORD *)WdLogNewEntry5_WdTrace(v16, v15, v17, v18);
      v72[3] = v13;
      v72[4] = v4;
      v72[5] = v12;
      v72[6] = v19;
    }
    else
    {
      v67 = WdLogNewEntry5_WdError(v11);
      *(_QWORD *)(v67 + 24) = a1;
      WdLogEvent5_WdError(v67);
      LODWORD(v19) = -1071774884;
    }
LABEL_43:
    auto_rc<DMMVIDPN const>::reset(&v75, 0LL);
    v3 = v19;
LABEL_13:
    DXGFASTMUTEX::Release(*(DXGFASTMUTEX **)(v80 + 40));
    return v3;
  }
  else
  {
    v66 = WdLogNewEntry5_WdError(v6);
    *(_QWORD *)(v66 + 24) = a1;
    WdLogEvent5_WdError(v66);
    return 3223192373LL;
  }
}
