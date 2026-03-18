/*
 * XREFs of ?SetDisplayMode@DXGDEVICE@@QEAAJPEBVDXGALLOCATION@@W4_D3DDDI_VIDEO_SIGNAL_SCANLINE_ORDERING@@W4_D3DDDI_ROTATION@@U_D3DKMT_SETDISPLAYMODE_FLAGS@@PEAIPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C0094560
 * Callers:
 *     DxgkSetDisplayMode @ 0x1C0071D40 (DxgkSetDisplayMode.c)
 * Callees:
 *     ?NotifyStatusChange@?$DXGK_AUTO_STATUS_CHANGE_NOTIFY@$08$09@@AEAAXW4D3DKMT_STATE_NOTIFICATION_TYPE@@@Z @ 0x1C00013E0 (-NotifyStatusChange@-$DXGK_AUTO_STATUS_CHANGE_NOTIFY@$08$09@@AEAAXW4D3DKMT_STATE_NOTIFICATION_TY.c)
 *     ?IsFreqWithinToleranceRange@DMMVIDEOSIGNALMODE@@SAEAEBU_D3DDDI_RATIONAL@@0I@Z @ 0x1C000189C (-IsFreqWithinToleranceRange@DMMVIDEOSIGNALMODE@@SAEAEBU_D3DDDI_RATIONAL@@0I@Z.c)
 *     ?NeedCommitVidPnOnModeChange@ADAPTER_DISPLAY@@QEAAEI@Z @ 0x1C00061C4 (-NeedCommitVidPnOnModeChange@ADAPTER_DISPLAY@@QEAAEI@Z.c)
 *     ?SetDisplayModeInfo@ADAPTER_DISPLAY@@QEAAXIQEBU_DXGK_DISPLAYMODE_INFO@@@Z @ 0x1C00063C4 (-SetDisplayModeInfo@ADAPTER_DISPLAY@@QEAAXIQEBU_DXGK_DISPLAYMODE_INFO@@@Z.c)
 *     ?MarkCommitVidPnOnModeChange@ADAPTER_DISPLAY@@QEAAXIE@Z @ 0x1C0006874 (-MarkCommitVidPnOnModeChange@ADAPTER_DISPLAY@@QEAAXIE@Z.c)
 *     ?GetDisplayModeInfo@ADAPTER_DISPLAY@@QEBAQEBU_DXGK_DISPLAYMODE_INFO@@I@Z @ 0x1C0006BF4 (-GetDisplayModeInfo@ADAPTER_DISPLAY@@QEBAQEBU_DXGK_DISPLAYMODE_INFO@@I@Z.c)
 *     ?SetDisplayedPrimary@DXGDEVICE@@QEAAXIPEBVDXGALLOCATION@@IE@Z @ 0x1C0007E9C (-SetDisplayedPrimary@DXGDEVICE@@QEAAXIPEBVDXGALLOCATION@@IE@Z.c)
 *     ?IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00094A4 (-IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?Own@?$AutoRelease@PEBU_D3DKMDT_VIDPN_PRESENT_PATH@@P6AJPEAUD3DKMDT_HVIDPNTOPOLOGY__@@PEBU1@@ZPEAU2@@DXGDMM@@QEAAXPEBU_D3DKMDT_VIDPN_PRESENT_PATH@@Q6AJPEAUD3DKMDT_HVIDPNTOPOLOGY__@@0@Z1@Z @ 0x1C000AC00 (-Own@-$AutoRelease@PEBU_D3DKMDT_VIDPN_PRESENT_PATH@@P6AJPEAUD3DKMDT_HVIDPNTOPOLOGY__@@PEBU1@@ZPE.c)
 *     DxgkLogCodePointPacket @ 0x1C000AF10 (DxgkLogCodePointPacket.c)
 *     ?IsStereoModeEqual@@YA_NAEBU_D3DKMT_DISPLAYMODE@@0@Z @ 0x1C000D7B8 (-IsStereoModeEqual@@YA_NAEBU_D3DKMT_DISPLAYMODE@@0@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0012450 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C00127C0 (memset.c)
 *     ?IsDisplayModeEqual@@YA_NAEBU_D3DKMT_DISPLAYMODE@@0@Z @ 0x1C0022A78 (-IsDisplayModeEqual@@YA_NAEBU_D3DKMT_DISPLAYMODE@@0@Z.c)
 *     DxgkStatusChangeNotify @ 0x1C00728B0 (DxgkStatusChangeNotify.c)
 *     ?UpdateModeWithPrimary@ADAPTER_DISPLAY@@QEAAJPEAVDXGDEVICE@@IPEAVDXGADAPTERALLOCATION@@@Z @ 0x1C00877A4 (-UpdateModeWithPrimary@ADAPTER_DISPLAY@@QEAAJPEAVDXGDEVICE@@IPEAVDXGADAPTERALLOCATION@@@Z.c)
 *     DmmIsSourceInActiveVidPnTopology @ 0x1C0088C5C (DmmIsSourceInActiveVidPnTopology.c)
 *     ?DdiDescribeAllocation@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_DESCRIBEALLOCATION@@@Z @ 0x1C0093988 (-DdiDescribeAllocation@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_DESCRIBEALLOCATION@@@Z.c)
 *     ?DmmMapVSyncFromRationalToInteger@@YAIAEBU_D3DDDI_RATIONAL@@W4_D3DDDI_VIDEO_SIGNAL_SCANLINE_ORDERING@@PEAE@Z @ 0x1C00BEAF0 (-DmmMapVSyncFromRationalToInteger@@YAIAEBU_D3DDDI_RATIONAL@@W4_D3DDDI_VIDEO_SIGNAL_SCANLINE_ORDE.c)
 *     DxgkQueryDmmInterface @ 0x1C00C5D40 (DxgkQueryDmmInterface.c)
 *     DmmCacheDisplayModeChangeRequest @ 0x1C00C5F78 (DmmCacheDisplayModeChangeRequest.c)
 *     DmmRestoreActiveVidPnFromClientVidPnOnSourceIfNecessary @ 0x1C00D9D3C (DmmRestoreActiveVidPnFromClientVidPnOnSourceIfNecessary.c)
 *     CreateFunctionalVidPnWithEnabledVidPnSource @ 0x1C00E0DB8 (CreateFunctionalVidPnWithEnabledVidPnSource.c)
 *     ?CommitVidPn@ADAPTER_DISPLAY@@QEAAJPEAVDXGDEVICE@@QEAUD3DKMDT_HVIDPN__@@IEPEBVDXGADAPTERALLOCATION@@QEBU_DMM_COMMITVIDPNREQUEST_DIAGINFO@@EPEAEPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C00E1B9C (-CommitVidPn@ADAPTER_DISPLAY@@QEAAJPEAVDXGDEVICE@@QEAUD3DKMDT_HVIDPN__@@IEPEBVDXGADAPTERALLOCATI.c)
 *     DmmGetPinnedVidPnSourceModeTypeFromClientVidPnSource @ 0x1C00E2D10 (DmmGetPinnedVidPnSourceModeTypeFromClientVidPnSource.c)
 */

__int64 __fastcall DXGDEVICE::SetDisplayMode(
        DXGDEVICE *this,
        const struct DXGALLOCATION *a2,
        unsigned __int32 a3,
        enum _D3DDDI_ROTATION a4,
        struct _D3DKMT_SETDISPLAYMODE_FLAGS a5,
        unsigned int *a6,
        struct _DXGK_DISPLAY_SCENARIO_CONTEXT *a7)
{
  __int64 v9; // rcx
  __int64 v10; // rax
  __int64 v11; // rsi
  __int64 v12; // rax
  const struct _DXGK_DISPLAYMODE_INFO *DisplayModeInfo; // rax
  __int128 v14; // xmm1
  __int128 v15; // xmm0
  __int64 v16; // rax
  __int64 v17; // r8
  int v18; // eax
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v22; // r9
  __int64 FunctionalVidPnWithEnabledVidPnSource; // rbx
  _QWORD *v24; // rax
  __int64 v25; // r15
  _QWORD *v26; // rax
  int v27; // r15d
  __int64 v28; // rcx
  _QWORD *v29; // rax
  __int64 PrivateDriverFormatAttribute; // rcx
  D3DDDIFORMAT Format; // eax
  __int64 v32; // rax
  __int64 v33; // rdx
  __int64 v34; // rcx
  __int64 v35; // r8
  __int64 v36; // r9
  _QWORD *v37; // rax
  unsigned int v38; // eax
  DXGADAPTER **v39; // rcx
  __int64 v40; // rax
  unsigned int v41; // edx
  const struct _D3DKMT_DISPLAYMODE *v42; // rbx
  int active; // eax
  __int64 v44; // rcx
  __int64 v45; // rbx
  _QWORD *v46; // rax
  __int64 v47; // rdx
  int DmmInterface; // eax
  __int64 v49; // rcx
  _QWORD *v50; // rax
  __int64 v51; // rax
  __int64 v52; // r15
  __int64 v53; // r8
  __int64 v54; // rcx
  _QWORD *v55; // rax
  _QWORD *v56; // rcx
  _QWORD *v57; // rax
  _QWORD *v58; // rax
  unsigned __int64 v59; // rdx
  ADAPTER_DISPLAY *v60; // rcx
  struct D3DKMDT_HVIDPN__ *v61; // r12
  int v62; // eax
  __int64 v63; // rcx
  __int64 v64; // rcx
  UINT v65; // r15d
  _BOOL8 v66; // rcx
  __int64 v67; // rax
  __int64 v68; // rax
  __int64 v69; // rdx
  char IsSourceInActiveVidPnTopology; // al
  __int64 v71; // rcx
  __int64 v72; // r13
  unsigned int v73; // r15d
  __int64 v74; // rax
  _QWORD *v75; // rax
  _QWORD *v76; // rax
  __int64 v77; // r8
  _DWORD *v78; // roff
  _QWORD *v79; // rax
  __int64 v80; // rax
  int v81; // eax
  __int64 v82; // rcx
  __int64 v83; // rdi
  __int64 v84; // rax
  char v86; // [rsp+20h] [rbp-E0h]
  UINT v88; // [rsp+78h] [rbp-88h] BYREF
  __int128 v89; // [rsp+80h] [rbp-80h] BYREF
  __int128 v90; // [rsp+90h] [rbp-70h] BYREF
  _BYTE v91[24]; // [rsp+A0h] [rbp-60h]
  struct _DXGKARG_DESCRIBEALLOCATION v92; // [rsp+B8h] [rbp-48h] BYREF
  _BYTE v93[8]; // [rsp+E8h] [rbp-18h] BYREF
  struct D3DKMDT_HVIDPN__ *v94; // [rsp+F0h] [rbp-10h]
  void (__fastcall *v95)(__int64, struct D3DKMDT_HVIDPN__ *); // [rsp+F8h] [rbp-8h]
  __int64 v96; // [rsp+100h] [rbp+0h]
  int v97; // [rsp+108h] [rbp+8h]
  enum _D3DDDI_ROTATION v98; // [rsp+110h] [rbp+10h]
  unsigned int v99; // [rsp+118h] [rbp+18h] BYREF
  char v100; // [rsp+11Ch] [rbp+1Ch]
  int v101; // [rsp+120h] [rbp+20h]
  __int64 v102; // [rsp+128h] [rbp+28h]
  unsigned __int8 v103[8]; // [rsp+130h] [rbp+30h] BYREF
  __int64 v104; // [rsp+138h] [rbp+38h] BYREF
  unsigned __int8 v105[8]; // [rsp+140h] [rbp+40h] BYREF
  int v106; // [rsp+148h] [rbp+48h] BYREF
  __int64 v107; // [rsp+150h] [rbp+50h]
  __int64 retaddr; // [rsp+1A8h] [rbp+A8h]

  v104 = retaddr;
  v98 = a4;
  DXGK_AUTO_STATUS_CHANGE_NOTIFY<9,10>::NotifyStatusChange(&v104, 6);
  if ( !DXGADAPTER::IsCoreResourceExclusiveOwner(*(PERESOURCE **)(*((_QWORD *)this + 2) + 16LL)) )
  {
    v10 = WdLogNewEntry5_WdAssertion(v9);
    *(_QWORD *)(v10 + 24) = 6288LL;
    WdLogEvent5_WdAssertion(v10);
  }
  v11 = *((_QWORD *)this + 357);
  if ( !v11 || !*(_QWORD *)(v11 + 2128) || !DXGADAPTER::IsCoreResourceExclusiveOwner(*((PERESOURCE **)this + 357)) )
  {
    v12 = WdLogNewEntry5_WdAssertion(v9);
    *(_QWORD *)(v12 + 24) = 6293LL;
    WdLogEvent5_WdAssertion(v12);
  }
  DisplayModeInfo = ADAPTER_DISPLAY::GetDisplayModeInfo(
                      *(DXGADAPTER ***)(v11 + 2128),
                      (*(_DWORD *)(*((_QWORD *)a2 + 6) + 4LL) >> 6) & 0xF);
  v14 = *((_OWORD *)DisplayModeInfo + 1);
  v89 = *(_OWORD *)DisplayModeInfo;
  v15 = *((_OWORD *)DisplayModeInfo + 2);
  v90 = v14;
  *(_QWORD *)&v14 = *((_QWORD *)DisplayModeInfo + 6);
  *(_OWORD *)v91 = v15;
  *(_QWORD *)&v91[16] = v14;
  memset(&v92, 0, sizeof(v92));
  v92.Flags.Value |= 1u;
  v92.Rotation = -1;
  v16 = *((_QWORD *)this + 2);
  v92.hAllocation = *(HANDLE *)(*((_QWORD *)a2 + 6) + 16LL);
  v18 = ADAPTER_RENDER::DdiDescribeAllocation(*(ADAPTER_RENDER **)(*(_QWORD *)(v16 + 16) + 2136LL), &v92, v17);
  FunctionalVidPnWithEnabledVidPnSource = v18;
  if ( v18 < 0 )
  {
    v24 = (_QWORD *)WdLogNewEntry5_WdError(v20);
    v24[3] = FunctionalVidPnWithEnabledVidPnSource;
    v24[4] = this;
    v24[5] = *((unsigned int *)a2 + 4);
    v24[6] = a2;
    v24[7] = (*(_DWORD *)(*((_QWORD *)a2 + 6) + 4LL) >> 6) & 0xF;
    WdLogEvent5_WdError(v24);
    goto LABEL_69;
  }
  v25 = (unsigned int)v89;
  FunctionalVidPnWithEnabledVidPnSource = DWORD1(v89);
  if ( *(_QWORD *)&v92.Width != (_QWORD)v89 )
  {
    v79 = (_QWORD *)WdLogNewEntry5_WdWarning(v20, v19, v21, v22);
    v79[3] = a2;
    v79[4] = v92.Width;
    v79[5] = v92.Height;
    v79[6] = v25;
    v79[7] = FunctionalVidPnWithEnabledVidPnSource;
    WdLogEvent5_WdWarning(v79);
    LODWORD(FunctionalVidPnWithEnabledVidPnSource) = -1071775739;
LABEL_69:
    if ( (int)FunctionalVidPnWithEnabledVidPnSource >= 0 )
    {
      v106 = 1;
      v107 = 0LL;
      DxgkStatusChangeNotify(&v106);
    }
    goto LABEL_71;
  }
  if ( v92.Rotation != -1 )
  {
    FunctionalVidPnWithEnabledVidPnSource = SHIDWORD(v90);
    if ( v92.Rotation != HIDWORD(v90) )
    {
      v26 = (_QWORD *)WdLogNewEntry5_WdWarning(v20, v19, v21, v22);
      v26[3] = a2;
      v26[4] = v92.Rotation;
      v26[5] = FunctionalVidPnWithEnabledVidPnSource;
      WdLogEvent5_WdWarning(v26);
      LODWORD(FunctionalVidPnWithEnabledVidPnSource) = -1071775739;
      goto LABEL_71;
    }
  }
  v27 = *(_DWORD *)&v91[8];
  v28 = *(_DWORD *)(*((_QWORD *)a2 + 6) + 4LL) >> 12;
  LOBYTE(v28) = (*(_DWORD *)&v91[8] >> 4) ^ v28;
  if ( (v28 & 1) == 0 )
  {
    FunctionalVidPnWithEnabledVidPnSource = *(unsigned int *)&v91[20];
    if ( v92.PrivateDriverFormatAttribute != *(_DWORD *)&v91[20] )
    {
      v29 = (_QWORD *)WdLogNewEntry5_WdTrace(v28, v19, v21, v22);
      v29[3] = a2;
      PrivateDriverFormatAttribute = v92.PrivateDriverFormatAttribute;
      v29[5] = FunctionalVidPnWithEnabledVidPnSource;
      v29[4] = PrivateDriverFormatAttribute;
      *a6 = FunctionalVidPnWithEnabledVidPnSource;
      LODWORD(FunctionalVidPnWithEnabledVidPnSource) = -1071774891;
      goto LABEL_71;
    }
  }
  *(D3DDDI_MULTISAMPLINGMETHOD *)&v91[12] = v92.MultisampleMethod;
  Format = v92.Format;
  DWORD2(v89) = v92.Format;
  if ( !*(_QWORD *)(v11 + 2136) )
  {
    v28 = 21LL;
    if ( v92.Format == D3DDDIFMT_X8R8G8B8 )
      Format = D3DDDIFMT_A8R8G8B8;
    DWORD2(v89) = Format;
  }
  if ( !v92.RefreshRate.Denominator )
  {
    v32 = WdLogNewEntry5_WdError(v28);
    *(_QWORD *)(v32 + 24) = v92.RefreshRate.Numerator;
    WdLogEvent5_WdError(v32);
    LODWORD(FunctionalVidPnWithEnabledVidPnSource) = -1073741811;
    goto LABEL_71;
  }
  if ( v92.RefreshRate.Numerator == 64 && v92.RefreshRate.Denominator == 1 && (_QWORD)v90 == 0xFFFFFFFEFFFFFFFEuLL )
  {
    v92.RefreshRate.Numerator = -2;
    v92.RefreshRate.Denominator = -2;
  }
  if ( (*(_BYTE *)&a5 & 1) != 0
    && !DMMVIDEOSIGNALMODE::IsFreqWithinToleranceRange((const struct _D3DDDI_RATIONAL *)&v90, &v92.RefreshRate, 0) )
  {
    v37 = (_QWORD *)WdLogNewEntry5_WdWarning(v34, v33, v35, v36);
    v37[3] = a2;
    v37[4] = v92.RefreshRate.Numerator;
    v37[5] = v92.RefreshRate.Denominator;
    v37[6] = (unsigned int)v90;
    v37[7] = DWORD1(v90);
    WdLogEvent5_WdWarning(v37);
    LODWORD(FunctionalVidPnWithEnabledVidPnSource) = -1071775739;
    goto LABEL_71;
  }
  *(D3DDDI_RATIONAL *)&v90 = v92.RefreshRate;
  v38 = DmmMapVSyncFromRationalToInteger(&v92.RefreshRate, (enum _D3DDDI_VIDEO_SIGNAL_SCANLINE_ORDERING)a3, 0LL);
  v39 = *(DXGADAPTER ***)(v11 + 2128);
  HIDWORD(v89) = v38;
  v40 = *((_QWORD *)a2 + 6);
  DWORD2(v90) = a3;
  v41 = (*(_DWORD *)(v40 + 4) >> 6) & 0xF;
  *(_DWORD *)&v91[8] = ((unsigned __int8)v27 ^ (unsigned __int8)(16 * ((*(_DWORD *)(v40 + 4) & 0x1000) != 0))) & 0x10 ^ v27;
  v42 = (const struct _D3DKMT_DISPLAYMODE *)ADAPTER_DISPLAY::GetDisplayModeInfo(v39, v41);
  if ( !ADAPTER_DISPLAY::NeedCommitVidPnOnModeChange(
          *(DXGADAPTER ***)(v11 + 2128),
          (*(_DWORD *)(*((_QWORD *)a2 + 6) + 4LL) >> 6) & 0xF)
    && IsDisplayModeEqual(v42, (const struct _D3DKMT_DISPLAYMODE *)&v89)
    && v42[1].Height == *(_DWORD *)&v91[16]
    && v42[1].Width == *(_DWORD *)&v91[12]
    || (*(_BYTE *)&a5 & 1) != 0 && IsStereoModeEqual(v42, (const struct _D3DKMT_DISPLAYMODE *)&v89) )
  {
    active = DmmRestoreActiveVidPnFromClientVidPnOnSourceIfNecessary(v11, *((_QWORD *)a2 + 6));
    v45 = active;
    if ( active < 0 )
    {
      v46 = (_QWORD *)WdLogNewEntry5_WdError(v44);
      v46[3] = *(_QWORD *)(v11 + 2128);
      v47 = (*(_DWORD *)(*((_QWORD *)a2 + 6) + 4LL) >> 6) & 0xF;
      v46[5] = v45;
      v46[4] = v47;
      WdLogEvent5_WdError(v46);
    }
    LODWORD(FunctionalVidPnWithEnabledVidPnSource) = ADAPTER_DISPLAY::UpdateModeWithPrimary(
                                                       *(PERESOURCE ***)(v11 + 2128),
                                                       (PERESOURCE **)this,
                                                       (*(_DWORD *)(*((_QWORD *)a2 + 6) + 4LL) >> 6) & 0xF,
                                                       *((struct DXGADAPTERALLOCATION **)a2 + 6));
    DxgkLogCodePointPacket(
      0x3Cu,
      FunctionalVidPnWithEnabledVidPnSource,
      *(_DWORD *)(v11 + 268),
      (*(_DWORD *)(*((_QWORD *)a2 + 6) + 4LL) >> 6) & 0xF);
    goto LABEL_66;
  }
  v102 = 0LL;
  DmmInterface = DxgkQueryDmmInterface((DXGADAPTER *)v11);
  FunctionalVidPnWithEnabledVidPnSource = DmmInterface;
  if ( DmmInterface < 0 )
  {
    v50 = (_QWORD *)WdLogNewEntry5_WdError(v49);
    v50[3] = FunctionalVidPnWithEnabledVidPnSource;
    v50[4] = this;
    v50[5] = *((unsigned int *)a2 + 4);
    v50[6] = a2;
    v50[7] = (*(_DWORD *)(*((_QWORD *)a2 + 6) + 4LL) >> 6) & 0xF;
    WdLogEvent5_WdError(v50);
    goto LABEL_69;
  }
  v51 = *((_QWORD *)a2 + 6);
  v52 = v102;
  *(_QWORD *)v105 = 0LL;
  v94 = 0LL;
  v53 = (*(_DWORD *)(v51 + 4) >> 6) & 0xF;
  v95 = 0LL;
  v96 = 0LL;
  v97 = 0;
  v93[0] = 0;
  *(_QWORD *)v103 = 0LL;
  FunctionalVidPnWithEnabledVidPnSource = (int)CreateFunctionalVidPnWithEnabledVidPnSource(v102, v11, v53);
  DXGDMM::AutoRelease<_D3DKMDT_VIDPN_PRESENT_PATH const *,long (*)(D3DKMDT_HVIDPNTOPOLOGY__ *,_D3DKMDT_VIDPN_PRESENT_PATH const *),D3DKMDT_HVIDPNTOPOLOGY__ *>::Own(
    (__int64)v93,
    *(__int64 *)v103,
    *(_QWORD *)(v52 + 64),
    v11);
  if ( (_DWORD)FunctionalVidPnWithEnabledVidPnSource == -1071774925 )
  {
    v55 = (_QWORD *)WdLogNewEntry5_WdDmmEvent(v54);
    v55[3] = -1071774925LL;
    v55[4] = (*(_DWORD *)(*((_QWORD *)a2 + 6) + 4LL) >> 6) & 0xF;
LABEL_42:
    v55[5] = (unsigned int)v89;
    v55[6] = DWORD1(v89);
    v55[7] = SDWORD2(v89);
    v56 = v55;
    goto LABEL_43;
  }
  if ( (_DWORD)FunctionalVidPnWithEnabledVidPnSource == -1071774886 )
  {
    v55 = (_QWORD *)WdLogNewEntry5_WdDmmEvent(v54);
    v55[3] = (*(_DWORD *)(*((_QWORD *)a2 + 6) + 4LL) >> 6) & 0xF;
    v55[4] = *(_QWORD *)(v11 + 2128);
    goto LABEL_42;
  }
  if ( (_DWORD)FunctionalVidPnWithEnabledVidPnSource != -1071774970 )
  {
    if ( (int)FunctionalVidPnWithEnabledVidPnSource < 0 )
    {
      v58 = (_QWORD *)WdLogNewEntry5_WdError(v54);
      v58[3] = FunctionalVidPnWithEnabledVidPnSource;
      v59 = *(unsigned int *)(*((_QWORD *)a2 + 6) + 4LL);
      v58[5] = (unsigned int)v89;
      v58[6] = DWORD1(v89);
      v58[7] = SDWORD2(v89);
      v58[4] = (v59 >> 6) & 0xF;
      WdLogEvent5_WdError(v58);
      if ( v93[0] )
        v95(v96, v94);
      goto LABEL_69;
    }
    v60 = *(ADAPTER_DISPLAY **)(v11 + 2128);
    v61 = v94;
    v100 &= 0xF0u;
    v99 = v99 & 0xFFFFFF00 | 0x12;
    v101 = *((_DWORD *)v60 + 60);
    v62 = ADAPTER_DISPLAY::CommitVidPn(
            v60,
            this,
            v94,
            (*(_DWORD *)(*((_QWORD *)a2 + 6) + 4LL) >> 6) & 0xF,
            v86,
            *((const struct DXGADAPTERALLOCATION **)a2 + 6),
            (const struct _DMM_COMMITVIDPNREQUEST_DIAGINFO *const)&v99,
            (unsigned __int8)v103,
            v105,
            a7);
    FunctionalVidPnWithEnabledVidPnSource = v62;
    if ( v62 < 0 )
    {
      if ( v62 == -1071774920 )
      {
        v75 = (_QWORD *)WdLogNewEntry5_WdDmmEvent(v63);
        v75[3] = v61;
        v75[4] = (*(_DWORD *)(*((_QWORD *)a2 + 6) + 4LL) >> 6) & 0xF;
        v75[5] = *(_QWORD *)(v11 + 2128);
        WdLogEvent5_WdDmmEvent(v75);
      }
      else
      {
        v76 = (_QWORD *)WdLogNewEntry5_WdError(v63);
        v76[3] = FunctionalVidPnWithEnabledVidPnSource;
        v76[4] = *(_QWORD *)(v11 + 2128);
        v77 = (*(_DWORD *)(*((_QWORD *)a2 + 6) + 4LL) >> 6) & 0xF;
        v76[6] = a2;
        v76[5] = v77;
        v76[7] = this;
        WdLogEvent5_WdError(v76);
      }
    }
    else
    {
      LODWORD(FunctionalVidPnWithEnabledVidPnSource) = DmmGetPinnedVidPnSourceModeTypeFromClientVidPnSource(
                                                         v11,
                                                         (*(_DWORD *)(*((_QWORD *)a2 + 6) + 4LL) >> 6) & 0xF,
                                                         &v88);
      if ( (int)FunctionalVidPnWithEnabledVidPnSource < 0 )
      {
        v68 = WdLogNewEntry5_WdError(v64);
        v69 = (*(_DWORD *)(*((_QWORD *)a2 + 6) + 4LL) >> 6) & 0xF;
        *(_QWORD *)(v68 + 32) = v11;
        *(_QWORD *)(v68 + 24) = v69;
        WdLogEvent5_WdError(v68);
        *(_DWORD *)&v91[8] &= ~0x20u;
      }
      else
      {
        v65 = v88;
        v66 = v88 - 3 <= 1;
        if ( ((v91[8] >> 4) & 1) != v66 )
        {
          v67 = WdLogNewEntry5_WdAssertion(v66);
          *(_QWORD *)(v67 + 24) = 6579LL;
          WdLogEvent5_WdAssertion(v67);
        }
        *(_DWORD *)&v91[8] ^= (v91[8] ^ (unsigned __int8)(32 * (v65 == 4))) & 0x20;
      }
      IsSourceInActiveVidPnTopology = DmmIsSourceInActiveVidPnTopology(
                                        v11,
                                        (*(_DWORD *)(*((_QWORD *)a2 + 6) + 4LL) >> 6) & 0xF);
      ADAPTER_DISPLAY::MarkCommitVidPnOnModeChange(
        *(DXGADAPTER ***)(v11 + 2128),
        (*(_DWORD *)(*((_QWORD *)a2 + 6) + 4LL) >> 6) & 0xF,
        IsSourceInActiveVidPnTopology == 0);
      ADAPTER_DISPLAY::SetDisplayModeInfo(
        *(DXGADAPTER ***)(v11 + 2128),
        (*(_DWORD *)(*((_QWORD *)a2 + 6) + 4LL) >> 6) & 0xF,
        (const struct _DXGK_DISPLAYMODE_INFO *const)&v89);
      v72 = *(_QWORD *)(v11 + 2128);
      v88 = v92.PrivateDriverFormatAttribute;
      v73 = (*(_DWORD *)(*((_QWORD *)a2 + 6) + 4LL) >> 6) & 0xF;
      if ( v73 >= *(_DWORD *)(v72 + 80) )
      {
        v74 = WdLogNewEntry5_WdAssertion(v71);
        *(_QWORD *)(v74 + 24) = 4049LL;
        WdLogEvent5_WdAssertion(v74);
      }
      *(_DWORD *)(1016LL * v73 + *(_QWORD *)(v72 + 112) + 960) = v88;
    }
    if ( v93[0] )
      v95(v96, v61);
LABEL_66:
    if ( (int)FunctionalVidPnWithEnabledVidPnSource < 0 )
      goto LABEL_71;
    v78 = (_DWORD *)((char *)this + 4 * ((*(_DWORD *)(*((_QWORD *)a2 + 6) + 4LL) >> 6) & 0xF) + 1000);
    *v78 |= 0x200u;
    DXGDEVICE::SetDisplayedPrimary(
      (struct _KTHREAD **)this,
      (*(_DWORD *)(*((_QWORD *)a2 + 6) + 4LL) >> 6) & 0xF,
      a2,
      0,
      1);
    goto LABEL_69;
  }
  v57 = (_QWORD *)WdLogNewEntry5_WdDmmEvent(v54);
  v57[3] = (unsigned int)v89;
  v57[4] = DWORD1(v89);
  v57[5] = SDWORD2(v89);
  v57[6] = (unsigned int)v90 / DWORD1(v90);
  v56 = v57;
  v57[7] = (*(_DWORD *)(*((_QWORD *)a2 + 6) + 4LL) >> 6) & 0xF;
LABEL_43:
  WdLogEvent5_WdDmmEvent(v56);
  if ( v93[0] )
    v95(v96, v94);
LABEL_71:
  *(_QWORD *)&v89 = *(_QWORD *)&v92.Width;
  DWORD2(v89) = v92.Format;
  if ( v92.RefreshRate.Denominator )
    HIDWORD(v89) = DmmMapVSyncFromRationalToInteger(
                     &v92.RefreshRate,
                     (enum _D3DDDI_VIDEO_SIGNAL_SCANLINE_ORDERING)a3,
                     0LL);
  else
    HIDWORD(v89) = 0;
  *(D3DDDI_RATIONAL *)&v90 = v92.RefreshRate;
  v80 = *((_QWORD *)a2 + 6);
  *((_QWORD *)&v90 + 1) = __PAIR64__(v98, a3);
  v81 = DmmCacheDisplayModeChangeRequest(
          v11,
          (*(_DWORD *)(v80 + 4) >> 6) & 0xF,
          (unsigned int)&v89,
          2,
          FunctionalVidPnWithEnabledVidPnSource,
          3,
          0LL);
  v83 = v81;
  if ( v81 < 0 )
  {
    v84 = WdLogNewEntry5_WdError(v82);
    *(_QWORD *)(v84 + 24) = v83;
    WdLogEvent5_WdError(v84);
  }
  DXGK_AUTO_STATUS_CHANGE_NOTIFY<9,10>::NotifyStatusChange(&v104, 8);
  return (unsigned int)FunctionalVidPnWithEnabledVidPnSource;
}
