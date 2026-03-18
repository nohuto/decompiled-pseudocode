/*
 * XREFs of DmmUpdateCopyProtectionOnAllClientVidPnPathsFromSource @ 0x1C005FA7C
 * Callers:
 *     ?SetCopyProtection@ADAPTER_DISPLAY@@QEAAJI@Z @ 0x1C0095C34 (-SetCopyProtection@ADAPTER_DISPLAY@@QEAAJI@Z.c)
 * Callees:
 *     ?reset@?$auto_rc@$$CBVDMMVIDPN@@@@QEAAXPEBVDMMVIDPN@@@Z @ 0x1C00012D4 (-reset@-$auto_rc@$$CBVDMMVIDPN@@@@QEAAXPEBVDMMVIDPN@@@Z.c)
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C000250C (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?FindPath@DMMVIDPNTOPOLOGY@@QEBAPEAVDMMVIDPNPRESENTPATH@@II@Z @ 0x1C0004338 (-FindPath@DMMVIDPNTOPOLOGY@@QEBAPEAVDMMVIDPNPRESENTPATH@@II@Z.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C00049CC (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ??0?$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z @ 0x1C0004E90 (--0-$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z.c)
 *     ?reset@?$auto_ptr@VDMMVIDPNPRESENTPATH@@@@QEAAXPEAVDMMVIDPNPRESENTPATH@@@Z @ 0x1C0008180 (-reset@-$auto_ptr@VDMMVIDPNPRESENTPATH@@@@QEAAXPEAVDMMVIDPNPRESENTPATH@@@Z.c)
 *     ??1?$auto_ptr@VDMMVIDPNPRESENTPATH@@@@QEAA@XZ @ 0x1C00081B0 (--1-$auto_ptr@VDMMVIDPNPRESENTPATH@@@@QEAA@XZ.c)
 *     ??0DMMVIDPNPRESENTPATH@@QEAA@AEBV0@@Z @ 0x1C000B100 (--0DMMVIDPNPRESENTPATH@@QEAA@AEBV0@@Z.c)
 *     ?IsCopyProtectionSchemeSupported@DMMVIDPNPRESENTPATH@@QEAAEW4_D3DKMDT_VIDPN_PRESENT_PATH_COPYPROTECTION_TYPE@@@Z @ 0x1C000DE90 (-IsCopyProtectionSchemeSupported@DMMVIDPNPRESENTPATH@@QEAAEW4_D3DKMDT_VIDPN_PRESENT_PATH_COPYPRO.c)
 *     ?SetCopyProtectionScheme@DMMVIDPNPRESENTPATH@@QEAAJW4_D3DKMDT_VIDPN_PRESENT_PATH_COPYPROTECTION_TYPE@@@Z @ 0x1C000DEB8 (-SetCopyProtectionScheme@DMMVIDPNPRESENTPATH@@QEAAJW4_D3DKMDT_VIDPN_PRESENT_PATH_COPYPROTECTION_.c)
 *     __security_check_cookie @ 0x1C000FC20 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0010930 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0010C80 (memset.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C008834C (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ?EnumPathTargetsFromSource@DMMVIDPNTOPOLOGY@@QEBAJI_KPEAI@Z @ 0x1C00898AC (-EnumPathTargetsFromSource@DMMVIDPNTOPOLOGY@@QEBAJI_KPEAI@Z.c)
 *     ?DdiUpdateActiveVidPnPresentPath@ADAPTER_DISPLAY@@QEAAJPEBU_DXGKARG_UPDATEACTIVEVIDPNPRESENTPATH@@@Z @ 0x1C00B54FC (-DdiUpdateActiveVidPnPresentPath@ADAPTER_DISPLAY@@QEAAJPEBU_DXGKARG_UPDATEACTIVEVIDPNPRESENTPATH.c)
 *     ?Serialize@DMMVIDPNPRESENTPATH@@QEBAXQEAU_D3DKMDT_VIDPN_PRESENT_PATH@@@Z @ 0x1C00B726C (-Serialize@DMMVIDPNPRESENTPATH@@QEBAXQEAU_D3DKMDT_VIDPN_PRESENT_PATH@@@Z.c)
 *     ?GetContentRotationHw@DMMVIDPNPRESENTPATH@@QEBA?AW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@XZ @ 0x1C00B7350 (-GetContentRotationHw@DMMVIDPNPRESENTPATH@@QEBA-AW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@XZ.c)
 */

__int64 __fastcall DmmUpdateCopyProtectionOnAllClientVidPnPathsFromSource(
        DXGADAPTER *a1,
        unsigned int a2,
        int a3,
        int a4)
{
  unsigned int v4; // edi
  __int64 v5; // r14
  __int64 v7; // r12
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // rax
  __int64 v13; // r13
  __int64 v14; // rax
  __int64 v15; // rdx
  __int64 v16; // rcx
  DMMVIDPNTOPOLOGY *v17; // rax
  unsigned __int64 v18; // rbx
  int v19; // eax
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r8
  __int64 v23; // r9
  __int64 v24; // rsi
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // r8
  __int64 v29; // r9
  struct DMMVIDPNPRESENTPATH *v30; // rbx
  __int64 v31; // rsi
  __int64 v32; // rax
  __int64 v33; // rax
  __int64 v34; // rax
  __int64 v35; // rax
  __int64 v36; // rax
  __int64 v37; // rax
  __int64 v38; // rdx
  __int64 v39; // rcx
  __int64 v40; // r8
  __int64 v41; // r9
  __int64 v42; // rcx
  __int64 v43; // r13
  DMMVIDPNPRESENTPATH *v44; // rsi
  DMMVIDPNPRESENTPATH *v45; // rax
  DMMVIDPNPRESENTPATH *v46; // rax
  __int64 v47; // rcx
  int *v48; // rbx
  int v49; // eax
  __int64 v50; // rcx
  __int64 v51; // rdx
  struct _DXGKARG_UPDATEACTIVEVIDPNPRESENTPATH *v52; // rcx
  struct _D3DKMDT_VIDPN_PRESENT_PATH *v53; // rax
  __int128 v54; // xmm1
  __int128 v55; // xmm0
  D3DKMDT_COLOR_COEFF_DYNAMIC_RANGES VidPnTargetColorCoeffDynamicRanges; // xmm1
  __int128 v57; // xmm0
  __int128 v58; // xmm1
  __int128 v59; // xmm0
  __int128 v60; // xmm1
  DMMVIDPNPRESENTPATH *v61; // rbx
  __int128 v62; // xmm1
  __int128 v63; // xmm0
  D3DKMDT_COLOR_COEFF_DYNAMIC_RANGES v64; // xmm1
  __int128 v65; // xmm0
  __int128 v66; // xmm1
  __int64 v67; // rax
  enum _D3DKMDT_VIDPN_PRESENT_PATH_ROTATION ContentRotationHw; // eax
  ADAPTER_DISPLAY *v69; // rcx
  int updated; // eax
  __int64 v71; // rcx
  int v72; // eax
  int v73; // eax
  __int64 v74; // rcx
  _QWORD *v75; // rcx
  _QWORD *v76; // rax
  _QWORD *v77; // rax
  __int64 v78; // rax
  _QWORD *v79; // rax
  _QWORD *v80; // rax
  __int64 v81; // rax
  _QWORD *v82; // rax
  DMMVIDPNPRESENTPATH *v84; // [rsp+28h] [rbp-D8h] BYREF
  DMMVIDPNPRESENTPATH *v85; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v86; // [rsp+38h] [rbp-C8h] BYREF
  DMMVIDPNTOPOLOGY *v87; // [rsp+40h] [rbp-C0h]
  unsigned __int64 v88; // [rsp+48h] [rbp-B8h]
  struct DMMVIDPNPRESENTPATH *Path; // [rsp+50h] [rbp-B0h]
  __int64 v90; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v91; // [rsp+60h] [rbp-A0h]
  __int64 v92; // [rsp+68h] [rbp-98h] BYREF
  struct _D3DKMDT_VIDPN_PRESENT_PATH v93; // [rsp+70h] [rbp-90h] BYREF
  struct _DXGKARG_UPDATEACTIVEVIDPNPRESENTPATH v94; // [rsp+1E0h] [rbp+E0h] BYREF

  v4 = 0;
  v5 = a3;
  v7 = a2;
  if ( !a1 )
  {
    v32 = WdLogNewEntry5_WdError(0LL);
    *(_QWORD *)(v32 + 24) = 0LL;
    goto LABEL_22;
  }
  if ( !DXGADAPTER::IsCoreResourceSharedOwner(a1) )
  {
    v33 = WdLogNewEntry5_WdAssertion(v9, v8, v10, v11);
    WdLogEvent5_WdAssertion(v33);
  }
  v12 = *((_QWORD *)a1 + 247);
  if ( !v12 )
  {
    v32 = WdLogNewEntry5_WdError(v9);
    *(_QWORD *)(v32 + 24) = a1;
LABEL_22:
    WdLogEvent5_WdError(v32);
    return 3223191554LL;
  }
  v13 = *(_QWORD *)(v12 + 88);
  v91 = v13;
  if ( v13 )
  {
    EXCLUSIVEACCESS<VIDPN_MGR>::EXCLUSIVEACCESS<VIDPN_MGR>((__int64)&v92, v13);
    v14 = *(_QWORD *)(v13 + 80);
    v86 = 0LL;
    if ( v14 )
    {
      _InterlockedIncrement((volatile signed __int32 *)(v14 + 32));
      v15 = *(_QWORD *)(v13 + 80);
    }
    else
    {
      v15 = 0LL;
    }
    auto_rc<DMMVIDPN const>::reset(&v86, v15);
    if ( v86 )
    {
      v17 = (DMMVIDPNTOPOLOGY *)(v86 + 96);
      v18 = 0LL;
      v87 = (DMMVIDPNTOPOLOGY *)(v86 + 96);
      while ( 1 )
      {
        LODWORD(v84) = -1;
        v88 = v18;
        v19 = DMMVIDPNTOPOLOGY::EnumPathTargetsFromSource(v17, v7, v18, (unsigned int *)&v84);
        v24 = v19;
        if ( v19 < 0 )
        {
          v82 = (_QWORD *)WdLogNewEntry5_WdTrace(v21, v20, v22, v23);
          v82[3] = v18;
          v82[4] = v7;
          v82[5] = v87;
          v82[6] = v24;
          goto LABEL_60;
        }
        if ( (_DWORD)v84 == -1 )
        {
          auto_rc<DMMVIDPN const>::reset(&v86, 0LL);
          goto LABEL_13;
        }
        Path = DMMVIDPNTOPOLOGY::FindPath(v87, v7, (int)v84);
        v30 = Path;
        if ( !Path )
        {
          v36 = WdLogNewEntry5_WdAssertion(v27, v26, v28, v29);
          WdLogEvent5_WdAssertion(v36);
        }
        v31 = *(_QWORD *)(*((_QWORD *)v30 + 12) + 96LL);
        if ( !v31 )
        {
          v37 = WdLogNewEntry5_WdAssertion(v27, v26, v28, v29);
          WdLogEvent5_WdAssertion(v37);
        }
        if ( (_DWORD)v5 == 1 )
        {
          if ( *((_DWORD *)v30 + 43) != 2 )
            goto LABEL_20;
        }
        else if ( (_DWORD)v5 != 2
               || !*(_BYTE *)(v31 + 88)
               && !DMMVIDPNPRESENTPATH::IsCopyProtectionSchemeSupported(v30, D3DKMDT_VPPMT_MACROVISION_APSTRIGGER) )
        {
          goto LABEL_20;
        }
        if ( !DMMVIDPNPRESENTPATH::IsCopyProtectionSchemeSupported(
                v30,
                (enum _D3DKMDT_VIDPN_PRESENT_PATH_COPYPROTECTION_TYPE)v5) )
        {
          v81 = WdLogNewEntry5_WdWarning(v39, v38, v40, v41);
          WdLogEvent5_WdWarning(v81);
          goto LABEL_58;
        }
        _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(v13 + 72) + 32LL));
        v42 = *(_QWORD *)(v13 + 72);
        v43 = (unsigned int)v84;
        v90 = v42;
        v84 = DMMVIDPNTOPOLOGY::FindPath((DMMVIDPNTOPOLOGY *)(v42 + 96), v7, (int)v84);
        v44 = v84;
        if ( v84 )
        {
          v85 = 0LL;
          v45 = (DMMVIDPNPRESENTPATH *)operator new[](0xD0uLL, 0x4E506456u, PagedPool);
          if ( v45 )
            v46 = DMMVIDPNPRESENTPATH::DMMVIDPNPRESENTPATH(v45, v44);
          else
            v46 = 0LL;
          auto_ptr<DMMVIDPNPRESENTPATH>::reset(
            (__int64 (__fastcall ****)(_QWORD, __int64))&v85,
            (__int64 (__fastcall ***)(_QWORD, __int64))v46);
          v48 = (int *)v85;
          if ( !v85 )
          {
            v78 = WdLogNewEntry5_WdLowResource(v47);
            WdLogEvent5_WdLowResource(v78);
            LODWORD(v24) = -1073741801;
            goto LABEL_54;
          }
          if ( !(**((unsigned __int8 (__fastcall ***)(char *))v85 + 7))((char *)v85 + 56) )
          {
            v77 = (_QWORD *)WdLogNewEntry5_WdDmmEvent();
            v77[3] = v7;
            v77[4] = v43;
            v77[5] = v48[16];
            WdLogEvent5_WdDmmEvent(v77);
            LODWORD(v24) = v48[16];
            goto LABEL_54;
          }
          v49 = DMMVIDPNPRESENTPATH::SetCopyProtectionScheme(
                  (DMMVIDPNPRESENTPATH *)v48,
                  (enum _D3DKMDT_VIDPN_PRESENT_PATH_COPYPROTECTION_TYPE)v5);
          v24 = v49;
          if ( v49 == -1071774970 )
            goto LABEL_51;
          if ( v49 < 0 )
          {
LABEL_48:
            v75 = (_QWORD *)WdLogNewEntry5_WdError(v50);
            v75[3] = v5;
            v75[4] = v7;
            v75[5] = v43;
            v75[6] = v24;
            goto LABEL_50;
          }
          v48[44] = a4;
          memset(&v94, 0, sizeof(v94));
          DMMVIDPNPRESENTPATH::Serialize((DMMVIDPNPRESENTPATH *)v48, &v93);
          v51 = 2LL;
          v52 = &v94;
          v53 = &v93;
          do
          {
            v54 = *(_OWORD *)&v53->ContentTransformation.ScalingSupport;
            *(_OWORD *)&v52->VidPnPresentPathInfo.VidPnSourceId = *(_OWORD *)&v53->VidPnSourceId;
            v55 = *(_OWORD *)&v53->VisibleFromActiveTLOffset.cy;
            *(_OWORD *)&v52->VidPnPresentPathInfo.ContentTransformation.ScalingSupport = v54;
            VidPnTargetColorCoeffDynamicRanges = v53->VidPnTargetColorCoeffDynamicRanges;
            *(_OWORD *)&v52->VidPnPresentPathInfo.VisibleFromActiveTLOffset.cy = v55;
            v57 = *(_OWORD *)&v53->Content;
            v52->VidPnPresentPathInfo.VidPnTargetColorCoeffDynamicRanges = VidPnTargetColorCoeffDynamicRanges;
            v58 = *(_OWORD *)&v53->CopyProtection.OEMCopyProtection[4];
            *(_OWORD *)&v52->VidPnPresentPathInfo.Content = v57;
            v59 = *(_OWORD *)&v53->CopyProtection.OEMCopyProtection[20];
            *(_OWORD *)&v52->VidPnPresentPathInfo.CopyProtection.OEMCopyProtection[4] = v58;
            v60 = *(_OWORD *)&v53->CopyProtection.OEMCopyProtection[36];
            v53 = (struct _D3DKMDT_VIDPN_PRESENT_PATH *)((char *)v53 + 128);
            *(_OWORD *)&v52->VidPnPresentPathInfo.CopyProtection.OEMCopyProtection[20] = v59;
            v52 = (struct _DXGKARG_UPDATEACTIVEVIDPNPRESENTPATH *)((char *)v52 + 128);
            *(_OWORD *)&v52[-1].VidPnPresentPathInfo.GammaRamp.DataSize = v60;
            --v51;
          }
          while ( v51 );
          v61 = v84;
          v62 = *(_OWORD *)&v53->ContentTransformation.ScalingSupport;
          *(_OWORD *)&v52->VidPnPresentPathInfo.VidPnSourceId = *(_OWORD *)&v53->VidPnSourceId;
          v63 = *(_OWORD *)&v53->VisibleFromActiveTLOffset.cy;
          *(_OWORD *)&v52->VidPnPresentPathInfo.ContentTransformation.ScalingSupport = v62;
          v64 = v53->VidPnTargetColorCoeffDynamicRanges;
          *(_OWORD *)&v52->VidPnPresentPathInfo.VisibleFromActiveTLOffset.cy = v63;
          v65 = *(_OWORD *)&v53->Content;
          v52->VidPnPresentPathInfo.VidPnTargetColorCoeffDynamicRanges = v64;
          v66 = *(_OWORD *)&v53->CopyProtection.OEMCopyProtection[4];
          v67 = *(_QWORD *)&v53->CopyProtection.OEMCopyProtection[20];
          *(_OWORD *)&v52->VidPnPresentPathInfo.Content = v65;
          *(_OWORD *)&v52->VidPnPresentPathInfo.CopyProtection.OEMCopyProtection[4] = v66;
          *(_QWORD *)&v52->VidPnPresentPathInfo.CopyProtection.OEMCopyProtection[20] = v67;
          ContentRotationHw = DMMVIDPNPRESENTPATH::GetContentRotationHw(v61);
          v69 = (ADAPTER_DISPLAY *)*((_QWORD *)a1 + 247);
          v94.VidPnPresentPathInfo.ContentTransformation.Rotation = ContentRotationHw;
          updated = ADAPTER_DISPLAY::DdiUpdateActiveVidPnPresentPath(v69, &v94);
          v24 = updated;
          if ( updated < 0 )
          {
            v75 = (_QWORD *)WdLogNewEntry5_WdError(v71);
            v75[3] = Path;
            v75[4] = v24;
LABEL_50:
            WdLogEvent5_WdError(v75);
LABEL_54:
            auto_ptr<DMMVIDPNPRESENTPATH>::~auto_ptr<DMMVIDPNPRESENTPATH>((__int64 (__fastcall ****)(_QWORD, __int64))&v85);
            auto_rc<DMMVIDPN const>::reset(&v90, 0LL);
            goto LABEL_60;
          }
          v72 = DMMVIDPNPRESENTPATH::SetCopyProtectionScheme(
                  v61,
                  (enum _D3DKMDT_VIDPN_PRESENT_PATH_COPYPROTECTION_TYPE)v5);
          v24 = v72;
          if ( v72 == -1071774970 )
          {
LABEL_51:
            v76 = (_QWORD *)WdLogNewEntry5_WdDmmEvent();
            v76[3] = v5;
            v76[4] = v7;
            v76[5] = v43;
            v76[6] = a1;
            WdLogEvent5_WdDmmEvent(v76);
            LODWORD(v24) = -1071774970;
            goto LABEL_54;
          }
          if ( v72 < 0 )
            goto LABEL_48;
          *((_DWORD *)v61 + 44) = a4;
          auto_ptr<DMMVIDPNPRESENTPATH>::~auto_ptr<DMMVIDPNPRESENTPATH>((__int64 (__fastcall ****)(_QWORD, __int64))&v85);
          v30 = Path;
        }
        auto_rc<DMMVIDPN const>::reset(&v90, 0LL);
        v73 = DMMVIDPNPRESENTPATH::SetCopyProtectionScheme(
                v30,
                (enum _D3DKMDT_VIDPN_PRESENT_PATH_COPYPROTECTION_TYPE)v5);
        v24 = v73;
        if ( v73 == -1071774970 )
        {
          v80 = (_QWORD *)WdLogNewEntry5_WdDmmEvent();
          v80[3] = v5;
          v80[4] = v7;
          v80[5] = v43;
          v80[6] = a1;
          WdLogEvent5_WdDmmEvent(v80);
LABEL_58:
          LODWORD(v24) = -1071774970;
          goto LABEL_60;
        }
        if ( v73 < 0 )
        {
          v79 = (_QWORD *)WdLogNewEntry5_WdError(v74);
          v79[3] = v5;
          v79[4] = v7;
          v79[5] = v43;
          v79[6] = v24;
          WdLogEvent5_WdError(v79);
          goto LABEL_60;
        }
        v13 = v91;
        *((_DWORD *)v30 + 44) = a4;
LABEL_20:
        v17 = v87;
        v18 = v88 + 1;
      }
    }
    v35 = WdLogNewEntry5_WdError(v16);
    *(_QWORD *)(v35 + 24) = a1;
    WdLogEvent5_WdError(v35);
    LODWORD(v24) = -1071774884;
LABEL_60:
    auto_rc<DMMVIDPN const>::reset(&v86, 0LL);
    v4 = v24;
LABEL_13:
    DXGFASTMUTEX::Release(*(struct _KTHREAD ***)(v92 + 40));
    return v4;
  }
  else
  {
    v34 = WdLogNewEntry5_WdError(v9);
    *(_QWORD *)(v34 + 24) = a1;
    WdLogEvent5_WdError(v34);
    return 3223192373LL;
  }
}
