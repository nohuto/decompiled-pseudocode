/*
 * XREFs of DmmUpdateCopyProtectionOnAllClientVidPnPathsFromSource @ 0x1C00C2644
 * Callers:
 *     ?SetCopyProtection@ADAPTER_DISPLAY@@QEAAJI@Z @ 0x1C009A734 (-SetCopyProtection@ADAPTER_DISPLAY@@QEAAJI@Z.c)
 * Callees:
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00031F4 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ??0?$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z @ 0x1C0004934 (--0-$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z.c)
 *     ?FindPath@DMMVIDPNTOPOLOGY@@QEBAPEAVDMMVIDPNPRESENTPATH@@II@Z @ 0x1C0004E38 (-FindPath@DMMVIDPNTOPOLOGY@@QEBAPEAVDMMVIDPNPRESENTPATH@@II@Z.c)
 *     ?reset@?$auto_rc@$$CBVDMMVIDPN@@@@QEAAXPEBVDMMVIDPN@@@Z @ 0x1C0004F74 (-reset@-$auto_rc@$$CBVDMMVIDPN@@@@QEAAXPEBVDMMVIDPN@@@Z.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0006CC0 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ??0DMMVIDPNPRESENTPATH@@QEAA@AEBV0@@Z @ 0x1C0009498 (--0DMMVIDPNPRESENTPATH@@QEAA@AEBV0@@Z.c)
 *     ?IsCopyProtectionSchemeSupported@DMMVIDPNPRESENTPATH@@QEAAEW4_D3DKMDT_VIDPN_PRESENT_PATH_COPYPROTECTION_TYPE@@@Z @ 0x1C0009620 (-IsCopyProtectionSchemeSupported@DMMVIDPNPRESENTPATH@@QEAAEW4_D3DKMDT_VIDPN_PRESENT_PATH_COPYPRO.c)
 *     ?SetCopyProtectionScheme@DMMVIDPNPRESENTPATH@@QEAAJW4_D3DKMDT_VIDPN_PRESENT_PATH_COPYPROTECTION_TYPE@@@Z @ 0x1C0009648 (-SetCopyProtectionScheme@DMMVIDPNPRESENTPATH@@QEAAJW4_D3DKMDT_VIDPN_PRESENT_PATH_COPYPROTECTION_.c)
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

__int64 __fastcall DmmUpdateCopyProtectionOnAllClientVidPnPathsFromSource(
        DXGADAPTER *a1,
        unsigned int a2,
        int a3,
        int a4)
{
  unsigned int v4; // edi
  __int64 v5; // r14
  __int64 v7; // r12
  __int64 v8; // rcx
  __int64 v9; // rax
  __int64 v10; // r13
  __int64 v11; // rax
  __int64 v12; // rdx
  __int64 v13; // rcx
  DMMVIDPNTOPOLOGY *v14; // rax
  __int64 v15; // rbx
  int v16; // eax
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // r9
  __int64 v21; // rsi
  __int64 v23; // rcx
  struct DMMVIDPNPRESENTPATH *v24; // rbx
  __int64 v25; // rsi
  __int64 v26; // rax
  __int64 v27; // rax
  __int64 v28; // rax
  __int64 v29; // rax
  __int64 v30; // rax
  __int64 v31; // rax
  __int64 v32; // rdx
  __int64 v33; // rcx
  __int64 v34; // r8
  __int64 v35; // r9
  __int64 v36; // rcx
  __int64 v37; // r13
  DMMVIDPNPRESENTPATH *v38; // rsi
  DMMVIDPNPRESENTPATH *v39; // rax
  DMMVIDPNPRESENTPATH *v40; // rax
  __int64 v41; // rdx
  __int64 v42; // rcx
  __int64 v43; // r8
  __int64 v44; // r9
  int *v45; // rbx
  __int64 v46; // rcx
  int v47; // eax
  __int64 v48; // rcx
  __int64 v49; // rdx
  struct _DXGKARG_UPDATEACTIVEVIDPNPRESENTPATH *v50; // rcx
  struct _D3DKMDT_VIDPN_PRESENT_PATH *v51; // rax
  __int128 v52; // xmm1
  __int128 v53; // xmm0
  D3DKMDT_COLOR_COEFF_DYNAMIC_RANGES VidPnTargetColorCoeffDynamicRanges; // xmm1
  __int128 v55; // xmm0
  __int128 v56; // xmm1
  __int128 v57; // xmm0
  __int128 v58; // xmm1
  DMMVIDPNPRESENTPATH *v59; // rbx
  __int128 v60; // xmm1
  __int128 v61; // xmm0
  D3DKMDT_COLOR_COEFF_DYNAMIC_RANGES v62; // xmm1
  __int128 v63; // xmm0
  __int128 v64; // xmm1
  __int64 v65; // rax
  D3DKMDT_VIDPN_PRESENT_PATH_ROTATION ContentRotationHw; // eax
  ADAPTER_DISPLAY *v67; // rcx
  __int64 v68; // r8
  int updated; // eax
  __int64 v70; // rcx
  int v71; // eax
  int v72; // eax
  __int64 v73; // rcx
  _QWORD *v74; // rcx
  _QWORD *v75; // rax
  _QWORD *v76; // rax
  __int64 v77; // rax
  _QWORD *v78; // rax
  _QWORD *v79; // rax
  __int64 v80; // rax
  _QWORD *v81; // rax
  DMMVIDPNPRESENTPATH *v83; // [rsp+28h] [rbp-D8h] BYREF
  DMMVIDPNPRESENTPATH *v84; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v85; // [rsp+38h] [rbp-C8h] BYREF
  DMMVIDPNTOPOLOGY *v86; // [rsp+40h] [rbp-C0h]
  __int64 v87; // [rsp+48h] [rbp-B8h]
  struct DMMVIDPNPRESENTPATH *Path; // [rsp+50h] [rbp-B0h]
  __int64 v89; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v90; // [rsp+60h] [rbp-A0h]
  __int64 v91; // [rsp+68h] [rbp-98h] BYREF
  struct _D3DKMDT_VIDPN_PRESENT_PATH v92; // [rsp+70h] [rbp-90h] BYREF
  struct _DXGKARG_UPDATEACTIVEVIDPNPRESENTPATH v93; // [rsp+1E0h] [rbp+E0h] BYREF

  v4 = 0;
  v5 = a3;
  v7 = a2;
  if ( !a1 )
  {
    v26 = WdLogNewEntry5_WdError(0LL);
    *(_QWORD *)(v26 + 24) = 0LL;
    goto LABEL_22;
  }
  if ( !DXGADAPTER::IsCoreResourceSharedOwner(a1) )
  {
    v27 = WdLogNewEntry5_WdAssertion(v8);
    WdLogEvent5_WdAssertion(v27);
  }
  v9 = *((_QWORD *)a1 + 248);
  if ( !v9 )
  {
    v26 = WdLogNewEntry5_WdError(v8);
    *(_QWORD *)(v26 + 24) = a1;
LABEL_22:
    WdLogEvent5_WdError(v26);
    return 3223191554LL;
  }
  v10 = *(_QWORD *)(v9 + 112);
  v90 = v10;
  if ( v10 )
  {
    EXCLUSIVEACCESS<VIDPN_MGR>::EXCLUSIVEACCESS<VIDPN_MGR>((__int64)&v91, v10);
    v11 = *(_QWORD *)(v10 + 80);
    v85 = 0LL;
    if ( v11 )
    {
      _InterlockedIncrement((volatile signed __int32 *)(v11 + 32));
      v12 = *(_QWORD *)(v10 + 80);
    }
    else
    {
      v12 = 0LL;
    }
    auto_rc<DMMVIDPN const>::reset(&v85, v12);
    if ( v85 )
    {
      v14 = (DMMVIDPNTOPOLOGY *)(v85 + 96);
      v15 = 0LL;
      v86 = (DMMVIDPNTOPOLOGY *)(v85 + 96);
      while ( 1 )
      {
        LODWORD(v83) = -1;
        v87 = v15;
        v16 = DMMVIDPNTOPOLOGY::EnumPathTargetsFromSource(v14, v7, v15, (unsigned int *)&v83);
        v21 = v16;
        if ( v16 < 0 )
        {
          v81 = (_QWORD *)WdLogNewEntry5_WdTrace(v18, v17, v19, v20);
          v81[3] = v15;
          v81[4] = v7;
          v81[5] = v86;
          v81[6] = v21;
          goto LABEL_60;
        }
        if ( (_DWORD)v83 == -1 )
        {
          auto_rc<DMMVIDPN const>::reset(&v85, 0LL);
          goto LABEL_13;
        }
        Path = DMMVIDPNTOPOLOGY::FindPath(v86, v7, (int)v83);
        v24 = Path;
        if ( !Path )
        {
          v30 = WdLogNewEntry5_WdAssertion(v23);
          WdLogEvent5_WdAssertion(v30);
        }
        v25 = *(_QWORD *)(*((_QWORD *)v24 + 12) + 96LL);
        if ( !v25 )
        {
          v31 = WdLogNewEntry5_WdAssertion(v23);
          WdLogEvent5_WdAssertion(v31);
        }
        if ( (_DWORD)v5 == 1 )
        {
          if ( *((_DWORD *)v24 + 43) != 2 )
            goto LABEL_20;
        }
        else if ( (_DWORD)v5 != 2
               || !*(_BYTE *)(v25 + 88)
               && !DMMVIDPNPRESENTPATH::IsCopyProtectionSchemeSupported(v24, D3DKMDT_VPPMT_MACROVISION_APSTRIGGER) )
        {
          goto LABEL_20;
        }
        if ( !DMMVIDPNPRESENTPATH::IsCopyProtectionSchemeSupported(
                v24,
                (enum _D3DKMDT_VIDPN_PRESENT_PATH_COPYPROTECTION_TYPE)v5) )
        {
          v80 = WdLogNewEntry5_WdWarning(v33, v32, v34, v35);
          WdLogEvent5_WdWarning(v80);
          goto LABEL_58;
        }
        _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(v10 + 72) + 32LL));
        v36 = *(_QWORD *)(v10 + 72);
        v37 = (unsigned int)v83;
        v89 = v36;
        v83 = DMMVIDPNTOPOLOGY::FindPath((DMMVIDPNTOPOLOGY *)(v36 + 96), v7, (int)v83);
        v38 = v83;
        if ( v83 )
        {
          v84 = 0LL;
          v39 = (DMMVIDPNPRESENTPATH *)operator new[](0xD0uLL, 0x4E506456u, PagedPool);
          if ( v39 )
            v40 = DMMVIDPNPRESENTPATH::DMMVIDPNPRESENTPATH(v39, v38);
          else
            v40 = 0LL;
          auto_ptr<DMMVIDPNPRESENTPATH>::reset(
            (__int64 (__fastcall ****)(_QWORD, __int64))&v84,
            (__int64 (__fastcall ***)(_QWORD, __int64))v40);
          v45 = (int *)v84;
          if ( !v84 )
          {
            v77 = WdLogNewEntry5_WdLowResource(v42, v41, v43, v44);
            WdLogEvent5_WdLowResource(v77);
            LODWORD(v21) = -1073741801;
            goto LABEL_54;
          }
          if ( !(**((unsigned __int8 (__fastcall ***)(char *))v84 + 7))((char *)v84 + 56) )
          {
            v76 = (_QWORD *)WdLogNewEntry5_WdDmmEvent(v46);
            v76[3] = v7;
            v76[4] = v37;
            v76[5] = v45[16];
            WdLogEvent5_WdDmmEvent(v76);
            LODWORD(v21) = v45[16];
            goto LABEL_54;
          }
          v47 = DMMVIDPNPRESENTPATH::SetCopyProtectionScheme(
                  (DMMVIDPNPRESENTPATH *)v45,
                  (enum _D3DKMDT_VIDPN_PRESENT_PATH_COPYPROTECTION_TYPE)v5);
          v21 = v47;
          if ( v47 == -1071774970 )
            goto LABEL_51;
          if ( v47 < 0 )
          {
LABEL_48:
            v74 = (_QWORD *)WdLogNewEntry5_WdError(v48);
            v74[3] = v5;
            v74[4] = v7;
            v74[5] = v37;
            v74[6] = v21;
            goto LABEL_50;
          }
          v45[44] = a4;
          memset(&v93, 0, sizeof(v93));
          DMMVIDPNPRESENTPATH::Serialize((DMMVIDPNPRESENTPATH *)v45, &v92);
          v49 = 2LL;
          v50 = &v93;
          v51 = &v92;
          do
          {
            v52 = *(_OWORD *)&v51->ContentTransformation.ScalingSupport;
            *(_OWORD *)&v50->VidPnPresentPathInfo.VidPnSourceId = *(_OWORD *)&v51->VidPnSourceId;
            v53 = *(_OWORD *)&v51->VisibleFromActiveTLOffset.cy;
            *(_OWORD *)&v50->VidPnPresentPathInfo.ContentTransformation.ScalingSupport = v52;
            VidPnTargetColorCoeffDynamicRanges = v51->VidPnTargetColorCoeffDynamicRanges;
            *(_OWORD *)&v50->VidPnPresentPathInfo.VisibleFromActiveTLOffset.cy = v53;
            v55 = *(_OWORD *)&v51->Content;
            v50->VidPnPresentPathInfo.VidPnTargetColorCoeffDynamicRanges = VidPnTargetColorCoeffDynamicRanges;
            v56 = *(_OWORD *)&v51->CopyProtection.OEMCopyProtection[4];
            *(_OWORD *)&v50->VidPnPresentPathInfo.Content = v55;
            v57 = *(_OWORD *)&v51->CopyProtection.OEMCopyProtection[20];
            *(_OWORD *)&v50->VidPnPresentPathInfo.CopyProtection.OEMCopyProtection[4] = v56;
            v58 = *(_OWORD *)&v51->CopyProtection.OEMCopyProtection[36];
            v51 = (struct _D3DKMDT_VIDPN_PRESENT_PATH *)((char *)v51 + 128);
            *(_OWORD *)&v50->VidPnPresentPathInfo.CopyProtection.OEMCopyProtection[20] = v57;
            v50 = (struct _DXGKARG_UPDATEACTIVEVIDPNPRESENTPATH *)((char *)v50 + 128);
            *(_OWORD *)&v50[-1].VidPnPresentPathInfo.GammaRamp.DataSize = v58;
            --v49;
          }
          while ( v49 );
          v59 = v83;
          v60 = *(_OWORD *)&v51->ContentTransformation.ScalingSupport;
          *(_OWORD *)&v50->VidPnPresentPathInfo.VidPnSourceId = *(_OWORD *)&v51->VidPnSourceId;
          v61 = *(_OWORD *)&v51->VisibleFromActiveTLOffset.cy;
          *(_OWORD *)&v50->VidPnPresentPathInfo.ContentTransformation.ScalingSupport = v60;
          v62 = v51->VidPnTargetColorCoeffDynamicRanges;
          *(_OWORD *)&v50->VidPnPresentPathInfo.VisibleFromActiveTLOffset.cy = v61;
          v63 = *(_OWORD *)&v51->Content;
          v50->VidPnPresentPathInfo.VidPnTargetColorCoeffDynamicRanges = v62;
          v64 = *(_OWORD *)&v51->CopyProtection.OEMCopyProtection[4];
          v65 = *(_QWORD *)&v51->CopyProtection.OEMCopyProtection[20];
          *(_OWORD *)&v50->VidPnPresentPathInfo.Content = v63;
          *(_OWORD *)&v50->VidPnPresentPathInfo.CopyProtection.OEMCopyProtection[4] = v64;
          *(_QWORD *)&v50->VidPnPresentPathInfo.CopyProtection.OEMCopyProtection[20] = v65;
          ContentRotationHw = (unsigned int)DMMVIDPNPRESENTPATH::GetContentRotationHw(v59);
          v67 = (ADAPTER_DISPLAY *)*((_QWORD *)a1 + 248);
          v93.VidPnPresentPathInfo.ContentTransformation.Rotation = ContentRotationHw;
          updated = ADAPTER_DISPLAY::DdiUpdateActiveVidPnPresentPath(v67, &v93, v68);
          v21 = updated;
          if ( updated < 0 )
          {
            v74 = (_QWORD *)WdLogNewEntry5_WdError(v70);
            v74[3] = Path;
            v74[4] = v21;
LABEL_50:
            WdLogEvent5_WdError(v74);
LABEL_54:
            auto_ptr<DMMVIDPNPRESENTPATH>::~auto_ptr<DMMVIDPNPRESENTPATH>((__int64 (__fastcall ****)(_QWORD, __int64))&v84);
            auto_rc<DMMVIDPN const>::reset(&v89, 0LL);
            goto LABEL_60;
          }
          v71 = DMMVIDPNPRESENTPATH::SetCopyProtectionScheme(
                  v59,
                  (enum _D3DKMDT_VIDPN_PRESENT_PATH_COPYPROTECTION_TYPE)v5);
          v21 = v71;
          if ( v71 == -1071774970 )
          {
LABEL_51:
            v75 = (_QWORD *)WdLogNewEntry5_WdDmmEvent(v48);
            v75[3] = v5;
            v75[4] = v7;
            v75[5] = v37;
            v75[6] = a1;
            WdLogEvent5_WdDmmEvent(v75);
            LODWORD(v21) = -1071774970;
            goto LABEL_54;
          }
          if ( v71 < 0 )
            goto LABEL_48;
          *((_DWORD *)v59 + 44) = a4;
          auto_ptr<DMMVIDPNPRESENTPATH>::~auto_ptr<DMMVIDPNPRESENTPATH>((__int64 (__fastcall ****)(_QWORD, __int64))&v84);
          v24 = Path;
        }
        auto_rc<DMMVIDPN const>::reset(&v89, 0LL);
        v72 = DMMVIDPNPRESENTPATH::SetCopyProtectionScheme(
                v24,
                (enum _D3DKMDT_VIDPN_PRESENT_PATH_COPYPROTECTION_TYPE)v5);
        v21 = v72;
        if ( v72 == -1071774970 )
        {
          v79 = (_QWORD *)WdLogNewEntry5_WdDmmEvent(v73);
          v79[3] = v5;
          v79[4] = v7;
          v79[5] = v37;
          v79[6] = a1;
          WdLogEvent5_WdDmmEvent(v79);
LABEL_58:
          LODWORD(v21) = -1071774970;
          goto LABEL_60;
        }
        if ( v72 < 0 )
        {
          v78 = (_QWORD *)WdLogNewEntry5_WdError(v73);
          v78[3] = v5;
          v78[4] = v7;
          v78[5] = v37;
          v78[6] = v21;
          WdLogEvent5_WdError(v78);
          goto LABEL_60;
        }
        v10 = v90;
        *((_DWORD *)v24 + 44) = a4;
LABEL_20:
        v14 = v86;
        v15 = v87 + 1;
      }
    }
    v29 = WdLogNewEntry5_WdError(v13);
    *(_QWORD *)(v29 + 24) = a1;
    WdLogEvent5_WdError(v29);
    LODWORD(v21) = -1071774884;
LABEL_60:
    auto_rc<DMMVIDPN const>::reset(&v85, 0LL);
    v4 = v21;
LABEL_13:
    DXGFASTMUTEX::Release(*(DXGFASTMUTEX **)(v91 + 40));
    return v4;
  }
  else
  {
    v28 = WdLogNewEntry5_WdError(v8);
    *(_QWORD *)(v28 + 24) = a1;
    WdLogEvent5_WdError(v28);
    return 3223192373LL;
  }
}
