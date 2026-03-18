/*
 * XREFs of ?SetDisplayMode@DXGDEVICE@@QEAAJPEBVDXGALLOCATION@@W4_D3DDDI_VIDEO_SIGNAL_SCANLINE_ORDERING@@W4_D3DDDI_ROTATION@@U_D3DKMT_SETDISPLAYMODE_FLAGS@@PEAI@Z @ 0x1C006C7E8
 * Callers:
 *     DxgkSetDisplayMode @ 0x1C00AF380 (DxgkSetDisplayMode.c)
 * Callees:
 *     ?SetDisplayedPrimary@DXGDEVICE@@QEAAXIPEBVDXGALLOCATION@@IE@Z @ 0x1C0002320 (-SetDisplayedPrimary@DXGDEVICE@@QEAAXIPEBVDXGALLOCATION@@IE@Z.c)
 *     ?IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00031B0 (-IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?NeedCommitVidPnOnModeChange@ADAPTER_DISPLAY@@QEAAEI@Z @ 0x1C0007570 (-NeedCommitVidPnOnModeChange@ADAPTER_DISPLAY@@QEAAEI@Z.c)
 *     ?SetDisplayModeInfo@ADAPTER_DISPLAY@@QEAAXIQEBU_DXGK_DISPLAYMODE_INFO@@@Z @ 0x1C0007710 (-SetDisplayModeInfo@ADAPTER_DISPLAY@@QEAAXIQEBU_DXGK_DISPLAYMODE_INFO@@@Z.c)
 *     ?GetDisplayModeInfo@ADAPTER_DISPLAY@@QEBAQEBU_DXGK_DISPLAYMODE_INFO@@I@Z @ 0x1C0007A48 (-GetDisplayModeInfo@ADAPTER_DISPLAY@@QEBAQEBU_DXGK_DISPLAYMODE_INFO@@I@Z.c)
 *     ?MarkCommitVidPnOnModeChange@ADAPTER_DISPLAY@@QEAAXIE@Z @ 0x1C0007BDC (-MarkCommitVidPnOnModeChange@ADAPTER_DISPLAY@@QEAAXIE@Z.c)
 *     ?IsFreqWithinToleranceRange@DMMVIDEOSIGNALMODE@@SAEAEBU_D3DDDI_RATIONAL@@0I@Z @ 0x1C0007FA8 (-IsFreqWithinToleranceRange@DMMVIDEOSIGNALMODE@@SAEAEBU_D3DDDI_RATIONAL@@0I@Z.c)
 *     DxgkLogCodePointPacket @ 0x1C000A1C4 (DxgkLogCodePointPacket.c)
 *     ?Own@?$AutoRelease@PEBU_D3DKMDT_VIDPN_PRESENT_PATH@@P6AJPEAUD3DKMDT_HVIDPNTOPOLOGY__@@PEBU1@@ZPEAU2@@DXGDMM@@QEAAXPEBU_D3DKMDT_VIDPN_PRESENT_PATH@@Q6AJPEAUD3DKMDT_HVIDPNTOPOLOGY__@@0@Z1@Z @ 0x1C000A5E8 (-Own@-$AutoRelease@PEBU_D3DKMDT_VIDPN_PRESENT_PATH@@P6AJPEAUD3DKMDT_HVIDPNTOPOLOGY__@@PEBU1@@ZPE.c)
 *     ?NotifyStatusChange@?$DXGK_AUTO_STATUS_CHANGE_NOTIFY@$08$09@@AEAAXW4D3DKMT_STATE_NOTIFICATION_TYPE@@@Z @ 0x1C000AFB4 (-NotifyStatusChange@-$DXGK_AUTO_STATUS_CHANGE_NOTIFY@$08$09@@AEAAXW4D3DKMT_STATE_NOTIFICATION_TY.c)
 *     ?IsDisplayModeEqual@@YA_NAEBU_D3DKMT_DISPLAYMODE@@0@Z @ 0x1C000CCFC (-IsDisplayModeEqual@@YA_NAEBU_D3DKMT_DISPLAYMODE@@0@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C00120A0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0012400 (memset.c)
 *     ?SetVidPnPrivateDriverFormatAttribute@ADAPTER_DISPLAY@@QEAAXII@Z @ 0x1C001DA88 (-SetVidPnPrivateDriverFormatAttribute@ADAPTER_DISPLAY@@QEAAXII@Z.c)
 *     ?DdiDescribeAllocation@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_DESCRIBEALLOCATION@@@Z @ 0x1C0069EE4 (-DdiDescribeAllocation@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_DESCRIBEALLOCATION@@@Z.c)
 *     DmmIsSourceInActiveVidPnTopology @ 0x1C0097CD8 (DmmIsSourceInActiveVidPnTopology.c)
 *     ?UpdateModeWithPrimary@ADAPTER_DISPLAY@@QEAAJPEAVDXGDEVICE@@IPEAVDXGADAPTERALLOCATION@@@Z @ 0x1C009AD40 (-UpdateModeWithPrimary@ADAPTER_DISPLAY@@QEAAJPEAVDXGDEVICE@@IPEAVDXGADAPTERALLOCATION@@@Z.c)
 *     ?DmmMapVSyncFromRationalToInteger@@YAIAEBU_D3DDDI_RATIONAL@@W4_D3DDDI_VIDEO_SIGNAL_SCANLINE_ORDERING@@PEAE@Z @ 0x1C00A6F40 (-DmmMapVSyncFromRationalToInteger@@YAIAEBU_D3DDDI_RATIONAL@@W4_D3DDDI_VIDEO_SIGNAL_SCANLINE_ORDE.c)
 *     DxgkQueryDmmInterface @ 0x1C00AD984 (DxgkQueryDmmInterface.c)
 *     DmmCacheDisplayModeChangeRequest @ 0x1C00AE9B0 (DmmCacheDisplayModeChangeRequest.c)
 *     DxgkStatusChangeNotify @ 0x1C00B1110 (DxgkStatusChangeNotify.c)
 *     DmmRestoreActiveVidPnFromClientVidPnOnSourceIfNecessary @ 0x1C00C5508 (DmmRestoreActiveVidPnFromClientVidPnOnSourceIfNecessary.c)
 *     ?CommitVidPn@ADAPTER_DISPLAY@@QEAAJPEAVDXGDEVICE@@QEAUD3DKMDT_HVIDPN__@@IEPEBVDXGADAPTERALLOCATION@@QEBU_DMM_COMMITVIDPNREQUEST_DIAGINFO@@EPEAE@Z @ 0x1C0125730 (-CommitVidPn@ADAPTER_DISPLAY@@QEAAJPEAVDXGDEVICE@@QEAUD3DKMDT_HVIDPN__@@IEPEBVDXGADAPTERALLOCATI.c)
 *     CreateFunctionalVidPnWithEnabledVidPnSource @ 0x1C0141F18 (CreateFunctionalVidPnWithEnabledVidPnSource.c)
 *     DmmGetPinnedVidPnSourceModeTypeFromClientVidPnSource @ 0x1C017ADA0 (DmmGetPinnedVidPnSourceModeTypeFromClientVidPnSource.c)
 */

__int64 __fastcall DXGDEVICE::SetDisplayMode(
        DXGDEVICE *this,
        const struct DXGALLOCATION *a2,
        unsigned __int32 a3,
        enum _D3DDDI_ROTATION a4,
        struct _D3DKMT_SETDISPLAYMODE_FLAGS a5,
        unsigned int *a6)
{
  __int64 v9; // rcx
  __int64 v10; // rsi
  const struct _DXGK_DISPLAYMODE_INFO *DisplayModeInfo; // rax
  __int128 v12; // xmm1
  __int128 v13; // xmm0
  __int64 v14; // rax
  __int64 v15; // r8
  int v16; // eax
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // r9
  __int64 FunctionalVidPnWithEnabledVidPnSource; // rbx
  __int64 v22; // r15
  int v23; // r15d
  __int64 v24; // rcx
  D3DDDIFORMAT Format; // eax
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // r8
  __int64 v29; // r9
  unsigned int v30; // eax
  DXGADAPTER **v31; // rcx
  __int64 v32; // rax
  unsigned int v33; // edx
  int v34; // r15d
  const struct _DXGK_DISPLAYMODE_INFO *v35; // rbx
  int active; // eax
  __int64 v37; // rcx
  __int64 v38; // rbx
  _DWORD *v39; // roff
  __int64 v40; // rax
  int v41; // eax
  __int64 v42; // rcx
  __int64 v43; // rdi
  __int64 v45; // rax
  __int64 v46; // rax
  _QWORD *v47; // rax
  _QWORD *v48; // rax
  _QWORD *v49; // rax
  __int64 PrivateDriverFormatAttribute; // rcx
  __int64 v51; // rax
  _QWORD *v52; // rax
  _QWORD *v53; // rax
  __int64 v54; // rdx
  int DmmInterface; // eax
  __int64 v56; // rcx
  _QWORD *v57; // rax
  __int64 v58; // rax
  __int64 v59; // r15
  __int64 v60; // r8
  __int64 v61; // rcx
  _QWORD *v62; // rax
  _QWORD *v63; // rcx
  _QWORD *v64; // rax
  _QWORD *v65; // rax
  unsigned __int64 v66; // rdx
  ADAPTER_DISPLAY *v67; // rcx
  struct D3DKMDT_HVIDPN__ *v68; // r12
  int v69; // eax
  __int64 v70; // rcx
  __int64 v71; // rcx
  int v72; // r15d
  _BOOL8 v73; // rcx
  __int64 v74; // rax
  __int64 v75; // rax
  __int64 v76; // rdx
  char IsSourceInActiveVidPnTopology; // al
  _QWORD *v78; // rax
  _QWORD *v79; // rax
  __int64 v80; // r8
  _QWORD *v81; // rax
  __int64 v82; // rax
  char v83; // [rsp+20h] [rbp-E0h]
  __int128 v84; // [rsp+78h] [rbp-88h] BYREF
  __int128 v85; // [rsp+88h] [rbp-78h] BYREF
  _BYTE v86[24]; // [rsp+98h] [rbp-68h]
  _DXGKARG_DESCRIBEALLOCATION v87; // [rsp+B0h] [rbp-50h] BYREF
  _BYTE v88[8]; // [rsp+E0h] [rbp-20h] BYREF
  struct D3DKMDT_HVIDPN__ *v89; // [rsp+E8h] [rbp-18h]
  void (__fastcall *v90)(__int64, struct D3DKMDT_HVIDPN__ *); // [rsp+F0h] [rbp-10h]
  __int64 v91; // [rsp+F8h] [rbp-8h]
  int v92; // [rsp+100h] [rbp+0h]
  enum _D3DDDI_ROTATION v93; // [rsp+108h] [rbp+8h]
  int v94; // [rsp+10Ch] [rbp+Ch] BYREF
  unsigned int v95; // [rsp+110h] [rbp+10h] BYREF
  char v96; // [rsp+114h] [rbp+14h]
  int v97; // [rsp+118h] [rbp+18h]
  __int64 v98; // [rsp+120h] [rbp+20h] BYREF
  __int64 v99; // [rsp+128h] [rbp+28h]
  unsigned __int8 v100[8]; // [rsp+130h] [rbp+30h] BYREF
  unsigned __int8 v101[8]; // [rsp+138h] [rbp+38h] BYREF
  int v102; // [rsp+140h] [rbp+40h] BYREF
  __int64 v103; // [rsp+148h] [rbp+48h]
  __int64 retaddr; // [rsp+198h] [rbp+98h]

  v98 = retaddr;
  v93 = a4;
  DXGK_AUTO_STATUS_CHANGE_NOTIFY<9,10>::NotifyStatusChange(&v98, 6);
  if ( !DXGADAPTER::IsCoreResourceExclusiveOwner(*(PERESOURCE **)(*((_QWORD *)this + 2) + 16LL)) )
  {
    v46 = WdLogNewEntry5_WdAssertion(v9);
    *(_QWORD *)(v46 + 24) = 6206LL;
    WdLogEvent5_WdAssertion(v46);
  }
  v10 = *((_QWORD *)this + 354);
  if ( !v10 || !*(_QWORD *)(v10 + 1984) || !DXGADAPTER::IsCoreResourceExclusiveOwner(*((PERESOURCE **)this + 354)) )
  {
    v45 = WdLogNewEntry5_WdAssertion(v9);
    *(_QWORD *)(v45 + 24) = 6211LL;
    WdLogEvent5_WdAssertion(v45);
  }
  DisplayModeInfo = ADAPTER_DISPLAY::GetDisplayModeInfo(
                      *(DXGADAPTER ***)(v10 + 1984),
                      (*(_DWORD *)(*((_QWORD *)a2 + 6) + 4LL) >> 6) & 0xF);
  v12 = *((_OWORD *)DisplayModeInfo + 1);
  v84 = *(_OWORD *)DisplayModeInfo;
  v13 = *((_OWORD *)DisplayModeInfo + 2);
  v85 = v12;
  *(_QWORD *)&v12 = *((_QWORD *)DisplayModeInfo + 6);
  memset(&v87, 0, sizeof(v87));
  *(_OWORD *)v86 = v13;
  *(_QWORD *)&v86[16] = v12;
  v87.Flags.Value |= 1u;
  v87.Rotation = -1;
  v14 = *((_QWORD *)this + 2);
  v87.hAllocation = *(HANDLE *)(*((_QWORD *)a2 + 6) + 16LL);
  v16 = ADAPTER_RENDER::DdiDescribeAllocation(*(ADAPTER_RENDER **)(*(_QWORD *)(v14 + 16) + 1992LL), &v87, v15);
  FunctionalVidPnWithEnabledVidPnSource = v16;
  if ( v16 < 0 )
  {
    v47 = (_QWORD *)WdLogNewEntry5_WdError(v18);
    v47[3] = FunctionalVidPnWithEnabledVidPnSource;
    v47[4] = this;
    v47[5] = *((unsigned int *)a2 + 4);
    v47[6] = a2;
    v47[7] = (*(_DWORD *)(*((_QWORD *)a2 + 6) + 4LL) >> 6) & 0xF;
    WdLogEvent5_WdError(v47);
    goto LABEL_28;
  }
  v22 = (unsigned int)v84;
  FunctionalVidPnWithEnabledVidPnSource = DWORD1(v84);
  if ( *(_QWORD *)&v87.Width != (_QWORD)v84 )
  {
    v81 = (_QWORD *)WdLogNewEntry5_WdWarning(v18, v17, v19, v20);
    v81[3] = a2;
    v81[4] = v87.Width;
    v81[5] = v87.Height;
    v81[6] = v22;
    v81[7] = FunctionalVidPnWithEnabledVidPnSource;
    WdLogEvent5_WdWarning(v81);
    LODWORD(FunctionalVidPnWithEnabledVidPnSource) = -1071775739;
    goto LABEL_28;
  }
  if ( v87.Rotation != -1 )
  {
    FunctionalVidPnWithEnabledVidPnSource = SHIDWORD(v85);
    if ( v87.Rotation != HIDWORD(v85) )
    {
      v48 = (_QWORD *)WdLogNewEntry5_WdWarning(v18, v17, v19, v20);
      v48[3] = a2;
      v48[4] = v87.Rotation;
      v48[5] = FunctionalVidPnWithEnabledVidPnSource;
      WdLogEvent5_WdWarning(v48);
      LODWORD(FunctionalVidPnWithEnabledVidPnSource) = -1071775739;
      goto LABEL_30;
    }
  }
  v23 = *(_DWORD *)&v86[8];
  v24 = *(_DWORD *)(*((_QWORD *)a2 + 6) + 4LL) >> 12;
  LOBYTE(v24) = (*(_DWORD *)&v86[8] >> 4) ^ v24;
  if ( (v24 & 1) == 0 )
  {
    FunctionalVidPnWithEnabledVidPnSource = *(unsigned int *)&v86[20];
    if ( v87.PrivateDriverFormatAttribute != *(_DWORD *)&v86[20] )
    {
      v49 = (_QWORD *)WdLogNewEntry5_WdTrace(v24, v17, v19, v20);
      v49[3] = a2;
      PrivateDriverFormatAttribute = v87.PrivateDriverFormatAttribute;
      v49[5] = FunctionalVidPnWithEnabledVidPnSource;
      v49[4] = PrivateDriverFormatAttribute;
      *a6 = FunctionalVidPnWithEnabledVidPnSource;
      LODWORD(FunctionalVidPnWithEnabledVidPnSource) = -1071774891;
      goto LABEL_30;
    }
  }
  *(D3DDDI_MULTISAMPLINGMETHOD *)&v86[12] = v87.MultisampleMethod;
  Format = v87.Format;
  DWORD2(v84) = v87.Format;
  if ( !*(_QWORD *)(v10 + 1992) )
  {
    v24 = 21LL;
    if ( v87.Format == D3DDDIFMT_X8R8G8B8 )
      Format = D3DDDIFMT_A8R8G8B8;
    DWORD2(v84) = Format;
  }
  if ( !v87.RefreshRate.Denominator )
  {
    v51 = WdLogNewEntry5_WdError(v24);
    *(_QWORD *)(v51 + 24) = v87.RefreshRate.Numerator;
    WdLogEvent5_WdError(v51);
    LODWORD(FunctionalVidPnWithEnabledVidPnSource) = -1073741811;
    goto LABEL_30;
  }
  if ( v87.RefreshRate.Numerator == 64 && v87.RefreshRate.Denominator == 1 && (_QWORD)v85 == 0xFFFFFFFEFFFFFFFEuLL )
  {
    v87.RefreshRate.Numerator = -2;
    v87.RefreshRate.Denominator = -2;
  }
  if ( (*(_BYTE *)&a5 & 1) != 0
    && !DMMVIDEOSIGNALMODE::IsFreqWithinToleranceRange((const struct _D3DDDI_RATIONAL *)&v85, &v87.RefreshRate, 0) )
  {
    v52 = (_QWORD *)WdLogNewEntry5_WdWarning(v27, v26, v28, v29);
    v52[3] = a2;
    v52[4] = v87.RefreshRate.Numerator;
    v52[5] = v87.RefreshRate.Denominator;
    v52[6] = (unsigned int)v85;
    v52[7] = DWORD1(v85);
    WdLogEvent5_WdWarning(v52);
    LODWORD(FunctionalVidPnWithEnabledVidPnSource) = -1071775739;
    goto LABEL_30;
  }
  *(D3DDDI_RATIONAL *)&v85 = v87.RefreshRate;
  v30 = DmmMapVSyncFromRationalToInteger(&v87.RefreshRate, (enum _D3DDDI_VIDEO_SIGNAL_SCANLINE_ORDERING)a3, 0LL);
  v31 = *(DXGADAPTER ***)(v10 + 1984);
  HIDWORD(v84) = v30;
  v32 = *((_QWORD *)a2 + 6);
  DWORD2(v85) = a3;
  v33 = (*(_DWORD *)(v32 + 4) >> 6) & 0xF;
  v34 = ((unsigned __int8)v23 ^ (unsigned __int8)(16 * ((*(_DWORD *)(v32 + 4) & 0x1000) != 0))) & 0x10 ^ v23;
  *(_DWORD *)&v86[8] = v34;
  v35 = ADAPTER_DISPLAY::GetDisplayModeInfo(v31, v33);
  if ( !ADAPTER_DISPLAY::NeedCommitVidPnOnModeChange(
          *(DXGADAPTER ***)(v10 + 1984),
          (*(_DWORD *)(*((_QWORD *)a2 + 6) + 4LL) >> 6) & 0xF)
    && IsDisplayModeEqual((const struct _D3DKMT_DISPLAYMODE *)v35, (const struct _D3DKMT_DISPLAYMODE *)&v84)
    && *((_DWORD *)v35 + 12) == *(_DWORD *)&v86[16]
    && *((_DWORD *)v35 + 11) == *(_DWORD *)&v86[12]
    || (*(_BYTE *)&a5 & 1) != 0
    && (((unsigned __int8)v34 ^ *((_BYTE *)v35 + 40)) & 0x10) == 0
    && (((unsigned __int8)v34 ^ (unsigned __int8)*((_DWORD *)v35 + 10)) & 0x20) == 0 )
  {
    active = DmmRestoreActiveVidPnFromClientVidPnOnSourceIfNecessary(v10, *((_QWORD *)a2 + 6));
    v38 = active;
    if ( active < 0 )
    {
      v53 = (_QWORD *)WdLogNewEntry5_WdError(v37);
      v53[3] = *(_QWORD *)(v10 + 1984);
      v54 = (*(_DWORD *)(*((_QWORD *)a2 + 6) + 4LL) >> 6) & 0xF;
      v53[5] = v38;
      v53[4] = v54;
      WdLogEvent5_WdError(v53);
    }
    LODWORD(FunctionalVidPnWithEnabledVidPnSource) = ADAPTER_DISPLAY::UpdateModeWithPrimary(
                                                       *(ADAPTER_DISPLAY **)(v10 + 1984),
                                                       this,
                                                       (*(_DWORD *)(*((_QWORD *)a2 + 6) + 4LL) >> 6) & 0xF,
                                                       *((struct DXGADAPTERALLOCATION **)a2 + 6));
    DxgkLogCodePointPacket(
      0x3Cu,
      FunctionalVidPnWithEnabledVidPnSource,
      *(_DWORD *)(v10 + 252),
      (*(_DWORD *)(*((_QWORD *)a2 + 6) + 4LL) >> 6) & 0xF);
LABEL_26:
    if ( (int)FunctionalVidPnWithEnabledVidPnSource < 0 )
      goto LABEL_30;
    v39 = (_DWORD *)((char *)this + 4 * ((*(_DWORD *)(*((_QWORD *)a2 + 6) + 4LL) >> 6) & 0xF) + 976);
    *v39 |= 0x200u;
    DXGDEVICE::SetDisplayedPrimary(this, (*(_DWORD *)(*((_QWORD *)a2 + 6) + 4LL) >> 6) & 0xF, a2, 0, 1);
    goto LABEL_28;
  }
  v99 = 0LL;
  DmmInterface = DxgkQueryDmmInterface((DXGADAPTER *)v10);
  FunctionalVidPnWithEnabledVidPnSource = DmmInterface;
  if ( DmmInterface < 0 )
  {
    v57 = (_QWORD *)WdLogNewEntry5_WdError(v56);
    v57[3] = FunctionalVidPnWithEnabledVidPnSource;
    v57[4] = this;
    v57[5] = *((unsigned int *)a2 + 4);
    v57[6] = a2;
    v57[7] = (*(_DWORD *)(*((_QWORD *)a2 + 6) + 4LL) >> 6) & 0xF;
    WdLogEvent5_WdError(v57);
    goto LABEL_28;
  }
  v58 = *((_QWORD *)a2 + 6);
  v59 = v99;
  *(_QWORD *)v101 = 0LL;
  v89 = 0LL;
  v60 = (*(_DWORD *)(v58 + 4) >> 6) & 0xF;
  v90 = 0LL;
  v91 = 0LL;
  v92 = 0;
  v88[0] = 0;
  *(_QWORD *)v100 = 0LL;
  FunctionalVidPnWithEnabledVidPnSource = (int)CreateFunctionalVidPnWithEnabledVidPnSource(v99, v10, v60);
  DXGDMM::AutoRelease<_D3DKMDT_VIDPN_PRESENT_PATH const *,long (*)(D3DKMDT_HVIDPNTOPOLOGY__ *,_D3DKMDT_VIDPN_PRESENT_PATH const *),D3DKMDT_HVIDPNTOPOLOGY__ *>::Own(
    (__int64)v88,
    *(__int64 *)v100,
    *(_QWORD *)(v59 + 64),
    v10);
  if ( (_DWORD)FunctionalVidPnWithEnabledVidPnSource == -1071774925 )
  {
    v62 = (_QWORD *)WdLogNewEntry5_WdDmmEvent();
    v62[3] = -1071774925LL;
    v62[4] = (*(_DWORD *)(*((_QWORD *)a2 + 6) + 4LL) >> 6) & 0xF;
LABEL_53:
    v62[5] = (unsigned int)v84;
    v62[6] = DWORD1(v84);
    v62[7] = SDWORD2(v84);
    v63 = v62;
    goto LABEL_55;
  }
  if ( (_DWORD)FunctionalVidPnWithEnabledVidPnSource == -1071774886 )
  {
    v62 = (_QWORD *)WdLogNewEntry5_WdDmmEvent();
    v62[3] = (*(_DWORD *)(*((_QWORD *)a2 + 6) + 4LL) >> 6) & 0xF;
    v62[4] = *(_QWORD *)(v10 + 1984);
    goto LABEL_53;
  }
  if ( (_DWORD)FunctionalVidPnWithEnabledVidPnSource != -1071774970 )
  {
    if ( (int)FunctionalVidPnWithEnabledVidPnSource >= 0 )
    {
      v67 = *(ADAPTER_DISPLAY **)(v10 + 1984);
      v68 = v89;
      v96 &= 0xF8u;
      v95 = v95 & 0xFFFFFF00 | 0x12;
      v97 = *((_DWORD *)v67 + 78);
      v69 = ADAPTER_DISPLAY::CommitVidPn(
              v67,
              this,
              v89,
              (*(_DWORD *)(*((_QWORD *)a2 + 6) + 4LL) >> 6) & 0xF,
              v83,
              *((const struct DXGADAPTERALLOCATION **)a2 + 6),
              (const struct _DMM_COMMITVIDPNREQUEST_DIAGINFO *const)&v95,
              (unsigned __int8)v100,
              v101);
      FunctionalVidPnWithEnabledVidPnSource = v69;
      if ( v69 < 0 )
      {
        if ( v69 == -1071774920 )
        {
          v78 = (_QWORD *)WdLogNewEntry5_WdDmmEvent();
          v78[3] = v68;
          v78[4] = (*(_DWORD *)(*((_QWORD *)a2 + 6) + 4LL) >> 6) & 0xF;
          v78[5] = *(_QWORD *)(v10 + 1984);
          WdLogEvent5_WdDmmEvent(v78);
        }
        else
        {
          v79 = (_QWORD *)WdLogNewEntry5_WdError(v70);
          v79[3] = FunctionalVidPnWithEnabledVidPnSource;
          v79[4] = *(_QWORD *)(v10 + 1984);
          v80 = (*(_DWORD *)(*((_QWORD *)a2 + 6) + 4LL) >> 6) & 0xF;
          v79[6] = a2;
          v79[5] = v80;
          v79[7] = this;
          WdLogEvent5_WdError(v79);
        }
      }
      else
      {
        LODWORD(FunctionalVidPnWithEnabledVidPnSource) = DmmGetPinnedVidPnSourceModeTypeFromClientVidPnSource(
                                                           v10,
                                                           (*(_DWORD *)(*((_QWORD *)a2 + 6) + 4LL) >> 6) & 0xF,
                                                           &v94);
        if ( (int)FunctionalVidPnWithEnabledVidPnSource < 0 )
        {
          v75 = WdLogNewEntry5_WdError(v71);
          v76 = (*(_DWORD *)(*((_QWORD *)a2 + 6) + 4LL) >> 6) & 0xF;
          *(_QWORD *)(v75 + 32) = v10;
          *(_QWORD *)(v75 + 24) = v76;
          WdLogEvent5_WdError(v75);
          *(_DWORD *)&v86[8] &= ~0x20u;
        }
        else
        {
          v72 = v94;
          v73 = (unsigned int)(v94 - 3) <= 1;
          if ( ((v86[8] >> 4) & 1) != v73 )
          {
            v74 = WdLogNewEntry5_WdAssertion(v73);
            *(_QWORD *)(v74 + 24) = 6495LL;
            WdLogEvent5_WdAssertion(v74);
          }
          *(_DWORD *)&v86[8] ^= (v86[8] ^ (unsigned __int8)(32 * (v72 == 4))) & 0x20;
        }
        IsSourceInActiveVidPnTopology = DmmIsSourceInActiveVidPnTopology(
                                          v10,
                                          (*(_DWORD *)(*((_QWORD *)a2 + 6) + 4LL) >> 6) & 0xF);
        ADAPTER_DISPLAY::MarkCommitVidPnOnModeChange(
          *(PERESOURCE ***)(v10 + 1984),
          (*(_DWORD *)(*((_QWORD *)a2 + 6) + 4LL) >> 6) & 0xF,
          IsSourceInActiveVidPnTopology == 0);
        ADAPTER_DISPLAY::SetDisplayModeInfo(
          *(PERESOURCE ***)(v10 + 1984),
          (*(_DWORD *)(*((_QWORD *)a2 + 6) + 4LL) >> 6) & 0xF,
          (const struct _DXGK_DISPLAYMODE_INFO *const)&v84);
        ADAPTER_DISPLAY::SetVidPnPrivateDriverFormatAttribute(
          *(ADAPTER_DISPLAY **)(v10 + 1984),
          (*(_DWORD *)(*((_QWORD *)a2 + 6) + 4LL) >> 6) & 0xF,
          v87.PrivateDriverFormatAttribute);
      }
      if ( v88[0] )
        v90(v91, v68);
      goto LABEL_26;
    }
    v65 = (_QWORD *)WdLogNewEntry5_WdError(v61);
    v65[3] = FunctionalVidPnWithEnabledVidPnSource;
    v66 = *(unsigned int *)(*((_QWORD *)a2 + 6) + 4LL);
    v65[5] = (unsigned int)v84;
    v65[6] = DWORD1(v84);
    v65[7] = SDWORD2(v84);
    v65[4] = (v66 >> 6) & 0xF;
    WdLogEvent5_WdError(v65);
    if ( v88[0] )
      v90(v91, v89);
LABEL_28:
    if ( (int)FunctionalVidPnWithEnabledVidPnSource >= 0 )
    {
      v102 = 1;
      v103 = 0LL;
      DxgkStatusChangeNotify(&v102);
    }
    goto LABEL_30;
  }
  v64 = (_QWORD *)WdLogNewEntry5_WdDmmEvent();
  v64[3] = (unsigned int)v84;
  v64[4] = DWORD1(v84);
  v64[5] = SDWORD2(v84);
  v64[6] = (unsigned int)v85 / DWORD1(v85);
  v63 = v64;
  v64[7] = (*(_DWORD *)(*((_QWORD *)a2 + 6) + 4LL) >> 6) & 0xF;
LABEL_55:
  WdLogEvent5_WdDmmEvent(v63);
  if ( v88[0] )
    v90(v91, v89);
LABEL_30:
  *(_QWORD *)&v84 = *(_QWORD *)&v87.Width;
  DWORD2(v84) = v87.Format;
  if ( v87.RefreshRate.Denominator )
    HIDWORD(v84) = DmmMapVSyncFromRationalToInteger(
                     &v87.RefreshRate,
                     (enum _D3DDDI_VIDEO_SIGNAL_SCANLINE_ORDERING)a3,
                     0LL);
  else
    HIDWORD(v84) = 0;
  *(D3DDDI_RATIONAL *)&v85 = v87.RefreshRate;
  v40 = *((_QWORD *)a2 + 6);
  *((_QWORD *)&v85 + 1) = __PAIR64__(v93, a3);
  v41 = DmmCacheDisplayModeChangeRequest(
          v10,
          (*(_DWORD *)(v40 + 4) >> 6) & 0xF,
          (unsigned int)&v84,
          2,
          FunctionalVidPnWithEnabledVidPnSource,
          3,
          0LL);
  v43 = v41;
  if ( v41 < 0 )
  {
    v82 = WdLogNewEntry5_WdError(v42);
    *(_QWORD *)(v82 + 24) = v43;
    WdLogEvent5_WdError(v82);
  }
  DXGK_AUTO_STATUS_CHANGE_NOTIFY<9,10>::NotifyStatusChange(&v98, 8);
  return (unsigned int)FunctionalVidPnWithEnabledVidPnSource;
}
