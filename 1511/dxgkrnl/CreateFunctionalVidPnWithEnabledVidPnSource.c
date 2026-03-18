/*
 * XREFs of CreateFunctionalVidPnWithEnabledVidPnSource @ 0x1C0141F18
 * Callers:
 *     ?SetDisplayMode@DXGDEVICE@@QEAAJPEBVDXGALLOCATION@@W4_D3DDDI_VIDEO_SIGNAL_SCANLINE_ORDERING@@W4_D3DDDI_ROTATION@@U_D3DKMT_SETDISPLAYMODE_FLAGS@@PEAI@Z @ 0x1C006C7E8 (-SetDisplayMode@DXGDEVICE@@QEAAJPEBVDXGALLOCATION@@W4_D3DDDI_VIDEO_SIGNAL_SCANLINE_ORDERING@@W4_.c)
 * Callees:
 *     ?Own@?$AutoRelease@PEBU_D3DKMDT_VIDPN_PRESENT_PATH@@P6AJPEAUD3DKMDT_HVIDPNTOPOLOGY__@@PEBU1@@ZPEAU2@@DXGDMM@@QEAAXPEBU_D3DKMDT_VIDPN_PRESENT_PATH@@Q6AJPEAUD3DKMDT_HVIDPNTOPOLOGY__@@0@Z1@Z @ 0x1C000A5E8 (-Own@-$AutoRelease@PEBU_D3DKMDT_VIDPN_PRESENT_PATH@@P6AJPEAUD3DKMDT_HVIDPNTOPOLOGY__@@PEBU1@@ZPE.c)
 *     __security_check_cookie @ 0x1C0011390 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00120A0 (_guard_dispatch_icall_nop.c)
 *     ?DmmMapVSyncFromRationalToInteger@@YAIAEBU_D3DDDI_RATIONAL@@W4_D3DDDI_VIDEO_SIGNAL_SCANLINE_ORDERING@@PEAE@Z @ 0x1C00A6F40 (-DmmMapVSyncFromRationalToInteger@@YAIAEBU_D3DDDI_RATIONAL@@W4_D3DDDI_VIDEO_SIGNAL_SCANLINE_ORDE.c)
 *     ?PrepareUnpinnedPathsFromSource@@YAJQEBU_DXGDMM_INTERFACE@@QEAXPEAUD3DKMDT_HVIDPN__@@PEBU_DXGDMM_VIDPN_INTERFACE@@PEAUD3DKMDT_HVIDPNTOPOLOGY__@@QEBU_DXGDMM_VIDPNTOPOLOGY_INTERFACE@@IEEEQEA_KPEAY0BA@IPEAE@Z @ 0x1C00E7738 (-PrepareUnpinnedPathsFromSource@@YAJQEBU_DXGDMM_INTERFACE@@QEAXPEAUD3DKMDT_HVIDPN__@@PEBU_DXGDMM.c)
 *     ?PinPresentPathModalityFromMode@@YAJPEBU_DXGDMM_INTERFACE@@QEAXPEAUD3DKMDT_HVIDPN__@@QEBU_DXGDMM_VIDPN_INTERFACE@@PEAUD3DKMDT_HVIDPNTOPOLOGY__@@QEBU_DXGDMM_VIDPNTOPOLOGY_INTERFACE@@I_KPEAU_D3DKMT_DISPLAYMODE@@W4_D3DKMDT_VIDPN_PRESENT_PATH_SCALING@@EEPEAPEAU2@@Z @ 0x1C01410A0 (-PinPresentPathModalityFromMode@@YAJPEBU_DXGDMM_INTERFACE@@QEAXPEAUD3DKMDT_HVIDPN__@@QEBU_DXGDMM.c)
 *     DmmIsSourceInVidPnTopology @ 0x1C017B380 (DmmIsSourceInVidPnTopology.c)
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
  __int64 v17; // rax
  __int64 v18; // rax
  __int64 v19; // rax
  __int64 v20; // rax
  __int64 v21; // rax
  __int64 v22; // rax
  __int64 v23; // rax
  D3DDDI_RATIONAL *p_RefreshRate; // r13
  enum _D3DDDI_VIDEO_SIGNAL_SCANLINE_ORDERING ScanLineOrdering; // edx
  int v26; // eax
  __int64 IntegerRefreshRate; // rcx
  _QWORD *v28; // rax
  __int64 (__fastcall *v30)(void *, unsigned __int8 *, struct _DXGDMM_VIDPN_INTERFACE **); // rax
  struct D3DKMDT_HVIDPN__ *v31; // r12
  int v32; // eax
  __int64 v33; // rcx
  __int64 v34; // rbx
  int IsSourceInVidPnTopology; // eax
  __int64 v36; // rax
  int v37; // eax
  __int64 v38; // rcx
  _QWORD *v39; // rcx
  struct _DXGDMM_VIDPN_INTERFACE *v40; // r9
  __int64 v41; // rcx
  unsigned int *v42; // rdi
  int v43; // eax
  __int64 v44; // rcx
  __int64 v45; // rdi
  __int64 v46; // rax
  _QWORD *v47; // rax
  int v48; // eax
  __int64 v49; // rdx
  __int64 v50; // rcx
  __int64 v51; // r8
  __int64 v52; // r9
  _QWORD *v53; // rdi
  unsigned int v54; // eax
  _QWORD *v55; // rax
  bool v56; // zf
  enum _D3DKMDT_VIDPN_PRESENT_PATH_SCALING v57; // [rsp+48h] [rbp-B8h]
  unsigned int v58; // [rsp+50h] [rbp-B0h]
  unsigned int v59; // [rsp+58h] [rbp-A8h]
  unsigned __int8 v60; // [rsp+70h] [rbp-90h] BYREF
  char v61[7]; // [rsp+71h] [rbp-8Fh] BYREF
  struct _DXGDMM_VIDPN_INTERFACE *v62; // [rsp+78h] [rbp-88h] BYREF
  unsigned __int8 v63[8]; // [rsp+80h] [rbp-80h] BYREF
  struct D3DKMDT_HVIDPNTOPOLOGY__ *v64; // [rsp+88h] [rbp-78h] BYREF
  struct _DXGDMM_VIDPNTOPOLOGY_INTERFACE *v65; // [rsp+90h] [rbp-70h] BYREF
  struct _DXGDMM_INTERFACE *v66; // [rsp+98h] [rbp-68h]
  bool *v67; // [rsp+A0h] [rbp-60h]
  struct D3DKMDT_HVIDPN__ *v68; // [rsp+A8h] [rbp-58h] BYREF
  unsigned __int8 *v69; // [rsp+B0h] [rbp-50h]
  struct _DXGDMM_VIDPN_INTERFACE **v70; // [rsp+B8h] [rbp-48h]
  char v71[8]; // [rsp+C0h] [rbp-40h] BYREF
  struct D3DKMDT_HVIDPN__ *v72; // [rsp+C8h] [rbp-38h]
  void (__fastcall *v73)(__int64, struct D3DKMDT_HVIDPN__ *); // [rsp+D0h] [rbp-30h]
  __int64 v74; // [rsp+D8h] [rbp-28h]
  int v75; // [rsp+E0h] [rbp-20h]
  struct D3DKMDT_HVIDPN__ **v76; // [rsp+E8h] [rbp-18h]
  unsigned int v77[16]; // [rsp+F0h] [rbp-10h] BYREF

  v76 = a8;
  v70 = a9;
  v67 = a12;
  v69 = a14;
  v16 = a3;
  v66 = (struct _DXGDMM_INTERFACE *)a1;
  if ( !a1 )
  {
    v17 = WdLogNewEntry5_WdAssertion(0LL);
    *(_QWORD *)(v17 + 24) = 4168LL;
    WdLogEvent5_WdAssertion(v17);
  }
  if ( !a2 )
  {
    v18 = WdLogNewEntry5_WdAssertion(a1);
    *(_QWORD *)(v18 + 24) = 4169LL;
    WdLogEvent5_WdAssertion(v18);
  }
  if ( (_DWORD)v16 == -1 )
  {
    v19 = WdLogNewEntry5_WdAssertion(a1);
    *(_QWORD *)(v19 + 24) = 4170LL;
    WdLogEvent5_WdAssertion(v19);
  }
  if ( !a6 )
  {
    v20 = WdLogNewEntry5_WdAssertion(a1);
    *(_QWORD *)(v20 + 24) = 4171LL;
    WdLogEvent5_WdAssertion(v20);
  }
  if ( !a8 )
  {
    v21 = WdLogNewEntry5_WdAssertion(a1);
    *(_QWORD *)(v21 + 24) = 4172LL;
    WdLogEvent5_WdAssertion(v21);
  }
  if ( !a9 )
  {
    v22 = WdLogNewEntry5_WdAssertion(a1);
    *(_QWORD *)(v22 + 24) = 4173LL;
    WdLogEvent5_WdAssertion(v22);
  }
  if ( !a12 )
  {
    v23 = WdLogNewEntry5_WdAssertion(a1);
    *(_QWORD *)(v23 + 24) = 4174LL;
    WdLogEvent5_WdAssertion(v23);
  }
  *a8 = 0LL;
  *a9 = 0LL;
  *a12 = 0;
  p_RefreshRate = &a6->RefreshRate;
  ScanLineOrdering = a6->ScanLineOrdering;
  v60 = 0;
  v26 = DmmMapVSyncFromRationalToInteger(&a6->RefreshRate, ScanLineOrdering, &v60);
  IntegerRefreshRate = a6->IntegerRefreshRate;
  if ( (_DWORD)IntegerRefreshRate != v26 && (!v60 || (_DWORD)IntegerRefreshRate != v26 + 1) )
  {
    v28 = (_QWORD *)WdLogNewEntry5_WdError(IntegerRefreshRate);
    v28[3] = a6->IntegerRefreshRate;
    v28[4] = p_RefreshRate->Numerator;
    v28[5] = a6->RefreshRate.Denominator;
    WdLogEvent5_WdError(v28);
    return 3221225485LL;
  }
  v30 = *(__int64 (__fastcall **)(void *, unsigned __int8 *, struct _DXGDMM_VIDPN_INTERFACE **))(a1 + 48);
  v62 = 0LL;
  v72 = 0LL;
  v31 = 0LL;
  v73 = 0LL;
  v74 = 0LL;
  v75 = 0;
  v71[0] = 0;
  *(_QWORD *)v63 = 0LL;
  v32 = v30(a2, v63, &v62);
  v34 = v32;
  if ( v32 < 0
    || (DXGDMM::AutoRelease<_D3DKMDT_VIDPN_PRESENT_PATH const *,long (*)(D3DKMDT_HVIDPNTOPOLOGY__ *,_D3DKMDT_VIDPN_PRESENT_PATH const *),D3DKMDT_HVIDPNTOPOLOGY__ *>::Own(
          (__int64)v71,
          *(__int64 *)v63,
          *(_QWORD *)(a1 + 64),
          (__int64)a2),
        v31 = v72,
        v61[0] = 0,
        IsSourceInVidPnTopology = DmmIsSourceInVidPnTopology(v72, (unsigned int)v16, v61),
        v34 = IsSourceInVidPnTopology,
        IsSourceInVidPnTopology < 0) )
  {
    v36 = WdLogNewEntry5_WdError(v33);
    *(_QWORD *)(v36 + 24) = a2;
LABEL_24:
    *(_QWORD *)(v36 + 32) = v34;
    v39 = (_QWORD *)v36;
LABEL_37:
    WdLogEvent5_WdError(v39);
    goto LABEL_41;
  }
  v64 = 0LL;
  v65 = 0LL;
  v37 = (*(__int64 (__fastcall **)(struct D3DKMDT_HVIDPN__ *, struct D3DKMDT_HVIDPNTOPOLOGY__ **, struct _DXGDMM_VIDPNTOPOLOGY_INTERFACE **))v62)(
          v31,
          &v64,
          &v65);
  v34 = v37;
  if ( v37 < 0 )
  {
    v36 = WdLogNewEntry5_WdError(v38);
    *(_QWORD *)(v36 + 24) = v31;
    goto LABEL_24;
  }
  v40 = v62;
  v60 = 0;
  v41 = 16LL;
  *(_QWORD *)v63 = 0LL;
  v42 = v77;
  while ( v41 )
  {
    *v42++ = -1;
    --v41;
  }
  v43 = PrepareUnpinnedPathsFromSource(
          v66,
          a2,
          v31,
          v40,
          v64,
          v65,
          v16,
          0,
          0,
          0,
          (unsigned __int64 *const)v63,
          (unsigned int (*)[16])v77,
          &v60);
  v45 = v43;
  LODWORD(v34) = -1071774925;
  if ( v43 == -1071774925 || (LODWORD(v34) = -1071774886, v43 == -1071774886) )
  {
    v46 = WdLogNewEntry5_WdDmmEvent(v44);
    *(_QWORD *)(v46 + 24) = v16;
    *(_QWORD *)(v46 + 32) = a2;
    WdLogEvent5_WdDmmEvent(v46);
  }
  else if ( v43 >= 0 )
  {
    v48 = PinPresentPathModalityFromMode(
            (void (__fastcall **)(char *, struct D3DKMDT_HVIDPN__ *))v66,
            (char *)a2,
            v31,
            v62,
            v64,
            v65,
            v16,
            *(unsigned __int64 *)v63,
            a6,
            v57,
            v58,
            v59,
            &v68);
    LODWORD(v34) = v48;
    if ( v48 >= 0 )
    {
      v56 = v61[0] == 0;
      *v76 = v68;
      *v70 = v62;
      *v67 = v56;
      if ( v69 )
        *v69 = v60;
      LODWORD(v34) = 0;
      goto LABEL_41;
    }
    if ( v48 != -1071774970 )
    {
      v55 = (_QWORD *)WdLogNewEntry5_WdError(v50);
      v55[3] = v16;
      v55[4] = a6->Width;
      v55[5] = a6->Height;
      v55[6] = a6->Format;
      v55[7] = p_RefreshRate->Numerator / a6->RefreshRate.Denominator;
      v39 = v55;
      goto LABEL_37;
    }
    v53 = (_QWORD *)WdLogNewEntry5_WdTrace(v50, v49, v51, v52);
    v53[3] = a6->Width;
    v53[4] = a6->Height;
    v53[5] = a6->Format;
    v54 = p_RefreshRate->Numerator / a6->RefreshRate.Denominator;
    v53[7] = v16;
    v53[6] = v54;
  }
  else
  {
    v47 = (_QWORD *)WdLogNewEntry5_WdError(v44);
    v47[3] = v16;
    v47[4] = a2;
    v47[5] = v45;
    WdLogEvent5_WdError(v47);
    LODWORD(v34) = v45;
  }
LABEL_41:
  if ( v71[0] )
    v73(v74, v31);
  return (unsigned int)v34;
}
