/*
 * XREFs of ?UpdateRotationAllClientVidPnPathsFromSource@VIDPN_MGR@@QEAAJIW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@@Z @ 0x1C01A2934
 * Callers:
 *     ?DmmCommitVidPnOnAdapter@@YAJPEAVDXGDEVICE@@PEAUD3DKMDT_HVIDPN__@@KPEAK22PEAEQEAJPEAVCOREDEVICEACCESS@@@Z @ 0x1C00D39F4 (-DmmCommitVidPnOnAdapter@@YAJPEAVDXGDEVICE@@PEAUD3DKMDT_HVIDPN__@@KPEAK22PEAEQEAJPEAVCOREDEVICEA.c)
 * Callees:
 *     ?FindPath@DMMVIDPNTOPOLOGY@@QEBAPEAVDMMVIDPNPRESENTPATH@@II@Z @ 0x1C00047D8 (-FindPath@DMMVIDPNTOPOLOGY@@QEBAPEAVDMMVIDPNPRESENTPATH@@II@Z.c)
 *     ?PinContentRotation@DMMVIDPNPRESENTPATH@@QEAAJW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@@Z @ 0x1C0005304 (-PinContentRotation@DMMVIDPNPRESENTPATH@@QEAAJW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@@Z.c)
 *     ??0DMMVIDPNPRESENTPATH@@QEAA@AEBV0@@Z @ 0x1C000537C (--0DMMVIDPNPRESENTPATH@@QEAA@AEBV0@@Z.c)
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

__int64 __fastcall VIDPN_MGR::UpdateRotationAllClientVidPnPathsFromSource(
        VIDPN_MGR *this,
        unsigned int a2,
        enum _D3DKMDT_VIDPN_PRESENT_PATH_ROTATION a3)
{
  bool v3; // zf
  __int64 v5; // r14
  __int64 v6; // rax
  __int64 v7; // rax
  __int64 v8; // rbx
  __int64 v9; // rax
  __int64 v10; // rax
  __int64 v11; // rax
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // rax
  __int64 v15; // rdi
  DMMVIDPNTOPOLOGY *v16; // r13
  __int64 i; // r15
  int v18; // eax
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v22; // r9
  __int64 v23; // rcx
  DMMVIDPNPRESENTPATH *Path; // r12
  __int64 v25; // rax
  const struct DMMVIDPNPRESENTPATH *v26; // rbx
  DMMVIDPNPRESENTPATH *v27; // rax
  __int64 v28; // rcx
  int *v29; // rbx
  __int64 v30; // rcx
  int v31; // eax
  __int64 v32; // rdx
  __int64 v33; // rcx
  __int64 v34; // r8
  __int64 v35; // r9
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
  __int64 v52; // r8
  int updated; // eax
  __int64 v54; // rcx
  int v55; // eax
  __int64 v56; // rdx
  __int64 v57; // rcx
  __int64 v58; // r8
  __int64 v59; // r9
  int v60; // eax
  __int64 v61; // rdx
  __int64 v62; // rcx
  __int64 v63; // r8
  __int64 v64; // r9
  __int64 v65; // rax
  _QWORD *v66; // rax
  __int64 v67; // rax
  _QWORD *v69; // rax
  char v70; // [rsp+20h] [rbp-E0h]
  unsigned int v71; // [rsp+24h] [rbp-DCh] BYREF
  enum _D3DKMDT_VIDPN_PRESENT_PATH_ROTATION v72; // [rsp+28h] [rbp-D8h]
  DMMVIDPNPRESENTPATH *v73; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v74; // [rsp+38h] [rbp-C8h] BYREF
  __int64 v75; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v76; // [rsp+48h] [rbp-B8h]
  struct DMMVIDPNPRESENTPATH *v77; // [rsp+50h] [rbp-B0h]
  struct _D3DKMDT_VIDPN_PRESENT_PATH v78; // [rsp+60h] [rbp-A0h] BYREF
  struct _DXGKARG_UPDATEACTIVEVIDPNPRESENTPATH v79; // [rsp+1D0h] [rbp+D0h] BYREF

  v3 = *((_QWORD *)this + 1) == 0LL;
  v72 = a3;
  v5 = a2;
  if ( v3 )
  {
    v6 = WdLogNewEntry5_WdAssertion(this);
    WdLogEvent5_WdAssertion(v6);
  }
  v7 = *((_QWORD *)this + 1);
  v8 = *(_QWORD *)(v7 + 16);
  v76 = v8;
  if ( !v7 )
  {
    v9 = WdLogNewEntry5_WdAssertion(this);
    WdLogEvent5_WdAssertion(v9);
  }
  v10 = *((_QWORD *)this + 1);
  v74 = 0LL;
  v70 = *(_BYTE *)(v10 + 133);
  v11 = *((_QWORD *)this + 10);
  if ( v11 )
  {
    _InterlockedIncrement((volatile signed __int32 *)(v11 + 32));
    v12 = *((_QWORD *)this + 10);
  }
  else
  {
    v12 = 0LL;
  }
  auto_rc<DMMVIDPN const>::reset(&v74, v12);
  if ( v74 )
  {
    v16 = (DMMVIDPNTOPOLOGY *)(v74 + 96);
    for ( i = 0LL; ; ++i )
    {
      v71 = -1;
      v18 = DMMVIDPNTOPOLOGY::EnumPathTargetsFromSource(v16, v5, i, &v71);
      v15 = v18;
      if ( v18 < 0 )
        break;
      if ( v71 == -1 )
      {
        auto_rc<DMMVIDPN const>::reset(&v74, 0LL);
        return 0LL;
      }
      Path = DMMVIDPNTOPOLOGY::FindPath(v16, v5, v71);
      if ( !Path )
      {
        v25 = WdLogNewEntry5_WdAssertion(v23);
        WdLogEvent5_WdAssertion(v25);
      }
      _InterlockedIncrement((volatile signed __int32 *)(*((_QWORD *)this + 9) + 32LL));
      v75 = *((_QWORD *)this + 9);
      v77 = DMMVIDPNTOPOLOGY::FindPath((DMMVIDPNTOPOLOGY *)(v75 + 96), v5, v71);
      v26 = v77;
      if ( v77 )
      {
        if ( !v70 )
        {
          v73 = 0LL;
          v27 = (DMMVIDPNPRESENTPATH *)operator new(0xD0uLL, 0x4E506456u, PagedPool);
          if ( v27 )
            v27 = DMMVIDPNPRESENTPATH::DMMVIDPNPRESENTPATH(v27, v26);
          auto_ptr<DMMVIDPNPRESENTPATH>::reset(
            (__int64 (__fastcall ****)(_QWORD, __int64))&v73,
            (__int64 (__fastcall ***)(_QWORD, __int64))v27);
          v29 = (int *)v73;
          if ( !v73 )
          {
            v67 = WdLogNewEntry5_WdLowResource(v28);
            WdLogEvent5_WdLowResource(v67);
            LODWORD(v15) = -1073741801;
LABEL_33:
            auto_ptr<DMMVIDPNPRESENTPATH>::~auto_ptr<DMMVIDPNPRESENTPATH>((__int64 (__fastcall ****)(_QWORD, __int64))&v73);
LABEL_35:
            auto_rc<DMMVIDPN const>::reset(&v75, 0LL);
            goto LABEL_39;
          }
          if ( !(**((unsigned __int8 (__fastcall ***)(char *))v73 + 7))((char *)v73 + 56) )
          {
            v66 = (_QWORD *)WdLogNewEntry5_WdDmmEvent(v30);
            v66[4] = v71;
            v66[3] = v5;
            v66[5] = v29[16];
            WdLogEvent5_WdDmmEvent(v66);
            LODWORD(v15) = v29[16];
            goto LABEL_33;
          }
          v31 = DMMVIDPNPRESENTPATH::PinContentRotation((DMMVIDPNPRESENTPATH *)v29, v72);
          LODWORD(v15) = v31;
          if ( v31 < 0 )
          {
            *(_QWORD *)(WdLogNewEntry5_WdTrace(v33, v32, v34, v35) + 24) = v31;
            goto LABEL_33;
          }
          memset(&v79, 0, sizeof(v79));
          DMMVIDPNPRESENTPATH::Serialize((DMMVIDPNPRESENTPATH *)v29, &v78);
          v36 = 2LL;
          v37 = &v79;
          v38 = &v78;
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
          v79.VidPnPresentPathInfo.ContentTransformation.Rotation = DMMVIDPNPRESENTPATH::GetContentRotationHw((DMMVIDPNPRESENTPATH *)v29);
          updated = ADAPTER_DISPLAY::DdiUpdateActiveVidPnPresentPath(*(ADAPTER_DISPLAY **)(v76 + 2128), &v79, v52);
          v15 = updated;
          if ( updated < 0 )
          {
            v65 = WdLogNewEntry5_WdError(v54);
            *(_QWORD *)(v65 + 24) = Path;
            *(_QWORD *)(v65 + 32) = v15;
            WdLogEvent5_WdError(v65);
            goto LABEL_33;
          }
          auto_ptr<DMMVIDPNPRESENTPATH>::~auto_ptr<DMMVIDPNPRESENTPATH>((__int64 (__fastcall ****)(_QWORD, __int64))&v73);
          v26 = v77;
        }
        v55 = DMMVIDPNPRESENTPATH::PinContentRotation(v26, v72);
        LODWORD(v15) = v55;
        if ( v55 < 0 )
        {
          *(_QWORD *)(WdLogNewEntry5_WdTrace(v57, v56, v58, v59) + 24) = v55;
          goto LABEL_35;
        }
      }
      auto_rc<DMMVIDPN const>::reset(&v75, 0LL);
      v60 = DMMVIDPNPRESENTPATH::PinContentRotation(Path, v72);
      LODWORD(v15) = v60;
      if ( v60 < 0 )
      {
        *(_QWORD *)(WdLogNewEntry5_WdTrace(v62, v61, v63, v64) + 24) = v60;
        goto LABEL_39;
      }
    }
    v69 = (_QWORD *)WdLogNewEntry5_WdTrace(v20, v19, v21, v22);
    v69[3] = i;
    v69[4] = v5;
    v69[5] = v16;
    v69[6] = v15;
  }
  else
  {
    v14 = WdLogNewEntry5_WdError(v13);
    *(_QWORD *)(v14 + 24) = v8;
    WdLogEvent5_WdError(v14);
    LODWORD(v15) = -1071774884;
  }
LABEL_39:
  auto_rc<DMMVIDPN const>::reset(&v74, 0LL);
  return (unsigned int)v15;
}
