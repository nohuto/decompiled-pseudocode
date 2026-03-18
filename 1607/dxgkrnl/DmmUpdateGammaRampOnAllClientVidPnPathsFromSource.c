/*
 * XREFs of DmmUpdateGammaRampOnAllClientVidPnPathsFromSource @ 0x1C00B9AE8
 * Callers:
 *     ?SetGammaRamp@ADAPTER_DISPLAY@@QEAAJIPEAVDXGDEVICE@@@Z @ 0x1C0086AD8 (-SetGammaRamp@ADAPTER_DISPLAY@@QEAAJIPEAVDXGDEVICE@@@Z.c)
 * Callees:
 *     ??0?$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z @ 0x1C00019D8 (--0-$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z.c)
 *     ?FindPath@DMMVIDPNTOPOLOGY@@QEBAPEAVDMMVIDPNPRESENTPATH@@II@Z @ 0x1C00047D8 (-FindPath@DMMVIDPNTOPOLOGY@@QEBAPEAVDMMVIDPNPRESENTPATH@@II@Z.c)
 *     ??0DMMVIDPNPRESENTPATH@@QEAA@AEBV0@@Z @ 0x1C000537C (--0DMMVIDPNPRESENTPATH@@QEAA@AEBV0@@Z.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0006CCC (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00094F0 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?reset@?$auto_rc@$$CBVDMMVIDPN@@@@QEAAXPEBVDMMVIDPN@@@Z @ 0x1C000A6B4 (-reset@-$auto_rc@$$CBVDMMVIDPN@@@@QEAAXPEBVDMMVIDPN@@@Z.c)
 *     ??1?$auto_ptr@VDMMVIDPNPRESENTPATH@@@@QEAA@XZ @ 0x1C000A6E8 (--1-$auto_ptr@VDMMVIDPNPRESENTPATH@@@@QEAA@XZ.c)
 *     ?reset@?$auto_ptr@VDMMVIDPNPRESENTPATH@@@@QEAAXPEAVDMMVIDPNPRESENTPATH@@@Z @ 0x1C000A704 (-reset@-$auto_ptr@VDMMVIDPNPRESENTPATH@@@@QEAAXPEAVDMMVIDPNPRESENTPATH@@@Z.c)
 *     __security_check_cookie @ 0x1C00117E0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0012450 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C00127C0 (memset.c)
 *     ??2@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C007F930 (--2@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ?EnumPathTargetsFromSource@DMMVIDPNTOPOLOGY@@QEBAJI_KPEAI@Z @ 0x1C007FA6C (-EnumPathTargetsFromSource@DMMVIDPNTOPOLOGY@@QEBAJI_KPEAI@Z.c)
 *     ?SetGammaRamp@DMMVIDPNPRESENTPATH@@QEAAJAEBU_D3DKMDT_GAMMA_RAMP@@@Z @ 0x1C0080F20 (-SetGammaRamp@DMMVIDPNPRESENTPATH@@QEAAJAEBU_D3DKMDT_GAMMA_RAMP@@@Z.c)
 *     ?Serialize@DMMVIDPNPRESENTPATH@@QEBAXQEAU_D3DKMDT_VIDPN_PRESENT_PATH@@@Z @ 0x1C0081030 (-Serialize@DMMVIDPNPRESENTPATH@@QEBAXQEAU_D3DKMDT_VIDPN_PRESENT_PATH@@@Z.c)
 *     ?GetContentRotationHw@DMMVIDPNPRESENTPATH@@QEBA?AW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@XZ @ 0x1C0081114 (-GetContentRotationHw@DMMVIDPNPRESENTPATH@@QEBA-AW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@XZ.c)
 *     ?DdiUpdateActiveVidPnPresentPath@ADAPTER_DISPLAY@@QEAAJPEBU_DXGKARG_UPDATEACTIVEVIDPNPRESENTPATH@@@Z @ 0x1C0085E38 (-DdiUpdateActiveVidPnPresentPath@ADAPTER_DISPLAY@@QEAAJPEBU_DXGKARG_UPDATEACTIVEVIDPNPRESENTPATH.c)
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
  __int64 v20; // rcx
  DMMVIDPNPRESENTPATH *v21; // rsi
  DMMVIDPNPRESENTPATH *v22; // rax
  DMMVIDPNPRESENTPATH *v23; // rax
  __int64 v24; // rcx
  int *v25; // rbx
  __int64 v26; // rcx
  int v27; // eax
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // r8
  __int64 v31; // r9
  __int64 v32; // rdx
  _DXGKARG_UPDATEACTIVEVIDPNPRESENTPATH *v33; // rcx
  _D3DKMDT_VIDPN_PRESENT_PATH *v34; // rax
  __int128 v35; // xmm1
  __int128 v36; // xmm0
  D3DKMDT_COLOR_COEFF_DYNAMIC_RANGES VidPnTargetColorCoeffDynamicRanges; // xmm1
  __int128 v38; // xmm0
  __int128 v39; // xmm1
  __int128 v40; // xmm0
  __int128 v41; // xmm1
  DMMVIDPNPRESENTPATH *v42; // rbx
  __int128 v43; // xmm1
  __int128 v44; // xmm0
  D3DKMDT_COLOR_COEFF_DYNAMIC_RANGES v45; // xmm1
  __int128 v46; // xmm0
  __int128 v47; // xmm1
  __int64 v48; // rax
  D3DKMDT_VIDPN_PRESENT_PATH_ROTATION ContentRotationHw; // eax
  ADAPTER_DISPLAY *v50; // rcx
  __int64 v51; // r8
  int updated; // eax
  __int64 v53; // rcx
  int v54; // eax
  int v55; // eax
  __int64 v56; // rdx
  __int64 v57; // rcx
  __int64 v58; // r8
  __int64 v59; // r9
  __int64 v61; // rax
  __int64 v62; // rax
  __int64 v63; // rax
  __int64 v64; // rax
  __int64 v65; // rax
  __int64 v66; // rax
  _QWORD *v67; // rax
  __int64 v68; // rax
  _QWORD *v69; // rax
  unsigned int v70; // [rsp+20h] [rbp-E0h] BYREF
  DMMVIDPNPRESENTPATH *v71; // [rsp+28h] [rbp-D8h] BYREF
  __int64 v72; // [rsp+30h] [rbp-D0h] BYREF
  struct _D3DKMDT_GAMMA_RAMP *v73; // [rsp+38h] [rbp-C8h]
  DMMVIDPNPRESENTPATH *Path; // [rsp+40h] [rbp-C0h]
  __int64 v75; // [rsp+48h] [rbp-B8h] BYREF
  DMMVIDPNPRESENTPATH *v76; // [rsp+50h] [rbp-B0h]
  DMMVIDPNTOPOLOGY *v77; // [rsp+58h] [rbp-A8h]
  __int64 v78; // [rsp+60h] [rbp-A0h] BYREF
  _D3DKMDT_VIDPN_PRESENT_PATH v79; // [rsp+70h] [rbp-90h] BYREF
  _DXGKARG_UPDATEACTIVEVIDPNPRESENTPATH v80; // [rsp+1E0h] [rbp+E0h] BYREF

  v3 = 0;
  v73 = a3;
  v4 = a2;
  if ( !a1 )
  {
    v61 = WdLogNewEntry5_WdError(0LL);
    *(_QWORD *)(v61 + 24) = 0LL;
    goto LABEL_30;
  }
  if ( !DXGADAPTER::IsCoreResourceSharedOwner(a1) )
  {
    v62 = WdLogNewEntry5_WdAssertion(v6);
    WdLogEvent5_WdAssertion(v62);
  }
  v7 = *((_QWORD *)a1 + 266);
  if ( !v7 )
  {
    v61 = WdLogNewEntry5_WdError(v6);
    *(_QWORD *)(v61 + 24) = a1;
LABEL_30:
    WdLogEvent5_WdError(v61);
    return 3223191554LL;
  }
  v8 = *(_QWORD *)(v7 + 88);
  if ( v8 )
  {
    EXCLUSIVEACCESS<VIDPN_MGR>::EXCLUSIVEACCESS<VIDPN_MGR>((__int64)&v78, v8);
    v9 = *(_QWORD *)(v8 + 80);
    v72 = 0LL;
    if ( v9 )
    {
      _InterlockedIncrement((volatile signed __int32 *)(v9 + 32));
      v10 = *(_QWORD *)(v8 + 80);
    }
    else
    {
      v10 = 0LL;
    }
    auto_rc<DMMVIDPN const>::reset(&v72, v10);
    if ( v72 )
    {
      v12 = (DMMVIDPNTOPOLOGY *)(v72 + 96);
      v13 = 0LL;
      v77 = (DMMVIDPNTOPOLOGY *)(v72 + 96);
      while ( 1 )
      {
        v70 = -1;
        v14 = DMMVIDPNTOPOLOGY::EnumPathTargetsFromSource(v12, v4, v13, &v70);
        v19 = v14;
        if ( v14 < 0 )
          break;
        if ( v70 == -1 )
        {
          auto_rc<DMMVIDPN const>::reset(&v72, 0LL);
          goto LABEL_28;
        }
        Path = DMMVIDPNTOPOLOGY::FindPath(v12, v4, v70);
        if ( !Path )
        {
          v65 = WdLogNewEntry5_WdAssertion(v20);
          WdLogEvent5_WdAssertion(v65);
        }
        _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(v8 + 72) + 32LL));
        v75 = *(_QWORD *)(v8 + 72);
        v76 = DMMVIDPNTOPOLOGY::FindPath((DMMVIDPNTOPOLOGY *)(v75 + 96), v4, v70);
        v21 = v76;
        if ( v76 )
        {
          v71 = 0LL;
          v22 = (DMMVIDPNPRESENTPATH *)operator new(0xD0uLL, 0x4E506456u, PagedPool);
          if ( v22 )
            v23 = DMMVIDPNPRESENTPATH::DMMVIDPNPRESENTPATH(v22, v21);
          else
            v23 = 0LL;
          auto_ptr<DMMVIDPNPRESENTPATH>::reset(
            (__int64 (__fastcall ****)(_QWORD, __int64))&v71,
            (__int64 (__fastcall ***)(_QWORD, __int64))v23);
          v25 = (int *)v71;
          if ( !v71 )
          {
            v68 = WdLogNewEntry5_WdLowResource(v24);
            WdLogEvent5_WdLowResource(v68);
            LODWORD(v19) = -1073741801;
            goto LABEL_40;
          }
          if ( !(**((unsigned __int8 (__fastcall ***)(char *))v71 + 7))((char *)v71 + 56) )
          {
            v67 = (_QWORD *)WdLogNewEntry5_WdDmmEvent(v26);
            v67[3] = v4;
            v67[4] = v70;
            v67[5] = v25[16];
            WdLogEvent5_WdDmmEvent(v67);
            LODWORD(v19) = v25[16];
            goto LABEL_40;
          }
          v27 = DMMVIDPNPRESENTPATH::SetGammaRamp((DMMVIDPNPRESENTPATH *)v25, v73);
          v19 = v27;
          if ( v27 < 0 )
            goto LABEL_36;
          memset(&v80, 0, sizeof(v80));
          DMMVIDPNPRESENTPATH::Serialize((DMMVIDPNPRESENTPATH *)v25, &v79);
          v32 = 2LL;
          v33 = &v80;
          v34 = &v79;
          do
          {
            v35 = *(_OWORD *)&v34->ContentTransformation.ScalingSupport;
            *(_OWORD *)&v33->VidPnPresentPathInfo.VidPnSourceId = *(_OWORD *)&v34->VidPnSourceId;
            v36 = *(_OWORD *)&v34->VisibleFromActiveTLOffset.cy;
            *(_OWORD *)&v33->VidPnPresentPathInfo.ContentTransformation.ScalingSupport = v35;
            VidPnTargetColorCoeffDynamicRanges = v34->VidPnTargetColorCoeffDynamicRanges;
            *(_OWORD *)&v33->VidPnPresentPathInfo.VisibleFromActiveTLOffset.cy = v36;
            v38 = *(_OWORD *)&v34->Content;
            v33->VidPnPresentPathInfo.VidPnTargetColorCoeffDynamicRanges = VidPnTargetColorCoeffDynamicRanges;
            v39 = *(_OWORD *)&v34->CopyProtection.OEMCopyProtection[4];
            *(_OWORD *)&v33->VidPnPresentPathInfo.Content = v38;
            v40 = *(_OWORD *)&v34->CopyProtection.OEMCopyProtection[20];
            *(_OWORD *)&v33->VidPnPresentPathInfo.CopyProtection.OEMCopyProtection[4] = v39;
            v41 = *(_OWORD *)&v34->CopyProtection.OEMCopyProtection[36];
            v34 = (_D3DKMDT_VIDPN_PRESENT_PATH *)((char *)v34 + 128);
            *(_OWORD *)&v33->VidPnPresentPathInfo.CopyProtection.OEMCopyProtection[20] = v40;
            v33 = (_DXGKARG_UPDATEACTIVEVIDPNPRESENTPATH *)((char *)v33 + 128);
            *(_OWORD *)&v33[-1].VidPnPresentPathInfo.GammaRamp.DataSize = v41;
            --v32;
          }
          while ( v32 );
          v42 = v76;
          v43 = *(_OWORD *)&v34->ContentTransformation.ScalingSupport;
          *(_OWORD *)&v33->VidPnPresentPathInfo.VidPnSourceId = *(_OWORD *)&v34->VidPnSourceId;
          v44 = *(_OWORD *)&v34->VisibleFromActiveTLOffset.cy;
          *(_OWORD *)&v33->VidPnPresentPathInfo.ContentTransformation.ScalingSupport = v43;
          v45 = v34->VidPnTargetColorCoeffDynamicRanges;
          *(_OWORD *)&v33->VidPnPresentPathInfo.VisibleFromActiveTLOffset.cy = v44;
          v46 = *(_OWORD *)&v34->Content;
          v33->VidPnPresentPathInfo.VidPnTargetColorCoeffDynamicRanges = v45;
          v47 = *(_OWORD *)&v34->CopyProtection.OEMCopyProtection[4];
          v48 = *(_QWORD *)&v34->CopyProtection.OEMCopyProtection[20];
          *(_OWORD *)&v33->VidPnPresentPathInfo.Content = v46;
          *(_OWORD *)&v33->VidPnPresentPathInfo.CopyProtection.OEMCopyProtection[4] = v47;
          *(_QWORD *)&v33->VidPnPresentPathInfo.CopyProtection.OEMCopyProtection[20] = v48;
          ContentRotationHw = (unsigned int)DMMVIDPNPRESENTPATH::GetContentRotationHw(v42);
          v50 = (ADAPTER_DISPLAY *)*((_QWORD *)a1 + 266);
          v80.VidPnPresentPathInfo.ContentTransformation.Rotation = ContentRotationHw;
          updated = ADAPTER_DISPLAY::DdiUpdateActiveVidPnPresentPath(v50, &v80, v51);
          v19 = updated;
          if ( updated < 0 )
          {
            v66 = WdLogNewEntry5_WdError(v53);
            *(_QWORD *)(v66 + 24) = Path;
            *(_QWORD *)(v66 + 32) = v19;
            WdLogEvent5_WdError(v66);
            goto LABEL_40;
          }
          v54 = DMMVIDPNPRESENTPATH::SetGammaRamp(v42, v73);
          v19 = v54;
          if ( v54 < 0 )
          {
LABEL_36:
            *(_QWORD *)(WdLogNewEntry5_WdTrace(v29, v28, v30, v31) + 24) = v19;
LABEL_40:
            auto_ptr<DMMVIDPNPRESENTPATH>::~auto_ptr<DMMVIDPNPRESENTPATH>((__int64 (__fastcall ****)(_QWORD, __int64))&v71);
            auto_rc<DMMVIDPN const>::reset(&v75, 0LL);
            goto LABEL_43;
          }
          auto_ptr<DMMVIDPNPRESENTPATH>::~auto_ptr<DMMVIDPNPRESENTPATH>((__int64 (__fastcall ****)(_QWORD, __int64))&v71);
          v12 = v77;
        }
        auto_rc<DMMVIDPN const>::reset(&v75, 0LL);
        v55 = DMMVIDPNPRESENTPATH::SetGammaRamp(Path, v73);
        LODWORD(v19) = v55;
        if ( v55 < 0 )
        {
          *(_QWORD *)(WdLogNewEntry5_WdTrace(v57, v56, v58, v59) + 24) = v55;
          goto LABEL_43;
        }
        ++v13;
      }
      v69 = (_QWORD *)WdLogNewEntry5_WdTrace(v16, v15, v17, v18);
      v69[3] = v13;
      v69[4] = v4;
      v69[5] = v12;
      v69[6] = v19;
    }
    else
    {
      v64 = WdLogNewEntry5_WdError(v11);
      *(_QWORD *)(v64 + 24) = a1;
      WdLogEvent5_WdError(v64);
      LODWORD(v19) = -1071774884;
    }
LABEL_43:
    auto_rc<DMMVIDPN const>::reset(&v72, 0LL);
    v3 = v19;
LABEL_28:
    DXGFASTMUTEX::Release(*(struct _KTHREAD ***)(v78 + 40));
    return v3;
  }
  else
  {
    v63 = WdLogNewEntry5_WdError(v6);
    *(_QWORD *)(v63 + 24) = a1;
    WdLogEvent5_WdError(v63);
    return 3223192373LL;
  }
}
