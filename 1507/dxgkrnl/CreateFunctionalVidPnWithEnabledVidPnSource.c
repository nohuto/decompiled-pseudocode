/*
 * XREFs of CreateFunctionalVidPnWithEnabledVidPnSource @ 0x1C013BAEC
 * Callers:
 *     ?SetDisplayMode@DXGDEVICE@@QEAAJPEBVDXGALLOCATION@@W4_D3DDDI_VIDEO_SIGNAL_SCANLINE_ORDERING@@W4_D3DDDI_ROTATION@@U_D3DKMT_SETDISPLAYMODE_FLAGS@@PEAI@Z @ 0x1C00B74D4 (-SetDisplayMode@DXGDEVICE@@QEAAJPEBVDXGALLOCATION@@W4_D3DDDI_VIDEO_SIGNAL_SCANLINE_ORDERING@@W4_.c)
 * Callees:
 *     ?Own@?$AutoRelease@PEBU_D3DKMDT_VIDPN_PRESENT_PATH@@P6AJPEAUD3DKMDT_HVIDPNTOPOLOGY__@@PEBU1@@ZPEAU2@@DXGDMM@@QEAAXPEBU_D3DKMDT_VIDPN_PRESENT_PATH@@Q6AJPEAUD3DKMDT_HVIDPNTOPOLOGY__@@0@Z1@Z @ 0x1C0009E4C (-Own@-$AutoRelease@PEBU_D3DKMDT_VIDPN_PRESENT_PATH@@P6AJPEAUD3DKMDT_HVIDPNTOPOLOGY__@@PEBU1@@ZPE.c)
 *     __security_check_cookie @ 0x1C000FC20 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0010930 (_guard_dispatch_icall_nop.c)
 *     ?DmmMapVSyncFromRationalToInteger@@YAIAEBU_D3DDDI_RATIONAL@@W4_D3DDDI_VIDEO_SIGNAL_SCANLINE_ORDERING@@PEAE@Z @ 0x1C009A7B4 (-DmmMapVSyncFromRationalToInteger@@YAIAEBU_D3DDDI_RATIONAL@@W4_D3DDDI_VIDEO_SIGNAL_SCANLINE_ORDE.c)
 *     ?PrepareUnpinnedPathsFromSource@@YAJQEBU_DXGDMM_INTERFACE@@QEAXPEAUD3DKMDT_HVIDPN__@@PEBU_DXGDMM_VIDPN_INTERFACE@@PEAUD3DKMDT_HVIDPNTOPOLOGY__@@QEBU_DXGDMM_VIDPNTOPOLOGY_INTERFACE@@IEEEQEA_KPEAY03IPEAE@Z @ 0x1C00D3A7C (-PrepareUnpinnedPathsFromSource@@YAJQEBU_DXGDMM_INTERFACE@@QEAXPEAUD3DKMDT_HVIDPN__@@PEBU_DXGDMM.c)
 *     ?PinPresentPathModalityFromMode@@YAJPEBU_DXGDMM_INTERFACE@@QEAXPEAUD3DKMDT_HVIDPN__@@QEBU_DXGDMM_VIDPN_INTERFACE@@PEAUD3DKMDT_HVIDPNTOPOLOGY__@@QEBU_DXGDMM_VIDPNTOPOLOGY_INTERFACE@@I_KPEAU_D3DKMT_DISPLAYMODE@@W4_D3DKMDT_VIDPN_PRESENT_PATH_SCALING@@EEPEAPEAU2@@Z @ 0x1C013AC74 (-PinPresentPathModalityFromMode@@YAJPEBU_DXGDMM_INTERFACE@@QEAXPEAUD3DKMDT_HVIDPN__@@QEBU_DXGDMM.c)
 *     DmmIsSourceInVidPnTopology @ 0x1C0176DE8 (DmmIsSourceInVidPnTopology.c)
 */

__int64 __fastcall CreateFunctionalVidPnWithEnabledVidPnSource(
        struct _DXGDMM_INTERFACE *a1,
        void *a2,
        __int64 a3,
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
  unsigned __int8 *v16; // rcx
  __int64 v17; // r14
  __int64 v18; // rax
  __int64 v19; // rax
  __int64 v20; // rax
  __int64 v21; // rax
  __int64 v22; // rax
  __int64 v23; // rax
  __int64 v24; // rax
  __int64 ScanLineOrdering; // rdx
  D3DDDI_RATIONAL *p_RefreshRate; // r13
  int v27; // eax
  __int64 IntegerRefreshRate; // rcx
  _QWORD *v29; // rax
  struct _DXGDMM_INTERFACE *v31; // r12
  struct D3DKMDT_HVIDPN__ *v32; // r15
  int v33; // eax
  __int64 v34; // rcx
  __int64 v35; // rbx
  int IsSourceInVidPnTopology; // eax
  __int64 v37; // rax
  int v38; // eax
  _QWORD *v39; // rcx
  int v40; // eax
  __int64 v41; // rcx
  __int64 v42; // r12
  __int64 v43; // rax
  _QWORD *v44; // rax
  int v45; // eax
  __int64 v46; // rdx
  __int64 v47; // rcx
  __int64 v48; // r8
  __int64 v49; // r9
  _QWORD *v50; // r8
  unsigned int v51; // eax
  _QWORD *v52; // rax
  bool v53; // zf
  enum _D3DKMDT_VIDPN_PRESENT_PATH_SCALING v54; // [rsp+48h] [rbp-B1h]
  unsigned int v55; // [rsp+50h] [rbp-A9h]
  unsigned int v56; // [rsp+58h] [rbp-A1h]
  unsigned __int8 v57; // [rsp+70h] [rbp-89h] BYREF
  char v58[7]; // [rsp+71h] [rbp-88h] BYREF
  struct _DXGDMM_VIDPN_INTERFACE *v59; // [rsp+78h] [rbp-81h] BYREF
  unsigned __int8 v60[8]; // [rsp+80h] [rbp-79h] BYREF
  struct D3DKMDT_HVIDPNTOPOLOGY__ *v61; // [rsp+88h] [rbp-71h] BYREF
  struct _DXGDMM_VIDPNTOPOLOGY_INTERFACE *v62; // [rsp+90h] [rbp-69h] BYREF
  struct _DXGDMM_INTERFACE *v63; // [rsp+98h] [rbp-61h]
  struct _DXGDMM_VIDPN_INTERFACE **v64; // [rsp+A0h] [rbp-59h]
  bool *v65; // [rsp+A8h] [rbp-51h]
  struct D3DKMDT_HVIDPN__ **v66; // [rsp+B0h] [rbp-49h]
  unsigned __int8 *v67; // [rsp+B8h] [rbp-41h]
  char v68[8]; // [rsp+C0h] [rbp-39h] BYREF
  struct D3DKMDT_HVIDPN__ *v69; // [rsp+C8h] [rbp-31h]
  void (__fastcall *v70)(__int64, struct D3DKMDT_HVIDPN__ *); // [rsp+D0h] [rbp-29h]
  __int64 v71; // [rsp+D8h] [rbp-21h]
  int v72; // [rsp+E0h] [rbp-19h]
  struct D3DKMDT_HVIDPN__ *v73[2]; // [rsp+E8h] [rbp-11h] BYREF

  v63 = a1;
  v16 = a14;
  v67 = a14;
  v17 = (unsigned int)a3;
  v66 = a8;
  v64 = a9;
  v65 = a12;
  if ( !a1 )
  {
    v18 = WdLogNewEntry5_WdAssertion(a14, a2, a3, a4);
    *(_QWORD *)(v18 + 24) = 4091LL;
    WdLogEvent5_WdAssertion(v18);
  }
  if ( !a2 )
  {
    v19 = WdLogNewEntry5_WdAssertion(v16, a2, a3, a4);
    *(_QWORD *)(v19 + 24) = 4092LL;
    WdLogEvent5_WdAssertion(v19);
  }
  if ( (_DWORD)v17 == -1 )
  {
    v20 = WdLogNewEntry5_WdAssertion(v16, a2, a3, a4);
    *(_QWORD *)(v20 + 24) = 4093LL;
    WdLogEvent5_WdAssertion(v20);
  }
  if ( !a6 )
  {
    v21 = WdLogNewEntry5_WdAssertion(v16, a2, a3, a4);
    *(_QWORD *)(v21 + 24) = 4094LL;
    WdLogEvent5_WdAssertion(v21);
  }
  if ( !a8 )
  {
    v22 = WdLogNewEntry5_WdAssertion(v16, a2, a3, a4);
    *(_QWORD *)(v22 + 24) = 4095LL;
    WdLogEvent5_WdAssertion(v22);
  }
  if ( !a9 )
  {
    v23 = WdLogNewEntry5_WdAssertion(v16, a2, a3, a4);
    *(_QWORD *)(v23 + 24) = 4096LL;
    WdLogEvent5_WdAssertion(v23);
  }
  if ( !a12 )
  {
    v24 = WdLogNewEntry5_WdAssertion(v16, a2, a3, a4);
    *(_QWORD *)(v24 + 24) = 4097LL;
    WdLogEvent5_WdAssertion(v24);
  }
  *a8 = 0LL;
  *a9 = 0LL;
  *a12 = 0;
  ScanLineOrdering = (unsigned int)a6->ScanLineOrdering;
  v57 = 0;
  p_RefreshRate = &a6->RefreshRate;
  v27 = DmmMapVSyncFromRationalToInteger(&a6->RefreshRate, ScanLineOrdering, &v57, a4);
  IntegerRefreshRate = a6->IntegerRefreshRate;
  if ( (_DWORD)IntegerRefreshRate != v27 && (!v57 || (_DWORD)IntegerRefreshRate != v27 + 1) )
  {
    v29 = (_QWORD *)WdLogNewEntry5_WdError(IntegerRefreshRate);
    v29[3] = a6->IntegerRefreshRate;
    v29[4] = p_RefreshRate->Numerator;
    v29[5] = a6->RefreshRate.Denominator;
    WdLogEvent5_WdError(v29);
    return 3221225485LL;
  }
  v31 = v63;
  v59 = 0LL;
  v32 = 0LL;
  v69 = 0LL;
  v70 = 0LL;
  v71 = 0LL;
  v72 = 0;
  v68[0] = 0;
  *(_QWORD *)v60 = 0LL;
  v33 = (*((__int64 (__fastcall **)(void *, unsigned __int8 *, struct _DXGDMM_VIDPN_INTERFACE **))v63 + 6))(
          a2,
          v60,
          &v59);
  v35 = v33;
  if ( v33 < 0
    || (DXGDMM::AutoRelease<_D3DKMDT_VIDPN_PRESENT_PATH const *,long (*)(D3DKMDT_HVIDPNTOPOLOGY__ *,_D3DKMDT_VIDPN_PRESENT_PATH const *),D3DKMDT_HVIDPNTOPOLOGY__ *>::Own(
          (__int64)v68,
          *(__int64 *)v60,
          *((_QWORD *)v31 + 8),
          (__int64)a2),
        v58[0] = 0,
        v32 = v69,
        IsSourceInVidPnTopology = DmmIsSourceInVidPnTopology(v69, (unsigned int)v17, v58),
        v35 = IsSourceInVidPnTopology,
        IsSourceInVidPnTopology < 0) )
  {
    v37 = WdLogNewEntry5_WdError(v34);
    *(_QWORD *)(v37 + 24) = a2;
LABEL_24:
    *(_QWORD *)(v37 + 32) = v35;
    v39 = (_QWORD *)v37;
LABEL_34:
    WdLogEvent5_WdError(v39);
    goto LABEL_38;
  }
  v61 = 0LL;
  v62 = 0LL;
  v38 = (*(__int64 (__fastcall **)(struct D3DKMDT_HVIDPN__ *, struct D3DKMDT_HVIDPNTOPOLOGY__ **, struct _DXGDMM_VIDPNTOPOLOGY_INTERFACE **))v59)(
          v32,
          &v61,
          &v62);
  v35 = v38;
  if ( v38 < 0 )
  {
    v37 = WdLogNewEntry5_WdError(0LL);
    *(_QWORD *)(v37 + 24) = v32;
    goto LABEL_24;
  }
  v73[0] = (struct D3DKMDT_HVIDPN__ *)-1LL;
  v73[1] = (struct D3DKMDT_HVIDPN__ *)-1LL;
  v57 = 0;
  *(_QWORD *)v60 = 0LL;
  v40 = PrepareUnpinnedPathsFromSource(
          v31,
          a2,
          v32,
          v59,
          v61,
          v62,
          v17,
          0,
          0,
          0,
          (unsigned __int64 *const)v60,
          (unsigned int (*)[4])v73,
          &v57);
  v42 = v40;
  LODWORD(v35) = -1071774925;
  if ( v40 == -1071774925 || (LODWORD(v35) = -1071774886, v40 == -1071774886) )
  {
    v43 = WdLogNewEntry5_WdDmmEvent(v41);
    *(_QWORD *)(v43 + 24) = v17;
    *(_QWORD *)(v43 + 32) = a2;
    WdLogEvent5_WdDmmEvent(v43);
  }
  else if ( v40 >= 0 )
  {
    v45 = PinPresentPathModalityFromMode(
            (void (__fastcall **)(char *, char *))v63,
            (char *)a2,
            v32,
            v59,
            v61,
            v62,
            v17,
            *(unsigned __int64 *)v60,
            a6,
            v54,
            v55,
            v56,
            v73);
    LODWORD(v35) = v45;
    if ( v45 >= 0 )
    {
      v53 = v58[0] == 0;
      *v66 = v73[0];
      *v64 = v59;
      *v65 = v53;
      if ( v67 )
        *v67 = v57;
      LODWORD(v35) = 0;
      goto LABEL_38;
    }
    if ( v45 != -1071774970 )
    {
      v52 = (_QWORD *)WdLogNewEntry5_WdError(v47);
      v52[3] = v17;
      v52[4] = a6->Width;
      v52[5] = a6->Height;
      v52[6] = a6->Format;
      v52[7] = p_RefreshRate->Numerator / a6->RefreshRate.Denominator;
      v39 = v52;
      goto LABEL_34;
    }
    v50 = (_QWORD *)WdLogNewEntry5_WdTrace(v47, v46, v48, v49);
    v50[3] = a6->Width;
    v50[4] = a6->Height;
    v50[5] = a6->Format;
    v51 = p_RefreshRate->Numerator / a6->RefreshRate.Denominator;
    v50[7] = v17;
    v50[6] = v51;
  }
  else
  {
    v44 = (_QWORD *)WdLogNewEntry5_WdError(v41);
    v44[3] = v17;
    v44[4] = a2;
    v44[5] = v42;
    WdLogEvent5_WdError(v44);
    LODWORD(v35) = v42;
  }
LABEL_38:
  if ( v68[0] )
    v70(v71, v32);
  return (unsigned int)v35;
}
