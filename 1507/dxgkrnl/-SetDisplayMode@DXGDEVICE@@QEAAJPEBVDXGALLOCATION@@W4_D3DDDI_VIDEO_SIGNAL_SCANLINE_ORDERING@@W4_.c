/*
 * XREFs of ?SetDisplayMode@DXGDEVICE@@QEAAJPEBVDXGALLOCATION@@W4_D3DDDI_VIDEO_SIGNAL_SCANLINE_ORDERING@@W4_D3DDDI_ROTATION@@U_D3DKMT_SETDISPLAYMODE_FLAGS@@PEAI@Z @ 0x1C00B74D4
 * Callers:
 *     DxgkSetDisplayMode @ 0x1C00B96F0 (DxgkSetDisplayMode.c)
 * Callees:
 *     ?IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00024E8 (-IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?NeedCommitVidPnOnModeChange@ADAPTER_DISPLAY@@QEAAEI@Z @ 0x1C0006528 (-NeedCommitVidPnOnModeChange@ADAPTER_DISPLAY@@QEAAEI@Z.c)
 *     ?GetDisplayModeInfo@ADAPTER_DISPLAY@@QEBAQEBU_DXGK_DISPLAYMODE_INFO@@I@Z @ 0x1C0006758 (-GetDisplayModeInfo@ADAPTER_DISPLAY@@QEBAQEBU_DXGK_DISPLAYMODE_INFO@@I@Z.c)
 *     ?IsFreqWithinToleranceRange@DMMVIDEOSIGNALMODE@@SAEAEBU_D3DDDI_RATIONAL@@0I@Z @ 0x1C00080B8 (-IsFreqWithinToleranceRange@DMMVIDEOSIGNALMODE@@SAEAEBU_D3DDDI_RATIONAL@@0I@Z.c)
 *     DxgkLogCodePointPacket @ 0x1C00084E0 (DxgkLogCodePointPacket.c)
 *     ?Own@?$AutoRelease@PEBU_D3DKMDT_VIDPN_PRESENT_PATH@@P6AJPEAUD3DKMDT_HVIDPNTOPOLOGY__@@PEBU1@@ZPEAU2@@DXGDMM@@QEAAXPEBU_D3DKMDT_VIDPN_PRESENT_PATH@@Q6AJPEAUD3DKMDT_HVIDPNTOPOLOGY__@@0@Z1@Z @ 0x1C0009E4C (-Own@-$AutoRelease@PEBU_D3DKMDT_VIDPN_PRESENT_PATH@@P6AJPEAUD3DKMDT_HVIDPNTOPOLOGY__@@PEBU1@@ZPE.c)
 *     ?NotifyStatusChange@?$DXGK_AUTO_STATUS_CHANGE_NOTIFY@$08$09@@AEAAXW4D3DKMT_STATE_NOTIFICATION_TYPE@@@Z @ 0x1C000A398 (-NotifyStatusChange@-$DXGK_AUTO_STATUS_CHANGE_NOTIFY@$08$09@@AEAAXW4D3DKMT_STATE_NOTIFICATION_TY.c)
 *     ?SetDisplayModeInfo@ADAPTER_DISPLAY@@QEAAXIQEBU_DXGK_DISPLAYMODE_INFO@@@Z @ 0x1C000ADEC (-SetDisplayModeInfo@ADAPTER_DISPLAY@@QEAAXIQEBU_DXGK_DISPLAYMODE_INFO@@@Z.c)
 *     ?MarkCommitVidPnOnModeChange@ADAPTER_DISPLAY@@QEAAXIE@Z @ 0x1C000AF88 (-MarkCommitVidPnOnModeChange@ADAPTER_DISPLAY@@QEAAXIE@Z.c)
 *     ?SetDisplayedPrimary@DXGDEVICE@@QEAAXIPEBVDXGALLOCATION@@I@Z @ 0x1C000B51C (-SetDisplayedPrimary@DXGDEVICE@@QEAAXIPEBVDXGALLOCATION@@I@Z.c)
 *     ?IsDisplayModeEqual@@YA_NAEBU_D3DKMT_DISPLAYMODE@@0@Z @ 0x1C000B8B0 (-IsDisplayModeEqual@@YA_NAEBU_D3DKMT_DISPLAYMODE@@0@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0010930 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0010C80 (memset.c)
 *     ?DmmMapVSyncFromRationalToInteger@@YAIAEBU_D3DDDI_RATIONAL@@W4_D3DDDI_VIDEO_SIGNAL_SCANLINE_ORDERING@@PEAE@Z @ 0x1C009A7B4 (-DmmMapVSyncFromRationalToInteger@@YAIAEBU_D3DDDI_RATIONAL@@W4_D3DDDI_VIDEO_SIGNAL_SCANLINE_ORDE.c)
 *     DxgkQueryDmmInterface @ 0x1C00AC588 (DxgkQueryDmmInterface.c)
 *     DxgkStatusChangeNotify @ 0x1C00ACF40 (DxgkStatusChangeNotify.c)
 *     ?UpdateModeWithPrimary@ADAPTER_DISPLAY@@QEAAJPEAVDXGDEVICE@@IPEAVDXGADAPTERALLOCATION@@@Z @ 0x1C00B5EC8 (-UpdateModeWithPrimary@ADAPTER_DISPLAY@@QEAAJPEAVDXGDEVICE@@IPEAVDXGADAPTERALLOCATION@@@Z.c)
 *     DmmIsSourceInActiveVidPnTopology @ 0x1C00B6E28 (DmmIsSourceInActiveVidPnTopology.c)
 *     ?DdiDescribeAllocation@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_DESCRIBEALLOCATION@@@Z @ 0x1C00B87DC (-DdiDescribeAllocation@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_DESCRIBEALLOCATION@@@Z.c)
 *     DmmRestoreActiveVidPnFromClientVidPnOnSourceIfNecessary @ 0x1C00B89C4 (DmmRestoreActiveVidPnFromClientVidPnOnSourceIfNecessary.c)
 *     DmmCacheDisplayModeChangeRequest @ 0x1C00B8C08 (DmmCacheDisplayModeChangeRequest.c)
 *     ?CommitVidPn@ADAPTER_DISPLAY@@QEAAJPEAVDXGDEVICE@@QEAUD3DKMDT_HVIDPN__@@IEPEBVDXGADAPTERALLOCATION@@QEBU_DMM_COMMITVIDPNREQUEST_DIAGINFO@@EPEAE@Z @ 0x1C011FC00 (-CommitVidPn@ADAPTER_DISPLAY@@QEAAJPEAVDXGDEVICE@@QEAUD3DKMDT_HVIDPN__@@IEPEBVDXGADAPTERALLOCATI.c)
 *     CreateFunctionalVidPnWithEnabledVidPnSource @ 0x1C013BAEC (CreateFunctionalVidPnWithEnabledVidPnSource.c)
 *     DmmGetPinnedVidPnSourceModeTypeFromClientVidPnSource @ 0x1C0176808 (DmmGetPinnedVidPnSourceModeTypeFromClientVidPnSource.c)
 */

__int64 __fastcall DXGDEVICE::SetDisplayMode(
        DXGDEVICE *this,
        const struct DXGALLOCATION *a2,
        enum _D3DDDI_VIDEO_SIGNAL_SCANLINE_ORDERING a3,
        enum _D3DDDI_ROTATION a4,
        struct _D3DKMT_SETDISPLAYMODE_FLAGS a5,
        unsigned int *a6)
{
  enum _D3DDDI_VIDEO_SIGNAL_SCANLINE_ORDERING v8; // r13d
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 v13; // rsi
  const struct _DXGK_DISPLAYMODE_INFO *DisplayModeInfo; // rax
  __int128 v15; // xmm1
  __int128 v16; // xmm0
  __int64 v17; // rax
  int v18; // eax
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v22; // r9
  __int64 FunctionalVidPnWithEnabledVidPnSource; // rbx
  __int64 v24; // r15
  int v25; // r15d
  __int64 v26; // rcx
  D3DDDIFORMAT Format; // eax
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // r8
  int v31; // eax
  DXGADAPTER **v32; // rcx
  __int64 v33; // rax
  unsigned int v34; // edx
  int v35; // r15d
  const struct _DXGK_DISPLAYMODE_INFO *v36; // rbx
  __int64 v37; // rdx
  __int64 v38; // r9
  int active; // eax
  __int64 v40; // rcx
  __int64 v41; // rbx
  __int64 v42; // r9
  __int64 v43; // rdx
  __int64 v44; // rdx
  __int64 v45; // r8
  __int64 v46; // rax
  int v47; // eax
  __int64 v48; // rcx
  __int64 v49; // rdi
  __int64 v51; // rax
  __int64 v52; // rax
  _QWORD *v53; // rax
  _QWORD *v54; // rax
  _QWORD *v55; // rax
  __int64 PrivateDriverFormatAttribute; // rcx
  __int64 v57; // rax
  _QWORD *v58; // rax
  _QWORD *v59; // rax
  __int64 v60; // rdx
  int v61; // eax
  __int64 v62; // rcx
  _QWORD *v63; // rax
  __int64 v64; // rax
  const struct _DXGDMM_INTERFACE *v65; // r15
  __int64 v66; // r8
  __int64 v67; // rcx
  _QWORD *v68; // rax
  _QWORD *v69; // rcx
  _QWORD *v70; // rax
  _QWORD *v71; // rax
  unsigned __int64 v72; // rdx
  ADAPTER_DISPLAY *v73; // rcx
  struct D3DKMDT_HVIDPN__ *v74; // r12
  int v75; // eax
  __int64 v76; // rcx
  __int64 v77; // rcx
  __int64 v78; // r8
  __int64 v79; // r9
  UINT v80; // r15d
  __int64 v81; // rdx
  _BOOL8 v82; // rcx
  __int64 v83; // rax
  __int64 v84; // rax
  __int64 v85; // rdx
  char IsSourceInActiveVidPnTopology; // al
  __int64 v87; // rdx
  __int64 v88; // rcx
  __int64 v89; // r8
  __int64 v90; // r13
  unsigned int v91; // r15d
  __int64 v92; // rax
  __int64 v93; // rax
  _QWORD *v94; // rax
  _QWORD *v95; // rax
  __int64 v96; // r8
  _QWORD *v97; // rax
  __int64 v98; // rax
  char v99; // [rsp+20h] [rbp-E0h]
  UINT v100; // [rsp+74h] [rbp-8Ch] BYREF
  __int128 v101; // [rsp+78h] [rbp-88h] BYREF
  __int128 v102; // [rsp+88h] [rbp-78h] BYREF
  _BYTE v103[24]; // [rsp+98h] [rbp-68h]
  struct _DXGKARG_DESCRIBEALLOCATION v104; // [rsp+B0h] [rbp-50h] BYREF
  _BYTE v105[8]; // [rsp+E0h] [rbp-20h] BYREF
  struct D3DKMDT_HVIDPN__ *v106; // [rsp+E8h] [rbp-18h]
  void (__fastcall *v107)(__int64, struct D3DKMDT_HVIDPN__ *); // [rsp+F0h] [rbp-10h]
  __int64 v108; // [rsp+F8h] [rbp-8h]
  int v109; // [rsp+100h] [rbp+0h]
  enum _D3DDDI_ROTATION v110; // [rsp+108h] [rbp+8h]
  enum _D3DDDI_VIDEO_SIGNAL_SCANLINE_ORDERING v111; // [rsp+10Ch] [rbp+Ch]
  unsigned int v112; // [rsp+110h] [rbp+10h] BYREF
  char v113; // [rsp+114h] [rbp+14h]
  int v114; // [rsp+118h] [rbp+18h]
  unsigned __int8 v115[8]; // [rsp+120h] [rbp+20h] BYREF
  __int64 v116; // [rsp+128h] [rbp+28h] BYREF
  const struct _DXGDMM_INTERFACE *v117; // [rsp+130h] [rbp+30h] BYREF
  unsigned __int8 v118[8]; // [rsp+138h] [rbp+38h] BYREF
  int v119; // [rsp+140h] [rbp+40h] BYREF
  __int64 v120; // [rsp+148h] [rbp+48h]
  __int64 retaddr; // [rsp+198h] [rbp+98h]

  v116 = retaddr;
  v110 = a4;
  v8 = a3;
  v111 = a3;
  DXGK_AUTO_STATUS_CHANGE_NOTIFY<9,10>::NotifyStatusChange(&v116, 6);
  if ( !DXGADAPTER::IsCoreResourceExclusiveOwner(*(PERESOURCE **)(*((_QWORD *)this + 2) + 16LL)) )
  {
    v52 = WdLogNewEntry5_WdAssertion(v10, v9, v11, v12);
    *(_QWORD *)(v52 + 24) = 6070LL;
    WdLogEvent5_WdAssertion(v52);
  }
  v13 = *((_QWORD *)this + 2338);
  if ( !v13 || !*(_QWORD *)(v13 + 1976) || !DXGADAPTER::IsCoreResourceExclusiveOwner(*((PERESOURCE **)this + 2338)) )
  {
    v51 = WdLogNewEntry5_WdAssertion(v10, v9, v11, v12);
    *(_QWORD *)(v51 + 24) = 6075LL;
    WdLogEvent5_WdAssertion(v51);
  }
  DisplayModeInfo = ADAPTER_DISPLAY::GetDisplayModeInfo(
                      *(DXGADAPTER ***)(v13 + 1976),
                      (*(_DWORD *)(*((_QWORD *)a2 + 6) + 4LL) >> 6) & 0xF);
  v15 = *((_OWORD *)DisplayModeInfo + 1);
  v101 = *(_OWORD *)DisplayModeInfo;
  v16 = *((_OWORD *)DisplayModeInfo + 2);
  v102 = v15;
  *(_QWORD *)&v15 = *((_QWORD *)DisplayModeInfo + 6);
  memset(&v104, 0, sizeof(v104));
  *(_OWORD *)v103 = v16;
  *(_QWORD *)&v103[16] = v15;
  v104.Flags.Value |= 1u;
  v104.Rotation = -1;
  v17 = *((_QWORD *)this + 2);
  v104.hAllocation = *(HANDLE *)(*((_QWORD *)a2 + 6) + 16LL);
  v18 = ADAPTER_RENDER::DdiDescribeAllocation(*(ADAPTER_RENDER **)(*(_QWORD *)(v17 + 16) + 1984LL), &v104);
  FunctionalVidPnWithEnabledVidPnSource = v18;
  if ( v18 < 0 )
  {
    v53 = (_QWORD *)WdLogNewEntry5_WdError(v20);
    v53[3] = FunctionalVidPnWithEnabledVidPnSource;
    v53[4] = this;
    v53[5] = *((unsigned int *)a2 + 4);
    v53[6] = a2;
    v53[7] = (*(_DWORD *)(*((_QWORD *)a2 + 6) + 4LL) >> 6) & 0xF;
    WdLogEvent5_WdError(v53);
    goto LABEL_28;
  }
  v24 = (unsigned int)v101;
  FunctionalVidPnWithEnabledVidPnSource = DWORD1(v101);
  if ( *(_QWORD *)&v104.Width != (_QWORD)v101 )
  {
    v97 = (_QWORD *)WdLogNewEntry5_WdWarning(v20, v19, v21, v22);
    v97[3] = a2;
    v97[4] = v104.Width;
    v97[5] = v104.Height;
    v97[6] = v24;
    v97[7] = FunctionalVidPnWithEnabledVidPnSource;
    WdLogEvent5_WdWarning(v97);
    LODWORD(FunctionalVidPnWithEnabledVidPnSource) = -1071775739;
    goto LABEL_28;
  }
  if ( v104.Rotation != -1 )
  {
    FunctionalVidPnWithEnabledVidPnSource = SHIDWORD(v102);
    if ( v104.Rotation != HIDWORD(v102) )
    {
      v54 = (_QWORD *)WdLogNewEntry5_WdWarning(v20, v19, v21, v22);
      v54[3] = a2;
      v54[4] = v104.Rotation;
      v54[5] = FunctionalVidPnWithEnabledVidPnSource;
      WdLogEvent5_WdWarning(v54);
      LODWORD(FunctionalVidPnWithEnabledVidPnSource) = -1071775739;
      goto LABEL_30;
    }
  }
  v25 = *(_DWORD *)&v103[8];
  v26 = *(_DWORD *)(*((_QWORD *)a2 + 6) + 4LL) >> 12;
  LOBYTE(v26) = (*(_DWORD *)&v103[8] >> 4) ^ v26;
  if ( (v26 & 1) == 0 )
  {
    FunctionalVidPnWithEnabledVidPnSource = *(unsigned int *)&v103[20];
    if ( v104.PrivateDriverFormatAttribute != *(_DWORD *)&v103[20] )
    {
      v55 = (_QWORD *)WdLogNewEntry5_WdTrace(v26, v19, v21, v22);
      v55[3] = a2;
      PrivateDriverFormatAttribute = v104.PrivateDriverFormatAttribute;
      v55[5] = FunctionalVidPnWithEnabledVidPnSource;
      v55[4] = PrivateDriverFormatAttribute;
      *a6 = FunctionalVidPnWithEnabledVidPnSource;
      LODWORD(FunctionalVidPnWithEnabledVidPnSource) = -1071774891;
      goto LABEL_30;
    }
  }
  *(D3DDDI_MULTISAMPLINGMETHOD *)&v103[12] = v104.MultisampleMethod;
  Format = v104.Format;
  DWORD2(v101) = v104.Format;
  if ( !*(_QWORD *)(v13 + 1984) )
  {
    v26 = 21LL;
    if ( v104.Format == D3DDDIFMT_X8R8G8B8 )
      Format = D3DDDIFMT_A8R8G8B8;
    DWORD2(v101) = Format;
  }
  if ( !v104.RefreshRate.Denominator )
  {
    v57 = WdLogNewEntry5_WdError(v26);
    *(_QWORD *)(v57 + 24) = v104.RefreshRate.Numerator;
    WdLogEvent5_WdError(v57);
    LODWORD(FunctionalVidPnWithEnabledVidPnSource) = -1073741811;
    goto LABEL_30;
  }
  if ( v104.RefreshRate.Numerator == 64 && v104.RefreshRate.Denominator == 1 && (_QWORD)v102 == 0xFFFFFFFEFFFFFFFEuLL )
  {
    v104.RefreshRate.Numerator = -2;
    v104.RefreshRate.Denominator = -2;
  }
  if ( (*(_BYTE *)&a5 & 1) != 0
    && !DMMVIDEOSIGNALMODE::IsFreqWithinToleranceRange((const struct _D3DDDI_RATIONAL *)&v102, &v104.RefreshRate, 0) )
  {
    v58 = (_QWORD *)WdLogNewEntry5_WdWarning(v29, v28, v30, v22);
    v58[3] = a2;
    v58[4] = v104.RefreshRate.Numerator;
    v58[5] = v104.RefreshRate.Denominator;
    v58[6] = (unsigned int)v102;
    v58[7] = DWORD1(v102);
    WdLogEvent5_WdWarning(v58);
    LODWORD(FunctionalVidPnWithEnabledVidPnSource) = -1071775739;
    goto LABEL_30;
  }
  *(D3DDDI_RATIONAL *)&v102 = v104.RefreshRate;
  v31 = DmmMapVSyncFromRationalToInteger(&v104.RefreshRate, (unsigned int)v8, 0LL, v22);
  v32 = *(DXGADAPTER ***)(v13 + 1976);
  HIDWORD(v101) = v31;
  v33 = *((_QWORD *)a2 + 6);
  DWORD2(v102) = v8;
  v34 = (*(_DWORD *)(v33 + 4) >> 6) & 0xF;
  v35 = ((unsigned __int8)v25 ^ (unsigned __int8)(16 * ((*(_DWORD *)(v33 + 4) & 0x1000) != 0))) & 0x10 ^ v25;
  *(_DWORD *)&v103[8] = v35;
  v36 = ADAPTER_DISPLAY::GetDisplayModeInfo(v32, v34);
  if ( !ADAPTER_DISPLAY::NeedCommitVidPnOnModeChange(
          *(DXGADAPTER ***)(v13 + 1976),
          (*(_DWORD *)(*((_QWORD *)a2 + 6) + 4LL) >> 6) & 0xF)
    && IsDisplayModeEqual((const struct _D3DKMT_DISPLAYMODE *)v36, (const struct _D3DKMT_DISPLAYMODE *)&v101)
    && *((_DWORD *)v36 + 12) == *(_DWORD *)&v103[16]
    && *((_DWORD *)v36 + 11) == *(_DWORD *)&v103[12]
    || (*(_BYTE *)&a5 & 1) != 0
    && (((unsigned __int8)v35 ^ *((_BYTE *)v36 + 40)) & 0x10) == 0
    && (((unsigned __int8)v35 ^ (unsigned __int8)*((_DWORD *)v36 + 10)) & 0x20) == 0 )
  {
    active = DmmRestoreActiveVidPnFromClientVidPnOnSourceIfNecessary(v13, *((_QWORD *)a2 + 6));
    v41 = active;
    if ( active < 0 )
    {
      v59 = (_QWORD *)WdLogNewEntry5_WdError(v40);
      v59[3] = *(_QWORD *)(v13 + 1976);
      v60 = (*(_DWORD *)(*((_QWORD *)a2 + 6) + 4LL) >> 6) & 0xF;
      v59[5] = v41;
      v59[4] = v60;
      WdLogEvent5_WdError(v59);
    }
    LODWORD(FunctionalVidPnWithEnabledVidPnSource) = ADAPTER_DISPLAY::UpdateModeWithPrimary(
                                                       *(PERESOURCE ***)(v13 + 1976),
                                                       (PERESOURCE **)this,
                                                       (*(_DWORD *)(*((_QWORD *)a2 + 6) + 4LL) >> 6) & 0xF,
                                                       *((struct DXGADAPTERALLOCATION **)a2 + 6));
    DxgkLogCodePointPacket(
      0x3Cu,
      FunctionalVidPnWithEnabledVidPnSource,
      *(_DWORD *)(v13 + 252),
      (*(_DWORD *)(*((_QWORD *)a2 + 6) + 4LL) >> 6) & 0xF);
LABEL_26:
    if ( (int)FunctionalVidPnWithEnabledVidPnSource < 0 )
      goto LABEL_30;
    v43 = (*(_DWORD *)(*((_QWORD *)a2 + 6) + 4LL) >> 6) & 0xF;
    *((_DWORD *)this + v43 + 1188) |= 0x40u;
    DXGDEVICE::SetDisplayedPrimary(this, (*(_DWORD *)(*((_QWORD *)a2 + 6) + 4LL) >> 6) & 0xF, a2, 0);
    goto LABEL_28;
  }
  v117 = 0LL;
  v61 = DxgkQueryDmmInterface((DXGADAPTER *)v13, v37, &v117, v38);
  FunctionalVidPnWithEnabledVidPnSource = v61;
  if ( v61 < 0 )
  {
    v63 = (_QWORD *)WdLogNewEntry5_WdError(v62);
    v63[3] = FunctionalVidPnWithEnabledVidPnSource;
    v63[4] = this;
    v63[5] = *((unsigned int *)a2 + 4);
    v63[6] = a2;
    v63[7] = (*(_DWORD *)(*((_QWORD *)a2 + 6) + 4LL) >> 6) & 0xF;
    WdLogEvent5_WdError(v63);
    goto LABEL_28;
  }
  v64 = *((_QWORD *)a2 + 6);
  v65 = v117;
  *(_QWORD *)v118 = 0LL;
  v106 = 0LL;
  v66 = (*(_DWORD *)(v64 + 4) >> 6) & 0xF;
  v107 = 0LL;
  v108 = 0LL;
  v109 = 0;
  v105[0] = 0;
  *(_QWORD *)v115 = 0LL;
  FunctionalVidPnWithEnabledVidPnSource = (int)CreateFunctionalVidPnWithEnabledVidPnSource(v117, v13, v66);
  DXGDMM::AutoRelease<_D3DKMDT_VIDPN_PRESENT_PATH const *,long (*)(D3DKMDT_HVIDPNTOPOLOGY__ *,_D3DKMDT_VIDPN_PRESENT_PATH const *),D3DKMDT_HVIDPNTOPOLOGY__ *>::Own(
    (__int64)v105,
    *(__int64 *)v115,
    *((_QWORD *)v65 + 8),
    v13);
  if ( (_DWORD)FunctionalVidPnWithEnabledVidPnSource == -1071774925 )
  {
    v68 = (_QWORD *)WdLogNewEntry5_WdDmmEvent(v67);
    v68[3] = -1071774925LL;
    v68[4] = (*(_DWORD *)(*((_QWORD *)a2 + 6) + 4LL) >> 6) & 0xF;
LABEL_53:
    v68[5] = (unsigned int)v101;
    v68[6] = DWORD1(v101);
    v68[7] = SDWORD2(v101);
    v69 = v68;
    goto LABEL_55;
  }
  if ( (_DWORD)FunctionalVidPnWithEnabledVidPnSource == -1071774886 )
  {
    v68 = (_QWORD *)WdLogNewEntry5_WdDmmEvent(v67);
    v68[3] = (*(_DWORD *)(*((_QWORD *)a2 + 6) + 4LL) >> 6) & 0xF;
    v68[4] = *(_QWORD *)(v13 + 1976);
    goto LABEL_53;
  }
  if ( (_DWORD)FunctionalVidPnWithEnabledVidPnSource != -1071774970 )
  {
    if ( (int)FunctionalVidPnWithEnabledVidPnSource >= 0 )
    {
      v73 = *(ADAPTER_DISPLAY **)(v13 + 1976);
      v74 = v106;
      v113 &= 0xF8u;
      v112 = v112 & 0xFFFFFF00 | 0x12;
      v114 = *((_DWORD *)v73 + 60);
      v75 = ADAPTER_DISPLAY::CommitVidPn(
              v73,
              this,
              v106,
              (*(_DWORD *)(*((_QWORD *)a2 + 6) + 4LL) >> 6) & 0xF,
              v99,
              *((const struct DXGADAPTERALLOCATION **)a2 + 6),
              (const struct _DMM_COMMITVIDPNREQUEST_DIAGINFO *const)&v112,
              (unsigned __int8)v115,
              v118);
      FunctionalVidPnWithEnabledVidPnSource = v75;
      if ( v75 < 0 )
      {
        if ( v75 == -1071774920 )
        {
          v94 = (_QWORD *)WdLogNewEntry5_WdDmmEvent(v76);
          v94[3] = v74;
          v94[4] = (*(_DWORD *)(*((_QWORD *)a2 + 6) + 4LL) >> 6) & 0xF;
          v94[5] = *(_QWORD *)(v13 + 1976);
          WdLogEvent5_WdDmmEvent(v94);
        }
        else
        {
          v95 = (_QWORD *)WdLogNewEntry5_WdError(v76);
          v95[3] = FunctionalVidPnWithEnabledVidPnSource;
          v95[4] = *(_QWORD *)(v13 + 1976);
          v96 = (*(_DWORD *)(*((_QWORD *)a2 + 6) + 4LL) >> 6) & 0xF;
          v95[6] = a2;
          v95[5] = v96;
          v95[7] = this;
          WdLogEvent5_WdError(v95);
        }
      }
      else
      {
        LODWORD(FunctionalVidPnWithEnabledVidPnSource) = DmmGetPinnedVidPnSourceModeTypeFromClientVidPnSource(
                                                           v13,
                                                           (*(_DWORD *)(*((_QWORD *)a2 + 6) + 4LL) >> 6) & 0xF,
                                                           &v100);
        if ( (int)FunctionalVidPnWithEnabledVidPnSource < 0 )
        {
          v84 = WdLogNewEntry5_WdError(v77);
          v85 = (*(_DWORD *)(*((_QWORD *)a2 + 6) + 4LL) >> 6) & 0xF;
          *(_QWORD *)(v84 + 32) = v13;
          *(_QWORD *)(v84 + 24) = v85;
          WdLogEvent5_WdError(v84);
          *(_DWORD *)&v103[8] &= ~0x20u;
        }
        else
        {
          v80 = v100;
          v81 = (v103[8] >> 4) & 1;
          v82 = v100 - 3 <= 1;
          if ( (_DWORD)v81 != v82 )
          {
            v83 = WdLogNewEntry5_WdAssertion(v82, v81, v78, v79);
            *(_QWORD *)(v83 + 24) = 6359LL;
            WdLogEvent5_WdAssertion(v83);
          }
          *(_DWORD *)&v103[8] ^= (v103[8] ^ (unsigned __int8)(32 * (v80 == 4))) & 0x20;
        }
        IsSourceInActiveVidPnTopology = DmmIsSourceInActiveVidPnTopology(
                                          v13,
                                          (*(_DWORD *)(*((_QWORD *)a2 + 6) + 4LL) >> 6) & 0xF,
                                          v78,
                                          v79);
        ADAPTER_DISPLAY::MarkCommitVidPnOnModeChange(
          *(PERESOURCE ***)(v13 + 1976),
          (*(_DWORD *)(*((_QWORD *)a2 + 6) + 4LL) >> 6) & 0xF,
          IsSourceInActiveVidPnTopology == 0);
        ADAPTER_DISPLAY::SetDisplayModeInfo(
          *(PERESOURCE ***)(v13 + 1976),
          (*(_DWORD *)(*((_QWORD *)a2 + 6) + 4LL) >> 6) & 0xF,
          (const struct _DXGK_DISPLAYMODE_INFO *const)&v101);
        v90 = *(_QWORD *)(v13 + 1976);
        v100 = v104.PrivateDriverFormatAttribute;
        v91 = (*(_DWORD *)(*((_QWORD *)a2 + 6) + 4LL) >> 6) & 0xF;
        if ( v91 >= *(_DWORD *)(v90 + 80) )
        {
          v92 = WdLogNewEntry5_WdAssertion(v88, v87, v89, v42);
          *(_QWORD *)(v92 + 24) = 3753LL;
          WdLogEvent5_WdAssertion(v92);
        }
        v93 = *(_QWORD *)(v90 + 112);
        v8 = v111;
        *(_DWORD *)(1008LL * v91 + v93 + 952) = v100;
      }
      if ( v105[0] )
        v107(v108, v74);
      goto LABEL_26;
    }
    v71 = (_QWORD *)WdLogNewEntry5_WdError(v67);
    v71[3] = FunctionalVidPnWithEnabledVidPnSource;
    v72 = *(unsigned int *)(*((_QWORD *)a2 + 6) + 4LL);
    v71[5] = (unsigned int)v101;
    v71[6] = DWORD1(v101);
    v71[7] = SDWORD2(v101);
    v71[4] = (v72 >> 6) & 0xF;
    WdLogEvent5_WdError(v71);
    if ( v105[0] )
      v107(v108, v106);
LABEL_28:
    if ( (int)FunctionalVidPnWithEnabledVidPnSource >= 0 )
    {
      v119 = 1;
      v120 = 0LL;
      DxgkStatusChangeNotify(&v119, v44, v45, v42);
    }
    goto LABEL_30;
  }
  v70 = (_QWORD *)WdLogNewEntry5_WdDmmEvent(v67);
  v70[3] = (unsigned int)v101;
  v70[4] = DWORD1(v101);
  v70[5] = SDWORD2(v101);
  v70[6] = (unsigned int)v102 / DWORD1(v102);
  v69 = v70;
  v70[7] = (*(_DWORD *)(*((_QWORD *)a2 + 6) + 4LL) >> 6) & 0xF;
LABEL_55:
  WdLogEvent5_WdDmmEvent(v69);
  if ( v105[0] )
    v107(v108, v106);
LABEL_30:
  *(_QWORD *)&v101 = *(_QWORD *)&v104.Width;
  DWORD2(v101) = v104.Format;
  if ( v104.RefreshRate.Denominator )
    HIDWORD(v101) = DmmMapVSyncFromRationalToInteger(&v104.RefreshRate, (unsigned int)v8, 0LL, v42);
  else
    HIDWORD(v101) = 0;
  *(D3DDDI_RATIONAL *)&v102 = v104.RefreshRate;
  v46 = *((_QWORD *)a2 + 6);
  *((_QWORD *)&v102 + 1) = __PAIR64__(v110, v8);
  v47 = DmmCacheDisplayModeChangeRequest(
          v13,
          (*(_DWORD *)(v46 + 4) >> 6) & 0xF,
          (unsigned int)&v101,
          2,
          FunctionalVidPnWithEnabledVidPnSource,
          3,
          0LL);
  v49 = v47;
  if ( v47 < 0 )
  {
    v98 = WdLogNewEntry5_WdError(v48);
    *(_QWORD *)(v98 + 24) = v49;
    WdLogEvent5_WdError(v98);
  }
  DXGK_AUTO_STATUS_CHANGE_NOTIFY<9,10>::NotifyStatusChange(&v116, 8);
  return (unsigned int)FunctionalVidPnWithEnabledVidPnSource;
}
