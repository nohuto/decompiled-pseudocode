/*
 * XREFs of ?CommitVidPn@ADAPTER_DISPLAY@@QEAAJPEAVDXGDEVICE@@QEAUD3DKMDT_HVIDPN__@@IEPEBVDXGADAPTERALLOCATION@@QEBU_DMM_COMMITVIDPNREQUEST_DIAGINFO@@EPEAEPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C00E1B9C
 * Callers:
 *     ?SetDisplayMode@DXGDEVICE@@QEAAJPEBVDXGALLOCATION@@W4_D3DDDI_VIDEO_SIGNAL_SCANLINE_ORDERING@@W4_D3DDDI_ROTATION@@U_D3DKMT_SETDISPLAYMODE_FLAGS@@PEAIPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C0094560 (-SetDisplayMode@DXGDEVICE@@QEAAJPEBVDXGALLOCATION@@W4_D3DDDI_VIDEO_SIGNAL_SCANLINE_ORDERING@@W4_.c)
 * Callees:
 *     ?UpdateVidPnTargetList@ADAPTER_DISPLAY@@QEAAXXZ @ 0x1C0006984 (-UpdateVidPnTargetList@ADAPTER_DISPLAY@@QEAAXXZ.c)
 *     ?IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00094A4 (-IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C0009D08 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0009D40 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0009DB0 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?GetFromHandle@?$ExposedViaHandle@VDMMVIDPN@@PEAUD3DKMDT_HVIDPN__@@@@SAPEAVDMMVIDPN@@PEAUD3DKMDT_HVIDPN__@@@Z @ 0x1C000ADA0 (-GetFromHandle@-$ExposedViaHandle@VDMMVIDPN@@PEAUD3DKMDT_HVIDPN__@@@@SAPEAVDMMVIDPN@@PEAUD3DKMDT.c)
 *     ??0?$CTemporaryAlloc@U_DXGKARG_SETVIDPNSOURCEADDRESS@@$0CAA@$00@@QEAA@XZ @ 0x1C000CC08 (--0-$CTemporaryAlloc@U_DXGKARG_SETVIDPNSOURCEADDRESS@@$0CAA@$00@@QEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C0012450 (_guard_dispatch_icall_nop.c)
 *     ?IsFunctional@DMMVIDPN@@QEBAEI@Z @ 0x1C007E4E4 (-IsFunctional@DMMVIDPN@@QEBAEI@Z.c)
 *     ??3@YAXPEAX@Z @ 0x1C007F918 (--3@YAXPEAX@Z.c)
 *     DmmIsNullVidPn @ 0x1C0085284 (DmmIsNullVidPn.c)
 *     ?DdiIsSupportedVidPn@ADAPTER_DISPLAY@@QEAAJPEAU_DXGKARG_ISSUPPORTEDVIDPN@@@Z @ 0x1C00865B4 (-DdiIsSupportedVidPn@ADAPTER_DISPLAY@@QEAAJPEAU_DXGKARG_ISSUPPORTEDVIDPN@@@Z.c)
 *     ?SetGammaRamp@ADAPTER_DISPLAY@@QEAAJIPEAVDXGDEVICE@@@Z @ 0x1C0086AD8 (-SetGammaRamp@ADAPTER_DISPLAY@@QEAAJIPEAVDXGDEVICE@@@Z.c)
 *     ?InvalidateActiveVidPnDisplayModeListCache@ADAPTER_DISPLAY@@QEAAXIQEBU_DMM_COMMITVIDPNREQUEST_DIAGINFO@@@Z @ 0x1C0087708 (-InvalidateActiveVidPnDisplayModeListCache@ADAPTER_DISPLAY@@QEAAXIQEBU_DMM_COMMITVIDPNREQUEST_DI.c)
 *     ?SetVidPnSourceVisibility@ADAPTER_DISPLAY@@QEAAJIEIPEAVDXGDEVICE@@EE@Z @ 0x1C00881A8 (-SetVidPnSourceVisibility@ADAPTER_DISPLAY@@QEAAJIEIPEAVDXGDEVICE@@EE@Z.c)
 *     ?DisableOverlays@ADAPTER_RENDER@@AEAAXXZ @ 0x1C0093B04 (-DisableOverlays@ADAPTER_RENDER@@AEAAXXZ.c)
 *     ?FlushScheduler@ADAPTER_RENDER@@QEAAJW4DXGADAPTER_FLUSHSCHEDULER_REASON@@IH@Z @ 0x1C0093CF8 (-FlushScheduler@ADAPTER_RENDER@@QEAAJW4DXGADAPTER_FLUSHSCHEDULER_REASON@@IH@Z.c)
 *     ?IsVSyncAvailable@DXGADAPTER@@QEAAEI@Z @ 0x1C009F904 (-IsVSyncAvailable@DXGADAPTER@@QEAAEI@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00A7710 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     MonitorAdapterModeChange @ 0x1C00E1F44 (MonitorAdapterModeChange.c)
 *     DmmCommitVidPn @ 0x1C00E1FF0 (DmmCommitVidPn.c)
 *     DmmIsSourceInVidPnTopology @ 0x1C00E210C (DmmIsSourceInVidPnTopology.c)
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
  const struct _DMM_COMMITVIDPNREQUEST_DIAGINFO *v13; // r12
  _QWORD *v14; // rax
  __int64 v15; // rcx
  __int64 v16; // r13
  DMMVIDPN *v17; // rax
  __int64 v18; // rcx
  __int64 v19; // rcx
  PERESOURCE *v20; // rax
  __int64 v21; // rcx
  int IsSourceInVidPnTopology; // eax
  __int64 v23; // rcx
  __int64 v24; // rdi
  int IsNullVidPn; // eax
  __int64 v26; // rcx
  __int64 v27; // r8
  int IsSupportedVidPn; // eax
  enum _D3DKMDT_MONITOR_CONNECTIVITY_CHECKS v29; // edx
  int v30; // eax
  __int64 v31; // rcx
  unsigned int v32; // edx
  __int64 v33; // rcx
  __int64 v34; // r8
  unsigned int v35; // edx
  __int64 v36; // rcx
  __int64 v37; // rdx
  __int64 v38; // rcx
  __int64 v39; // rbx
  __int64 v40; // r8
  __int64 v41; // r9
  __int64 v42; // rdx
  __int64 v43; // r8
  __int64 v44; // r9
  _BYTE *v45; // rax
  __int64 v46; // rcx
  __int64 v48; // rax
  __int64 v49; // rax
  __int64 v50; // rax
  __int64 v51; // rax
  __int64 v52; // rax
  __int64 v53; // rax
  __int64 v54; // rax
  __int64 v55; // rcx
  __int64 v56; // rax
  __int64 v57; // rax
  __int64 v58; // rax
  _QWORD *v59; // rax
  const struct _DMM_COMMITVIDPNREQUEST_DIAGINFO *v60; // rcx
  __int64 v61; // rax
  int v62; // eax
  __int64 v63; // rcx
  _QWORD *v64; // rax
  PERESOURCE *v65; // rax
  __int64 v66; // rax
  __int64 v67; // rcx
  struct DXGDEVICE *v68; // rbx
  __int64 v69; // rax
  const struct DXGADAPTERALLOCATION *v70; // rdx
  char *v71; // r9
  _QWORD *v72; // rdi
  int v73; // eax
  __int64 v74; // rcx
  _QWORD *v75; // rax
  int v76; // eax
  struct _DXGKARG_ISSUPPORTEDVIDPN v77; // [rsp+40h] [rbp-10h] BYREF
  struct DXGDEVICE *v78; // [rsp+98h] [rbp+48h] BYREF
  unsigned __int8 IsFunctional; // [rsp+A8h] [rbp+58h]

  v78 = a2;
  v9 = a4;
  if ( !DXGADAPTER::IsCoreResourceExclusiveOwner(this[2]) )
  {
    v49 = WdLogNewEntry5_WdAssertion(v12);
    *(_QWORD *)(v49 + 24) = 1922LL;
    WdLogEvent5_WdAssertion(v49);
  }
  if ( (unsigned int)v9 >= *((_DWORD *)this + 20) )
  {
    v50 = WdLogNewEntry5_WdAssertion(v12);
    *(_QWORD *)(v50 + 24) = 1923LL;
    WdLogEvent5_WdAssertion(v50);
  }
  if ( this[2] != *((PERESOURCE **)a2 + 357) )
  {
    v51 = WdLogNewEntry5_WdAssertion(v12);
    *(_QWORD *)(v51 + 24) = 1924LL;
    WdLogEvent5_WdAssertion(v51);
  }
  v13 = a7;
  if ( !a7 )
  {
    v52 = WdLogNewEntry5_WdAssertion(v12);
    *(_QWORD *)(v52 + 24) = 1925LL;
    WdLogEvent5_WdAssertion(v52);
  }
  v14 = (_QWORD *)WdLogNewEntry5_WdDmmEvent(v12);
  v14[3] = a3;
  v14[4] = v9;
  v14[5] = this[2];
  v14[6] = a6;
  WdLogEvent5_WdDmmEvent(v14);
  v16 = *(_QWORD *)(*((_QWORD *)a2 + 2) + 16LL);
  if ( !v16
    || (v15 = *(_QWORD *)(v16 + 2136)) == 0
    || !DXGADAPTER::IsCoreResourceExclusiveOwner(*(PERESOURCE **)(v15 + 16)) )
  {
    v48 = WdLogNewEntry5_WdAssertion(v15);
    *(_QWORD *)(v48 + 24) = 1939LL;
    WdLogEvent5_WdAssertion(v48);
  }
  if ( (_DWORD)v9 == -3 )
  {
    v53 = WdLogNewEntry5_WdError(v15);
    *(_QWORD *)(v53 + 24) = 1950LL;
    WdLogEvent5_WdError(v53);
    return 3221225659LL;
  }
  IsFunctional = 0;
  v17 = (DMMVIDPN *)ExposedViaHandle<DMMVIDPN,D3DKMDT_HVIDPN__ *>::GetFromHandle((__int64)a3);
  if ( !v17 )
  {
    v54 = WdLogNewEntry5_WdError(v18);
    *(_QWORD *)(v54 + 24) = a3;
    WdLogEvent5_WdError(v54);
    v56 = WdLogNewEntry5_WdError(v55);
    *(_QWORD *)(v56 + 32) = -1071774973LL;
LABEL_44:
    *(_QWORD *)(v56 + 24) = a3;
    WdLogEvent5_WdError(v56);
    return 3223192323LL;
  }
  IsFunctional = DMMVIDPN::IsFunctional(v17, v9);
  if ( !IsFunctional )
  {
    v56 = WdLogNewEntry5_WdError(v19);
    goto LABEL_44;
  }
  v20 = this[2];
  if ( v20[267] )
  {
    if ( v20 != (PERESOURCE *)v16 )
    {
      v57 = WdLogNewEntry5_WdAssertion(v19);
      *(_QWORD *)(v57 + 24) = 1983LL;
      WdLogEvent5_WdAssertion(v57);
    }
    ADAPTER_RENDER::DisableOverlays(*(ADAPTER_RENDER **)(v16 + 2136));
  }
  ADAPTER_RENDER::FlushScheduler(*(_QWORD *)(v16 + 2136), 8, v9, 0);
  a7 = (struct _DMM_COMMITVIDPNREQUEST_DIAGINFO *)this[11];
  if ( !a7 )
  {
    v58 = WdLogNewEntry5_WdError(v21);
    *(_QWORD *)(v58 + 24) = 1999LL;
    WdLogEvent5_WdError(v58);
    return 3223192373LL;
  }
  a5 = 1;
  IsSourceInVidPnTopology = DmmIsSourceInVidPnTopology(a3, (unsigned int)v9, &a5);
  v24 = IsSourceInVidPnTopology;
  if ( IsSourceInVidPnTopology < 0 )
  {
    v59 = (_QWORD *)WdLogNewEntry5_WdError(v23);
    v60 = a7;
    v59[3] = v24;
    v59[4] = v60;
    v59[5] = this[2];
    v59[6] = a3;
    v59[7] = v9;
    goto LABEL_48;
  }
  a8 = 0;
  IsNullVidPn = DmmIsNullVidPn((__int64)a3, (bool *)&a8);
  v24 = IsNullVidPn;
  if ( IsNullVidPn < 0 )
    goto LABEL_49;
  if ( a8 )
    goto LABEL_25;
  v77.hDesiredVidPn = a3;
  v77.IsVidPnSupported = 0;
  IsSupportedVidPn = ADAPTER_DISPLAY::DdiIsSupportedVidPn((ADAPTER_DISPLAY *)this, &v77, v27);
  v24 = IsSupportedVidPn;
  if ( IsSupportedVidPn < 0 )
  {
LABEL_49:
    v59 = (_QWORD *)WdLogNewEntry5_WdError(v26);
    v59[3] = v24;
    goto LABEL_48;
  }
  if ( !v77.IsVidPnSupported )
  {
    v61 = WdLogNewEntry5_WdEvent(v26);
    *(_QWORD *)(v61 + 24) = a3;
    WdLogEvent5_WdEvent(v61);
    return 3223192326LL;
  }
LABEL_25:
  if ( a5 )
    goto LABEL_26;
  v62 = ADAPTER_DISPLAY::SetVidPnSourceVisibility((ADAPTER_DISPLAY *)this, v9, 0LL, 1, (struct _KTHREAD **)v78, 1u, 0);
  v24 = v62;
  if ( v62 < 0 )
  {
LABEL_54:
    v59 = (_QWORD *)WdLogNewEntry5_WdError(v63);
    v59[3] = v24;
    v59[4] = this[2];
    v59[5] = v9;
    v59[6] = a5;
    goto LABEL_48;
  }
  v29 = D3DKMDT_MCC_IGNORE;
  if ( a5 )
LABEL_26:
    v29 = D3DKMDT_MCC_ENFORCE;
  v30 = DmmCommitVidPn((DXGADAPTER *)this[2], v29, v13);
  v24 = v30;
  if ( v30 != -1071774920 )
  {
    if ( v30 >= 0 )
    {
      ADAPTER_DISPLAY::UpdateVidPnTargetList((ADAPTER_DISPLAY *)this);
      if ( !a5 || !DXGADAPTER::IsVSyncAvailable((DXGADAPTER *)this[2], v9) )
        goto LABEL_31;
      v65 = this[2];
      if ( v65[267] )
      {
        if ( v65 != (PERESOURCE *)v16 )
        {
          v66 = WdLogNewEntry5_WdAssertion(v33);
          *(_QWORD *)(v66 + 24) = 2118LL;
          WdLogEvent5_WdAssertion(v66);
        }
        CTemporaryAlloc<_DXGKARG_SETVIDPNSOURCEADDRESS,512,1>::CTemporaryAlloc<_DXGKARG_SETVIDPNSOURCEADDRESS,512,1>(
          &v78,
          v32);
        v68 = v78;
        if ( !v78 )
        {
          v69 = WdLogNewEntry5_WdLowResource(v67);
          *(_QWORD *)(v69 + 24) = this;
          WdLogEvent5_WdLowResource(v69);
          LODWORD(v24) = -1073741801;
LABEL_63:
          operator delete(v68);
          return (unsigned int)v24;
        }
        v70 = a6;
        v71 = (char *)v78 + 8;
        *(_DWORD *)v78 = v9;
        *((_QWORD *)v68 + 2) = *((_QWORD *)v70 + 2);
        v72 = *(_QWORD **)(v16 + 2136);
        (*(void (__fastcall **)(_QWORD, _QWORD, __int64, char *))(*(_QWORD *)(v72[50] + 8LL) + 216LL))(
          v72[51],
          *((_QWORD *)v70 + 1),
          (__int64)v68 + 4,
          v71);
        *((_DWORD *)v68 + 138) |= 1u;
        v73 = (*(__int64 (__fastcall **)(_QWORD, struct DXGDEVICE *))(*(_QWORD *)(v72[47] + 8LL) + 712LL))(v72[48], v68);
        v24 = v73;
        if ( v73 < 0 )
        {
          v75 = (_QWORD *)WdLogNewEntry5_WdError(v74);
          v75[3] = v24;
          v75[4] = this[2];
          v75[5] = v9;
          v75[6] = a5;
          WdLogEvent5_WdError(v75);
          goto LABEL_63;
        }
        operator delete(v68);
      }
      LOBYTE(v34) = 1;
      v76 = ADAPTER_DISPLAY::SetVidPnSourceVisibility((ADAPTER_DISPLAY *)this, v9, v34, 1, 0LL, 1u, 0);
      v24 = v76;
      if ( v76 >= 0 )
      {
        ADAPTER_DISPLAY::SetGammaRamp(this, v9, 0LL);
LABEL_31:
        MonitorAdapterModeChange((DXGADAPTER *)this[2]);
        v35 = v9;
        if ( (*((_BYTE *)v13 + 4) & 4) != 0 )
          v35 = -3;
        ADAPTER_DISPLAY::InvalidateActiveVidPnDisplayModeListCache(this, v35, v13);
        v39 = *((_QWORD *)DXGGLOBAL::GetGlobal(v36) + 111);
        if ( *(_BYTE *)v39 )
        {
          *(_QWORD *)(WdLogNewEntry5_WdTrace(v38, v37, v40, v41) + 24) = 200LL;
        }
        else
        {
          DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)&v77, *(struct DXGFASTMUTEX *const *)(v39 + 8));
          DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)&v77);
          v45 = (_BYTE *)(v39 + 16);
          v46 = 18LL;
          do
          {
            *v45 = 0;
            v45 += 48;
            --v46;
          }
          while ( v46 );
          ++*(_DWORD *)(v39 + 880);
          *(_QWORD *)(WdLogNewEntry5_WdTrace(0LL, v42, v43, v44) + 24) = 222LL;
          if ( v77.IsVidPnSupported )
            DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)&v77);
        }
        return (unsigned int)v24;
      }
      goto LABEL_54;
    }
    v59 = (_QWORD *)WdLogNewEntry5_WdError(v31);
    v59[3] = v24;
    v59[4] = this[2];
    v59[5] = a3;
    v59[6] = v9;
    v59[7] = this[14][127 * v9 + 11];
LABEL_48:
    WdLogEvent5_WdError(v59);
    return (unsigned int)v24;
  }
  v64 = (_QWORD *)WdLogNewEntry5_WdEvent(v31);
  v64[3] = a3;
  v64[4] = v9;
  v64[5] = this[2];
  WdLogEvent5_WdEvent(v64);
  return 3223192376LL;
}
