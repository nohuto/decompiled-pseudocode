/*
 * XREFs of CreateFunctionalVidPnWithEnabledVidPnSource @ 0x1C00E0DB8
 * Callers:
 *     ?SetDisplayMode@DXGDEVICE@@QEAAJPEBVDXGALLOCATION@@W4_D3DDDI_VIDEO_SIGNAL_SCANLINE_ORDERING@@W4_D3DDDI_ROTATION@@U_D3DKMT_SETDISPLAYMODE_FLAGS@@PEAIPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C0094560 (-SetDisplayMode@DXGDEVICE@@QEAAJPEBVDXGALLOCATION@@W4_D3DDDI_VIDEO_SIGNAL_SCANLINE_ORDERING@@W4_.c)
 * Callees:
 *     ?Own@?$AutoRelease@PEBU_D3DKMDT_VIDPN_PRESENT_PATH@@P6AJPEAUD3DKMDT_HVIDPNTOPOLOGY__@@PEBU1@@ZPEAU2@@DXGDMM@@QEAAXPEBU_D3DKMDT_VIDPN_PRESENT_PATH@@Q6AJPEAUD3DKMDT_HVIDPNTOPOLOGY__@@0@Z1@Z @ 0x1C000AC00 (-Own@-$AutoRelease@PEBU_D3DKMDT_VIDPN_PRESENT_PATH@@P6AJPEAUD3DKMDT_HVIDPNTOPOLOGY__@@PEBU1@@ZPE.c)
 *     __security_check_cookie @ 0x1C00117E0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0012450 (_guard_dispatch_icall_nop.c)
 *     ?DmmMapVSyncFromRationalToInteger@@YAIAEBU_D3DDDI_RATIONAL@@W4_D3DDDI_VIDEO_SIGNAL_SCANLINE_ORDERING@@PEAE@Z @ 0x1C00BEAF0 (-DmmMapVSyncFromRationalToInteger@@YAIAEBU_D3DDDI_RATIONAL@@W4_D3DDDI_VIDEO_SIGNAL_SCANLINE_ORDE.c)
 *     ?PrepareUnpinnedPathsFromSource@@YAJQEBU_DXGDMM_INTERFACE@@QEAXPEAUD3DKMDT_HVIDPN__@@PEBU_DXGDMM_VIDPN_INTERFACE@@PEAUD3DKMDT_HVIDPNTOPOLOGY__@@QEBU_DXGDMM_VIDPNTOPOLOGY_INTERFACE@@IEEEQEA_KPEAY0BA@IPEAE@Z @ 0x1C00C4FF0 (-PrepareUnpinnedPathsFromSource@@YAJQEBU_DXGDMM_INTERFACE@@QEAXPEAUD3DKMDT_HVIDPN__@@PEBU_DXGDMM.c)
 *     ?PinPresentPathModalityFromMode@@YAJPEBU_DXGDMM_INTERFACE@@QEAXPEAUD3DKMDT_HVIDPN__@@QEBU_DXGDMM_VIDPN_INTERFACE@@PEAUD3DKMDT_HVIDPNTOPOLOGY__@@QEBU_DXGDMM_VIDPNTOPOLOGY_INTERFACE@@I_KPEAU_D3DKMT_DISPLAYMODE@@W4_D3DKMDT_VIDPN_PRESENT_PATH_SCALING@@EEPEAPEAU2@@Z @ 0x1C00E1094 (-PinPresentPathModalityFromMode@@YAJPEBU_DXGDMM_INTERFACE@@QEAXPEAUD3DKMDT_HVIDPN__@@QEBU_DXGDMM.c)
 *     DmmIsSourceInVidPnTopology @ 0x1C00E210C (DmmIsSourceInVidPnTopology.c)
 */

__int64 __fastcall CreateFunctionalVidPnWithEnabledVidPnSource(
        __int64 a1,
        void *a2,
        unsigned int a3,
        __int64 a4,
        __int64 a5,
        struct _D3DKMT_DISPLAYMODE *a6,
        __int64 a7,
        struct D3DKMDT_HVIDPN__ **a8,
        struct _DXGDMM_VIDPN_INTERFACE **a9,
        __int64 a10,
        __int64 a11,
        bool *a12,
        __int64 a13,
        unsigned __int8 *a14)
{
  __int64 v16; // r15
  D3DDDI_RATIONAL *p_RefreshRate; // r13
  enum _D3DDDI_VIDEO_SIGNAL_SCANLINE_ORDERING ScanLineOrdering; // edx
  int v19; // eax
  __int64 IntegerRefreshRate; // rcx
  __int64 (__fastcall *v21)(void *, unsigned __int8 *, struct _DXGDMM_VIDPN_INTERFACE **); // rax
  struct D3DKMDT_HVIDPN__ *v22; // r12
  int v23; // eax
  __int64 v24; // rcx
  __int64 v25; // rbx
  int IsSourceInVidPnTopology; // eax
  int v27; // eax
  __int64 v28; // rcx
  struct _DXGDMM_VIDPN_INTERFACE *v29; // r9
  __int64 v30; // rcx
  unsigned int *v31; // rdi
  int v32; // eax
  __int64 v33; // rcx
  __int64 v34; // rdi
  int v35; // eax
  __int64 v36; // rdx
  __int64 v37; // rcx
  __int64 v38; // r8
  __int64 v39; // r9
  bool v40; // zf
  __int64 v42; // rax
  __int64 v43; // rax
  __int64 v44; // rax
  __int64 v45; // rax
  __int64 v46; // rax
  __int64 v47; // rax
  __int64 v48; // rax
  _QWORD *v49; // rax
  __int64 v50; // rax
  _QWORD *v51; // rcx
  __int64 v52; // rax
  _QWORD *v53; // rax
  _QWORD *v54; // rdi
  unsigned int v55; // eax
  _QWORD *v56; // rax
  enum _D3DKMDT_VIDPN_PRESENT_PATH_SCALING v57; // [rsp+48h] [rbp-B8h]
  unsigned __int8 v58; // [rsp+50h] [rbp-B0h]
  unsigned __int8 v59; // [rsp+58h] [rbp-A8h]
  unsigned __int8 v60; // [rsp+70h] [rbp-90h] BYREF
  char v61[7]; // [rsp+71h] [rbp-8Fh] BYREF
  struct _DXGDMM_VIDPN_INTERFACE *v62; // [rsp+78h] [rbp-88h] BYREF
  unsigned __int8 v63[8]; // [rsp+80h] [rbp-80h] BYREF
  struct _DXGDMM_VIDPNTOPOLOGY_INTERFACE *v64; // [rsp+88h] [rbp-78h] BYREF
  struct D3DKMDT_HVIDPNTOPOLOGY__ *v65; // [rsp+90h] [rbp-70h] BYREF
  struct _DXGDMM_INTERFACE *v66; // [rsp+98h] [rbp-68h]
  struct D3DKMDT_HVIDPN__ *v67; // [rsp+A0h] [rbp-60h] BYREF
  struct D3DKMDT_HVIDPN__ **v68; // [rsp+A8h] [rbp-58h]
  struct _DXGDMM_VIDPN_INTERFACE **v69; // [rsp+B0h] [rbp-50h]
  bool *v70; // [rsp+B8h] [rbp-48h]
  unsigned __int8 *v71; // [rsp+C0h] [rbp-40h]
  char v72[8]; // [rsp+C8h] [rbp-38h] BYREF
  struct D3DKMDT_HVIDPN__ *v73; // [rsp+D0h] [rbp-30h]
  void (__fastcall *v74)(__int64, struct D3DKMDT_HVIDPN__ *); // [rsp+D8h] [rbp-28h]
  __int64 v75; // [rsp+E0h] [rbp-20h]
  int v76; // [rsp+E8h] [rbp-18h]
  unsigned int v77[16]; // [rsp+F0h] [rbp-10h] BYREF

  v68 = a8;
  v69 = a9;
  v70 = a12;
  v71 = a14;
  v16 = a3;
  v66 = (struct _DXGDMM_INTERFACE *)a1;
  if ( !a1 )
  {
    v42 = WdLogNewEntry5_WdAssertion(0LL);
    *(_QWORD *)(v42 + 24) = 4173LL;
    WdLogEvent5_WdAssertion(v42);
  }
  if ( !a2 )
  {
    v43 = WdLogNewEntry5_WdAssertion(a1);
    *(_QWORD *)(v43 + 24) = 4174LL;
    WdLogEvent5_WdAssertion(v43);
  }
  if ( (_DWORD)v16 == -1 )
  {
    v44 = WdLogNewEntry5_WdAssertion(a1);
    *(_QWORD *)(v44 + 24) = 4175LL;
    WdLogEvent5_WdAssertion(v44);
  }
  if ( !a6 )
  {
    v45 = WdLogNewEntry5_WdAssertion(a1);
    *(_QWORD *)(v45 + 24) = 4176LL;
    WdLogEvent5_WdAssertion(v45);
  }
  if ( !a8 )
  {
    v46 = WdLogNewEntry5_WdAssertion(a1);
    *(_QWORD *)(v46 + 24) = 4177LL;
    WdLogEvent5_WdAssertion(v46);
  }
  if ( !a9 )
  {
    v47 = WdLogNewEntry5_WdAssertion(a1);
    *(_QWORD *)(v47 + 24) = 4178LL;
    WdLogEvent5_WdAssertion(v47);
  }
  if ( !a12 )
  {
    v48 = WdLogNewEntry5_WdAssertion(a1);
    *(_QWORD *)(v48 + 24) = 4179LL;
    WdLogEvent5_WdAssertion(v48);
  }
  *a8 = 0LL;
  *a9 = 0LL;
  *a12 = 0;
  p_RefreshRate = &a6->RefreshRate;
  ScanLineOrdering = a6->ScanLineOrdering;
  v60 = 0;
  v19 = DmmMapVSyncFromRationalToInteger(&a6->RefreshRate, ScanLineOrdering, &v60);
  IntegerRefreshRate = a6->IntegerRefreshRate;
  if ( (_DWORD)IntegerRefreshRate != v19 && (!v60 || (_DWORD)IntegerRefreshRate != v19 + 1) )
  {
    v49 = (_QWORD *)WdLogNewEntry5_WdError(IntegerRefreshRate);
    v49[3] = a6->IntegerRefreshRate;
    v49[4] = p_RefreshRate->Numerator;
    v49[5] = a6->RefreshRate.Denominator;
    WdLogEvent5_WdError(v49);
    return 3221225485LL;
  }
  v21 = *(__int64 (__fastcall **)(void *, unsigned __int8 *, struct _DXGDMM_VIDPN_INTERFACE **))(a1 + 48);
  v62 = 0LL;
  v73 = 0LL;
  v22 = 0LL;
  v74 = 0LL;
  v75 = 0LL;
  v76 = 0;
  v72[0] = 0;
  *(_QWORD *)v63 = 0LL;
  v23 = v21(a2, v63, &v62);
  v25 = v23;
  if ( v23 < 0
    || (DXGDMM::AutoRelease<_D3DKMDT_VIDPN_PRESENT_PATH const *,long (*)(D3DKMDT_HVIDPNTOPOLOGY__ *,_D3DKMDT_VIDPN_PRESENT_PATH const *),D3DKMDT_HVIDPNTOPOLOGY__ *>::Own(
          (__int64)v72,
          *(__int64 *)v63,
          *(_QWORD *)(a1 + 64),
          (__int64)a2),
        v22 = v73,
        v61[0] = 0,
        IsSourceInVidPnTopology = DmmIsSourceInVidPnTopology(v73, (unsigned int)v16, v61),
        v25 = IsSourceInVidPnTopology,
        IsSourceInVidPnTopology < 0) )
  {
    v50 = WdLogNewEntry5_WdError(v24);
    *(_QWORD *)(v50 + 24) = a2;
LABEL_37:
    *(_QWORD *)(v50 + 32) = v25;
    v51 = (_QWORD *)v50;
    goto LABEL_43;
  }
  v65 = 0LL;
  v64 = 0LL;
  v27 = (*(__int64 (__fastcall **)(struct D3DKMDT_HVIDPN__ *, struct D3DKMDT_HVIDPNTOPOLOGY__ **, struct _DXGDMM_VIDPNTOPOLOGY_INTERFACE **))v62)(
          v22,
          &v65,
          &v64);
  v25 = v27;
  if ( v27 < 0 )
  {
    v50 = WdLogNewEntry5_WdError(v28);
    *(_QWORD *)(v50 + 24) = v22;
    goto LABEL_37;
  }
  v29 = v62;
  v60 = 0;
  v30 = 16LL;
  *(_QWORD *)v63 = 0LL;
  v31 = v77;
  while ( v30 )
  {
    *v31++ = -1;
    --v30;
  }
  v32 = PrepareUnpinnedPathsFromSource(
          v66,
          a2,
          v22,
          v29,
          v65,
          v64,
          v16,
          0,
          0,
          0,
          (unsigned __int64 *const)v63,
          (unsigned int (*)[16])v77,
          &v60);
  v34 = v32;
  LODWORD(v25) = -1071774925;
  if ( v32 == -1071774925 || (LODWORD(v25) = -1071774886, v32 == -1071774886) )
  {
    v52 = WdLogNewEntry5_WdDmmEvent(v33);
    *(_QWORD *)(v52 + 24) = v16;
    *(_QWORD *)(v52 + 32) = a2;
    WdLogEvent5_WdDmmEvent(v52);
  }
  else
  {
    if ( v32 >= 0 )
    {
      v35 = PinPresentPathModalityFromMode(
              v66,
              a2,
              v22,
              v62,
              v65,
              v64,
              v16,
              *(unsigned __int64 *)v63,
              a6,
              v57,
              v58,
              v59,
              &v67);
      LODWORD(v25) = v35;
      if ( v35 >= 0 )
      {
        v40 = v61[0] == 0;
        *v68 = v67;
        *v69 = v62;
        *v70 = v40;
        if ( v71 )
          *v71 = v60;
        LODWORD(v25) = 0;
        goto LABEL_29;
      }
      if ( v35 == -1071774970 )
      {
        v54 = (_QWORD *)WdLogNewEntry5_WdTrace(v37, v36, v38, v39);
        v54[3] = a6->Width;
        v54[4] = a6->Height;
        v54[5] = a6->Format;
        v55 = p_RefreshRate->Numerator / a6->RefreshRate.Denominator;
        v54[7] = v16;
        v54[6] = v55;
        goto LABEL_29;
      }
      v56 = (_QWORD *)WdLogNewEntry5_WdError(v37);
      v56[3] = v16;
      v56[4] = a6->Width;
      v56[5] = a6->Height;
      v56[6] = a6->Format;
      v56[7] = p_RefreshRate->Numerator / a6->RefreshRate.Denominator;
      v51 = v56;
LABEL_43:
      WdLogEvent5_WdError(v51);
      goto LABEL_29;
    }
    v53 = (_QWORD *)WdLogNewEntry5_WdError(v33);
    v53[3] = v16;
    v53[4] = a2;
    v53[5] = v34;
    WdLogEvent5_WdError(v53);
    LODWORD(v25) = v34;
  }
LABEL_29:
  if ( v72[0] )
    v74(v75, v22);
  return (unsigned int)v25;
}
