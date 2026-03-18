/*
 * XREFs of ?CommitVidPn@ADAPTER_DISPLAY@@QEAAJPEAVDXGDEVICE@@QEAUD3DKMDT_HVIDPN__@@IEPEBVDXGADAPTERALLOCATION@@QEBU_DMM_COMMITVIDPNREQUEST_DIAGINFO@@EPEAE@Z @ 0x1C011FC00
 * Callers:
 *     ?SetDisplayMode@DXGDEVICE@@QEAAJPEBVDXGALLOCATION@@W4_D3DDDI_VIDEO_SIGNAL_SCANLINE_ORDERING@@W4_D3DDDI_ROTATION@@U_D3DKMT_SETDISPLAYMODE_FLAGS@@PEAI@Z @ 0x1C00B74D4 (-SetDisplayMode@DXGDEVICE@@QEAAJPEBVDXGALLOCATION@@W4_D3DDDI_VIDEO_SIGNAL_SCANLINE_ORDERING@@W4_.c)
 * Callees:
 *     ?IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00024E8 (-IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0002878 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C0002938 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0002970 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??0?$CTemporaryAlloc@U_DXGKARG_SETVIDPNSOURCEADDRESS@@$0CAA@$00@@QEAA@XZ @ 0x1C00099FC (--0-$CTemporaryAlloc@U_DXGKARG_SETVIDPNSOURCEADDRESS@@$0CAA@$00@@QEAA@XZ.c)
 *     ?UpdateVidPnTargetList@ADAPTER_DISPLAY@@QEAAXXZ @ 0x1C000E398 (-UpdateVidPnTargetList@ADAPTER_DISPLAY@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C0010930 (_guard_dispatch_icall_nop.c)
 *     ??3@YAXPEAX@Z @ 0x1C00689D8 (--3@YAXPEAX@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00774F0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?FlushScheduler@ADAPTER_RENDER@@QEAAJW4DXGADAPTER_FLUSHSCHEDULER_REASON@@IH@Z @ 0x1C0093F2C (-FlushScheduler@ADAPTER_RENDER@@QEAAJW4DXGADAPTER_FLUSHSCHEDULER_REASON@@IH@Z.c)
 *     ?DdiIsSupportedVidPn@ADAPTER_DISPLAY@@QEAAJPEAU_DXGKARG_ISSUPPORTEDVIDPN@@@Z @ 0x1C0095540 (-DdiIsSupportedVidPn@ADAPTER_DISPLAY@@QEAAJPEAU_DXGKARG_ISSUPPORTEDVIDPN@@@Z.c)
 *     DmmIsNullVidPn @ 0x1C0097344 (DmmIsNullVidPn.c)
 *     ?SetGammaRamp@ADAPTER_DISPLAY@@QEAAJIPEAVDXGDEVICE@@@Z @ 0x1C00B58D4 (-SetGammaRamp@ADAPTER_DISPLAY@@QEAAJIPEAVDXGDEVICE@@@Z.c)
 *     ?SetVidPnSourceVisibility@ADAPTER_DISPLAY@@QEAAJIEIPEAVDXGDEVICE@@E@Z @ 0x1C00B6870 (-SetVidPnSourceVisibility@ADAPTER_DISPLAY@@QEAAJIEIPEAVDXGDEVICE@@E@Z.c)
 *     ?DisableOverlays@ADAPTER_RENDER@@AEAAXXZ @ 0x1C00B8950 (-DisableOverlays@ADAPTER_RENDER@@AEAAXXZ.c)
 *     ?InvalidateActiveVidPnDisplayModeListCache@ADAPTER_DISPLAY@@QEAAXIQEBU_DMM_COMMITVIDPNREQUEST_DIAGINFO@@@Z @ 0x1C00CF958 (-InvalidateActiveVidPnDisplayModeListCache@ADAPTER_DISPLAY@@QEAAXIQEBU_DMM_COMMITVIDPNREQUEST_DI.c)
 *     DmmCommitVidPn @ 0x1C01755EC (DmmCommitVidPn.c)
 *     DmmIsFunctionalVidPn @ 0x1C0176D7C (DmmIsFunctionalVidPn.c)
 *     DmmIsSourceInVidPnTopology @ 0x1C0176DE8 (DmmIsSourceInVidPnTopology.c)
 *     MonitorAdapterModeChange @ 0x1C0181F94 (MonitorAdapterModeChange.c)
 */

__int64 __fastcall ADAPTER_DISPLAY::CommitVidPn(
        PERESOURCE **this,
        struct DXGDEVICE *a2,
        struct D3DKMDT_HVIDPN__ *const a3,
        unsigned int a4,
        unsigned __int8 a5,
        const struct DXGADAPTERALLOCATION *a6,
        struct _DMM_COMMITVIDPNREQUEST_DIAGINFO *a7,
        unsigned __int8 a8)
{
  __int64 v9; // r14
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  __int64 v16; // rax
  __int64 v17; // rax
  __int64 v18; // rax
  const struct _DMM_COMMITVIDPNREQUEST_DIAGINFO *v19; // r12
  __int64 v20; // rax
  _QWORD *v21; // rax
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // r8
  __int64 v25; // r9
  __int64 v26; // r13
  __int64 v27; // rax
  __int64 v28; // rax
  int IsFunctionalVidPn; // eax
  __int64 v31; // rdx
  __int64 v32; // rcx
  __int64 v33; // r8
  __int64 v34; // r9
  __int64 v35; // rdi
  _QWORD *v36; // rax
  __int64 v37; // rax
  PERESOURCE *v38; // rax
  __int64 v39; // rax
  __int64 v40; // rcx
  __int64 v41; // rax
  int IsSourceInVidPnTopology; // eax
  __int64 v43; // rcx
  const struct _DMM_COMMITVIDPNREQUEST_DIAGINFO *v44; // rcx
  int IsNullVidPn; // eax
  __int64 v46; // rcx
  __int64 v47; // r8
  __int64 v48; // r9
  int IsSupportedVidPn; // eax
  __int64 v50; // rdx
  __int64 v51; // r8
  __int64 v52; // r9
  __int64 v53; // rax
  int v54; // eax
  __int64 v55; // rcx
  enum _D3DKMDT_MONITOR_CONNECTIVITY_CHECKS v56; // edx
  int v57; // eax
  __int64 v58; // rdx
  __int64 v59; // rcx
  __int64 v60; // r8
  __int64 v61; // r9
  _QWORD *v62; // rax
  __int64 v63; // rdx
  __int64 v64; // rcx
  __int64 v65; // r8
  __int64 v66; // r9
  PERESOURCE *v67; // rax
  __int64 v68; // rax
  __int64 v69; // rcx
  struct DXGDEVICE *v70; // rbx
  __int64 v71; // rax
  const struct DXGADAPTERALLOCATION *v72; // rdx
  char *v73; // r9
  _QWORD *v74; // rdi
  int v75; // eax
  __int64 v76; // rcx
  _QWORD *v77; // rax
  int v78; // eax
  unsigned int v79; // edx
  __int64 v80; // rdx
  __int64 v81; // rcx
  __int64 v82; // r8
  __int64 v83; // r9
  __int64 v84; // rdx
  __int64 v85; // rcx
  __int64 v86; // rbx
  __int64 v87; // r8
  __int64 v88; // r9
  __int64 v89; // rdx
  __int64 v90; // r8
  __int64 v91; // r9
  _BYTE *v92; // rax
  __int64 v93; // rcx
  struct _DXGKARG_ISSUPPORTEDVIDPN v94; // [rsp+40h] [rbp-10h] BYREF
  struct DXGDEVICE *v95; // [rsp+98h] [rbp+48h] BYREF
  char v96; // [rsp+A8h] [rbp+58h] BYREF

  v95 = a2;
  v9 = a4;
  if ( !DXGADAPTER::IsCoreResourceExclusiveOwner(this[2]) )
  {
    v16 = WdLogNewEntry5_WdAssertion(v13, v12, v14, v15);
    *(_QWORD *)(v16 + 24) = 11801LL;
    WdLogEvent5_WdAssertion(v16);
  }
  if ( (unsigned int)v9 >= *((_DWORD *)this + 20) )
  {
    v17 = WdLogNewEntry5_WdAssertion(v13, v12, v14, v15);
    *(_QWORD *)(v17 + 24) = 11802LL;
    WdLogEvent5_WdAssertion(v17);
  }
  if ( this[2] != *((PERESOURCE **)a2 + 2338) )
  {
    v18 = WdLogNewEntry5_WdAssertion(v13, v12, v14, v15);
    *(_QWORD *)(v18 + 24) = 11803LL;
    WdLogEvent5_WdAssertion(v18);
  }
  v19 = a7;
  if ( !a7 )
  {
    v20 = WdLogNewEntry5_WdAssertion(v13, v12, v14, v15);
    *(_QWORD *)(v20 + 24) = 11804LL;
    WdLogEvent5_WdAssertion(v20);
  }
  v21 = (_QWORD *)WdLogNewEntry5_WdDmmEvent(v13);
  v21[3] = a3;
  v21[4] = v9;
  v21[5] = this[2];
  v21[6] = a6;
  WdLogEvent5_WdDmmEvent(v21);
  v26 = *(_QWORD *)(*((_QWORD *)a2 + 2) + 16LL);
  if ( !v26
    || (v23 = *(_QWORD *)(v26 + 1984)) == 0
    || !DXGADAPTER::IsCoreResourceExclusiveOwner(*(PERESOURCE **)(v23 + 16)) )
  {
    v27 = WdLogNewEntry5_WdAssertion(v23, v22, v24, v25);
    *(_QWORD *)(v27 + 24) = 11818LL;
    WdLogEvent5_WdAssertion(v27);
  }
  if ( (_DWORD)v9 == -3 )
  {
    v28 = WdLogNewEntry5_WdError(v23);
    *(_QWORD *)(v28 + 24) = 11829LL;
    WdLogEvent5_WdError(v28);
    return 3221225659LL;
  }
  a8 = 0;
  IsFunctionalVidPn = DmmIsFunctionalVidPn(a3, (unsigned int)v9, &a8);
  v35 = IsFunctionalVidPn;
  if ( IsFunctionalVidPn >= 0 )
  {
    if ( !a8 )
    {
      v37 = WdLogNewEntry5_WdError(v32);
      *(_QWORD *)(v37 + 24) = a3;
      WdLogEvent5_WdError(v37);
      return 3223192323LL;
    }
    v38 = this[2];
    if ( v38[248] )
    {
      if ( v38 != (PERESOURCE *)v26 )
      {
        v39 = WdLogNewEntry5_WdAssertion(v32, v31, v33, v34);
        *(_QWORD *)(v39 + 24) = 11862LL;
        WdLogEvent5_WdAssertion(v39);
      }
      ADAPTER_RENDER::DisableOverlays(*(ADAPTER_RENDER **)(v26 + 1984));
    }
    ADAPTER_RENDER::FlushScheduler(*(_QWORD *)(v26 + 1984), 8, v9, 0);
    a7 = (struct _DMM_COMMITVIDPNREQUEST_DIAGINFO *)this[11];
    if ( !a7 )
    {
      v41 = WdLogNewEntry5_WdError(v40);
      *(_QWORD *)(v41 + 24) = 11878LL;
      WdLogEvent5_WdError(v41);
      return 3223192373LL;
    }
    a5 = 1;
    IsSourceInVidPnTopology = DmmIsSourceInVidPnTopology(a3, (unsigned int)v9, &a5);
    v35 = IsSourceInVidPnTopology;
    if ( IsSourceInVidPnTopology < 0 )
    {
      v36 = (_QWORD *)WdLogNewEntry5_WdError(v43);
      v44 = a7;
      v36[3] = v35;
      v36[4] = v44;
      v36[5] = this[2];
      v36[6] = a3;
      v36[7] = v9;
      goto LABEL_17;
    }
    v96 = 0;
    IsNullVidPn = DmmIsNullVidPn((__int64)a3, (__int64)&v96);
    v35 = IsNullVidPn;
    if ( IsNullVidPn < 0 )
    {
LABEL_29:
      v36 = (_QWORD *)WdLogNewEntry5_WdError(v46);
      v36[3] = v35;
      goto LABEL_17;
    }
    if ( !v96 )
    {
      v94.hDesiredVidPn = a3;
      v94.IsVidPnSupported = 0;
      IsSupportedVidPn = ADAPTER_DISPLAY::DdiIsSupportedVidPn((ADAPTER_DISPLAY *)this, &v94, v47, v48);
      v35 = IsSupportedVidPn;
      if ( IsSupportedVidPn < 0 )
        goto LABEL_29;
      if ( !v94.IsVidPnSupported )
      {
        v53 = WdLogNewEntry5_WdEvent(v46, v50, v51, v52);
        *(_QWORD *)(v53 + 24) = a3;
        WdLogEvent5_WdEvent(v53);
        return 3223192326LL;
      }
    }
    if ( a5 )
      goto LABEL_38;
    v54 = ADAPTER_DISPLAY::SetVidPnSourceVisibility((ADAPTER_DISPLAY *)this, (unsigned int)v9, 0LL, 1LL, v95, 1u);
    v35 = v54;
    if ( v54 < 0 )
    {
LABEL_36:
      v36 = (_QWORD *)WdLogNewEntry5_WdError(v55);
      v36[3] = v35;
      v36[4] = this[2];
      v36[5] = v9;
      v36[6] = a5;
      goto LABEL_17;
    }
    v56 = D3DKMDT_MCC_IGNORE;
    if ( a5 )
LABEL_38:
      v56 = D3DKMDT_MCC_ENFORCE;
    v57 = DmmCommitVidPn((DXGADAPTER *)this[2], v56, v19);
    v35 = v57;
    if ( v57 == -1071774920 )
    {
      v62 = (_QWORD *)WdLogNewEntry5_WdEvent(v59, v58, v60, v61);
      v62[3] = a3;
      v62[4] = v9;
      v62[5] = this[2];
      WdLogEvent5_WdEvent(v62);
      return (unsigned int)v35;
    }
    if ( v57 < 0 )
    {
      v36 = (_QWORD *)WdLogNewEntry5_WdError(v59);
      v36[3] = v35;
      v36[4] = this[2];
      v36[5] = a3;
      v36[6] = v9;
      v36[7] = this[14][126 * v9 + 11];
      goto LABEL_17;
    }
    ADAPTER_DISPLAY::UpdateVidPnTargetList((ADAPTER_DISPLAY *)this);
    if ( a5 )
    {
      v67 = this[2];
      if ( v67[248] )
      {
        if ( v67 != (PERESOURCE *)v26 )
        {
          v68 = WdLogNewEntry5_WdAssertion(v64, v63, v65, v66);
          *(_QWORD *)(v68 + 24) = 11997LL;
          WdLogEvent5_WdAssertion(v68);
        }
        CTemporaryAlloc<_DXGKARG_SETVIDPNSOURCEADDRESS,512,1>::CTemporaryAlloc<_DXGKARG_SETVIDPNSOURCEADDRESS,512,1>(
          &v95,
          v63);
        v70 = v95;
        if ( !v95 )
        {
          v71 = WdLogNewEntry5_WdLowResource(v69);
          *(_QWORD *)(v71 + 24) = this;
          WdLogEvent5_WdLowResource(v71);
          LODWORD(v35) = -1073741801;
LABEL_51:
          operator delete(v70);
          return (unsigned int)v35;
        }
        v72 = a6;
        v73 = (char *)v95 + 8;
        *(_DWORD *)v95 = v9;
        *((_QWORD *)v70 + 2) = *((_QWORD *)v72 + 2);
        v74 = *(_QWORD **)(v26 + 1984);
        (*(void (__fastcall **)(_QWORD, _QWORD, __int64, char *))(*(_QWORD *)(v74[50] + 8LL) + 208LL))(
          v74[51],
          *((_QWORD *)v72 + 1),
          (__int64)v70 + 4,
          v73);
        *((_DWORD *)v70 + 138) |= 1u;
        v75 = (*(__int64 (__fastcall **)(_QWORD, struct DXGDEVICE *))(*(_QWORD *)(v74[47] + 8LL) + 712LL))(v74[48], v70);
        v35 = v75;
        if ( v75 < 0 )
        {
          v77 = (_QWORD *)WdLogNewEntry5_WdError(v76);
          v77[3] = v35;
          v77[4] = this[2];
          v77[5] = v9;
          v77[6] = a5;
          WdLogEvent5_WdError(v77);
          goto LABEL_51;
        }
        operator delete(v70);
      }
      LOBYTE(v65) = 1;
      v78 = ADAPTER_DISPLAY::SetVidPnSourceVisibility((ADAPTER_DISPLAY *)this, (unsigned int)v9, v65, 1LL, 0LL, 1u);
      v35 = v78;
      if ( v78 < 0 )
        goto LABEL_36;
    }
    MonitorAdapterModeChange((DXGADAPTER *)this[2]);
    v79 = v9;
    if ( (*((_BYTE *)v19 + 4) & 4) != 0 )
      v79 = -3;
    ADAPTER_DISPLAY::InvalidateActiveVidPnDisplayModeListCache(this, v79, v19);
    v86 = *((_QWORD *)DXGGLOBAL::GetGlobal(v81, v80, v82, v83) + 113);
    if ( *(_BYTE *)v86 )
    {
      *(_QWORD *)(WdLogNewEntry5_WdTrace(v85, v84, v87, v88) + 24) = 178LL;
    }
    else
    {
      DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)&v94, *(struct DXGFASTMUTEX *const *)(v86 + 8));
      DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)&v94);
      v92 = (_BYTE *)(v86 + 16);
      v93 = 10LL;
      do
      {
        *v92 = 0;
        v92 += 48;
        --v93;
      }
      while ( v93 );
      ++*(_DWORD *)(v86 + 496);
      *(_QWORD *)(WdLogNewEntry5_WdTrace(0LL, v89, v90, v91) + 24) = 200LL;
      if ( v94.IsVidPnSupported )
        DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)&v94);
    }
    ADAPTER_DISPLAY::SetGammaRamp(this, v9, 0LL);
    return (unsigned int)v35;
  }
  v36 = (_QWORD *)WdLogNewEntry5_WdError(v32);
  v36[3] = a3;
  v36[4] = v35;
LABEL_17:
  WdLogEvent5_WdError(v36);
  return (unsigned int)v35;
}
