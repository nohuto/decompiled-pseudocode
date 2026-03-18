/*
 * XREFs of ?CommitVidPn@ADAPTER_DISPLAY@@QEAAJPEAVDXGDEVICE@@QEAUD3DKMDT_HVIDPN__@@IEPEBVDXGADAPTERALLOCATION@@QEBU_DMM_COMMITVIDPNREQUEST_DIAGINFO@@EPEAE@Z @ 0x1C0125730
 * Callers:
 *     ?SetDisplayMode@DXGDEVICE@@QEAAJPEBVDXGALLOCATION@@W4_D3DDDI_VIDEO_SIGNAL_SCANLINE_ORDERING@@W4_D3DDDI_ROTATION@@U_D3DKMT_SETDISPLAYMODE_FLAGS@@PEAI@Z @ 0x1C006C7E8 (-SetDisplayMode@DXGDEVICE@@QEAAJPEBVDXGALLOCATION@@W4_D3DDDI_VIDEO_SIGNAL_SCANLINE_ORDERING@@W4_.c)
 * Callees:
 *     ?IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00031B0 (-IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0006E64 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C0006F4C (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0006FAC (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?UpdateVidPnTargetList@ADAPTER_DISPLAY@@QEAAXXZ @ 0x1C0007CB4 (-UpdateVidPnTargetList@ADAPTER_DISPLAY@@QEAAXXZ.c)
 *     ??0?$CTemporaryAlloc@U_DXGKARG_SETVIDPNSOURCEADDRESS@@$0CAA@$00@@QEAA@XZ @ 0x1C000C4C8 (--0-$CTemporaryAlloc@U_DXGKARG_SETVIDPNSOURCEADDRESS@@$0CAA@$00@@QEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C00120A0 (_guard_dispatch_icall_nop.c)
 *     ??3@YAXPEAX@Z @ 0x1C0065F88 (--3@YAXPEAX@Z.c)
 *     ?DisableOverlays@ADAPTER_RENDER@@AEAAXXZ @ 0x1C006A6A8 (-DisableOverlays@ADAPTER_RENDER@@AEAAXXZ.c)
 *     ?FlushScheduler@ADAPTER_RENDER@@QEAAJW4DXGADAPTER_FLUSHSCHEDULER_REASON@@IH@Z @ 0x1C006A8E4 (-FlushScheduler@ADAPTER_RENDER@@QEAAJW4DXGADAPTER_FLUSHSCHEDULER_REASON@@IH@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0076C30 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?IsVSyncAvailable@DXGADAPTER@@QEAAEI@Z @ 0x1C0079E00 (-IsVSyncAvailable@DXGADAPTER@@QEAAEI@Z.c)
 *     ?DdiIsSupportedVidPn@ADAPTER_DISPLAY@@QEAAJPEAU_DXGKARG_ISSUPPORTEDVIDPN@@@Z @ 0x1C0099470 (-DdiIsSupportedVidPn@ADAPTER_DISPLAY@@QEAAJPEAU_DXGKARG_ISSUPPORTEDVIDPN@@@Z.c)
 *     ?SetGammaRamp@ADAPTER_DISPLAY@@QEAAJIPEAVDXGDEVICE@@@Z @ 0x1C009A06C (-SetGammaRamp@ADAPTER_DISPLAY@@QEAAJIPEAVDXGDEVICE@@@Z.c)
 *     ?InvalidateActiveVidPnDisplayModeListCache@ADAPTER_DISPLAY@@QEAAXIQEBU_DMM_COMMITVIDPNREQUEST_DIAGINFO@@@Z @ 0x1C009AC9C (-InvalidateActiveVidPnDisplayModeListCache@ADAPTER_DISPLAY@@QEAAXIQEBU_DMM_COMMITVIDPNREQUEST_DI.c)
 *     ?SetVidPnSourceVisibility@ADAPTER_DISPLAY@@QEAAJIEIPEAVDXGDEVICE@@E@Z @ 0x1C009B578 (-SetVidPnSourceVisibility@ADAPTER_DISPLAY@@QEAAJIEIPEAVDXGDEVICE@@E@Z.c)
 *     DmmIsNullVidPn @ 0x1C00BE420 (DmmIsNullVidPn.c)
 *     DmmCommitVidPn @ 0x1C0179B84 (DmmCommitVidPn.c)
 *     DmmIsFunctionalVidPn @ 0x1C017B314 (DmmIsFunctionalVidPn.c)
 *     DmmIsSourceInVidPnTopology @ 0x1C017B380 (DmmIsSourceInVidPnTopology.c)
 *     MonitorAdapterModeChange @ 0x1C01865D4 (MonitorAdapterModeChange.c)
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
  __int64 v12; // rcx
  __int64 v13; // rax
  __int64 v14; // rax
  __int64 v15; // rax
  const struct _DMM_COMMITVIDPNREQUEST_DIAGINFO *v16; // r12
  __int64 v17; // rax
  _QWORD *v18; // rax
  __int64 v19; // rcx
  __int64 v20; // r13
  __int64 v21; // rax
  __int64 v22; // rax
  int IsFunctionalVidPn; // eax
  __int64 v25; // rcx
  __int64 v26; // rdi
  _QWORD *v27; // rax
  __int64 v28; // rax
  PERESOURCE *v29; // rax
  __int64 v30; // rax
  __int64 v31; // rcx
  __int64 v32; // rax
  int IsSourceInVidPnTopology; // eax
  __int64 v34; // rcx
  const struct _DMM_COMMITVIDPNREQUEST_DIAGINFO *v35; // rcx
  int IsNullVidPn; // eax
  __int64 v37; // rcx
  int IsSupportedVidPn; // eax
  __int64 v39; // rdx
  __int64 v40; // r8
  __int64 v41; // r9
  __int64 v42; // rax
  int v43; // eax
  __int64 v44; // rcx
  enum _D3DKMDT_MONITOR_CONNECTIVITY_CHECKS v45; // edx
  int v46; // eax
  __int64 v47; // rdx
  __int64 v48; // rcx
  __int64 v49; // r8
  __int64 v50; // r9
  _QWORD *v51; // rax
  unsigned int v52; // edx
  __int64 v53; // rcx
  __int64 v54; // r8
  PERESOURCE *v55; // rax
  __int64 v56; // rax
  __int64 v57; // rdx
  __int64 v58; // rcx
  __int64 v59; // r8
  __int64 v60; // r9
  struct DXGDEVICE *v61; // rbx
  __int64 v62; // rax
  const struct DXGADAPTERALLOCATION *v63; // rdx
  char *v64; // r9
  _QWORD *v65; // rdi
  int v66; // eax
  __int64 v67; // rcx
  _QWORD *v68; // rax
  int v69; // eax
  unsigned int v70; // edx
  __int64 v71; // rcx
  __int64 v72; // rdx
  __int64 v73; // rcx
  __int64 v74; // rbx
  __int64 v75; // r8
  __int64 v76; // r9
  __int64 v77; // rdx
  __int64 v78; // r8
  __int64 v79; // r9
  _BYTE *v80; // rax
  __int64 v81; // rcx
  struct _DXGKARG_ISSUPPORTEDVIDPN v82; // [rsp+40h] [rbp-10h] BYREF
  struct DXGDEVICE *v83; // [rsp+98h] [rbp+48h] BYREF
  char v84; // [rsp+A8h] [rbp+58h] BYREF

  v83 = a2;
  v9 = a4;
  if ( !DXGADAPTER::IsCoreResourceExclusiveOwner(this[2]) )
  {
    v13 = WdLogNewEntry5_WdAssertion(v12);
    *(_QWORD *)(v13 + 24) = 12162LL;
    WdLogEvent5_WdAssertion(v13);
  }
  if ( (unsigned int)v9 >= *((_DWORD *)this + 26) )
  {
    v14 = WdLogNewEntry5_WdAssertion(v12);
    *(_QWORD *)(v14 + 24) = 12163LL;
    WdLogEvent5_WdAssertion(v14);
  }
  if ( this[2] != *((PERESOURCE **)a2 + 354) )
  {
    v15 = WdLogNewEntry5_WdAssertion(v12);
    *(_QWORD *)(v15 + 24) = 12164LL;
    WdLogEvent5_WdAssertion(v15);
  }
  v16 = a7;
  if ( !a7 )
  {
    v17 = WdLogNewEntry5_WdAssertion(v12);
    *(_QWORD *)(v17 + 24) = 12165LL;
    WdLogEvent5_WdAssertion(v17);
  }
  v18 = (_QWORD *)WdLogNewEntry5_WdDmmEvent(v12);
  v18[3] = a3;
  v18[4] = v9;
  v18[5] = this[2];
  v18[6] = a6;
  WdLogEvent5_WdDmmEvent(v18);
  v20 = *(_QWORD *)(*((_QWORD *)a2 + 2) + 16LL);
  if ( !v20
    || (v19 = *(_QWORD *)(v20 + 1992)) == 0
    || !DXGADAPTER::IsCoreResourceExclusiveOwner(*(PERESOURCE **)(v19 + 16)) )
  {
    v21 = WdLogNewEntry5_WdAssertion(v19);
    *(_QWORD *)(v21 + 24) = 12179LL;
    WdLogEvent5_WdAssertion(v21);
  }
  if ( (_DWORD)v9 == -3 )
  {
    v22 = WdLogNewEntry5_WdError(v19);
    *(_QWORD *)(v22 + 24) = 12190LL;
    WdLogEvent5_WdError(v22);
    return 3221225659LL;
  }
  a8 = 0;
  IsFunctionalVidPn = DmmIsFunctionalVidPn(a3, (unsigned int)v9, &a8);
  v26 = IsFunctionalVidPn;
  if ( IsFunctionalVidPn >= 0 )
  {
    if ( !a8 )
    {
      v28 = WdLogNewEntry5_WdError(v25);
      *(_QWORD *)(v28 + 24) = a3;
      WdLogEvent5_WdError(v28);
      return 3223192323LL;
    }
    v29 = this[2];
    if ( v29[249] )
    {
      if ( v29 != (PERESOURCE *)v20 )
      {
        v30 = WdLogNewEntry5_WdAssertion(v25);
        *(_QWORD *)(v30 + 24) = 12223LL;
        WdLogEvent5_WdAssertion(v30);
      }
      ADAPTER_RENDER::DisableOverlays(*(ADAPTER_RENDER **)(v20 + 1992));
    }
    ADAPTER_RENDER::FlushScheduler(*(_QWORD *)(v20 + 1992), 8, v9, 0);
    a7 = (struct _DMM_COMMITVIDPNREQUEST_DIAGINFO *)this[14];
    if ( !a7 )
    {
      v32 = WdLogNewEntry5_WdError(v31);
      *(_QWORD *)(v32 + 24) = 12239LL;
      WdLogEvent5_WdError(v32);
      return 3223192373LL;
    }
    a5 = 1;
    IsSourceInVidPnTopology = DmmIsSourceInVidPnTopology(a3, (unsigned int)v9, &a5);
    v26 = IsSourceInVidPnTopology;
    if ( IsSourceInVidPnTopology < 0 )
    {
      v27 = (_QWORD *)WdLogNewEntry5_WdError(v34);
      v35 = a7;
      v27[3] = v26;
      v27[4] = v35;
      v27[5] = this[2];
      v27[6] = a3;
      v27[7] = v9;
      goto LABEL_17;
    }
    v84 = 0;
    IsNullVidPn = DmmIsNullVidPn((__int64)a3, (__int64)&v84);
    v26 = IsNullVidPn;
    if ( IsNullVidPn < 0 )
    {
LABEL_29:
      v27 = (_QWORD *)WdLogNewEntry5_WdError(v37);
      v27[3] = v26;
      goto LABEL_17;
    }
    if ( !v84 )
    {
      v82.hDesiredVidPn = a3;
      v82.IsVidPnSupported = 0;
      IsSupportedVidPn = ADAPTER_DISPLAY::DdiIsSupportedVidPn((ADAPTER_DISPLAY *)this, &v82);
      v26 = IsSupportedVidPn;
      if ( IsSupportedVidPn < 0 )
        goto LABEL_29;
      if ( !v82.IsVidPnSupported )
      {
        v42 = WdLogNewEntry5_WdEvent(v37, v39, v40, v41);
        *(_QWORD *)(v42 + 24) = a3;
        WdLogEvent5_WdEvent(v42);
        return 3223192326LL;
      }
    }
    if ( a5 )
      goto LABEL_38;
    v43 = ADAPTER_DISPLAY::SetVidPnSourceVisibility((ADAPTER_DISPLAY *)this, v9, 0LL, 1, v83, 1u);
    v26 = v43;
    if ( v43 < 0 )
    {
LABEL_36:
      v27 = (_QWORD *)WdLogNewEntry5_WdError(v44);
      v27[3] = v26;
      v27[4] = this[2];
      v27[5] = v9;
      v27[6] = a5;
      goto LABEL_17;
    }
    v45 = D3DKMDT_MCC_IGNORE;
    if ( a5 )
LABEL_38:
      v45 = D3DKMDT_MCC_ENFORCE;
    v46 = DmmCommitVidPn((DXGADAPTER *)this[2], v45, v16);
    v26 = v46;
    if ( v46 == -1071774920 )
    {
      v51 = (_QWORD *)WdLogNewEntry5_WdEvent(v48, v47, v49, v50);
      v51[3] = a3;
      v51[4] = v9;
      v51[5] = this[2];
      WdLogEvent5_WdEvent(v51);
      return (unsigned int)v26;
    }
    if ( v46 < 0 )
    {
      v27 = (_QWORD *)WdLogNewEntry5_WdError(v48);
      v27[3] = v26;
      v27[4] = this[2];
      v27[5] = a3;
      v27[6] = v9;
      v27[7] = this[17][127 * v9 + 11];
      goto LABEL_17;
    }
    ADAPTER_DISPLAY::UpdateVidPnTargetList((ADAPTER_DISPLAY *)this);
    if ( a5 && (unsigned __int8)DXGADAPTER::IsVSyncAvailable((DXGADAPTER *)this[2], (unsigned int)v9) )
    {
      v55 = this[2];
      if ( v55[249] )
      {
        if ( v55 != (PERESOURCE *)v20 )
        {
          v56 = WdLogNewEntry5_WdAssertion(v53);
          *(_QWORD *)(v56 + 24) = 12358LL;
          WdLogEvent5_WdAssertion(v56);
        }
        CTemporaryAlloc<_DXGKARG_SETVIDPNSOURCEADDRESS,512,1>::CTemporaryAlloc<_DXGKARG_SETVIDPNSOURCEADDRESS,512,1>(
          &v83,
          v52);
        v61 = v83;
        if ( !v83 )
        {
          v62 = WdLogNewEntry5_WdLowResource(v58, v57, v59, v60);
          *(_QWORD *)(v62 + 24) = this;
          WdLogEvent5_WdLowResource(v62);
          LODWORD(v26) = -1073741801;
LABEL_52:
          operator delete(v61);
          return (unsigned int)v26;
        }
        v63 = a6;
        v64 = (char *)v83 + 8;
        *(_DWORD *)v83 = v9;
        *((_QWORD *)v61 + 2) = *((_QWORD *)v63 + 2);
        v65 = *(_QWORD **)(v20 + 1992);
        (*(void (__fastcall **)(_QWORD, _QWORD, __int64, char *))(*(_QWORD *)(v65[53] + 8LL) + 208LL))(
          v65[54],
          *((_QWORD *)v63 + 1),
          (__int64)v61 + 4,
          v64);
        *((_DWORD *)v61 + 138) |= 1u;
        v66 = (*(__int64 (__fastcall **)(_QWORD, struct DXGDEVICE *))(*(_QWORD *)(v65[50] + 8LL) + 712LL))(v65[51], v61);
        v26 = v66;
        if ( v66 < 0 )
        {
          v68 = (_QWORD *)WdLogNewEntry5_WdError(v67);
          v68[3] = v26;
          v68[4] = this[2];
          v68[5] = v9;
          v68[6] = a5;
          WdLogEvent5_WdError(v68);
          goto LABEL_52;
        }
        operator delete(v61);
      }
      LOBYTE(v54) = 1;
      v69 = ADAPTER_DISPLAY::SetVidPnSourceVisibility((ADAPTER_DISPLAY *)this, v9, v54, 1, 0LL, 1u);
      v26 = v69;
      if ( v69 < 0 )
        goto LABEL_36;
      ADAPTER_DISPLAY::SetGammaRamp(this, v9, 0LL);
    }
    MonitorAdapterModeChange((DXGADAPTER *)this[2]);
    v70 = v9;
    if ( (*((_BYTE *)v16 + 4) & 4) != 0 )
      v70 = -3;
    ADAPTER_DISPLAY::InvalidateActiveVidPnDisplayModeListCache(this, v70, v16);
    v74 = *((_QWORD *)DXGGLOBAL::GetGlobal(v71) + 134);
    if ( *(_BYTE *)v74 )
    {
      *(_QWORD *)(WdLogNewEntry5_WdTrace(v73, v72, v75, v76) + 24) = 193LL;
    }
    else
    {
      DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)&v82, *(struct DXGFASTMUTEX *const *)(v74 + 8));
      DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)&v82);
      v80 = (_BYTE *)(v74 + 16);
      v81 = 18LL;
      do
      {
        *v80 = 0;
        v80 += 48;
        --v81;
      }
      while ( v81 );
      ++*(_DWORD *)(v74 + 880);
      *(_QWORD *)(WdLogNewEntry5_WdTrace(0LL, v77, v78, v79) + 24) = 215LL;
      if ( v82.IsVidPnSupported )
        DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)&v82);
    }
    return (unsigned int)v26;
  }
  v27 = (_QWORD *)WdLogNewEntry5_WdError(v25);
  v27[3] = a3;
  v27[4] = v26;
LABEL_17:
  WdLogEvent5_WdError(v27);
  return (unsigned int)v26;
}
