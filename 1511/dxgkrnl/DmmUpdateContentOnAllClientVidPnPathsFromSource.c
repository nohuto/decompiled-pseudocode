/*
 * XREFs of DmmUpdateContentOnAllClientVidPnPathsFromSource @ 0x1C017B8A0
 * Callers:
 *     DxgkHandleVideoParameters @ 0x1C0153088 (DxgkHandleVideoParameters.c)
 * Callees:
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00031F4 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ??0?$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z @ 0x1C0004934 (--0-$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z.c)
 *     ?FindPath@DMMVIDPNTOPOLOGY@@QEBAPEAVDMMVIDPNPRESENTPATH@@II@Z @ 0x1C0004E38 (-FindPath@DMMVIDPNTOPOLOGY@@QEBAPEAVDMMVIDPNPRESENTPATH@@II@Z.c)
 *     ?reset@?$auto_rc@$$CBVDMMVIDPN@@@@QEAAXPEBVDMMVIDPN@@@Z @ 0x1C0004F74 (-reset@-$auto_rc@$$CBVDMMVIDPN@@@@QEAAXPEBVDMMVIDPN@@@Z.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0006CC0 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ??0DMMVIDPNPRESENTPATH@@QEAA@AEBV0@@Z @ 0x1C0009498 (--0DMMVIDPNPRESENTPATH@@QEAA@AEBV0@@Z.c)
 *     ?SetContentType@DMMVIDPNPRESENTPATH@@QEAAJW4_D3DKMDT_VIDPN_PRESENT_PATH_CONTENT@@@Z @ 0x1C00095F4 (-SetContentType@DMMVIDPNPRESENTPATH@@QEAAJW4_D3DKMDT_VIDPN_PRESENT_PATH_CONTENT@@@Z.c)
 *     ?reset@?$auto_ptr@VDMMVIDPNPRESENTPATH@@@@QEAAXPEAVDMMVIDPNPRESENTPATH@@@Z @ 0x1C000C54C (-reset@-$auto_ptr@VDMMVIDPNPRESENTPATH@@@@QEAAXPEAVDMMVIDPNPRESENTPATH@@@Z.c)
 *     ??1?$auto_ptr@VDMMVIDPNPRESENTPATH@@@@QEAA@XZ @ 0x1C000C57C (--1-$auto_ptr@VDMMVIDPNPRESENTPATH@@@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1C0011390 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00120A0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0012400 (memset.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0065FA0 (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ?EnumPathTargetsFromSource@DMMVIDPNTOPOLOGY@@QEBAJI_KPEAI@Z @ 0x1C009060C (-EnumPathTargetsFromSource@DMMVIDPNTOPOLOGY@@QEBAJI_KPEAI@Z.c)
 *     ?DdiUpdateActiveVidPnPresentPath@ADAPTER_DISPLAY@@QEAAJPEBU_DXGKARG_UPDATEACTIVEVIDPNPRESENTPATH@@@Z @ 0x1C00998F4 (-DdiUpdateActiveVidPnPresentPath@ADAPTER_DISPLAY@@QEAAJPEBU_DXGKARG_UPDATEACTIVEVIDPNPRESENTPATH.c)
 *     ?Serialize@DMMVIDPNPRESENTPATH@@QEBAXQEAU_D3DKMDT_VIDPN_PRESENT_PATH@@@Z @ 0x1C00A1410 (-Serialize@DMMVIDPNPRESENTPATH@@QEBAXQEAU_D3DKMDT_VIDPN_PRESENT_PATH@@@Z.c)
 *     ?GetContentRotationHw@DMMVIDPNPRESENTPATH@@QEBA?AW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@XZ @ 0x1C00A14F4 (-GetContentRotationHw@DMMVIDPNPRESENTPATH@@QEBA-AW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@XZ.c)
 */

__int64 __fastcall DmmUpdateContentOnAllClientVidPnPathsFromSource(
        DXGADAPTER *a1,
        unsigned int a2,
        _D3DKMDT_VIDPN_PRESENT_PATH_CONTENT a3)
{
  unsigned int v3; // edi
  __int64 v4; // r15
  __int64 v6; // rax
  __int64 v8; // rcx
  __int64 v9; // rax
  __int64 v10; // r14
  __int64 v11; // r14
  __int64 v12; // rax
  __int64 v13; // rax
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // rax
  DMMVIDPNPRESENTPATH *v17; // rbx
  DMMVIDPNTOPOLOGY *v18; // r13
  __int64 v19; // r12
  int v20; // eax
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // r8
  __int64 v24; // r9
  __int64 v25; // rcx
  DMMVIDPNPRESENTPATH *Path; // r13
  __int64 v27; // rax
  DMMVIDPNPRESENTPATH *v28; // rbx
  DMMVIDPNPRESENTPATH *v29; // rax
  DMMVIDPNPRESENTPATH *v30; // rax
  __int64 v31; // rdx
  __int64 v32; // rcx
  __int64 v33; // r8
  __int64 v34; // r9
  __int64 v35; // rcx
  __int64 v36; // rdx
  struct _DXGKARG_UPDATEACTIVEVIDPNPRESENTPATH *v37; // rcx
  struct _D3DKMDT_VIDPN_PRESENT_PATH *v38; // rax
  __int128 v39; // xmm1
  __int128 v40; // xmm0
  D3DKMDT_COLOR_COEFF_DYNAMIC_RANGES VidPnTargetColorCoeffDynamicRanges; // xmm1
  __int128 v42; // xmm0
  __int128 v43; // xmm1
  __int128 v44; // xmm0
  __int128 v45; // xmm1
  __int128 v46; // xmm1
  __int128 v47; // xmm0
  D3DKMDT_COLOR_COEFF_DYNAMIC_RANGES v48; // xmm1
  __int128 v49; // xmm0
  __int128 v50; // xmm1
  __int64 v51; // rax
  D3DKMDT_VIDPN_PRESENT_PATH_ROTATION ContentRotationHw; // eax
  ADAPTER_DISPLAY *v53; // rcx
  __int64 v54; // r8
  int updated; // eax
  __int64 v56; // rcx
  __int64 v57; // rax
  _QWORD *v58; // rax
  __int64 v59; // rax
  _QWORD *v60; // rax
  unsigned int v61; // [rsp+20h] [rbp-E0h] BYREF
  _D3DKMDT_VIDPN_PRESENT_PATH_CONTENT v62; // [rsp+24h] [rbp-DCh]
  DMMVIDPNPRESENTPATH *v63; // [rsp+28h] [rbp-D8h] BYREF
  __int64 v64; // [rsp+30h] [rbp-D0h] BYREF
  DMMVIDPNPRESENTPATH *v65; // [rsp+38h] [rbp-C8h]
  __int64 v66; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v67; // [rsp+48h] [rbp-B8h] BYREF
  DMMVIDPNTOPOLOGY *v68; // [rsp+50h] [rbp-B0h]
  struct _D3DKMDT_VIDPN_PRESENT_PATH v69; // [rsp+60h] [rbp-A0h] BYREF
  struct _DXGKARG_UPDATEACTIVEVIDPNPRESENTPATH v70; // [rsp+1D0h] [rbp+D0h] BYREF

  v3 = 0;
  v62 = a3;
  v4 = a2;
  if ( !a1 )
  {
    v6 = WdLogNewEntry5_WdError(0LL);
    *(_QWORD *)(v6 + 24) = 0LL;
LABEL_3:
    WdLogEvent5_WdError(v6);
    return 3223191554LL;
  }
  if ( !DXGADAPTER::IsCoreResourceSharedOwner(a1) )
  {
    v9 = WdLogNewEntry5_WdAssertion(v8);
    WdLogEvent5_WdAssertion(v9);
  }
  v10 = *((_QWORD *)a1 + 248);
  if ( !v10 )
  {
    v6 = WdLogNewEntry5_WdError(v8);
    *(_QWORD *)(v6 + 24) = a1;
    goto LABEL_3;
  }
  v11 = *(_QWORD *)(v10 + 112);
  if ( v11 )
  {
    EXCLUSIVEACCESS<VIDPN_MGR>::EXCLUSIVEACCESS<VIDPN_MGR>((__int64)&v67, v11);
    v13 = *(_QWORD *)(v11 + 80);
    v64 = 0LL;
    if ( v13 )
    {
      _InterlockedIncrement((volatile signed __int32 *)(v13 + 32));
      v14 = *(_QWORD *)(v11 + 80);
    }
    else
    {
      v14 = 0LL;
    }
    auto_rc<DMMVIDPN const>::reset(&v64, v14);
    if ( v64 )
    {
      v18 = (DMMVIDPNTOPOLOGY *)(v64 + 96);
      v19 = 0LL;
      v68 = (DMMVIDPNTOPOLOGY *)(v64 + 96);
      while ( 1 )
      {
        v61 = -1;
        v20 = DMMVIDPNTOPOLOGY::EnumPathTargetsFromSource(v18, v4, v19, &v61);
        v17 = (DMMVIDPNPRESENTPATH *)v20;
        if ( v20 < 0 )
          break;
        if ( v61 == -1 )
        {
          auto_rc<DMMVIDPN const>::reset(&v64, 0LL);
          goto LABEL_38;
        }
        Path = DMMVIDPNTOPOLOGY::FindPath(v18, v4, v61);
        if ( !Path )
        {
          v27 = WdLogNewEntry5_WdAssertion(v25);
          WdLogEvent5_WdAssertion(v27);
        }
        _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(v11 + 72) + 32LL));
        v66 = *(_QWORD *)(v11 + 72);
        v65 = DMMVIDPNTOPOLOGY::FindPath((DMMVIDPNTOPOLOGY *)(v66 + 96), v4, v61);
        v28 = v65;
        if ( v65 )
        {
          v63 = 0LL;
          v29 = (DMMVIDPNPRESENTPATH *)operator new[](0xD0uLL, 0x4E506456u, PagedPool);
          if ( v29 )
            v30 = DMMVIDPNPRESENTPATH::DMMVIDPNPRESENTPATH(v29, v28);
          else
            v30 = 0LL;
          auto_ptr<DMMVIDPNPRESENTPATH>::reset(
            (__int64 (__fastcall ****)(_QWORD, __int64))&v63,
            (__int64 (__fastcall ***)(_QWORD, __int64))v30);
          v17 = v63;
          if ( !v63 )
          {
            v59 = WdLogNewEntry5_WdLowResource(v32, v31, v33, v34);
            WdLogEvent5_WdLowResource(v59);
            LODWORD(v17) = -1073741801;
            goto LABEL_34;
          }
          if ( !(**((unsigned __int8 (__fastcall ***)(char *))v63 + 7))((char *)v63 + 56) )
          {
            v58 = (_QWORD *)WdLogNewEntry5_WdDmmEvent(v35);
            v58[3] = v4;
            v58[4] = v61;
            v58[5] = *((int *)v17 + 16);
            WdLogEvent5_WdDmmEvent(v58);
            LODWORD(v17) = *((_DWORD *)v17 + 16);
            goto LABEL_34;
          }
          DMMVIDPNPRESENTPATH::SetContentType(v17, v62);
          memset(&v70, 0, sizeof(v70));
          DMMVIDPNPRESENTPATH::Serialize(v17, &v69);
          v36 = 2LL;
          v37 = &v70;
          v38 = &v69;
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
            v38 = (struct _D3DKMDT_VIDPN_PRESENT_PATH *)((char *)v38 + 128);
            *(_OWORD *)&v37->VidPnPresentPathInfo.CopyProtection.OEMCopyProtection[20] = v44;
            v37 = (struct _DXGKARG_UPDATEACTIVEVIDPNPRESENTPATH *)((char *)v37 + 128);
            *(_OWORD *)&v37[-1].VidPnPresentPathInfo.GammaRamp.DataSize = v45;
            --v36;
          }
          while ( v36 );
          v46 = *(_OWORD *)&v38->ContentTransformation.ScalingSupport;
          *(_OWORD *)&v37->VidPnPresentPathInfo.VidPnSourceId = *(_OWORD *)&v38->VidPnSourceId;
          v47 = *(_OWORD *)&v38->VisibleFromActiveTLOffset.cy;
          *(_OWORD *)&v37->VidPnPresentPathInfo.ContentTransformation.ScalingSupport = v46;
          v48 = v38->VidPnTargetColorCoeffDynamicRanges;
          *(_OWORD *)&v37->VidPnPresentPathInfo.VisibleFromActiveTLOffset.cy = v47;
          v49 = *(_OWORD *)&v38->Content;
          v37->VidPnPresentPathInfo.VidPnTargetColorCoeffDynamicRanges = v48;
          v50 = *(_OWORD *)&v38->CopyProtection.OEMCopyProtection[4];
          v51 = *(_QWORD *)&v38->CopyProtection.OEMCopyProtection[20];
          *(_OWORD *)&v37->VidPnPresentPathInfo.Content = v49;
          *(_OWORD *)&v37->VidPnPresentPathInfo.CopyProtection.OEMCopyProtection[4] = v50;
          *(_QWORD *)&v37->VidPnPresentPathInfo.CopyProtection.OEMCopyProtection[20] = v51;
          ContentRotationHw = (unsigned int)DMMVIDPNPRESENTPATH::GetContentRotationHw(v65);
          v53 = (ADAPTER_DISPLAY *)*((_QWORD *)a1 + 248);
          v70.VidPnPresentPathInfo.ContentTransformation.Rotation = ContentRotationHw;
          updated = ADAPTER_DISPLAY::DdiUpdateActiveVidPnPresentPath(v53, &v70, v54);
          v17 = (DMMVIDPNPRESENTPATH *)updated;
          if ( updated < 0 )
          {
            v57 = WdLogNewEntry5_WdError(v56);
            *(_QWORD *)(v57 + 24) = Path;
            *(_QWORD *)(v57 + 32) = v17;
            WdLogEvent5_WdError(v57);
LABEL_34:
            auto_ptr<DMMVIDPNPRESENTPATH>::~auto_ptr<DMMVIDPNPRESENTPATH>((__int64 (__fastcall ****)(_QWORD, __int64))&v63);
            auto_rc<DMMVIDPN const>::reset(&v66, 0LL);
            goto LABEL_37;
          }
          DMMVIDPNPRESENTPATH::SetContentType(v65, v62);
          auto_ptr<DMMVIDPNPRESENTPATH>::~auto_ptr<DMMVIDPNPRESENTPATH>((__int64 (__fastcall ****)(_QWORD, __int64))&v63);
        }
        auto_rc<DMMVIDPN const>::reset(&v66, 0LL);
        DMMVIDPNPRESENTPATH::SetContentType(Path, v62);
        v18 = v68;
        ++v19;
      }
      v60 = (_QWORD *)WdLogNewEntry5_WdTrace(v22, v21, v23, v24);
      v60[3] = v19;
      v60[4] = v4;
      v60[5] = v18;
      v60[6] = v17;
    }
    else
    {
      v16 = WdLogNewEntry5_WdError(v15);
      *(_QWORD *)(v16 + 24) = a1;
      WdLogEvent5_WdError(v16);
      LODWORD(v17) = -1071774884;
    }
LABEL_37:
    auto_rc<DMMVIDPN const>::reset(&v64, 0LL);
    v3 = (unsigned int)v17;
LABEL_38:
    DXGFASTMUTEX::Release(*(DXGFASTMUTEX **)(v67 + 40));
    return v3;
  }
  else
  {
    v12 = WdLogNewEntry5_WdError(v8);
    *(_QWORD *)(v12 + 24) = a1;
    WdLogEvent5_WdError(v12);
    return 3223192373LL;
  }
}
