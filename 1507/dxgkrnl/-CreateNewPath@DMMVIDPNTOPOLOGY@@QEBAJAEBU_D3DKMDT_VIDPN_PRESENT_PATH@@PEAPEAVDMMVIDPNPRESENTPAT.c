/*
 * XREFs of ?CreateNewPath@DMMVIDPNTOPOLOGY@@QEBAJAEBU_D3DKMDT_VIDPN_PRESENT_PATH@@PEAPEAVDMMVIDPNPRESENTPATH@@@Z @ 0x1C00CC54C
 * Callers:
 *     ?AddUnpinnedPathToVidPnTopology@VIDPN_MGR@@QEAAJQEAVDMMVIDPNTOPOLOGY@@PEBU_D3DKMDT_FUNCTIONAL_VIDPN_PRESENT_PATH@@W4_D3DKMDT_MONITOR_CONNECTIVITY_CHECKS@@@Z @ 0x1C00CD0FC (-AddUnpinnedPathToVidPnTopology@VIDPN_MGR@@QEAAJQEAVDMMVIDPNTOPOLOGY@@PEBU_D3DKMDT_FUNCTIONAL_VI.c)
 *     ?AddPath@DXGK_VIDPNTOPOLOGY_INTERFACE_V1_IMPL@@YAJPEAUD3DKMDT_HVIDPNTOPOLOGY__@@QEAU_D3DKMDT_VIDPN_PRESENT_PATH@@@Z @ 0x1C017B910 (-AddPath@DXGK_VIDPNTOPOLOGY_INTERFACE_V1_IMPL@@YAJPEAUD3DKMDT_HVIDPNTOPOLOGY__@@QEAU_D3DKMDT_VID.c)
 * Callees:
 *     ?FindPath@DMMVIDPNTOPOLOGY@@QEBAPEAVDMMVIDPNPRESENTPATH@@II@Z @ 0x1C0004338 (-FindPath@DMMVIDPNTOPOLOGY@@QEBAPEAVDMMVIDPNPRESENTPATH@@II@Z.c)
 *     ?FindById@?$IndexedSet@VDMMVIDPNTARGET@@@@QEBAPEAVDMMVIDPNTARGET@@I@Z @ 0x1C0004CDC (-FindById@-$IndexedSet@VDMMVIDPNTARGET@@@@QEBAPEAVDMMVIDPNTARGET@@I@Z.c)
 *     ?FindById@?$IndexedSet@VDMMVIDPNSOURCE@@@@QEBAPEAVDMMVIDPNSOURCE@@I@Z @ 0x1C000741C (-FindById@-$IndexedSet@VDMMVIDPNSOURCE@@@@QEBAPEAVDMMVIDPNSOURCE@@I@Z.c)
 *     ?reset@?$auto_ptr@VDMMVIDPNPRESENTPATH@@@@QEAAXPEAVDMMVIDPNPRESENTPATH@@@Z @ 0x1C0008180 (-reset@-$auto_ptr@VDMMVIDPNPRESENTPATH@@@@QEAAXPEAVDMMVIDPNPRESENTPATH@@@Z.c)
 *     ??1?$auto_ptr@VDMMVIDPNPRESENTPATH@@@@QEAA@XZ @ 0x1C00081B0 (--1-$auto_ptr@VDMMVIDPNPRESENTPATH@@@@QEAA@XZ.c)
 *     ?GetContainer@?$ContainedBy@VDMMVIDPN@@@@QEBAPEAVDMMVIDPN@@XZ @ 0x1C0009804 (-GetContainer@-$ContainedBy@VDMMVIDPN@@@@QEBAPEAVDMMVIDPN@@XZ.c)
 *     ??0DMMVIDPNPRESENTPATH@@QEAA@PEAVDMMVIDPNSOURCE@@PEAVDMMVIDPNTARGET@@AEBU_D3DKMDT_VIDPN_PRESENT_PATH@@@Z @ 0x1C000DC58 (--0DMMVIDPNPRESENTPATH@@QEAA@PEAVDMMVIDPNSOURCE@@PEAVDMMVIDPNTARGET@@AEBU_D3DKMDT_VIDPN_PRESENT_.c)
 *     __security_check_cookie @ 0x1C000FC20 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0010930 (_guard_dispatch_icall_nop.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C008834C (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ?GetLowestAvailImportanceOrdinal@DMMVIDPNTOPOLOGY@@QEBAJPEAW4_D3DKMDT_VIDPN_PRESENT_PATH_IMPORTANCE@@@Z @ 0x1C008A208 (-GetLowestAvailImportanceOrdinal@DMMVIDPNTOPOLOGY@@QEBAJPEAW4_D3DKMDT_VIDPN_PRESENT_PATH_IMPORTA.c)
 */

__int64 __fastcall DMMVIDPNTOPOLOGY::CreateNewPath(
        DMMVIDPNTOPOLOGY *this,
        const struct _D3DKMDT_VIDPN_PRESENT_PATH *a2,
        struct DMMVIDPNPRESENTPATH **a3,
        __int64 a4)
{
  __int64 VidPnSourceId; // r14
  __int64 VidPnTargetId; // rbp
  __int64 Container; // rax
  __int64 v10; // rcx
  struct DMMVIDPNSOURCE *v11; // r13
  __int64 v12; // rax
  __int64 v13; // rcx
  struct DMMVIDPNTARGET *v14; // rbx
  __int64 v15; // rcx
  __int64 v16; // r9
  __int64 v17; // rdx
  struct _D3DKMDT_VIDPN_PRESENT_PATH *v18; // rcx
  const struct _D3DKMDT_VIDPN_PRESENT_PATH *v19; // rax
  __int128 v20; // xmm1
  __int128 v21; // xmm0
  D3DKMDT_COLOR_COEFF_DYNAMIC_RANGES VidPnTargetColorCoeffDynamicRanges; // xmm1
  __int128 v23; // xmm0
  __int128 v24; // xmm1
  __int128 v25; // xmm0
  __int128 v26; // xmm1
  bool v27; // zf
  __int128 v28; // xmm1
  __int128 v29; // xmm0
  D3DKMDT_COLOR_COEFF_DYNAMIC_RANGES v30; // xmm1
  __int128 v31; // xmm0
  __int128 v32; // xmm1
  __int64 v33; // rax
  DMMVIDPNPRESENTPATH *v34; // rax
  __int64 v35; // rcx
  __int64 v36; // rbx
  __int64 v37; // rcx
  __int64 v39; // rax
  __int64 v40; // rax
  __int64 v41; // rax
  int LowestAvailImportanceOrdinal; // eax
  __int64 v43; // rdx
  __int64 v44; // rcx
  __int64 v45; // r8
  __int64 v46; // r9
  __int64 v47; // rax
  __int64 v48; // rax
  _QWORD *v49; // rax
  __int64 (__fastcall ***v50)(_QWORD, __int64); // [rsp+20h] [rbp-1C8h] BYREF
  __int64 v51; // [rsp+28h] [rbp-1C0h]
  struct _D3DKMDT_VIDPN_PRESENT_PATH v52; // [rsp+30h] [rbp-1B8h] BYREF

  if ( !a3 )
  {
    v39 = WdLogNewEntry5_WdAssertion(this, a2, 0LL, a4);
    WdLogEvent5_WdAssertion(v39);
  }
  *a3 = 0LL;
  VidPnSourceId = a2->VidPnSourceId;
  VidPnTargetId = a2->VidPnTargetId;
  v50 = 0LL;
  Container = ContainedBy<DMMVIDPN>::GetContainer((__int64)this + 160);
  v11 = (struct DMMVIDPNSOURCE *)IndexedSet<DMMVIDPNSOURCE>::FindById(*(_QWORD *)(Container + 304), VidPnSourceId);
  if ( v11 )
  {
    v12 = ContainedBy<DMMVIDPN>::GetContainer((__int64)this + 160);
    v51 = IndexedSet<DMMVIDPNTARGET>::FindById(*(_QWORD *)(v12 + 312), VidPnTargetId);
    v14 = (struct DMMVIDPNTARGET *)v51;
    if ( v51 )
    {
      if ( DMMVIDPNTOPOLOGY::FindPath(this, VidPnSourceId, VidPnTargetId) )
      {
        v36 = WdLogNewEntry5_WdDmmEvent(v15);
        *(_QWORD *)(v36 + 24) = VidPnSourceId;
        *(_QWORD *)(v36 + 32) = VidPnTargetId;
        *(_QWORD *)(v36 + 40) = ContainedBy<DMMVIDPN>::GetContainer((__int64)this + 160);
        WdLogEvent5_WdDmmEvent(v36);
        LODWORD(v36) = -1071774957;
      }
      else
      {
        v17 = 2LL;
        v18 = &v52;
        v19 = a2;
        do
        {
          v20 = *(_OWORD *)&v19->ContentTransformation.ScalingSupport;
          *(_OWORD *)&v18->VidPnSourceId = *(_OWORD *)&v19->VidPnSourceId;
          v21 = *(_OWORD *)&v19->VisibleFromActiveTLOffset.cy;
          *(_OWORD *)&v18->ContentTransformation.ScalingSupport = v20;
          VidPnTargetColorCoeffDynamicRanges = v19->VidPnTargetColorCoeffDynamicRanges;
          *(_OWORD *)&v18->VisibleFromActiveTLOffset.cy = v21;
          v23 = *(_OWORD *)&v19->Content;
          v18->VidPnTargetColorCoeffDynamicRanges = VidPnTargetColorCoeffDynamicRanges;
          v24 = *(_OWORD *)&v19->CopyProtection.OEMCopyProtection[4];
          *(_OWORD *)&v18->Content = v23;
          v25 = *(_OWORD *)&v19->CopyProtection.OEMCopyProtection[20];
          *(_OWORD *)&v18->CopyProtection.OEMCopyProtection[4] = v24;
          v26 = *(_OWORD *)&v19->CopyProtection.OEMCopyProtection[36];
          v19 = (const struct _D3DKMDT_VIDPN_PRESENT_PATH *)((char *)v19 + 128);
          *(_OWORD *)&v18->CopyProtection.OEMCopyProtection[20] = v25;
          v18 = (struct _D3DKMDT_VIDPN_PRESENT_PATH *)((char *)v18 + 128);
          *(_OWORD *)&v18[-1].GammaRamp.DataSize = v26;
          --v17;
        }
        while ( v17 );
        v27 = a2->ImportanceOrdinal == 255;
        v28 = *(_OWORD *)&v19->ContentTransformation.ScalingSupport;
        *(_OWORD *)&v18->VidPnSourceId = *(_OWORD *)&v19->VidPnSourceId;
        v29 = *(_OWORD *)&v19->VisibleFromActiveTLOffset.cy;
        *(_OWORD *)&v18->ContentTransformation.ScalingSupport = v28;
        v30 = v19->VidPnTargetColorCoeffDynamicRanges;
        *(_OWORD *)&v18->VisibleFromActiveTLOffset.cy = v29;
        v31 = *(_OWORD *)&v19->Content;
        v18->VidPnTargetColorCoeffDynamicRanges = v30;
        v32 = *(_OWORD *)&v19->CopyProtection.OEMCopyProtection[4];
        v33 = *(_QWORD *)&v19->CopyProtection.OEMCopyProtection[20];
        *(_OWORD *)&v18->Content = v31;
        *(_OWORD *)&v18->CopyProtection.OEMCopyProtection[4] = v32;
        *(_QWORD *)&v18->CopyProtection.OEMCopyProtection[20] = v33;
        if ( v27 )
        {
          LowestAvailImportanceOrdinal = DMMVIDPNTOPOLOGY::GetLowestAvailImportanceOrdinal(
                                           this,
                                           &v52.ImportanceOrdinal,
                                           128LL,
                                           v16);
          v36 = LowestAvailImportanceOrdinal;
          if ( LowestAvailImportanceOrdinal < 0 )
          {
            v47 = WdLogNewEntry5_WdTrace(v44, v43, v45, v46);
            *(_QWORD *)(v47 + 24) = this;
            *(_QWORD *)(v47 + 32) = v36;
            goto LABEL_14;
          }
          v14 = (struct DMMVIDPNTARGET *)v51;
        }
        v34 = (DMMVIDPNPRESENTPATH *)operator new[](0xD0uLL, 0x4E506456u, PagedPool);
        if ( v34 )
          v34 = DMMVIDPNPRESENTPATH::DMMVIDPNPRESENTPATH(v34, v11, v14, &v52);
        auto_ptr<DMMVIDPNPRESENTPATH>::reset(&v50, (__int64 (__fastcall ***)(_QWORD, __int64))v34);
        v36 = (__int64)v50;
        if ( v50 )
        {
          if ( ((unsigned __int8 (__fastcall *)(__int64 (__fastcall ***)(_QWORD, __int64)))*v50[7])(v50 + 7) )
          {
            v50 = 0LL;
            *a3 = (struct DMMVIDPNPRESENTPATH *)v36;
            LODWORD(v36) = 0;
          }
          else
          {
            v49 = (_QWORD *)WdLogNewEntry5_WdDmmEvent(v37);
            v49[3] = a2->VidPnSourceId;
            v49[4] = a2->VidPnTargetId;
            v49[5] = this;
            v49[6] = *(int *)(v36 + 64);
            WdLogEvent5_WdDmmEvent(v49);
            LODWORD(v36) = *(_DWORD *)(v36 + 64);
          }
        }
        else
        {
          v48 = WdLogNewEntry5_WdLowResource(v35);
          *(_QWORD *)(v48 + 24) = this;
          WdLogEvent5_WdLowResource(v48);
          LODWORD(v36) = -1073741801;
        }
      }
    }
    else
    {
      v41 = WdLogNewEntry5_WdError(v13);
      *(_QWORD *)(v41 + 24) = a2->VidPnTargetId;
      WdLogEvent5_WdError(v41);
      LODWORD(v36) = -1071774971;
    }
  }
  else
  {
    v40 = WdLogNewEntry5_WdError(v10);
    *(_QWORD *)(v40 + 24) = a2->VidPnSourceId;
    WdLogEvent5_WdError(v40);
    LODWORD(v36) = -1071774972;
  }
LABEL_14:
  auto_ptr<DMMVIDPNPRESENTPATH>::~auto_ptr<DMMVIDPNPRESENTPATH>(&v50);
  return (unsigned int)v36;
}
