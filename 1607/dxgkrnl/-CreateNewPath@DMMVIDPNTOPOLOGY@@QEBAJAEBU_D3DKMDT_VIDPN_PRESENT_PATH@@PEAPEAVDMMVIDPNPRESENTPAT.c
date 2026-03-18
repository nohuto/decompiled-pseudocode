/*
 * XREFs of ?CreateNewPath@DMMVIDPNTOPOLOGY@@QEBAJAEBU_D3DKMDT_VIDPN_PRESENT_PATH@@PEAPEAVDMMVIDPNPRESENTPATH@@@Z @ 0x1C0080894
 * Callers:
 *     ?AddUnpinnedPathToVidPnTopology@VIDPN_MGR@@QEAAJQEAVDMMVIDPNTOPOLOGY@@PEBU_D3DKMDT_FUNCTIONAL_VIDPN_PRESENT_PATH@@W4_D3DKMDT_MONITOR_CONNECTIVITY_CHECKS@@@Z @ 0x1C008376C (-AddUnpinnedPathToVidPnTopology@VIDPN_MGR@@QEAAJQEAVDMMVIDPNTOPOLOGY@@PEBU_D3DKMDT_FUNCTIONAL_VI.c)
 *     ?AddPath@DXGK_VIDPNTOPOLOGY_INTERFACE_V1_IMPL@@YAJPEAUD3DKMDT_HVIDPNTOPOLOGY__@@QEAU_D3DKMDT_VIDPN_PRESENT_PATH@@@Z @ 0x1C01A8A10 (-AddPath@DXGK_VIDPNTOPOLOGY_INTERFACE_V1_IMPL@@YAJPEAUD3DKMDT_HVIDPNTOPOLOGY__@@QEAU_D3DKMDT_VID.c)
 * Callees:
 *     ?FindPath@DMMVIDPNTOPOLOGY@@QEBAPEAVDMMVIDPNPRESENTPATH@@II@Z @ 0x1C00047D8 (-FindPath@DMMVIDPNTOPOLOGY@@QEBAPEAVDMMVIDPNPRESENTPATH@@II@Z.c)
 *     ??0DMMVIDPNPRESENTPATH@@QEAA@PEAVDMMVIDPNSOURCE@@PEAVDMMVIDPNTARGET@@AEBU_D3DKMDT_VIDPN_PRESENT_PATH@@@Z @ 0x1C0004B84 (--0DMMVIDPNPRESENTPATH@@QEAA@PEAVDMMVIDPNSOURCE@@PEAVDMMVIDPNTARGET@@AEBU_D3DKMDT_VIDPN_PRESENT_.c)
 *     ??1?$auto_ptr@VDMMVIDPNPRESENTPATH@@@@QEAA@XZ @ 0x1C000A6E8 (--1-$auto_ptr@VDMMVIDPNPRESENTPATH@@@@QEAA@XZ.c)
 *     ?reset@?$auto_ptr@VDMMVIDPNPRESENTPATH@@@@QEAAXPEAVDMMVIDPNPRESENTPATH@@@Z @ 0x1C000A704 (-reset@-$auto_ptr@VDMMVIDPNPRESENTPATH@@@@QEAAXPEAVDMMVIDPNPRESENTPATH@@@Z.c)
 *     ?FindById@?$IndexedSet@VDMMVIDPNSOURCE@@@@QEBAPEAVDMMVIDPNSOURCE@@I@Z @ 0x1C000AC70 (-FindById@-$IndexedSet@VDMMVIDPNSOURCE@@@@QEBAPEAVDMMVIDPNSOURCE@@I@Z.c)
 *     ?FindById@?$IndexedSet@VDMMVIDPNTARGET@@@@QEBAPEAVDMMVIDPNTARGET@@I@Z @ 0x1C000ACAC (-FindById@-$IndexedSet@VDMMVIDPNTARGET@@@@QEBAPEAVDMMVIDPNTARGET@@I@Z.c)
 *     ?GetContainer@?$ContainedBy@VDMMVIDPN@@@@QEBAPEAVDMMVIDPN@@XZ @ 0x1C000C9C4 (-GetContainer@-$ContainedBy@VDMMVIDPN@@@@QEBAPEAVDMMVIDPN@@XZ.c)
 *     __security_check_cookie @ 0x1C00117E0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0012450 (_guard_dispatch_icall_nop.c)
 *     ??2@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C007F930 (--2@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ?GetLowestAvailImportanceOrdinal@DMMVIDPNTOPOLOGY@@QEBAJPEAW4_D3DKMDT_VIDPN_PRESENT_PATH_IMPORTANCE@@@Z @ 0x1C00807F8 (-GetLowestAvailImportanceOrdinal@DMMVIDPNTOPOLOGY@@QEBAJPEAW4_D3DKMDT_VIDPN_PRESENT_PATH_IMPORTA.c)
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
  __int64 v33; // rcx
  __int64 v34; // rbx
  __int64 v35; // rcx
  __int64 v37; // rax
  __int64 v38; // rax
  __int64 v39; // rax
  int LowestAvailImportanceOrdinal; // eax
  __int64 v41; // rdx
  __int64 v42; // rcx
  __int64 v43; // r8
  __int64 v44; // r9
  __int64 v45; // rax
  __int64 v46; // rax
  _QWORD *v47; // rax
  __int64 (__fastcall ***v48)(_QWORD, __int64); // [rsp+20h] [rbp-1C8h] BYREF
  __int64 v49; // [rsp+28h] [rbp-1C0h]
  struct _D3DKMDT_VIDPN_PRESENT_PATH v50; // [rsp+30h] [rbp-1B8h] BYREF

  if ( !a3 )
  {
    v37 = WdLogNewEntry5_WdAssertion(this);
    WdLogEvent5_WdAssertion(v37);
  }
  *a3 = 0LL;
  VidPnSourceId = a2->VidPnSourceId;
  VidPnTargetId = a2->VidPnTargetId;
  v48 = 0LL;
  Container = ContainedBy<DMMVIDPN>::GetContainer((__int64)this + 160);
  v10 = (struct DMMVIDPNSOURCE *)IndexedSet<DMMVIDPNSOURCE>::FindById(*(_QWORD *)(Container + 304), VidPnSourceId);
  if ( v10 )
  {
    v11 = ContainedBy<DMMVIDPN>::GetContainer((__int64)this + 160);
    v49 = IndexedSet<DMMVIDPNTARGET>::FindById(*(_QWORD *)(v11 + 312), VidPnTargetId);
    v13 = (struct DMMVIDPNTARGET *)v49;
    if ( v49 )
    {
      if ( DMMVIDPNTOPOLOGY::FindPath(this, VidPnSourceId, VidPnTargetId) )
      {
        v34 = WdLogNewEntry5_WdDmmEvent(v14);
        *(_QWORD *)(v34 + 24) = VidPnSourceId;
        *(_QWORD *)(v34 + 32) = VidPnTargetId;
        *(_QWORD *)(v34 + 40) = ContainedBy<DMMVIDPN>::GetContainer((__int64)this + 160);
        WdLogEvent5_WdDmmEvent(v34);
        LODWORD(v34) = -1071774957;
      }
      else
      {
        v15 = 2LL;
        v16 = &v50;
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
          LowestAvailImportanceOrdinal = DMMVIDPNTOPOLOGY::GetLowestAvailImportanceOrdinal(this, &v50.ImportanceOrdinal);
          v34 = LowestAvailImportanceOrdinal;
          if ( LowestAvailImportanceOrdinal < 0 )
          {
            v45 = WdLogNewEntry5_WdTrace(v42, v41, v43, v44);
            *(_QWORD *)(v45 + 24) = this;
            *(_QWORD *)(v45 + 32) = v34;
            goto LABEL_14;
          }
          v13 = (struct DMMVIDPNTARGET *)v49;
        }
        v32 = (DMMVIDPNPRESENTPATH *)operator new(0xD0uLL, 0x4E506456u, PagedPool);
        if ( v32 )
          v32 = DMMVIDPNPRESENTPATH::DMMVIDPNPRESENTPATH(v32, v10, v13, &v50);
        auto_ptr<DMMVIDPNPRESENTPATH>::reset(&v48, (__int64 (__fastcall ***)(_QWORD, __int64))v32);
        v34 = (__int64)v48;
        if ( v48 )
        {
          if ( ((unsigned __int8 (__fastcall *)(__int64 (__fastcall ***)(_QWORD, __int64)))*v48[7])(v48 + 7) )
          {
            v48 = 0LL;
            *a3 = (struct DMMVIDPNPRESENTPATH *)v34;
            LODWORD(v34) = 0;
          }
          else
          {
            v47 = (_QWORD *)WdLogNewEntry5_WdDmmEvent(v35);
            v47[3] = a2->VidPnSourceId;
            v47[4] = a2->VidPnTargetId;
            v47[5] = this;
            v47[6] = *(int *)(v34 + 64);
            WdLogEvent5_WdDmmEvent(v47);
            LODWORD(v34) = *(_DWORD *)(v34 + 64);
          }
        }
        else
        {
          v46 = WdLogNewEntry5_WdLowResource(v33);
          *(_QWORD *)(v46 + 24) = this;
          WdLogEvent5_WdLowResource(v46);
          LODWORD(v34) = -1073741801;
        }
      }
    }
    else
    {
      v39 = WdLogNewEntry5_WdError(v12);
      *(_QWORD *)(v39 + 24) = a2->VidPnTargetId;
      WdLogEvent5_WdError(v39);
      LODWORD(v34) = -1071774971;
    }
  }
  else
  {
    v38 = WdLogNewEntry5_WdError(v9);
    *(_QWORD *)(v38 + 24) = a2->VidPnSourceId;
    WdLogEvent5_WdError(v38);
    LODWORD(v34) = -1071774972;
  }
LABEL_14:
  auto_ptr<DMMVIDPNPRESENTPATH>::~auto_ptr<DMMVIDPNPRESENTPATH>(&v48);
  return (unsigned int)v34;
}
