/*
 * XREFs of ?UpdateRotationAllClientVidPnPathsFromSource@VIDPN_MGR@@QEAAJIW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@@Z @ 0x1C0178F54
 * Callers:
 *     ?DmmCommitVidPnOnAdapter@@YAJPEAVDXGDEVICE@@PEAUD3DKMDT_HVIDPN__@@KPEAK22PEAEQEAJPEAVCOREDEVICEACCESS@@@Z @ 0x1C00BD4C4 (-DmmCommitVidPnOnAdapter@@YAJPEAVDXGDEVICE@@PEAUD3DKMDT_HVIDPN__@@KPEAK22PEAEQEAJPEAVCOREDEVICEA.c)
 * Callees:
 *     ?FindPath@DMMVIDPNTOPOLOGY@@QEBAPEAVDMMVIDPNPRESENTPATH@@II@Z @ 0x1C0004E38 (-FindPath@DMMVIDPNTOPOLOGY@@QEBAPEAVDMMVIDPNPRESENTPATH@@II@Z.c)
 *     ?reset@?$auto_rc@$$CBVDMMVIDPN@@@@QEAAXPEBVDMMVIDPN@@@Z @ 0x1C0004F74 (-reset@-$auto_rc@$$CBVDMMVIDPN@@@@QEAAXPEBVDMMVIDPN@@@Z.c)
 *     ?PinContentRotation@DMMVIDPNPRESENTPATH@@QEAAJW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@@Z @ 0x1C0009420 (-PinContentRotation@DMMVIDPNPRESENTPATH@@QEAAJW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@@Z.c)
 *     ??0DMMVIDPNPRESENTPATH@@QEAA@AEBV0@@Z @ 0x1C0009498 (--0DMMVIDPNPRESENTPATH@@QEAA@AEBV0@@Z.c)
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
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // r8
  __int64 v31; // r9
  int *v32; // rbx
  __int64 v33; // rcx
  int v34; // eax
  __int64 v35; // rdx
  __int64 v36; // rcx
  __int64 v37; // r8
  __int64 v38; // r9
  __int64 v39; // rdx
  struct _DXGKARG_UPDATEACTIVEVIDPNPRESENTPATH *v40; // rcx
  struct _D3DKMDT_VIDPN_PRESENT_PATH *v41; // rax
  __int128 v42; // xmm1
  __int128 v43; // xmm0
  D3DKMDT_COLOR_COEFF_DYNAMIC_RANGES VidPnTargetColorCoeffDynamicRanges; // xmm1
  __int128 v45; // xmm0
  __int128 v46; // xmm1
  __int128 v47; // xmm0
  __int128 v48; // xmm1
  __int128 v49; // xmm1
  __int128 v50; // xmm0
  D3DKMDT_COLOR_COEFF_DYNAMIC_RANGES v51; // xmm1
  __int128 v52; // xmm0
  __int128 v53; // xmm1
  __int64 v54; // rax
  __int64 v55; // r8
  int updated; // eax
  __int64 v57; // rcx
  int v58; // eax
  __int64 v59; // rdx
  __int64 v60; // rcx
  __int64 v61; // r8
  __int64 v62; // r9
  int v63; // eax
  __int64 v64; // rdx
  __int64 v65; // rcx
  __int64 v66; // r8
  __int64 v67; // r9
  __int64 v68; // rax
  _QWORD *v69; // rax
  __int64 v70; // rax
  _QWORD *v72; // rax
  char v73; // [rsp+20h] [rbp-E0h]
  unsigned int v74; // [rsp+24h] [rbp-DCh] BYREF
  enum _D3DKMDT_VIDPN_PRESENT_PATH_ROTATION v75; // [rsp+28h] [rbp-D8h]
  __int64 v76; // [rsp+30h] [rbp-D0h] BYREF
  DMMVIDPNPRESENTPATH *v77; // [rsp+38h] [rbp-C8h] BYREF
  __int64 v78; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v79; // [rsp+48h] [rbp-B8h]
  struct DMMVIDPNPRESENTPATH *v80; // [rsp+50h] [rbp-B0h]
  struct _D3DKMDT_VIDPN_PRESENT_PATH v81; // [rsp+60h] [rbp-A0h] BYREF
  struct _DXGKARG_UPDATEACTIVEVIDPNPRESENTPATH v82; // [rsp+1D0h] [rbp+D0h] BYREF

  v3 = *((_QWORD *)this + 1) == 0LL;
  v75 = a3;
  v5 = a2;
  if ( v3 )
  {
    v6 = WdLogNewEntry5_WdAssertion(this);
    WdLogEvent5_WdAssertion(v6);
  }
  v7 = *((_QWORD *)this + 1);
  v8 = *(_QWORD *)(v7 + 16);
  v79 = v8;
  if ( !v7 )
  {
    v9 = WdLogNewEntry5_WdAssertion(this);
    WdLogEvent5_WdAssertion(v9);
  }
  v10 = *((_QWORD *)this + 1);
  v76 = 0LL;
  v73 = *(_BYTE *)(v10 + 157);
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
  auto_rc<DMMVIDPN const>::reset(&v76, v12);
  if ( v76 )
  {
    v16 = (DMMVIDPNTOPOLOGY *)(v76 + 96);
    for ( i = 0LL; ; ++i )
    {
      v74 = -1;
      v18 = DMMVIDPNTOPOLOGY::EnumPathTargetsFromSource(v16, v5, i, &v74);
      v15 = v18;
      if ( v18 < 0 )
        break;
      if ( v74 == -1 )
      {
        auto_rc<DMMVIDPN const>::reset(&v76, 0LL);
        return 0LL;
      }
      Path = DMMVIDPNTOPOLOGY::FindPath(v16, v5, v74);
      if ( !Path )
      {
        v25 = WdLogNewEntry5_WdAssertion(v23);
        WdLogEvent5_WdAssertion(v25);
      }
      _InterlockedIncrement((volatile signed __int32 *)(*((_QWORD *)this + 9) + 32LL));
      v78 = *((_QWORD *)this + 9);
      v80 = DMMVIDPNTOPOLOGY::FindPath((DMMVIDPNTOPOLOGY *)(v78 + 96), v5, v74);
      v26 = v80;
      if ( v80 )
      {
        if ( !v73 )
        {
          v77 = 0LL;
          v27 = (DMMVIDPNPRESENTPATH *)operator new[](0xD0uLL, 0x4E506456u, PagedPool);
          if ( v27 )
            v27 = DMMVIDPNPRESENTPATH::DMMVIDPNPRESENTPATH(v27, v26);
          auto_ptr<DMMVIDPNPRESENTPATH>::reset(
            (__int64 (__fastcall ****)(_QWORD, __int64))&v77,
            (__int64 (__fastcall ***)(_QWORD, __int64))v27);
          v32 = (int *)v77;
          if ( !v77 )
          {
            v70 = WdLogNewEntry5_WdLowResource(v29, v28, v30, v31);
            WdLogEvent5_WdLowResource(v70);
            LODWORD(v15) = -1073741801;
LABEL_33:
            auto_ptr<DMMVIDPNPRESENTPATH>::~auto_ptr<DMMVIDPNPRESENTPATH>((__int64 (__fastcall ****)(_QWORD, __int64))&v77);
LABEL_35:
            auto_rc<DMMVIDPN const>::reset(&v78, 0LL);
            goto LABEL_39;
          }
          if ( !(**((unsigned __int8 (__fastcall ***)(char *))v77 + 7))((char *)v77 + 56) )
          {
            v69 = (_QWORD *)WdLogNewEntry5_WdDmmEvent(v33);
            v69[4] = v74;
            v69[3] = v5;
            v69[5] = v32[16];
            WdLogEvent5_WdDmmEvent(v69);
            LODWORD(v15) = v32[16];
            goto LABEL_33;
          }
          v34 = DMMVIDPNPRESENTPATH::PinContentRotation((DMMVIDPNPRESENTPATH *)v32, v75);
          LODWORD(v15) = v34;
          if ( v34 < 0 )
          {
            *(_QWORD *)(WdLogNewEntry5_WdTrace(v36, v35, v37, v38) + 24) = v34;
            goto LABEL_33;
          }
          memset(&v82, 0, sizeof(v82));
          DMMVIDPNPRESENTPATH::Serialize((DMMVIDPNPRESENTPATH *)v32, &v81);
          v39 = 2LL;
          v40 = &v82;
          v41 = &v81;
          do
          {
            v42 = *(_OWORD *)&v41->ContentTransformation.ScalingSupport;
            *(_OWORD *)&v40->VidPnPresentPathInfo.VidPnSourceId = *(_OWORD *)&v41->VidPnSourceId;
            v43 = *(_OWORD *)&v41->VisibleFromActiveTLOffset.cy;
            *(_OWORD *)&v40->VidPnPresentPathInfo.ContentTransformation.ScalingSupport = v42;
            VidPnTargetColorCoeffDynamicRanges = v41->VidPnTargetColorCoeffDynamicRanges;
            *(_OWORD *)&v40->VidPnPresentPathInfo.VisibleFromActiveTLOffset.cy = v43;
            v45 = *(_OWORD *)&v41->Content;
            v40->VidPnPresentPathInfo.VidPnTargetColorCoeffDynamicRanges = VidPnTargetColorCoeffDynamicRanges;
            v46 = *(_OWORD *)&v41->CopyProtection.OEMCopyProtection[4];
            *(_OWORD *)&v40->VidPnPresentPathInfo.Content = v45;
            v47 = *(_OWORD *)&v41->CopyProtection.OEMCopyProtection[20];
            *(_OWORD *)&v40->VidPnPresentPathInfo.CopyProtection.OEMCopyProtection[4] = v46;
            v48 = *(_OWORD *)&v41->CopyProtection.OEMCopyProtection[36];
            v41 = (struct _D3DKMDT_VIDPN_PRESENT_PATH *)((char *)v41 + 128);
            *(_OWORD *)&v40->VidPnPresentPathInfo.CopyProtection.OEMCopyProtection[20] = v47;
            v40 = (struct _DXGKARG_UPDATEACTIVEVIDPNPRESENTPATH *)((char *)v40 + 128);
            *(_OWORD *)&v40[-1].VidPnPresentPathInfo.GammaRamp.DataSize = v48;
            --v39;
          }
          while ( v39 );
          v49 = *(_OWORD *)&v41->ContentTransformation.ScalingSupport;
          *(_OWORD *)&v40->VidPnPresentPathInfo.VidPnSourceId = *(_OWORD *)&v41->VidPnSourceId;
          v50 = *(_OWORD *)&v41->VisibleFromActiveTLOffset.cy;
          *(_OWORD *)&v40->VidPnPresentPathInfo.ContentTransformation.ScalingSupport = v49;
          v51 = v41->VidPnTargetColorCoeffDynamicRanges;
          *(_OWORD *)&v40->VidPnPresentPathInfo.VisibleFromActiveTLOffset.cy = v50;
          v52 = *(_OWORD *)&v41->Content;
          v40->VidPnPresentPathInfo.VidPnTargetColorCoeffDynamicRanges = v51;
          v53 = *(_OWORD *)&v41->CopyProtection.OEMCopyProtection[4];
          v54 = *(_QWORD *)&v41->CopyProtection.OEMCopyProtection[20];
          *(_OWORD *)&v40->VidPnPresentPathInfo.Content = v52;
          *(_OWORD *)&v40->VidPnPresentPathInfo.CopyProtection.OEMCopyProtection[4] = v53;
          *(_QWORD *)&v40->VidPnPresentPathInfo.CopyProtection.OEMCopyProtection[20] = v54;
          v82.VidPnPresentPathInfo.ContentTransformation.Rotation = DMMVIDPNPRESENTPATH::GetContentRotationHw((DMMVIDPNPRESENTPATH *)v32);
          updated = ADAPTER_DISPLAY::DdiUpdateActiveVidPnPresentPath(*(ADAPTER_DISPLAY **)(v79 + 1984), &v82, v55);
          v15 = updated;
          if ( updated < 0 )
          {
            v68 = WdLogNewEntry5_WdError(v57);
            *(_QWORD *)(v68 + 24) = Path;
            *(_QWORD *)(v68 + 32) = v15;
            WdLogEvent5_WdError(v68);
            goto LABEL_33;
          }
          auto_ptr<DMMVIDPNPRESENTPATH>::~auto_ptr<DMMVIDPNPRESENTPATH>((__int64 (__fastcall ****)(_QWORD, __int64))&v77);
          v26 = v80;
        }
        v58 = DMMVIDPNPRESENTPATH::PinContentRotation(v26, v75);
        LODWORD(v15) = v58;
        if ( v58 < 0 )
        {
          *(_QWORD *)(WdLogNewEntry5_WdTrace(v60, v59, v61, v62) + 24) = v58;
          goto LABEL_35;
        }
      }
      auto_rc<DMMVIDPN const>::reset(&v78, 0LL);
      v63 = DMMVIDPNPRESENTPATH::PinContentRotation(Path, v75);
      LODWORD(v15) = v63;
      if ( v63 < 0 )
      {
        *(_QWORD *)(WdLogNewEntry5_WdTrace(v65, v64, v66, v67) + 24) = v63;
        goto LABEL_39;
      }
    }
    v72 = (_QWORD *)WdLogNewEntry5_WdTrace(v20, v19, v21, v22);
    v72[3] = i;
    v72[4] = v5;
    v72[5] = v16;
    v72[6] = v15;
  }
  else
  {
    v14 = WdLogNewEntry5_WdError(v13);
    *(_QWORD *)(v14 + 24) = v8;
    WdLogEvent5_WdError(v14);
    LODWORD(v15) = -1071774884;
  }
LABEL_39:
  auto_rc<DMMVIDPN const>::reset(&v76, 0LL);
  return (unsigned int)v15;
}
