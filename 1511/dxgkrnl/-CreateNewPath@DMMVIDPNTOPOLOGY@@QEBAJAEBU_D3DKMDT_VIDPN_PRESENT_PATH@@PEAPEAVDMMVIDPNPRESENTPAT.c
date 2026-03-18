/*
 * XREFs of ?CreateNewPath@DMMVIDPNTOPOLOGY@@QEBAJAEBU_D3DKMDT_VIDPN_PRESENT_PATH@@PEAPEAVDMMVIDPNPRESENTPATH@@@Z @ 0x1C009148C
 * Callers:
 *     ?AddUnpinnedPathToVidPnTopology@VIDPN_MGR@@QEAAJQEAVDMMVIDPNTOPOLOGY@@PEBU_D3DKMDT_FUNCTIONAL_VIDPN_PRESENT_PATH@@W4_D3DKMDT_MONITOR_CONNECTIVITY_CHECKS@@@Z @ 0x1C008E6C0 (-AddUnpinnedPathToVidPnTopology@VIDPN_MGR@@QEAAJQEAVDMMVIDPNTOPOLOGY@@PEBU_D3DKMDT_FUNCTIONAL_VI.c)
 *     ?AddPath@DXGK_VIDPNTOPOLOGY_INTERFACE_V1_IMPL@@YAJPEAUD3DKMDT_HVIDPNTOPOLOGY__@@QEAU_D3DKMDT_VIDPN_PRESENT_PATH@@@Z @ 0x1C017F650 (-AddPath@DXGK_VIDPNTOPOLOGY_INTERFACE_V1_IMPL@@YAJPEAUD3DKMDT_HVIDPNTOPOLOGY__@@QEAU_D3DKMDT_VID.c)
 * Callees:
 *     ?FindById@?$IndexedSet@VDMMVIDPNTARGET@@@@QEBAPEAVDMMVIDPNTARGET@@I@Z @ 0x1C0004C24 (-FindById@-$IndexedSet@VDMMVIDPNTARGET@@@@QEBAPEAVDMMVIDPNTARGET@@I@Z.c)
 *     ?FindPath@DMMVIDPNTOPOLOGY@@QEBAPEAVDMMVIDPNPRESENTPATH@@II@Z @ 0x1C0004E38 (-FindPath@DMMVIDPNTOPOLOGY@@QEBAPEAVDMMVIDPNPRESENTPATH@@II@Z.c)
 *     ?FindById@?$IndexedSet@VDMMVIDPNSOURCE@@@@QEBAPEAVDMMVIDPNSOURCE@@I@Z @ 0x1C0008324 (-FindById@-$IndexedSet@VDMMVIDPNSOURCE@@@@QEBAPEAVDMMVIDPNSOURCE@@I@Z.c)
 *     ??0DMMVIDPNPRESENTPATH@@QEAA@PEAVDMMVIDPNSOURCE@@PEAVDMMVIDPNTARGET@@AEBU_D3DKMDT_VIDPN_PRESENT_PATH@@@Z @ 0x1C0008CF0 (--0DMMVIDPNPRESENTPATH@@QEAA@PEAVDMMVIDPNSOURCE@@PEAVDMMVIDPNTARGET@@AEBU_D3DKMDT_VIDPN_PRESENT_.c)
 *     ?GetContainer@?$ContainedBy@VDMMVIDPN@@@@QEBAPEAVDMMVIDPN@@XZ @ 0x1C000C1AC (-GetContainer@-$ContainedBy@VDMMVIDPN@@@@QEBAPEAVDMMVIDPN@@XZ.c)
 *     ?reset@?$auto_ptr@VDMMVIDPNPRESENTPATH@@@@QEAAXPEAVDMMVIDPNPRESENTPATH@@@Z @ 0x1C000C54C (-reset@-$auto_ptr@VDMMVIDPNPRESENTPATH@@@@QEAAXPEAVDMMVIDPNPRESENTPATH@@@Z.c)
 *     ??1?$auto_ptr@VDMMVIDPNPRESENTPATH@@@@QEAA@XZ @ 0x1C000C57C (--1-$auto_ptr@VDMMVIDPNPRESENTPATH@@@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1C0011390 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00120A0 (_guard_dispatch_icall_nop.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0065FA0 (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ?GetLowestAvailImportanceOrdinal@DMMVIDPNTOPOLOGY@@QEBAJPEAW4_D3DKMDT_VIDPN_PRESENT_PATH_IMPORTANCE@@@Z @ 0x1C0091340 (-GetLowestAvailImportanceOrdinal@DMMVIDPNTOPOLOGY@@QEBAJPEAW4_D3DKMDT_VIDPN_PRESENT_PATH_IMPORTA.c)
 */

__int64 __fastcall DMMVIDPNTOPOLOGY::CreateNewPath(
        DMMVIDPNTOPOLOGY *this,
        const struct _D3DKMDT_VIDPN_PRESENT_PATH *a2,
        struct DMMVIDPNPRESENTPATH **a3)
{
  __int64 VidPnSourceId; // r14
  __int64 VidPnTargetId; // rbp
  __int64 Container; // rax
  __int64 v9; // rcx
  struct DMMVIDPNSOURCE *v10; // r13
  __int64 v11; // rax
  __int64 v12; // rcx
  struct DMMVIDPNTARGET *v13; // rbx
  __int64 v14; // rcx
  __int64 v15; // rdx
  struct _D3DKMDT_VIDPN_PRESENT_PATH *v16; // rcx
  const struct _D3DKMDT_VIDPN_PRESENT_PATH *v17; // rax
  __int128 v18; // xmm1
  __int128 v19; // xmm0
  D3DKMDT_COLOR_COEFF_DYNAMIC_RANGES VidPnTargetColorCoeffDynamicRanges; // xmm1
  __int128 v21; // xmm0
  __int128 v22; // xmm1
  __int128 v23; // xmm0
  __int128 v24; // xmm1
  bool v25; // zf
  __int128 v26; // xmm1
  __int128 v27; // xmm0
  D3DKMDT_COLOR_COEFF_DYNAMIC_RANGES v28; // xmm1
  __int128 v29; // xmm0
  __int128 v30; // xmm1
  __int64 v31; // rax
  DMMVIDPNPRESENTPATH *v32; // rax
  __int64 v33; // rdx
  __int64 v34; // rcx
  __int64 v35; // r8
  __int64 v36; // r9
  __int64 v37; // rbx
  __int64 v38; // rcx
  __int64 v40; // rax
  __int64 v41; // rax
  __int64 v42; // rax
  int LowestAvailImportanceOrdinal; // eax
  __int64 v44; // rdx
  __int64 v45; // rcx
  __int64 v46; // r8
  __int64 v47; // r9
  __int64 v48; // rax
  __int64 v49; // rax
  _QWORD *v50; // rax
  __int64 (__fastcall ***v51)(_QWORD, __int64); // [rsp+20h] [rbp-1C8h] BYREF
  __int64 v52; // [rsp+28h] [rbp-1C0h]
  struct _D3DKMDT_VIDPN_PRESENT_PATH v53; // [rsp+30h] [rbp-1B8h] BYREF

  if ( !a3 )
  {
    v40 = WdLogNewEntry5_WdAssertion(this);
    WdLogEvent5_WdAssertion(v40);
  }
  *a3 = 0LL;
  VidPnSourceId = a2->VidPnSourceId;
  VidPnTargetId = a2->VidPnTargetId;
  v51 = 0LL;
  Container = ContainedBy<DMMVIDPN>::GetContainer((__int64)this + 160);
  v10 = (struct DMMVIDPNSOURCE *)IndexedSet<DMMVIDPNSOURCE>::FindById(*(_QWORD *)(Container + 304), VidPnSourceId);
  if ( v10 )
  {
    v11 = ContainedBy<DMMVIDPN>::GetContainer((__int64)this + 160);
    v52 = IndexedSet<DMMVIDPNTARGET>::FindById(*(_QWORD *)(v11 + 312), VidPnTargetId);
    v13 = (struct DMMVIDPNTARGET *)v52;
    if ( v52 )
    {
      if ( DMMVIDPNTOPOLOGY::FindPath(this, VidPnSourceId, VidPnTargetId) )
      {
        v37 = WdLogNewEntry5_WdDmmEvent(v14);
        *(_QWORD *)(v37 + 24) = VidPnSourceId;
        *(_QWORD *)(v37 + 32) = VidPnTargetId;
        *(_QWORD *)(v37 + 40) = ContainedBy<DMMVIDPN>::GetContainer((__int64)this + 160);
        WdLogEvent5_WdDmmEvent(v37);
        LODWORD(v37) = -1071774957;
      }
      else
      {
        v15 = 2LL;
        v16 = &v53;
        v17 = a2;
        do
        {
          v18 = *(_OWORD *)&v17->ContentTransformation.ScalingSupport;
          *(_OWORD *)&v16->VidPnSourceId = *(_OWORD *)&v17->VidPnSourceId;
          v19 = *(_OWORD *)&v17->VisibleFromActiveTLOffset.cy;
          *(_OWORD *)&v16->ContentTransformation.ScalingSupport = v18;
          VidPnTargetColorCoeffDynamicRanges = v17->VidPnTargetColorCoeffDynamicRanges;
          *(_OWORD *)&v16->VisibleFromActiveTLOffset.cy = v19;
          v21 = *(_OWORD *)&v17->Content;
          v16->VidPnTargetColorCoeffDynamicRanges = VidPnTargetColorCoeffDynamicRanges;
          v22 = *(_OWORD *)&v17->CopyProtection.OEMCopyProtection[4];
          *(_OWORD *)&v16->Content = v21;
          v23 = *(_OWORD *)&v17->CopyProtection.OEMCopyProtection[20];
          *(_OWORD *)&v16->CopyProtection.OEMCopyProtection[4] = v22;
          v24 = *(_OWORD *)&v17->CopyProtection.OEMCopyProtection[36];
          v17 = (const struct _D3DKMDT_VIDPN_PRESENT_PATH *)((char *)v17 + 128);
          *(_OWORD *)&v16->CopyProtection.OEMCopyProtection[20] = v23;
          v16 = (struct _D3DKMDT_VIDPN_PRESENT_PATH *)((char *)v16 + 128);
          *(_OWORD *)&v16[-1].GammaRamp.DataSize = v24;
          --v15;
        }
        while ( v15 );
        v25 = a2->ImportanceOrdinal == 255;
        v26 = *(_OWORD *)&v17->ContentTransformation.ScalingSupport;
        *(_OWORD *)&v16->VidPnSourceId = *(_OWORD *)&v17->VidPnSourceId;
        v27 = *(_OWORD *)&v17->VisibleFromActiveTLOffset.cy;
        *(_OWORD *)&v16->ContentTransformation.ScalingSupport = v26;
        v28 = v17->VidPnTargetColorCoeffDynamicRanges;
        *(_OWORD *)&v16->VisibleFromActiveTLOffset.cy = v27;
        v29 = *(_OWORD *)&v17->Content;
        v16->VidPnTargetColorCoeffDynamicRanges = v28;
        v30 = *(_OWORD *)&v17->CopyProtection.OEMCopyProtection[4];
        v31 = *(_QWORD *)&v17->CopyProtection.OEMCopyProtection[20];
        *(_OWORD *)&v16->Content = v29;
        *(_OWORD *)&v16->CopyProtection.OEMCopyProtection[4] = v30;
        *(_QWORD *)&v16->CopyProtection.OEMCopyProtection[20] = v31;
        if ( v25 )
        {
          LowestAvailImportanceOrdinal = DMMVIDPNTOPOLOGY::GetLowestAvailImportanceOrdinal(this, &v53.ImportanceOrdinal);
          v37 = LowestAvailImportanceOrdinal;
          if ( LowestAvailImportanceOrdinal < 0 )
          {
            v48 = WdLogNewEntry5_WdTrace(v45, v44, v46, v47);
            *(_QWORD *)(v48 + 24) = this;
            *(_QWORD *)(v48 + 32) = v37;
            goto LABEL_14;
          }
          v13 = (struct DMMVIDPNTARGET *)v52;
        }
        v32 = (DMMVIDPNPRESENTPATH *)operator new[](0xD0uLL, 0x4E506456u, PagedPool);
        if ( v32 )
          v32 = DMMVIDPNPRESENTPATH::DMMVIDPNPRESENTPATH(v32, v10, v13, &v53);
        auto_ptr<DMMVIDPNPRESENTPATH>::reset(&v51, (__int64 (__fastcall ***)(_QWORD, __int64))v32);
        v37 = (__int64)v51;
        if ( v51 )
        {
          if ( ((unsigned __int8 (__fastcall *)(__int64 (__fastcall ***)(_QWORD, __int64)))*v51[7])(v51 + 7) )
          {
            v51 = 0LL;
            *a3 = (struct DMMVIDPNPRESENTPATH *)v37;
            LODWORD(v37) = 0;
          }
          else
          {
            v50 = (_QWORD *)WdLogNewEntry5_WdDmmEvent(v38);
            v50[3] = a2->VidPnSourceId;
            v50[4] = a2->VidPnTargetId;
            v50[5] = this;
            v50[6] = *(int *)(v37 + 64);
            WdLogEvent5_WdDmmEvent(v50);
            LODWORD(v37) = *(_DWORD *)(v37 + 64);
          }
        }
        else
        {
          v49 = WdLogNewEntry5_WdLowResource(v34, v33, v35, v36);
          *(_QWORD *)(v49 + 24) = this;
          WdLogEvent5_WdLowResource(v49);
          LODWORD(v37) = -1073741801;
        }
      }
    }
    else
    {
      v42 = WdLogNewEntry5_WdError(v12);
      *(_QWORD *)(v42 + 24) = a2->VidPnTargetId;
      WdLogEvent5_WdError(v42);
      LODWORD(v37) = -1071774971;
    }
  }
  else
  {
    v41 = WdLogNewEntry5_WdError(v9);
    *(_QWORD *)(v41 + 24) = a2->VidPnSourceId;
    WdLogEvent5_WdError(v41);
    LODWORD(v37) = -1071774972;
  }
LABEL_14:
  auto_ptr<DMMVIDPNPRESENTPATH>::~auto_ptr<DMMVIDPNPRESENTPATH>(&v51);
  return (unsigned int)v37;
}
