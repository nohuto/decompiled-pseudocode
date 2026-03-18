/*
 * XREFs of DmmUpdateContentOnAllClientVidPnPathsFromSource @ 0x1C01A4E2C
 * Callers:
 *     DxgkHandleVideoParameters @ 0x1C01780F4 (DxgkHandleVideoParameters.c)
 * Callees:
 *     ??0?$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z @ 0x1C00019D8 (--0-$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z.c)
 *     ?FindPath@DMMVIDPNTOPOLOGY@@QEBAPEAVDMMVIDPNPRESENTPATH@@II@Z @ 0x1C00047D8 (-FindPath@DMMVIDPNTOPOLOGY@@QEBAPEAVDMMVIDPNPRESENTPATH@@II@Z.c)
 *     ??0DMMVIDPNPRESENTPATH@@QEAA@AEBV0@@Z @ 0x1C000537C (--0DMMVIDPNPRESENTPATH@@QEAA@AEBV0@@Z.c)
 *     ?SetContentType@DMMVIDPNPRESENTPATH@@QEAAJW4_D3DKMDT_VIDPN_PRESENT_PATH_CONTENT@@@Z @ 0x1C00054D8 (-SetContentType@DMMVIDPNPRESENTPATH@@QEAAJW4_D3DKMDT_VIDPN_PRESENT_PATH_CONTENT@@@Z.c)
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
 *     ?Serialize@DMMVIDPNPRESENTPATH@@QEBAXQEAU_D3DKMDT_VIDPN_PRESENT_PATH@@@Z @ 0x1C0081030 (-Serialize@DMMVIDPNPRESENTPATH@@QEBAXQEAU_D3DKMDT_VIDPN_PRESENT_PATH@@@Z.c)
 *     ?GetContentRotationHw@DMMVIDPNPRESENTPATH@@QEBA?AW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@XZ @ 0x1C0081114 (-GetContentRotationHw@DMMVIDPNPRESENTPATH@@QEBA-AW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@XZ.c)
 *     ?DdiUpdateActiveVidPnPresentPath@ADAPTER_DISPLAY@@QEAAJPEBU_DXGKARG_UPDATEACTIVEVIDPNPRESENTPATH@@@Z @ 0x1C0085E38 (-DdiUpdateActiveVidPnPresentPath@ADAPTER_DISPLAY@@QEAAJPEBU_DXGKARG_UPDATEACTIVEVIDPNPRESENTPATH.c)
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
  __int64 v31; // rcx
  __int64 v32; // rcx
  __int64 v33; // rdx
  struct _DXGKARG_UPDATEACTIVEVIDPNPRESENTPATH *v34; // rcx
  struct _D3DKMDT_VIDPN_PRESENT_PATH *v35; // rax
  __int128 v36; // xmm1
  __int128 v37; // xmm0
  D3DKMDT_COLOR_COEFF_DYNAMIC_RANGES VidPnTargetColorCoeffDynamicRanges; // xmm1
  __int128 v39; // xmm0
  __int128 v40; // xmm1
  __int128 v41; // xmm0
  __int128 v42; // xmm1
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
  __int64 v54; // rax
  _QWORD *v55; // rax
  __int64 v56; // rax
  _QWORD *v57; // rax
  unsigned int v58; // [rsp+20h] [rbp-E0h] BYREF
  _D3DKMDT_VIDPN_PRESENT_PATH_CONTENT v59; // [rsp+24h] [rbp-DCh]
  DMMVIDPNPRESENTPATH *v60; // [rsp+28h] [rbp-D8h] BYREF
  __int64 v61; // [rsp+30h] [rbp-D0h] BYREF
  DMMVIDPNPRESENTPATH *v62; // [rsp+38h] [rbp-C8h]
  __int64 v63; // [rsp+40h] [rbp-C0h] BYREF
  DMMVIDPNTOPOLOGY *v64; // [rsp+48h] [rbp-B8h]
  __int64 v65; // [rsp+50h] [rbp-B0h] BYREF
  struct _D3DKMDT_VIDPN_PRESENT_PATH v66; // [rsp+60h] [rbp-A0h] BYREF
  struct _DXGKARG_UPDATEACTIVEVIDPNPRESENTPATH v67; // [rsp+1D0h] [rbp+D0h] BYREF

  v3 = 0;
  v59 = a3;
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
  v10 = *((_QWORD *)a1 + 266);
  if ( !v10 )
  {
    v6 = WdLogNewEntry5_WdError(v8);
    *(_QWORD *)(v6 + 24) = a1;
    goto LABEL_3;
  }
  v11 = *(_QWORD *)(v10 + 88);
  if ( v11 )
  {
    EXCLUSIVEACCESS<VIDPN_MGR>::EXCLUSIVEACCESS<VIDPN_MGR>((__int64)&v65, v11);
    v13 = *(_QWORD *)(v11 + 80);
    v61 = 0LL;
    if ( v13 )
    {
      _InterlockedIncrement((volatile signed __int32 *)(v13 + 32));
      v14 = *(_QWORD *)(v11 + 80);
    }
    else
    {
      v14 = 0LL;
    }
    auto_rc<DMMVIDPN const>::reset(&v61, v14);
    if ( v61 )
    {
      v18 = (DMMVIDPNTOPOLOGY *)(v61 + 96);
      v19 = 0LL;
      v64 = (DMMVIDPNTOPOLOGY *)(v61 + 96);
      while ( 1 )
      {
        v58 = -1;
        v20 = DMMVIDPNTOPOLOGY::EnumPathTargetsFromSource(v18, v4, v19, &v58);
        v17 = (DMMVIDPNPRESENTPATH *)v20;
        if ( v20 < 0 )
          break;
        if ( v58 == -1 )
        {
          auto_rc<DMMVIDPN const>::reset(&v61, 0LL);
          goto LABEL_38;
        }
        Path = DMMVIDPNTOPOLOGY::FindPath(v18, v4, v58);
        if ( !Path )
        {
          v27 = WdLogNewEntry5_WdAssertion(v25);
          WdLogEvent5_WdAssertion(v27);
        }
        _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(v11 + 72) + 32LL));
        v63 = *(_QWORD *)(v11 + 72);
        v62 = DMMVIDPNTOPOLOGY::FindPath((DMMVIDPNTOPOLOGY *)(v63 + 96), v4, v58);
        v28 = v62;
        if ( v62 )
        {
          v60 = 0LL;
          v29 = (DMMVIDPNPRESENTPATH *)operator new(0xD0uLL, 0x4E506456u, PagedPool);
          if ( v29 )
            v30 = DMMVIDPNPRESENTPATH::DMMVIDPNPRESENTPATH(v29, v28);
          else
            v30 = 0LL;
          auto_ptr<DMMVIDPNPRESENTPATH>::reset(
            (__int64 (__fastcall ****)(_QWORD, __int64))&v60,
            (__int64 (__fastcall ***)(_QWORD, __int64))v30);
          v17 = v60;
          if ( !v60 )
          {
            v56 = WdLogNewEntry5_WdLowResource(v31);
            WdLogEvent5_WdLowResource(v56);
            LODWORD(v17) = -1073741801;
            goto LABEL_34;
          }
          if ( !(**((unsigned __int8 (__fastcall ***)(char *))v60 + 7))((char *)v60 + 56) )
          {
            v55 = (_QWORD *)WdLogNewEntry5_WdDmmEvent(v32);
            v55[3] = v4;
            v55[4] = v58;
            v55[5] = *((int *)v17 + 16);
            WdLogEvent5_WdDmmEvent(v55);
            LODWORD(v17) = *((_DWORD *)v17 + 16);
            goto LABEL_34;
          }
          DMMVIDPNPRESENTPATH::SetContentType(v17, v59);
          memset(&v67, 0, sizeof(v67));
          DMMVIDPNPRESENTPATH::Serialize(v17, &v66);
          v33 = 2LL;
          v34 = &v67;
          v35 = &v66;
          do
          {
            v36 = *(_OWORD *)&v35->ContentTransformation.ScalingSupport;
            *(_OWORD *)&v34->VidPnPresentPathInfo.VidPnSourceId = *(_OWORD *)&v35->VidPnSourceId;
            v37 = *(_OWORD *)&v35->VisibleFromActiveTLOffset.cy;
            *(_OWORD *)&v34->VidPnPresentPathInfo.ContentTransformation.ScalingSupport = v36;
            VidPnTargetColorCoeffDynamicRanges = v35->VidPnTargetColorCoeffDynamicRanges;
            *(_OWORD *)&v34->VidPnPresentPathInfo.VisibleFromActiveTLOffset.cy = v37;
            v39 = *(_OWORD *)&v35->Content;
            v34->VidPnPresentPathInfo.VidPnTargetColorCoeffDynamicRanges = VidPnTargetColorCoeffDynamicRanges;
            v40 = *(_OWORD *)&v35->CopyProtection.OEMCopyProtection[4];
            *(_OWORD *)&v34->VidPnPresentPathInfo.Content = v39;
            v41 = *(_OWORD *)&v35->CopyProtection.OEMCopyProtection[20];
            *(_OWORD *)&v34->VidPnPresentPathInfo.CopyProtection.OEMCopyProtection[4] = v40;
            v42 = *(_OWORD *)&v35->CopyProtection.OEMCopyProtection[36];
            v35 = (struct _D3DKMDT_VIDPN_PRESENT_PATH *)((char *)v35 + 128);
            *(_OWORD *)&v34->VidPnPresentPathInfo.CopyProtection.OEMCopyProtection[20] = v41;
            v34 = (struct _DXGKARG_UPDATEACTIVEVIDPNPRESENTPATH *)((char *)v34 + 128);
            *(_OWORD *)&v34[-1].VidPnPresentPathInfo.GammaRamp.DataSize = v42;
            --v33;
          }
          while ( v33 );
          v43 = *(_OWORD *)&v35->ContentTransformation.ScalingSupport;
          *(_OWORD *)&v34->VidPnPresentPathInfo.VidPnSourceId = *(_OWORD *)&v35->VidPnSourceId;
          v44 = *(_OWORD *)&v35->VisibleFromActiveTLOffset.cy;
          *(_OWORD *)&v34->VidPnPresentPathInfo.ContentTransformation.ScalingSupport = v43;
          v45 = v35->VidPnTargetColorCoeffDynamicRanges;
          *(_OWORD *)&v34->VidPnPresentPathInfo.VisibleFromActiveTLOffset.cy = v44;
          v46 = *(_OWORD *)&v35->Content;
          v34->VidPnPresentPathInfo.VidPnTargetColorCoeffDynamicRanges = v45;
          v47 = *(_OWORD *)&v35->CopyProtection.OEMCopyProtection[4];
          v48 = *(_QWORD *)&v35->CopyProtection.OEMCopyProtection[20];
          *(_OWORD *)&v34->VidPnPresentPathInfo.Content = v46;
          *(_OWORD *)&v34->VidPnPresentPathInfo.CopyProtection.OEMCopyProtection[4] = v47;
          *(_QWORD *)&v34->VidPnPresentPathInfo.CopyProtection.OEMCopyProtection[20] = v48;
          ContentRotationHw = (unsigned int)DMMVIDPNPRESENTPATH::GetContentRotationHw(v62);
          v50 = (ADAPTER_DISPLAY *)*((_QWORD *)a1 + 266);
          v67.VidPnPresentPathInfo.ContentTransformation.Rotation = ContentRotationHw;
          updated = ADAPTER_DISPLAY::DdiUpdateActiveVidPnPresentPath(v50, &v67, v51);
          v17 = (DMMVIDPNPRESENTPATH *)updated;
          if ( updated < 0 )
          {
            v54 = WdLogNewEntry5_WdError(v53);
            *(_QWORD *)(v54 + 24) = Path;
            *(_QWORD *)(v54 + 32) = v17;
            WdLogEvent5_WdError(v54);
LABEL_34:
            auto_ptr<DMMVIDPNPRESENTPATH>::~auto_ptr<DMMVIDPNPRESENTPATH>((__int64 (__fastcall ****)(_QWORD, __int64))&v60);
            auto_rc<DMMVIDPN const>::reset(&v63, 0LL);
            goto LABEL_37;
          }
          DMMVIDPNPRESENTPATH::SetContentType(v62, v59);
          auto_ptr<DMMVIDPNPRESENTPATH>::~auto_ptr<DMMVIDPNPRESENTPATH>((__int64 (__fastcall ****)(_QWORD, __int64))&v60);
        }
        auto_rc<DMMVIDPN const>::reset(&v63, 0LL);
        DMMVIDPNPRESENTPATH::SetContentType(Path, v59);
        v18 = v64;
        ++v19;
      }
      v57 = (_QWORD *)WdLogNewEntry5_WdTrace(v22, v21, v23, v24);
      v57[3] = v19;
      v57[4] = v4;
      v57[5] = v18;
      v57[6] = v17;
    }
    else
    {
      v16 = WdLogNewEntry5_WdError(v15);
      *(_QWORD *)(v16 + 24) = a1;
      WdLogEvent5_WdError(v16);
      LODWORD(v17) = -1071774884;
    }
LABEL_37:
    auto_rc<DMMVIDPN const>::reset(&v61, 0LL);
    v3 = (unsigned int)v17;
LABEL_38:
    DXGFASTMUTEX::Release(*(struct _KTHREAD ***)(v65 + 40));
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
