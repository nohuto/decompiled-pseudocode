/*
 * XREFs of DmmUpdateCopyProtectionOnAllClientVidPnPathsFromSource @ 0x1C00B9E40
 * Callers:
 *     ?SetCopyProtection@ADAPTER_DISPLAY@@QEAAJI@Z @ 0x1C008717C (-SetCopyProtection@ADAPTER_DISPLAY@@QEAAJI@Z.c)
 * Callees:
 *     ??0?$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z @ 0x1C00019D8 (--0-$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z.c)
 *     ?FindPath@DMMVIDPNTOPOLOGY@@QEBAPEAVDMMVIDPNPRESENTPATH@@II@Z @ 0x1C00047D8 (-FindPath@DMMVIDPNTOPOLOGY@@QEBAPEAVDMMVIDPNPRESENTPATH@@II@Z.c)
 *     ??0DMMVIDPNPRESENTPATH@@QEAA@AEBV0@@Z @ 0x1C000537C (--0DMMVIDPNPRESENTPATH@@QEAA@AEBV0@@Z.c)
 *     ?IsCopyProtectionSchemeSupported@DMMVIDPNPRESENTPATH@@QEAAEW4_D3DKMDT_VIDPN_PRESENT_PATH_COPYPROTECTION_TYPE@@@Z @ 0x1C0005504 (-IsCopyProtectionSchemeSupported@DMMVIDPNPRESENTPATH@@QEAAEW4_D3DKMDT_VIDPN_PRESENT_PATH_COPYPRO.c)
 *     ?SetCopyProtectionScheme@DMMVIDPNPRESENTPATH@@QEAAJW4_D3DKMDT_VIDPN_PRESENT_PATH_COPYPROTECTION_TYPE@@@Z @ 0x1C000552C (-SetCopyProtectionScheme@DMMVIDPNPRESENTPATH@@QEAAJW4_D3DKMDT_VIDPN_PRESENT_PATH_COPYPROTECTION_.c)
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
  __int64 v22; // rcx
  struct DMMVIDPNPRESENTPATH *v23; // rbx
  __int64 v24; // rsi
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
  __int64 v41; // rcx
  int *v42; // rbx
  __int64 v43; // rcx
  int v44; // eax
  __int64 v45; // rcx
  __int64 v46; // rdx
  struct _DXGKARG_UPDATEACTIVEVIDPNPRESENTPATH *v47; // rcx
  struct _D3DKMDT_VIDPN_PRESENT_PATH *v48; // rax
  __int128 v49; // xmm1
  __int128 v50; // xmm0
  D3DKMDT_COLOR_COEFF_DYNAMIC_RANGES VidPnTargetColorCoeffDynamicRanges; // xmm1
  __int128 v52; // xmm0
  __int128 v53; // xmm1
  __int128 v54; // xmm0
  __int128 v55; // xmm1
  DMMVIDPNPRESENTPATH *v56; // rbx
  __int128 v57; // xmm1
  __int128 v58; // xmm0
  D3DKMDT_COLOR_COEFF_DYNAMIC_RANGES v59; // xmm1
  __int128 v60; // xmm0
  __int128 v61; // xmm1
  __int64 v62; // rax
  D3DKMDT_VIDPN_PRESENT_PATH_ROTATION ContentRotationHw; // eax
  ADAPTER_DISPLAY *v64; // rcx
  __int64 v65; // r8
  int updated; // eax
  __int64 v67; // rcx
  int v68; // eax
  int v69; // eax
  __int64 v70; // rcx
  _QWORD *v71; // rcx
  _QWORD *v72; // rax
  _QWORD *v73; // rax
  __int64 v74; // rax
  _QWORD *v75; // rax
  _QWORD *v76; // rax
  __int64 v77; // rax
  _QWORD *v78; // rax
  DMMVIDPNPRESENTPATH *v80; // [rsp+28h] [rbp-D8h] BYREF
  DMMVIDPNPRESENTPATH *v81; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v82; // [rsp+38h] [rbp-C8h] BYREF
  DMMVIDPNTOPOLOGY *v83; // [rsp+40h] [rbp-C0h]
  __int64 v84; // [rsp+48h] [rbp-B8h]
  struct DMMVIDPNPRESENTPATH *Path; // [rsp+50h] [rbp-B0h]
  __int64 v86; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v87; // [rsp+60h] [rbp-A0h]
  __int64 v88; // [rsp+68h] [rbp-98h] BYREF
  struct _D3DKMDT_VIDPN_PRESENT_PATH v89; // [rsp+70h] [rbp-90h] BYREF
  struct _DXGKARG_UPDATEACTIVEVIDPNPRESENTPATH v90; // [rsp+1E0h] [rbp+E0h] BYREF

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
  v9 = *((_QWORD *)a1 + 266);
  if ( !v9 )
  {
    v26 = WdLogNewEntry5_WdError(v8);
    *(_QWORD *)(v26 + 24) = a1;
LABEL_22:
    WdLogEvent5_WdError(v26);
    return 3223191554LL;
  }
  v10 = *(_QWORD *)(v9 + 88);
  v87 = v10;
  if ( v10 )
  {
    EXCLUSIVEACCESS<VIDPN_MGR>::EXCLUSIVEACCESS<VIDPN_MGR>((__int64)&v88, v10);
    v11 = *(_QWORD *)(v10 + 80);
    v82 = 0LL;
    if ( v11 )
    {
      _InterlockedIncrement((volatile signed __int32 *)(v11 + 32));
      v12 = *(_QWORD *)(v10 + 80);
    }
    else
    {
      v12 = 0LL;
    }
    auto_rc<DMMVIDPN const>::reset(&v82, v12);
    if ( v82 )
    {
      v14 = (DMMVIDPNTOPOLOGY *)(v82 + 96);
      v15 = 0LL;
      v83 = (DMMVIDPNTOPOLOGY *)(v82 + 96);
      while ( 1 )
      {
        LODWORD(v80) = -1;
        v84 = v15;
        v16 = DMMVIDPNTOPOLOGY::EnumPathTargetsFromSource(v14, v7, v15, (unsigned int *)&v80);
        v21 = v16;
        if ( v16 < 0 )
        {
          v78 = (_QWORD *)WdLogNewEntry5_WdTrace(v18, v17, v19, v20);
          v78[3] = v15;
          v78[4] = v7;
          v78[5] = v83;
          v78[6] = v21;
          goto LABEL_60;
        }
        if ( (_DWORD)v80 == -1 )
        {
          auto_rc<DMMVIDPN const>::reset(&v82, 0LL);
          goto LABEL_20;
        }
        Path = DMMVIDPNTOPOLOGY::FindPath(v83, v7, (int)v80);
        v23 = Path;
        if ( !Path )
        {
          v30 = WdLogNewEntry5_WdAssertion(v22);
          WdLogEvent5_WdAssertion(v30);
        }
        v24 = *(_QWORD *)(*((_QWORD *)v23 + 12) + 96LL);
        if ( !v24 )
        {
          v31 = WdLogNewEntry5_WdAssertion(v22);
          WdLogEvent5_WdAssertion(v31);
        }
        if ( (_DWORD)v5 == 1 )
        {
          if ( *((_DWORD *)v23 + 43) != 2 )
            goto LABEL_18;
        }
        else if ( (_DWORD)v5 != 2
               || !*(_BYTE *)(v24 + 88)
               && !DMMVIDPNPRESENTPATH::IsCopyProtectionSchemeSupported(v23, D3DKMDT_VPPMT_MACROVISION_APSTRIGGER) )
        {
          goto LABEL_18;
        }
        if ( !DMMVIDPNPRESENTPATH::IsCopyProtectionSchemeSupported(
                v23,
                (enum _D3DKMDT_VIDPN_PRESENT_PATH_COPYPROTECTION_TYPE)v5) )
        {
          v77 = WdLogNewEntry5_WdWarning(v33, v32, v34, v35);
          WdLogEvent5_WdWarning(v77);
          goto LABEL_58;
        }
        _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(v10 + 72) + 32LL));
        v36 = *(_QWORD *)(v10 + 72);
        v37 = (unsigned int)v80;
        v86 = v36;
        v80 = DMMVIDPNTOPOLOGY::FindPath((DMMVIDPNTOPOLOGY *)(v36 + 96), v7, (int)v80);
        v38 = v80;
        if ( v80 )
        {
          v81 = 0LL;
          v39 = (DMMVIDPNPRESENTPATH *)operator new(0xD0uLL, 0x4E506456u, PagedPool);
          if ( v39 )
            v40 = DMMVIDPNPRESENTPATH::DMMVIDPNPRESENTPATH(v39, v38);
          else
            v40 = 0LL;
          auto_ptr<DMMVIDPNPRESENTPATH>::reset(
            (__int64 (__fastcall ****)(_QWORD, __int64))&v81,
            (__int64 (__fastcall ***)(_QWORD, __int64))v40);
          v42 = (int *)v81;
          if ( !v81 )
          {
            v74 = WdLogNewEntry5_WdLowResource(v41);
            WdLogEvent5_WdLowResource(v74);
            LODWORD(v21) = -1073741801;
            goto LABEL_54;
          }
          if ( !(**((unsigned __int8 (__fastcall ***)(char *))v81 + 7))((char *)v81 + 56) )
          {
            v73 = (_QWORD *)WdLogNewEntry5_WdDmmEvent(v43);
            v73[3] = v7;
            v73[4] = v37;
            v73[5] = v42[16];
            WdLogEvent5_WdDmmEvent(v73);
            LODWORD(v21) = v42[16];
            goto LABEL_54;
          }
          v44 = DMMVIDPNPRESENTPATH::SetCopyProtectionScheme(
                  (DMMVIDPNPRESENTPATH *)v42,
                  (enum _D3DKMDT_VIDPN_PRESENT_PATH_COPYPROTECTION_TYPE)v5);
          v21 = v44;
          if ( v44 == -1071774970 )
            goto LABEL_51;
          if ( v44 < 0 )
          {
LABEL_48:
            v71 = (_QWORD *)WdLogNewEntry5_WdError(v45);
            v71[3] = v5;
            v71[4] = v7;
            v71[5] = v37;
            v71[6] = v21;
            goto LABEL_50;
          }
          v42[44] = a4;
          memset(&v90, 0, sizeof(v90));
          DMMVIDPNPRESENTPATH::Serialize((DMMVIDPNPRESENTPATH *)v42, &v89);
          v46 = 2LL;
          v47 = &v90;
          v48 = &v89;
          do
          {
            v49 = *(_OWORD *)&v48->ContentTransformation.ScalingSupport;
            *(_OWORD *)&v47->VidPnPresentPathInfo.VidPnSourceId = *(_OWORD *)&v48->VidPnSourceId;
            v50 = *(_OWORD *)&v48->VisibleFromActiveTLOffset.cy;
            *(_OWORD *)&v47->VidPnPresentPathInfo.ContentTransformation.ScalingSupport = v49;
            VidPnTargetColorCoeffDynamicRanges = v48->VidPnTargetColorCoeffDynamicRanges;
            *(_OWORD *)&v47->VidPnPresentPathInfo.VisibleFromActiveTLOffset.cy = v50;
            v52 = *(_OWORD *)&v48->Content;
            v47->VidPnPresentPathInfo.VidPnTargetColorCoeffDynamicRanges = VidPnTargetColorCoeffDynamicRanges;
            v53 = *(_OWORD *)&v48->CopyProtection.OEMCopyProtection[4];
            *(_OWORD *)&v47->VidPnPresentPathInfo.Content = v52;
            v54 = *(_OWORD *)&v48->CopyProtection.OEMCopyProtection[20];
            *(_OWORD *)&v47->VidPnPresentPathInfo.CopyProtection.OEMCopyProtection[4] = v53;
            v55 = *(_OWORD *)&v48->CopyProtection.OEMCopyProtection[36];
            v48 = (struct _D3DKMDT_VIDPN_PRESENT_PATH *)((char *)v48 + 128);
            *(_OWORD *)&v47->VidPnPresentPathInfo.CopyProtection.OEMCopyProtection[20] = v54;
            v47 = (struct _DXGKARG_UPDATEACTIVEVIDPNPRESENTPATH *)((char *)v47 + 128);
            *(_OWORD *)&v47[-1].VidPnPresentPathInfo.GammaRamp.DataSize = v55;
            --v46;
          }
          while ( v46 );
          v56 = v80;
          v57 = *(_OWORD *)&v48->ContentTransformation.ScalingSupport;
          *(_OWORD *)&v47->VidPnPresentPathInfo.VidPnSourceId = *(_OWORD *)&v48->VidPnSourceId;
          v58 = *(_OWORD *)&v48->VisibleFromActiveTLOffset.cy;
          *(_OWORD *)&v47->VidPnPresentPathInfo.ContentTransformation.ScalingSupport = v57;
          v59 = v48->VidPnTargetColorCoeffDynamicRanges;
          *(_OWORD *)&v47->VidPnPresentPathInfo.VisibleFromActiveTLOffset.cy = v58;
          v60 = *(_OWORD *)&v48->Content;
          v47->VidPnPresentPathInfo.VidPnTargetColorCoeffDynamicRanges = v59;
          v61 = *(_OWORD *)&v48->CopyProtection.OEMCopyProtection[4];
          v62 = *(_QWORD *)&v48->CopyProtection.OEMCopyProtection[20];
          *(_OWORD *)&v47->VidPnPresentPathInfo.Content = v60;
          *(_OWORD *)&v47->VidPnPresentPathInfo.CopyProtection.OEMCopyProtection[4] = v61;
          *(_QWORD *)&v47->VidPnPresentPathInfo.CopyProtection.OEMCopyProtection[20] = v62;
          ContentRotationHw = (unsigned int)DMMVIDPNPRESENTPATH::GetContentRotationHw(v56);
          v64 = (ADAPTER_DISPLAY *)*((_QWORD *)a1 + 266);
          v90.VidPnPresentPathInfo.ContentTransformation.Rotation = ContentRotationHw;
          updated = ADAPTER_DISPLAY::DdiUpdateActiveVidPnPresentPath(v64, &v90, v65);
          v21 = updated;
          if ( updated < 0 )
          {
            v71 = (_QWORD *)WdLogNewEntry5_WdError(v67);
            v71[3] = Path;
            v71[4] = v21;
LABEL_50:
            WdLogEvent5_WdError(v71);
LABEL_54:
            auto_ptr<DMMVIDPNPRESENTPATH>::~auto_ptr<DMMVIDPNPRESENTPATH>((__int64 (__fastcall ****)(_QWORD, __int64))&v81);
            auto_rc<DMMVIDPN const>::reset(&v86, 0LL);
            goto LABEL_60;
          }
          v68 = DMMVIDPNPRESENTPATH::SetCopyProtectionScheme(
                  v56,
                  (enum _D3DKMDT_VIDPN_PRESENT_PATH_COPYPROTECTION_TYPE)v5);
          v21 = v68;
          if ( v68 == -1071774970 )
          {
LABEL_51:
            v72 = (_QWORD *)WdLogNewEntry5_WdDmmEvent(v45);
            v72[3] = v5;
            v72[4] = v7;
            v72[5] = v37;
            v72[6] = a1;
            WdLogEvent5_WdDmmEvent(v72);
            LODWORD(v21) = -1071774970;
            goto LABEL_54;
          }
          if ( v68 < 0 )
            goto LABEL_48;
          *((_DWORD *)v56 + 44) = a4;
          auto_ptr<DMMVIDPNPRESENTPATH>::~auto_ptr<DMMVIDPNPRESENTPATH>((__int64 (__fastcall ****)(_QWORD, __int64))&v81);
          v23 = Path;
        }
        auto_rc<DMMVIDPN const>::reset(&v86, 0LL);
        v69 = DMMVIDPNPRESENTPATH::SetCopyProtectionScheme(
                v23,
                (enum _D3DKMDT_VIDPN_PRESENT_PATH_COPYPROTECTION_TYPE)v5);
        v21 = v69;
        if ( v69 == -1071774970 )
        {
          v76 = (_QWORD *)WdLogNewEntry5_WdDmmEvent(v70);
          v76[3] = v5;
          v76[4] = v7;
          v76[5] = v37;
          v76[6] = a1;
          WdLogEvent5_WdDmmEvent(v76);
LABEL_58:
          LODWORD(v21) = -1071774970;
          goto LABEL_60;
        }
        if ( v69 < 0 )
        {
          v75 = (_QWORD *)WdLogNewEntry5_WdError(v70);
          v75[3] = v5;
          v75[4] = v7;
          v75[5] = v37;
          v75[6] = v21;
          WdLogEvent5_WdError(v75);
          goto LABEL_60;
        }
        v10 = v87;
        *((_DWORD *)v23 + 44) = a4;
LABEL_18:
        v14 = v83;
        v15 = v84 + 1;
      }
    }
    v29 = WdLogNewEntry5_WdError(v13);
    *(_QWORD *)(v29 + 24) = a1;
    WdLogEvent5_WdError(v29);
    LODWORD(v21) = -1071774884;
LABEL_60:
    auto_rc<DMMVIDPN const>::reset(&v82, 0LL);
    v4 = v21;
LABEL_20:
    DXGFASTMUTEX::Release(*(struct _KTHREAD ***)(v88 + 40));
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
