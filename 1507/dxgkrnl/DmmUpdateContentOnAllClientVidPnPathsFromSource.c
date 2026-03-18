/*
 * XREFs of DmmUpdateContentOnAllClientVidPnPathsFromSource @ 0x1C0177438
 * Callers:
 *     DxgkHandleVideoParameters @ 0x1C014FD7C (DxgkHandleVideoParameters.c)
 * Callees:
 *     ?reset@?$auto_rc@$$CBVDMMVIDPN@@@@QEAAXPEBVDMMVIDPN@@@Z @ 0x1C00012D4 (-reset@-$auto_rc@$$CBVDMMVIDPN@@@@QEAAXPEBVDMMVIDPN@@@Z.c)
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C000250C (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?FindPath@DMMVIDPNTOPOLOGY@@QEBAPEAVDMMVIDPNPRESENTPATH@@II@Z @ 0x1C0004338 (-FindPath@DMMVIDPNTOPOLOGY@@QEBAPEAVDMMVIDPNPRESENTPATH@@II@Z.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C00049CC (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ??0?$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z @ 0x1C0004E90 (--0-$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z.c)
 *     ?reset@?$auto_ptr@VDMMVIDPNPRESENTPATH@@@@QEAAXPEAVDMMVIDPNPRESENTPATH@@@Z @ 0x1C0008180 (-reset@-$auto_ptr@VDMMVIDPNPRESENTPATH@@@@QEAAXPEAVDMMVIDPNPRESENTPATH@@@Z.c)
 *     ??1?$auto_ptr@VDMMVIDPNPRESENTPATH@@@@QEAA@XZ @ 0x1C00081B0 (--1-$auto_ptr@VDMMVIDPNPRESENTPATH@@@@QEAA@XZ.c)
 *     ??0DMMVIDPNPRESENTPATH@@QEAA@AEBV0@@Z @ 0x1C000B100 (--0DMMVIDPNPRESENTPATH@@QEAA@AEBV0@@Z.c)
 *     ?SetContentType@DMMVIDPNPRESENTPATH@@QEAAJW4_D3DKMDT_VIDPN_PRESENT_PATH_CONTENT@@@Z @ 0x1C000DC2C (-SetContentType@DMMVIDPNPRESENTPATH@@QEAAJW4_D3DKMDT_VIDPN_PRESENT_PATH_CONTENT@@@Z.c)
 *     __security_check_cookie @ 0x1C000FC20 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0010930 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0010C80 (memset.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C008834C (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ?EnumPathTargetsFromSource@DMMVIDPNTOPOLOGY@@QEBAJI_KPEAI@Z @ 0x1C00898AC (-EnumPathTargetsFromSource@DMMVIDPNTOPOLOGY@@QEBAJI_KPEAI@Z.c)
 *     ?DdiUpdateActiveVidPnPresentPath@ADAPTER_DISPLAY@@QEAAJPEBU_DXGKARG_UPDATEACTIVEVIDPNPRESENTPATH@@@Z @ 0x1C00B54FC (-DdiUpdateActiveVidPnPresentPath@ADAPTER_DISPLAY@@QEAAJPEBU_DXGKARG_UPDATEACTIVEVIDPNPRESENTPATH.c)
 *     ?Serialize@DMMVIDPNPRESENTPATH@@QEBAXQEAU_D3DKMDT_VIDPN_PRESENT_PATH@@@Z @ 0x1C00B726C (-Serialize@DMMVIDPNPRESENTPATH@@QEBAXQEAU_D3DKMDT_VIDPN_PRESENT_PATH@@@Z.c)
 *     ?GetContentRotationHw@DMMVIDPNPRESENTPATH@@QEBA?AW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@XZ @ 0x1C00B7350 (-GetContentRotationHw@DMMVIDPNPRESENTPATH@@QEBA-AW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@XZ.c)
 */

__int64 __fastcall DmmUpdateContentOnAllClientVidPnPathsFromSource(
        DXGADAPTER *a1,
        unsigned int a2,
        _D3DKMDT_VIDPN_PRESENT_PATH_CONTENT a3)
{
  unsigned int v3; // edi
  __int64 v4; // r15
  __int64 v6; // rax
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // rax
  __int64 v13; // r14
  __int64 v14; // r14
  __int64 v15; // rax
  __int64 v16; // rax
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // rax
  DMMVIDPNPRESENTPATH *v20; // rbx
  DMMVIDPNTOPOLOGY *v21; // r13
  __int64 v22; // r12
  int v23; // eax
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // r8
  __int64 v27; // r9
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // r8
  __int64 v31; // r9
  DMMVIDPNPRESENTPATH *Path; // r13
  __int64 v33; // rax
  DMMVIDPNPRESENTPATH *v34; // rbx
  DMMVIDPNPRESENTPATH *v35; // rax
  DMMVIDPNPRESENTPATH *v36; // rax
  __int64 v37; // rcx
  __int64 v38; // rcx
  __int64 v39; // r9
  __int64 v40; // rdx
  struct _DXGKARG_UPDATEACTIVEVIDPNPRESENTPATH *v41; // rcx
  struct _D3DKMDT_VIDPN_PRESENT_PATH *v42; // rax
  __int128 v43; // xmm1
  __int128 v44; // xmm0
  D3DKMDT_COLOR_COEFF_DYNAMIC_RANGES VidPnTargetColorCoeffDynamicRanges; // xmm1
  __int128 v46; // xmm0
  __int128 v47; // xmm1
  __int128 v48; // xmm0
  __int128 v49; // xmm1
  __int128 v50; // xmm1
  __int128 v51; // xmm0
  D3DKMDT_COLOR_COEFF_DYNAMIC_RANGES v52; // xmm1
  __int128 v53; // xmm0
  __int128 v54; // xmm1
  __int64 v55; // rax
  D3DKMDT_VIDPN_PRESENT_PATH_ROTATION ContentRotationHw; // eax
  ADAPTER_DISPLAY *v57; // rcx
  __int64 v58; // r8
  int updated; // eax
  __int64 v60; // rcx
  __int64 v61; // rax
  _QWORD *v62; // rax
  __int64 v63; // rax
  _QWORD *v64; // rax
  unsigned int v65; // [rsp+20h] [rbp-E0h] BYREF
  _D3DKMDT_VIDPN_PRESENT_PATH_CONTENT v66; // [rsp+24h] [rbp-DCh]
  DMMVIDPNPRESENTPATH *v67; // [rsp+28h] [rbp-D8h] BYREF
  __int64 v68; // [rsp+30h] [rbp-D0h] BYREF
  DMMVIDPNPRESENTPATH *v69; // [rsp+38h] [rbp-C8h]
  __int64 v70; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v71; // [rsp+48h] [rbp-B8h] BYREF
  DMMVIDPNTOPOLOGY *v72; // [rsp+50h] [rbp-B0h]
  struct _D3DKMDT_VIDPN_PRESENT_PATH v73; // [rsp+60h] [rbp-A0h] BYREF
  struct _DXGKARG_UPDATEACTIVEVIDPNPRESENTPATH v74; // [rsp+1D0h] [rbp+D0h] BYREF

  v3 = 0;
  v66 = a3;
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
    v12 = WdLogNewEntry5_WdAssertion(v9, v8, v10, v11);
    WdLogEvent5_WdAssertion(v12);
  }
  v13 = *((_QWORD *)a1 + 247);
  if ( !v13 )
  {
    v6 = WdLogNewEntry5_WdError(v9);
    *(_QWORD *)(v6 + 24) = a1;
    goto LABEL_3;
  }
  v14 = *(_QWORD *)(v13 + 88);
  if ( v14 )
  {
    EXCLUSIVEACCESS<VIDPN_MGR>::EXCLUSIVEACCESS<VIDPN_MGR>((__int64)&v71, v14);
    v16 = *(_QWORD *)(v14 + 80);
    v68 = 0LL;
    if ( v16 )
    {
      _InterlockedIncrement((volatile signed __int32 *)(v16 + 32));
      v17 = *(_QWORD *)(v14 + 80);
    }
    else
    {
      v17 = 0LL;
    }
    auto_rc<DMMVIDPN const>::reset(&v68, v17);
    if ( v68 )
    {
      v21 = (DMMVIDPNTOPOLOGY *)(v68 + 96);
      v22 = 0LL;
      v72 = (DMMVIDPNTOPOLOGY *)(v68 + 96);
      while ( 1 )
      {
        v65 = -1;
        v23 = DMMVIDPNTOPOLOGY::EnumPathTargetsFromSource(v21, (unsigned int)v4, v22, &v65);
        v20 = (DMMVIDPNPRESENTPATH *)v23;
        if ( v23 < 0 )
          break;
        if ( v65 == -1 )
        {
          auto_rc<DMMVIDPN const>::reset(&v68, 0LL);
          goto LABEL_38;
        }
        Path = DMMVIDPNTOPOLOGY::FindPath(v21, v4, v65);
        if ( !Path )
        {
          v33 = WdLogNewEntry5_WdAssertion(v29, v28, v30, v31);
          WdLogEvent5_WdAssertion(v33);
        }
        _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(v14 + 72) + 32LL));
        v70 = *(_QWORD *)(v14 + 72);
        v69 = DMMVIDPNTOPOLOGY::FindPath((DMMVIDPNTOPOLOGY *)(v70 + 96), v4, v65);
        v34 = v69;
        if ( v69 )
        {
          v67 = 0LL;
          v35 = (DMMVIDPNPRESENTPATH *)operator new[](0xD0uLL, 0x4E506456u, PagedPool);
          if ( v35 )
            v36 = DMMVIDPNPRESENTPATH::DMMVIDPNPRESENTPATH(v35, v34);
          else
            v36 = 0LL;
          auto_ptr<DMMVIDPNPRESENTPATH>::reset(
            (__int64 (__fastcall ****)(_QWORD, __int64))&v67,
            (__int64 (__fastcall ***)(_QWORD, __int64))v36);
          v20 = v67;
          if ( !v67 )
          {
            v63 = WdLogNewEntry5_WdLowResource(v37);
            WdLogEvent5_WdLowResource(v63);
            LODWORD(v20) = -1073741801;
            goto LABEL_34;
          }
          if ( !(**((unsigned __int8 (__fastcall ***)(char *))v67 + 7))((char *)v67 + 56) )
          {
            v62 = (_QWORD *)WdLogNewEntry5_WdDmmEvent(v38);
            v62[3] = v4;
            v62[4] = v65;
            v62[5] = *((int *)v20 + 16);
            WdLogEvent5_WdDmmEvent(v62);
            LODWORD(v20) = *((_DWORD *)v20 + 16);
            goto LABEL_34;
          }
          DMMVIDPNPRESENTPATH::SetContentType(v20, v66);
          memset(&v74, 0, sizeof(v74));
          DMMVIDPNPRESENTPATH::Serialize(v20, &v73);
          v40 = 2LL;
          v41 = &v74;
          v42 = &v73;
          do
          {
            v43 = *(_OWORD *)&v42->ContentTransformation.ScalingSupport;
            *(_OWORD *)&v41->VidPnPresentPathInfo.VidPnSourceId = *(_OWORD *)&v42->VidPnSourceId;
            v44 = *(_OWORD *)&v42->VisibleFromActiveTLOffset.cy;
            *(_OWORD *)&v41->VidPnPresentPathInfo.ContentTransformation.ScalingSupport = v43;
            VidPnTargetColorCoeffDynamicRanges = v42->VidPnTargetColorCoeffDynamicRanges;
            *(_OWORD *)&v41->VidPnPresentPathInfo.VisibleFromActiveTLOffset.cy = v44;
            v46 = *(_OWORD *)&v42->Content;
            v41->VidPnPresentPathInfo.VidPnTargetColorCoeffDynamicRanges = VidPnTargetColorCoeffDynamicRanges;
            v47 = *(_OWORD *)&v42->CopyProtection.OEMCopyProtection[4];
            *(_OWORD *)&v41->VidPnPresentPathInfo.Content = v46;
            v48 = *(_OWORD *)&v42->CopyProtection.OEMCopyProtection[20];
            *(_OWORD *)&v41->VidPnPresentPathInfo.CopyProtection.OEMCopyProtection[4] = v47;
            v49 = *(_OWORD *)&v42->CopyProtection.OEMCopyProtection[36];
            v42 = (struct _D3DKMDT_VIDPN_PRESENT_PATH *)((char *)v42 + 128);
            *(_OWORD *)&v41->VidPnPresentPathInfo.CopyProtection.OEMCopyProtection[20] = v48;
            v41 = (struct _DXGKARG_UPDATEACTIVEVIDPNPRESENTPATH *)((char *)v41 + 128);
            *(_OWORD *)&v41[-1].VidPnPresentPathInfo.GammaRamp.DataSize = v49;
            --v40;
          }
          while ( v40 );
          v50 = *(_OWORD *)&v42->ContentTransformation.ScalingSupport;
          *(_OWORD *)&v41->VidPnPresentPathInfo.VidPnSourceId = *(_OWORD *)&v42->VidPnSourceId;
          v51 = *(_OWORD *)&v42->VisibleFromActiveTLOffset.cy;
          *(_OWORD *)&v41->VidPnPresentPathInfo.ContentTransformation.ScalingSupport = v50;
          v52 = v42->VidPnTargetColorCoeffDynamicRanges;
          *(_OWORD *)&v41->VidPnPresentPathInfo.VisibleFromActiveTLOffset.cy = v51;
          v53 = *(_OWORD *)&v42->Content;
          v41->VidPnPresentPathInfo.VidPnTargetColorCoeffDynamicRanges = v52;
          v54 = *(_OWORD *)&v42->CopyProtection.OEMCopyProtection[4];
          v55 = *(_QWORD *)&v42->CopyProtection.OEMCopyProtection[20];
          *(_OWORD *)&v41->VidPnPresentPathInfo.Content = v53;
          *(_OWORD *)&v41->VidPnPresentPathInfo.CopyProtection.OEMCopyProtection[4] = v54;
          *(_QWORD *)&v41->VidPnPresentPathInfo.CopyProtection.OEMCopyProtection[20] = v55;
          ContentRotationHw = (unsigned int)DMMVIDPNPRESENTPATH::GetContentRotationHw(v69, 0LL, 128LL, v39);
          v57 = (ADAPTER_DISPLAY *)*((_QWORD *)a1 + 247);
          v74.VidPnPresentPathInfo.ContentTransformation.Rotation = ContentRotationHw;
          updated = ADAPTER_DISPLAY::DdiUpdateActiveVidPnPresentPath(v57, &v74, v58);
          v20 = (DMMVIDPNPRESENTPATH *)updated;
          if ( updated < 0 )
          {
            v61 = WdLogNewEntry5_WdError(v60);
            *(_QWORD *)(v61 + 24) = Path;
            *(_QWORD *)(v61 + 32) = v20;
            WdLogEvent5_WdError(v61);
LABEL_34:
            auto_ptr<DMMVIDPNPRESENTPATH>::~auto_ptr<DMMVIDPNPRESENTPATH>((__int64 (__fastcall ****)(_QWORD, __int64))&v67);
            auto_rc<DMMVIDPN const>::reset(&v70, 0LL);
            goto LABEL_37;
          }
          DMMVIDPNPRESENTPATH::SetContentType(v69, v66);
          auto_ptr<DMMVIDPNPRESENTPATH>::~auto_ptr<DMMVIDPNPRESENTPATH>((__int64 (__fastcall ****)(_QWORD, __int64))&v67);
        }
        auto_rc<DMMVIDPN const>::reset(&v70, 0LL);
        DMMVIDPNPRESENTPATH::SetContentType(Path, v66);
        v21 = v72;
        ++v22;
      }
      v64 = (_QWORD *)WdLogNewEntry5_WdTrace(v25, v24, v26, v27);
      v64[3] = v22;
      v64[4] = v4;
      v64[5] = v21;
      v64[6] = v20;
    }
    else
    {
      v19 = WdLogNewEntry5_WdError(v18);
      *(_QWORD *)(v19 + 24) = a1;
      WdLogEvent5_WdError(v19);
      LODWORD(v20) = -1071774884;
    }
LABEL_37:
    auto_rc<DMMVIDPN const>::reset(&v68, 0LL);
    v3 = (unsigned int)v20;
LABEL_38:
    DXGFASTMUTEX::Release(*(struct _KTHREAD ***)(v71 + 40));
    return v3;
  }
  else
  {
    v15 = WdLogNewEntry5_WdError(v9);
    *(_QWORD *)(v15 + 24) = a1;
    WdLogEvent5_WdError(v15);
    return 3223192373LL;
  }
}
