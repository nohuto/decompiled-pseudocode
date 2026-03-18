/*
 * XREFs of ?PrepareUnpinnedPathsFromSource@@YAJQEBU_DXGDMM_INTERFACE@@QEAXPEAUD3DKMDT_HVIDPN__@@PEBU_DXGDMM_VIDPN_INTERFACE@@PEAUD3DKMDT_HVIDPNTOPOLOGY__@@QEBU_DXGDMM_VIDPNTOPOLOGY_INTERFACE@@IEEEQEA_KPEAY0BA@IPEAE@Z @ 0x1C00E7738
 * Callers:
 *     ?GetActiveVidPnBasedDisplayModeList@@YAJQEAXEPEAU_D3DKMT_GETDISPLAYMODELIST@@1PEAUDXGK_STEREO_PARAMS@@@Z @ 0x1C0140988 (-GetActiveVidPnBasedDisplayModeList@@YAJQEAXEPEAU_D3DKMT_GETDISPLAYMODELIST@@1PEAUDXGK_STEREO_PA.c)
 *     CreateFunctionalVidPnWithEnabledVidPnSource @ 0x1C0141F18 (CreateFunctionalVidPnWithEnabledVidPnSource.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0011390 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00120A0 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C00120C0 (memmove.c)
 *     ?UnpinCofuncModalityOnPathsFromSource@@YAJPEAUD3DKMDT_HVIDPN__@@PEBU_DXGDMM_VIDPN_INTERFACE@@PEAUD3DKMDT_HVIDPNTOPOLOGY__@@PEBU_DXGDMM_VIDPNTOPOLOGY_INTERFACE@@I_K@Z @ 0x1C00E79A0 (-UnpinCofuncModalityOnPathsFromSource@@YAJPEAUD3DKMDT_HVIDPN__@@PEBU_DXGDMM_VIDPN_INTERFACE@@PEA.c)
 *     ?AugmentVidPnTopology@@YAJPEAUD3DKMDT_HVIDPN__@@PEBU_DXGDMM_VIDPN_INTERFACE@@PEAUD3DKMDT_HVIDPNTOPOLOGY__@@PEBU_DXGDMM_VIDPNTOPOLOGY_INTERFACE@@PEAXPEBU_DXGDMM_INTERFACE@@IEQEA_KPEAY0BA@I@Z @ 0x1C013F9F4 (-AugmentVidPnTopology@@YAJPEAUD3DKMDT_HVIDPN__@@PEBU_DXGDMM_VIDPN_INTERFACE@@PEAUD3DKMDT_HVIDPNT.c)
 */

__int64 __fastcall PrepareUnpinnedPathsFromSource(
        struct _DXGDMM_INTERFACE *a1,
        void *const a2,
        struct D3DKMDT_HVIDPN__ *a3,
        const struct _DXGDMM_VIDPN_INTERFACE *a4,
        struct D3DKMDT_HVIDPNTOPOLOGY__ *a5,
        struct _DXGDMM_VIDPNTOPOLOGY_INTERFACE *a6,
        unsigned int a7,
        unsigned __int8 a8,
        unsigned __int8 a9,
        unsigned __int8 a10,
        unsigned __int64 *const a11,
        unsigned int (*a12)[16],
        unsigned __int8 *a13)
{
  struct _DXGDMM_VIDPNTOPOLOGY_INTERFACE *v13; // rbx
  __int64 v17; // rcx
  unsigned int *v18; // rdi
  __int64 (__fastcall *v19)(struct D3DKMDT_HVIDPNTOPOLOGY__ *, _QWORD, unsigned __int64 *); // rax
  char v20; // r12
  int v21; // eax
  __int64 v22; // rcx
  __int64 v23; // rdi
  __int64 v24; // rdi
  int v25; // eax
  __int64 v26; // rcx
  __int64 v27; // rbx
  __int64 v28; // rdx
  int v29; // eax
  __int64 v30; // rax
  __int64 v31; // rbx
  unsigned int *v32; // rdi
  __int64 i; // rcx
  unsigned __int64 v34; // rdi
  struct _DXGDMM_VIDPNTOPOLOGY_INTERFACE *v35; // r12
  struct D3DKMDT_HVIDPN__ *v36; // rsi
  int v37; // eax
  __int64 v38; // rcx
  __int64 v40; // rax
  __int64 v41; // rax
  __int64 v42; // rax
  __int64 v43; // rax
  __int64 v44; // rax
  __int64 v45; // rax
  __int64 v46; // rax
  __int64 v47; // rax
  __int64 v48; // rax
  _QWORD *v49; // rax
  __int64 v50; // rax
  _QWORD *v51; // rax
  _QWORD *v52; // rax
  __int64 v53; // rax
  int v54; // eax
  __int64 v55; // rcx
  int v56; // eax
  __int64 v57; // rcx
  __int64 v58; // rax
  __int64 v59; // rax
  __int64 v60; // rax
  _QWORD *v61; // rax
  __int64 v62; // rax
  char v63; // [rsp+50h] [rbp-99h]
  _BYTE v64[7]; // [rsp+51h] [rbp-98h] BYREF
  unsigned __int64 v65; // [rsp+58h] [rbp-91h] BYREF
  unsigned int v66; // [rsp+60h] [rbp-89h] BYREF
  struct _DXGDMM_VIDPNTOPOLOGY_INTERFACE *v67; // [rsp+68h] [rbp-81h] BYREF
  struct _DXGDMM_INTERFACE *v68; // [rsp+70h] [rbp-79h]
  struct _DXGDMM_VIDPN_INTERFACE *v69; // [rsp+78h] [rbp-71h]
  struct D3DKMDT_HVIDPN__ *v70; // [rsp+80h] [rbp-69h]
  unsigned __int64 *v71; // [rsp+88h] [rbp-61h]
  unsigned __int8 *v72; // [rsp+90h] [rbp-59h]
  unsigned int Src[16]; // [rsp+A0h] [rbp-49h] BYREF

  v13 = a6;
  v67 = a6;
  v71 = a11;
  v72 = a13;
  v69 = a4;
  v70 = a3;
  v68 = a1;
  if ( !a1 )
  {
    v40 = WdLogNewEntry5_WdAssertion(0LL);
    *(_QWORD *)(v40 + 24) = 3897LL;
    WdLogEvent5_WdAssertion(v40);
  }
  if ( !a2 )
  {
    v41 = WdLogNewEntry5_WdAssertion(a1);
    *(_QWORD *)(v41 + 24) = 3898LL;
    WdLogEvent5_WdAssertion(v41);
  }
  if ( !a3 )
  {
    v42 = WdLogNewEntry5_WdAssertion(a1);
    *(_QWORD *)(v42 + 24) = 3899LL;
    WdLogEvent5_WdAssertion(v42);
  }
  if ( !a4 )
  {
    v43 = WdLogNewEntry5_WdAssertion(a1);
    *(_QWORD *)(v43 + 24) = 3900LL;
    WdLogEvent5_WdAssertion(v43);
  }
  if ( !a5 )
  {
    v44 = WdLogNewEntry5_WdAssertion(a1);
    *(_QWORD *)(v44 + 24) = 3901LL;
    WdLogEvent5_WdAssertion(v44);
  }
  if ( !a6 )
  {
    v45 = WdLogNewEntry5_WdAssertion(a1);
    *(_QWORD *)(v45 + 24) = 3902LL;
    WdLogEvent5_WdAssertion(v45);
  }
  if ( a7 == -1 )
  {
    v46 = WdLogNewEntry5_WdAssertion(a1);
    *(_QWORD *)(v46 + 24) = 3903LL;
    WdLogEvent5_WdAssertion(v46);
  }
  if ( !a11 )
  {
    v47 = WdLogNewEntry5_WdAssertion(a1);
    *(_QWORD *)(v47 + 24) = 3904LL;
    WdLogEvent5_WdAssertion(v47);
  }
  *a11 = 0LL;
  if ( a12 )
  {
    v17 = 16LL;
    v18 = (unsigned int *)a12;
    while ( v17 )
    {
      *v18++ = -1;
      --v17;
    }
  }
  v19 = *(__int64 (__fastcall **)(struct D3DKMDT_HVIDPNTOPOLOGY__ *, _QWORD, unsigned __int64 *))a6;
  v65 = 0LL;
  v20 = 0;
  v63 = 0;
  v21 = v19(a5, a7, &v65);
  v23 = v21;
  if ( v21 == -1071774919 )
  {
    if ( v65 )
    {
      v48 = WdLogNewEntry5_WdAssertion(v22);
      *(_QWORD *)(v48 + 24) = 3935LL;
      WdLogEvent5_WdAssertion(v48);
    }
    v20 = 1;
    v63 = 1;
    v30 = WdLogNewEntry5_WdDmmEvent(v22);
    v31 = a7;
    *(_QWORD *)(v30 + 24) = a5;
    *(_QWORD *)(v30 + 32) = a7;
    goto LABEL_31;
  }
  if ( v21 < 0 )
  {
    v49 = (_QWORD *)WdLogNewEntry5_WdError(v22);
    v49[3] = a7;
    goto LABEL_51;
  }
  v24 = 0LL;
  if ( !v65 )
  {
LABEL_30:
    v30 = WdLogNewEntry5_WdDmmEvent(v22);
    v31 = a7;
    *(_QWORD *)(v30 + 24) = a7;
    *(_QWORD *)(v30 + 32) = a5;
LABEL_31:
    WdLogEvent5_WdDmmEvent(v30);
    v32 = Src;
    for ( i = 16LL; i; --i )
      *v32++ = -1;
    if ( !v20 )
    {
      v34 = v65;
      v35 = v67;
LABEL_36:
      if ( !v34 )
      {
        v62 = WdLogNewEntry5_WdAssertion(i);
        *(_QWORD *)(v62 + 24) = 4100LL;
        WdLogEvent5_WdAssertion(v62);
        v34 = v65;
      }
      if ( !a9 )
        goto LABEL_41;
      v36 = v70;
      v37 = UnpinCofuncModalityOnPathsFromSource(v70, v69, a5, v35, a7, v34);
      v23 = v37;
      if ( v37 >= 0 )
      {
        v34 = v65;
LABEL_41:
        *v71 = v34;
        if ( a12 )
          memmove(a12, Src, 0x40uLL);
        if ( v72 )
          *v72 = v63;
        return 0LL;
      }
      v49 = (_QWORD *)WdLogNewEntry5_WdError(v38);
      v49[3] = v65;
      v49[4] = v31;
      v49[5] = v36;
      v49[6] = a2;
      v49[7] = v23;
LABEL_53:
      WdLogEvent5_WdError(v49);
      return (unsigned int)v23;
    }
    if ( !a8 )
    {
      v53 = WdLogNewEntry5_WdDmmEvent(0LL);
      *(_QWORD *)(v53 + 24) = v31;
      *(_QWORD *)(v53 + 32) = a2;
      WdLogEvent5_WdDmmEvent(v53);
      return 3223192403LL;
    }
    v35 = v67;
    if ( !v65
      || (v54 = (*((__int64 (__fastcall **)(struct D3DKMDT_HVIDPNTOPOLOGY__ *, _QWORD))v67 + 7))(a5, a7),
          v23 = v54,
          v54 >= 0) )
    {
      v67 = 0LL;
      v56 = AugmentVidPnTopology(
              v70,
              v69,
              a5,
              v35,
              a2,
              v68,
              a7,
              a10,
              (unsigned __int64 *const)&v67,
              (unsigned int (*)[16])Src);
      v23 = v56;
      if ( v56 == -1071774925 )
      {
        v58 = WdLogNewEntry5_WdDmmEvent(v57);
        *(_QWORD *)(v58 + 24) = a5;
        *(_QWORD *)(v58 + 32) = v31;
        WdLogEvent5_WdDmmEvent(v58);
        return (unsigned int)v23;
      }
      if ( v56 == -1071774886 )
      {
        v59 = WdLogNewEntry5_WdDmmEvent(v57);
        *(_QWORD *)(v59 + 24) = a5;
        *(_QWORD *)(v59 + 32) = v31;
        WdLogEvent5_WdDmmEvent(v59);
        return 3223192410LL;
      }
      if ( v56 < 0 )
      {
        v49 = (_QWORD *)WdLogNewEntry5_WdError(v57);
        v49[3] = v31;
        v49[4] = v23;
        goto LABEL_53;
      }
      v34 = (unsigned __int64)v67;
      if ( !v67 )
      {
        v60 = WdLogNewEntry5_WdAssertion(v57);
        *(_QWORD *)(v60 + 24) = 4090LL;
        WdLogEvent5_WdAssertion(v60);
      }
      v61 = (_QWORD *)WdLogNewEntry5_WdDmmEvent(v57);
      v61[3] = a2;
      v61[4] = v34;
      v61[5] = v31;
      v61[6] = v65;
      WdLogEvent5_WdDmmEvent(v61);
      v65 = v34;
      goto LABEL_36;
    }
    v49 = (_QWORD *)WdLogNewEntry5_WdError(v55);
    v49[3] = v31;
LABEL_51:
    v49[4] = a5;
    v49[5] = v23;
    goto LABEL_53;
  }
  while ( 1 )
  {
    v66 = -1;
    v25 = (*((__int64 (__fastcall **)(struct D3DKMDT_HVIDPNTOPOLOGY__ *, _QWORD, __int64, unsigned int *))v13 + 1))(
            a5,
            a7,
            v24,
            &v66);
    v27 = v25;
    if ( v25 < 0 )
      break;
    v28 = v66;
    if ( v66 == -1 )
    {
      v50 = WdLogNewEntry5_WdAssertion(v26);
      *(_QWORD *)(v50 + 24) = 3978LL;
      WdLogEvent5_WdAssertion(v50);
      v28 = v66;
    }
    v64[0] = 0;
    v29 = (*((__int64 (__fastcall **)(void *const, __int64, _BYTE *))v68 + 9))(a2, v28, v64);
    v27 = v29;
    if ( v29 < 0 )
    {
      v52 = (_QWORD *)WdLogNewEntry5_WdError(v22);
      v52[3] = a2;
      v52[4] = v27;
      goto LABEL_57;
    }
    if ( !v64[0] )
    {
      v20 = 1;
      v63 = 1;
      v51 = (_QWORD *)WdLogNewEntry5_WdDmmEvent(v22);
      v51[3] = a5;
      v51[4] = a7;
      v51[5] = v66;
      WdLogEvent5_WdDmmEvent(v51);
      goto LABEL_30;
    }
    v13 = v67;
    if ( ++v24 >= v65 )
      goto LABEL_30;
  }
  v52 = (_QWORD *)WdLogNewEntry5_WdError(v26);
  v52[3] = v24;
  v52[4] = a7;
  v52[5] = v27;
LABEL_57:
  WdLogEvent5_WdError(v52);
  return (unsigned int)v27;
}
