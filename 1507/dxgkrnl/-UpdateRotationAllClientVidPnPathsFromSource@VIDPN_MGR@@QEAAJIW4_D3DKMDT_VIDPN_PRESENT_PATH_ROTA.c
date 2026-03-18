/*
 * XREFs of ?UpdateRotationAllClientVidPnPathsFromSource@VIDPN_MGR@@QEAAJIW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@@Z @ 0x1C0174978
 * Callers:
 *     ?DmmCommitVidPnOnAdapter@@YAJPEAVDXGDEVICE@@PEAUD3DKMDT_HVIDPN__@@KPEAK22PEAEQEAJPEAVCOREDEVICEACCESS@@@Z @ 0x1C00A9BAC (-DmmCommitVidPnOnAdapter@@YAJPEAVDXGDEVICE@@PEAUD3DKMDT_HVIDPN__@@KPEAK22PEAEQEAJPEAVCOREDEVICEA.c)
 * Callees:
 *     ?reset@?$auto_rc@$$CBVDMMVIDPN@@@@QEAAXPEBVDMMVIDPN@@@Z @ 0x1C00012D4 (-reset@-$auto_rc@$$CBVDMMVIDPN@@@@QEAAXPEBVDMMVIDPN@@@Z.c)
 *     ?FindPath@DMMVIDPNTOPOLOGY@@QEBAPEAVDMMVIDPNPRESENTPATH@@II@Z @ 0x1C0004338 (-FindPath@DMMVIDPNTOPOLOGY@@QEBAPEAVDMMVIDPNPRESENTPATH@@II@Z.c)
 *     ?PinContentRotation@DMMVIDPNPRESENTPATH@@QEAAJW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@@Z @ 0x1C000620C (-PinContentRotation@DMMVIDPNPRESENTPATH@@QEAAJW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@@Z.c)
 *     ?reset@?$auto_ptr@VDMMVIDPNPRESENTPATH@@@@QEAAXPEAVDMMVIDPNPRESENTPATH@@@Z @ 0x1C0008180 (-reset@-$auto_ptr@VDMMVIDPNPRESENTPATH@@@@QEAAXPEAVDMMVIDPNPRESENTPATH@@@Z.c)
 *     ??1?$auto_ptr@VDMMVIDPNPRESENTPATH@@@@QEAA@XZ @ 0x1C00081B0 (--1-$auto_ptr@VDMMVIDPNPRESENTPATH@@@@QEAA@XZ.c)
 *     ??0DMMVIDPNPRESENTPATH@@QEAA@AEBV0@@Z @ 0x1C000B100 (--0DMMVIDPNPRESENTPATH@@QEAA@AEBV0@@Z.c)
 *     __security_check_cookie @ 0x1C000FC20 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0010930 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0010C80 (memset.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C008834C (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ?EnumPathTargetsFromSource@DMMVIDPNTOPOLOGY@@QEBAJI_KPEAI@Z @ 0x1C00898AC (-EnumPathTargetsFromSource@DMMVIDPNTOPOLOGY@@QEBAJI_KPEAI@Z.c)
 *     ?DdiUpdateActiveVidPnPresentPath@ADAPTER_DISPLAY@@QEAAJPEBU_DXGKARG_UPDATEACTIVEVIDPNPRESENTPATH@@@Z @ 0x1C00B54FC (-DdiUpdateActiveVidPnPresentPath@ADAPTER_DISPLAY@@QEAAJPEBU_DXGKARG_UPDATEACTIVEVIDPNPRESENTPATH.c)
 *     ?Serialize@DMMVIDPNPRESENTPATH@@QEBAXQEAU_D3DKMDT_VIDPN_PRESENT_PATH@@@Z @ 0x1C00B726C (-Serialize@DMMVIDPNPRESENTPATH@@QEBAXQEAU_D3DKMDT_VIDPN_PRESENT_PATH@@@Z.c)
 *     ?GetContentRotationHw@DMMVIDPNPRESENTPATH@@QEBA?AW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@XZ @ 0x1C00B7350 (-GetContentRotationHw@DMMVIDPNPRESENTPATH@@QEBA-AW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@XZ.c)
 */

__int64 __fastcall VIDPN_MGR::UpdateRotationAllClientVidPnPathsFromSource(
        VIDPN_MGR *this,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  bool v4; // zf
  __int64 v6; // r14
  __int64 v7; // rax
  __int64 v8; // rax
  __int64 v9; // rbx
  __int64 v10; // rax
  __int64 v11; // rax
  __int64 v12; // rax
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // rax
  __int64 v16; // rdi
  DMMVIDPNTOPOLOGY *v17; // r13
  __int64 i; // r15
  int v19; // eax
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r8
  __int64 v23; // r9
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // r8
  __int64 v27; // r9
  DMMVIDPNPRESENTPATH *Path; // r12
  __int64 v29; // rax
  const struct DMMVIDPNPRESENTPATH *v30; // rbx
  DMMVIDPNPRESENTPATH *v31; // rax
  __int64 v32; // rcx
  int *v33; // rbx
  __int64 v34; // rcx
  int v35; // eax
  __int64 v36; // rdx
  __int64 v37; // rcx
  __int64 v38; // r8
  __int64 v39; // r9
  __int64 v40; // r9
  __int64 v41; // rdx
  struct _DXGKARG_UPDATEACTIVEVIDPNPRESENTPATH *v42; // rcx
  struct _D3DKMDT_VIDPN_PRESENT_PATH *v43; // rax
  __int128 v44; // xmm1
  __int128 v45; // xmm0
  D3DKMDT_COLOR_COEFF_DYNAMIC_RANGES VidPnTargetColorCoeffDynamicRanges; // xmm1
  __int128 v47; // xmm0
  __int128 v48; // xmm1
  __int128 v49; // xmm0
  __int128 v50; // xmm1
  __int128 v51; // xmm1
  __int128 v52; // xmm0
  D3DKMDT_COLOR_COEFF_DYNAMIC_RANGES v53; // xmm1
  __int128 v54; // xmm0
  __int128 v55; // xmm1
  __int64 v56; // rax
  __int64 v57; // r8
  int updated; // eax
  __int64 v59; // rcx
  int v60; // eax
  __int64 v61; // rdx
  __int64 v62; // rcx
  __int64 v63; // r8
  __int64 v64; // r9
  int v65; // eax
  __int64 v66; // rdx
  __int64 v67; // rcx
  __int64 v68; // r8
  __int64 v69; // r9
  __int64 v70; // rax
  _QWORD *v71; // rax
  __int64 v72; // rax
  _QWORD *v74; // rax
  char v75; // [rsp+20h] [rbp-E0h]
  unsigned int v76; // [rsp+24h] [rbp-DCh] BYREF
  enum _D3DKMDT_VIDPN_PRESENT_PATH_ROTATION v77; // [rsp+28h] [rbp-D8h]
  __int64 v78; // [rsp+30h] [rbp-D0h] BYREF
  DMMVIDPNPRESENTPATH *v79; // [rsp+38h] [rbp-C8h] BYREF
  __int64 v80; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v81; // [rsp+48h] [rbp-B8h]
  struct DMMVIDPNPRESENTPATH *v82; // [rsp+50h] [rbp-B0h]
  struct _D3DKMDT_VIDPN_PRESENT_PATH v83; // [rsp+60h] [rbp-A0h] BYREF
  struct _DXGKARG_UPDATEACTIVEVIDPNPRESENTPATH v84; // [rsp+1D0h] [rbp+D0h] BYREF

  v4 = *((_QWORD *)this + 1) == 0LL;
  v77 = (int)a3;
  v6 = (unsigned int)a2;
  if ( v4 )
  {
    v7 = WdLogNewEntry5_WdAssertion(this, a2, a3, a4);
    WdLogEvent5_WdAssertion(v7);
  }
  v8 = *((_QWORD *)this + 1);
  v9 = *(_QWORD *)(v8 + 16);
  v81 = v9;
  if ( !v8 )
  {
    v10 = WdLogNewEntry5_WdAssertion(this, a2, a3, a4);
    WdLogEvent5_WdAssertion(v10);
  }
  v11 = *((_QWORD *)this + 1);
  v78 = 0LL;
  v75 = *(_BYTE *)(v11 + 133);
  v12 = *((_QWORD *)this + 10);
  if ( v12 )
  {
    _InterlockedIncrement((volatile signed __int32 *)(v12 + 32));
    v13 = *((_QWORD *)this + 10);
  }
  else
  {
    v13 = 0LL;
  }
  auto_rc<DMMVIDPN const>::reset(&v78, v13);
  if ( v78 )
  {
    v17 = (DMMVIDPNTOPOLOGY *)(v78 + 96);
    for ( i = 0LL; ; ++i )
    {
      v76 = -1;
      v19 = DMMVIDPNTOPOLOGY::EnumPathTargetsFromSource(v17, (unsigned int)v6, i, &v76);
      v16 = v19;
      if ( v19 < 0 )
        break;
      if ( v76 == -1 )
      {
        auto_rc<DMMVIDPN const>::reset(&v78, 0LL);
        return 0LL;
      }
      Path = DMMVIDPNTOPOLOGY::FindPath(v17, v6, v76);
      if ( !Path )
      {
        v29 = WdLogNewEntry5_WdAssertion(v25, v24, v26, v27);
        WdLogEvent5_WdAssertion(v29);
      }
      _InterlockedIncrement((volatile signed __int32 *)(*((_QWORD *)this + 9) + 32LL));
      v80 = *((_QWORD *)this + 9);
      v82 = DMMVIDPNTOPOLOGY::FindPath((DMMVIDPNTOPOLOGY *)(v80 + 96), v6, v76);
      v30 = v82;
      if ( v82 )
      {
        if ( !v75 )
        {
          v79 = 0LL;
          v31 = (DMMVIDPNPRESENTPATH *)operator new[](0xD0uLL, 0x4E506456u, PagedPool);
          if ( v31 )
            v31 = DMMVIDPNPRESENTPATH::DMMVIDPNPRESENTPATH(v31, v30);
          auto_ptr<DMMVIDPNPRESENTPATH>::reset(
            (__int64 (__fastcall ****)(_QWORD, __int64))&v79,
            (__int64 (__fastcall ***)(_QWORD, __int64))v31);
          v33 = (int *)v79;
          if ( !v79 )
          {
            v72 = WdLogNewEntry5_WdLowResource(v32);
            WdLogEvent5_WdLowResource(v72);
            LODWORD(v16) = -1073741801;
LABEL_33:
            auto_ptr<DMMVIDPNPRESENTPATH>::~auto_ptr<DMMVIDPNPRESENTPATH>((__int64 (__fastcall ****)(_QWORD, __int64))&v79);
LABEL_35:
            auto_rc<DMMVIDPN const>::reset(&v80, 0LL);
            goto LABEL_39;
          }
          if ( !(**((unsigned __int8 (__fastcall ***)(char *))v79 + 7))((char *)v79 + 56) )
          {
            v71 = (_QWORD *)WdLogNewEntry5_WdDmmEvent(v34);
            v71[4] = v76;
            v71[3] = v6;
            v71[5] = v33[16];
            WdLogEvent5_WdDmmEvent(v71);
            LODWORD(v16) = v33[16];
            goto LABEL_33;
          }
          v35 = DMMVIDPNPRESENTPATH::PinContentRotation((DMMVIDPNPRESENTPATH *)v33, v77);
          LODWORD(v16) = v35;
          if ( v35 < 0 )
          {
            *(_QWORD *)(WdLogNewEntry5_WdTrace(v37, v36, v38, v39) + 24) = v35;
            goto LABEL_33;
          }
          memset(&v84, 0, sizeof(v84));
          DMMVIDPNPRESENTPATH::Serialize((DMMVIDPNPRESENTPATH *)v33, &v83);
          v41 = 2LL;
          v42 = &v84;
          v43 = &v83;
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
            v43 = (struct _D3DKMDT_VIDPN_PRESENT_PATH *)((char *)v43 + 128);
            *(_OWORD *)&v42->VidPnPresentPathInfo.CopyProtection.OEMCopyProtection[20] = v49;
            v42 = (struct _DXGKARG_UPDATEACTIVEVIDPNPRESENTPATH *)((char *)v42 + 128);
            *(_OWORD *)&v42[-1].VidPnPresentPathInfo.GammaRamp.DataSize = v50;
            --v41;
          }
          while ( v41 );
          v51 = *(_OWORD *)&v43->ContentTransformation.ScalingSupport;
          *(_OWORD *)&v42->VidPnPresentPathInfo.VidPnSourceId = *(_OWORD *)&v43->VidPnSourceId;
          v52 = *(_OWORD *)&v43->VisibleFromActiveTLOffset.cy;
          *(_OWORD *)&v42->VidPnPresentPathInfo.ContentTransformation.ScalingSupport = v51;
          v53 = v43->VidPnTargetColorCoeffDynamicRanges;
          *(_OWORD *)&v42->VidPnPresentPathInfo.VisibleFromActiveTLOffset.cy = v52;
          v54 = *(_OWORD *)&v43->Content;
          v42->VidPnPresentPathInfo.VidPnTargetColorCoeffDynamicRanges = v53;
          v55 = *(_OWORD *)&v43->CopyProtection.OEMCopyProtection[4];
          v56 = *(_QWORD *)&v43->CopyProtection.OEMCopyProtection[20];
          *(_OWORD *)&v42->VidPnPresentPathInfo.Content = v54;
          *(_OWORD *)&v42->VidPnPresentPathInfo.CopyProtection.OEMCopyProtection[4] = v55;
          *(_QWORD *)&v42->VidPnPresentPathInfo.CopyProtection.OEMCopyProtection[20] = v56;
          v84.VidPnPresentPathInfo.ContentTransformation.Rotation = DMMVIDPNPRESENTPATH::GetContentRotationHw(
                                                                      (DMMVIDPNPRESENTPATH *)v33,
                                                                      0LL,
                                                                      128LL,
                                                                      v40);
          updated = ADAPTER_DISPLAY::DdiUpdateActiveVidPnPresentPath(*(ADAPTER_DISPLAY **)(v81 + 1976), &v84, v57);
          v16 = updated;
          if ( updated < 0 )
          {
            v70 = WdLogNewEntry5_WdError(v59);
            *(_QWORD *)(v70 + 24) = Path;
            *(_QWORD *)(v70 + 32) = v16;
            WdLogEvent5_WdError(v70);
            goto LABEL_33;
          }
          auto_ptr<DMMVIDPNPRESENTPATH>::~auto_ptr<DMMVIDPNPRESENTPATH>((__int64 (__fastcall ****)(_QWORD, __int64))&v79);
          v30 = v82;
        }
        v60 = DMMVIDPNPRESENTPATH::PinContentRotation(v30, v77);
        LODWORD(v16) = v60;
        if ( v60 < 0 )
        {
          *(_QWORD *)(WdLogNewEntry5_WdTrace(v62, v61, v63, v64) + 24) = v60;
          goto LABEL_35;
        }
      }
      auto_rc<DMMVIDPN const>::reset(&v80, 0LL);
      v65 = DMMVIDPNPRESENTPATH::PinContentRotation(Path, v77);
      LODWORD(v16) = v65;
      if ( v65 < 0 )
      {
        *(_QWORD *)(WdLogNewEntry5_WdTrace(v67, v66, v68, v69) + 24) = v65;
        goto LABEL_39;
      }
    }
    v74 = (_QWORD *)WdLogNewEntry5_WdTrace(v21, v20, v22, v23);
    v74[3] = i;
    v74[4] = v6;
    v74[5] = v17;
    v74[6] = v16;
  }
  else
  {
    v15 = WdLogNewEntry5_WdError(v14);
    *(_QWORD *)(v15 + 24) = v9;
    WdLogEvent5_WdError(v15);
    LODWORD(v16) = -1071774884;
  }
LABEL_39:
  auto_rc<DMMVIDPN const>::reset(&v78, 0LL);
  return (unsigned int)v16;
}
