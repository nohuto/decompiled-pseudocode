/*
 * XREFs of ?PrepareUnpinnedPathsFromSource@@YAJQEBU_DXGDMM_INTERFACE@@QEAXPEAUD3DKMDT_HVIDPN__@@PEBU_DXGDMM_VIDPN_INTERFACE@@PEAUD3DKMDT_HVIDPNTOPOLOGY__@@QEBU_DXGDMM_VIDPNTOPOLOGY_INTERFACE@@IEEEQEA_KPEAY03IPEAE@Z @ 0x1C00D3A7C
 * Callers:
 *     ?GetActiveVidPnBasedDisplayModeList@@YAJQEAXEPEAU_D3DKMT_GETDISPLAYMODELIST@@1@Z @ 0x1C00D28D8 (-GetActiveVidPnBasedDisplayModeList@@YAJQEAXEPEAU_D3DKMT_GETDISPLAYMODELIST@@1@Z.c)
 *     CreateFunctionalVidPnWithEnabledVidPnSource @ 0x1C013BAEC (CreateFunctionalVidPnWithEnabledVidPnSource.c)
 * Callees:
 *     __security_check_cookie @ 0x1C000FC20 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0010930 (_guard_dispatch_icall_nop.c)
 *     ?UnpinCofuncModalityOnPathsFromSource@@YAJPEAUD3DKMDT_HVIDPN__@@PEBU_DXGDMM_VIDPN_INTERFACE@@PEAUD3DKMDT_HVIDPNTOPOLOGY__@@PEBU_DXGDMM_VIDPNTOPOLOGY_INTERFACE@@I_K@Z @ 0x1C00D3CB8 (-UnpinCofuncModalityOnPathsFromSource@@YAJPEAUD3DKMDT_HVIDPN__@@PEBU_DXGDMM_VIDPN_INTERFACE@@PEA.c)
 *     ?AugmentVidPnTopology@@YAJPEAUD3DKMDT_HVIDPN__@@PEBU_DXGDMM_VIDPN_INTERFACE@@PEAUD3DKMDT_HVIDPNTOPOLOGY__@@PEBU_DXGDMM_VIDPNTOPOLOGY_INTERFACE@@PEAXPEBU_DXGDMM_INTERFACE@@IEQEA_KPEAY03I@Z @ 0x1C013A37C (-AugmentVidPnTopology@@YAJPEAUD3DKMDT_HVIDPN__@@PEBU_DXGDMM_VIDPN_INTERFACE@@PEAUD3DKMDT_HVIDPNT.c)
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
        unsigned int (*a12)[4],
        unsigned __int8 *a13)
{
  struct _DXGDMM_VIDPNTOPOLOGY_INTERFACE *v13; // rdi
  __int64 (__fastcall *v17)(struct D3DKMDT_HVIDPNTOPOLOGY__ *, _QWORD, unsigned __int64 *); // rax
  char v18; // r13
  int v19; // eax
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r8
  __int64 v23; // r9
  __int64 v24; // rbx
  __int64 v25; // rbx
  __int64 (__fastcall *v26)(struct D3DKMDT_HVIDPNTOPOLOGY__ *, _QWORD, __int64, unsigned __int64 *); // rax
  int v27; // eax
  __int64 v28; // rcx
  __int64 v29; // r8
  __int64 v30; // r9
  __int64 v31; // rdi
  __int64 v32; // rdx
  int v33; // eax
  __int64 v34; // rax
  __int64 v35; // rdx
  __int64 v36; // rcx
  __int64 v37; // r8
  __int64 v38; // r9
  unsigned __int64 v39; // rdi
  struct _DXGDMM_VIDPNTOPOLOGY_INTERFACE *v40; // r13
  struct D3DKMDT_HVIDPN__ *v41; // rsi
  int v42; // eax
  __int64 v43; // rcx
  __int64 v45; // rax
  __int64 v46; // rax
  __int64 v47; // rax
  __int64 v48; // rax
  __int64 v49; // rax
  __int64 v50; // rax
  __int64 v51; // rax
  __int64 v52; // rax
  __int64 v53; // rax
  _QWORD *v54; // rax
  __int64 v55; // rax
  _QWORD *v56; // rax
  _QWORD *v57; // rax
  __int64 v58; // rax
  int v59; // eax
  __int64 v60; // rcx
  int v61; // eax
  __int64 v62; // rdx
  __int64 v63; // rcx
  __int64 v64; // r8
  __int64 v65; // r9
  __int64 v66; // rax
  __int64 v67; // rax
  __int64 v68; // rax
  _QWORD *v69; // rax
  __int64 v70; // rax
  char v71; // [rsp+50h] [rbp-59h]
  _BYTE v72[7]; // [rsp+51h] [rbp-58h] BYREF
  unsigned __int64 v73; // [rsp+58h] [rbp-51h] BYREF
  unsigned __int64 v74; // [rsp+60h] [rbp-49h] BYREF
  struct _DXGDMM_VIDPNTOPOLOGY_INTERFACE *v75; // [rsp+68h] [rbp-41h]
  struct _DXGDMM_INTERFACE *v76; // [rsp+70h] [rbp-39h]
  struct _DXGDMM_VIDPN_INTERFACE *v77; // [rsp+78h] [rbp-31h]
  struct D3DKMDT_HVIDPN__ *v78; // [rsp+80h] [rbp-29h]
  unsigned __int64 *v79; // [rsp+88h] [rbp-21h]
  unsigned __int8 *v80; // [rsp+90h] [rbp-19h]
  unsigned int v81[4]; // [rsp+98h] [rbp-11h] BYREF

  v13 = a6;
  v78 = a3;
  v75 = a6;
  v79 = a11;
  v80 = a13;
  v77 = a4;
  v76 = a1;
  if ( !a1 )
  {
    v45 = WdLogNewEntry5_WdAssertion(0LL, a2, a3, a4);
    *(_QWORD *)(v45 + 24) = 3820LL;
    WdLogEvent5_WdAssertion(v45);
  }
  if ( !a2 )
  {
    v46 = WdLogNewEntry5_WdAssertion(a1, a2, a3, a4);
    *(_QWORD *)(v46 + 24) = 3821LL;
    WdLogEvent5_WdAssertion(v46);
  }
  if ( !a3 )
  {
    v47 = WdLogNewEntry5_WdAssertion(a1, a2, a3, a4);
    *(_QWORD *)(v47 + 24) = 3822LL;
    WdLogEvent5_WdAssertion(v47);
  }
  if ( !a4 )
  {
    v48 = WdLogNewEntry5_WdAssertion(a1, a2, a3, a4);
    *(_QWORD *)(v48 + 24) = 3823LL;
    WdLogEvent5_WdAssertion(v48);
  }
  if ( !a5 )
  {
    v49 = WdLogNewEntry5_WdAssertion(a1, a2, a3, a4);
    *(_QWORD *)(v49 + 24) = 3824LL;
    WdLogEvent5_WdAssertion(v49);
  }
  if ( !a6 )
  {
    v50 = WdLogNewEntry5_WdAssertion(a1, a2, a3, a4);
    *(_QWORD *)(v50 + 24) = 3825LL;
    WdLogEvent5_WdAssertion(v50);
  }
  if ( a7 == -1 )
  {
    v51 = WdLogNewEntry5_WdAssertion(a1, a2, a3, a4);
    *(_QWORD *)(v51 + 24) = 3826LL;
    WdLogEvent5_WdAssertion(v51);
  }
  if ( !a11 )
  {
    v52 = WdLogNewEntry5_WdAssertion(a1, a2, a3, a4);
    *(_QWORD *)(v52 + 24) = 3827LL;
    WdLogEvent5_WdAssertion(v52);
  }
  *a11 = 0LL;
  if ( a12 )
  {
    *(_QWORD *)a12 = -1LL;
    *(_QWORD *)&(*a12)[2] = -1LL;
  }
  v17 = *(__int64 (__fastcall **)(struct D3DKMDT_HVIDPNTOPOLOGY__ *, _QWORD, unsigned __int64 *))a6;
  v71 = 0;
  v73 = 0LL;
  v18 = 0;
  v19 = v17(a5, a7, &v73);
  v24 = v19;
  if ( v19 == -1071774919 )
  {
    if ( v73 )
    {
      v53 = WdLogNewEntry5_WdAssertion(v21, v20, v22, v23);
      *(_QWORD *)(v53 + 24) = 3858LL;
      WdLogEvent5_WdAssertion(v53);
    }
    v18 = 1;
    v71 = 1;
    v34 = WdLogNewEntry5_WdDmmEvent(v21);
    v25 = a7;
    *(_QWORD *)(v34 + 24) = a5;
    *(_QWORD *)(v34 + 32) = a7;
  }
  else
  {
    if ( v19 < 0 )
    {
      v54 = (_QWORD *)WdLogNewEntry5_WdError(v21);
      v54[3] = a7;
      v54[4] = a5;
      v54[5] = v24;
      WdLogEvent5_WdError(v54);
      return (unsigned int)v24;
    }
    v25 = 0LL;
    if ( v73 )
    {
      while ( 1 )
      {
        v26 = (__int64 (__fastcall *)(struct D3DKMDT_HVIDPNTOPOLOGY__ *, _QWORD, __int64, unsigned __int64 *))*((_QWORD *)v13 + 1);
        LODWORD(v74) = -1;
        v27 = v26(a5, a7, v25, &v74);
        v31 = v27;
        if ( v27 < 0 )
          break;
        v32 = (unsigned int)v74;
        if ( (_DWORD)v74 == -1 )
        {
          v55 = WdLogNewEntry5_WdAssertion(v28, 0xFFFFFFFFLL, v29, v30);
          *(_QWORD *)(v55 + 24) = 3901LL;
          WdLogEvent5_WdAssertion(v55);
          v32 = (unsigned int)v74;
        }
        v72[0] = 0;
        v33 = (*((__int64 (__fastcall **)(void *const, __int64, _BYTE *))v76 + 9))(a2, v32, v72);
        v31 = v33;
        if ( v33 < 0 )
        {
          v57 = (_QWORD *)WdLogNewEntry5_WdError(v21);
          v57[3] = a2;
          goto LABEL_48;
        }
        if ( !v72[0] )
        {
          v18 = 1;
          v71 = 1;
          v56 = (_QWORD *)WdLogNewEntry5_WdDmmEvent(v21);
          v56[3] = a5;
          v56[4] = a7;
          v56[5] = (unsigned int)v74;
          WdLogEvent5_WdDmmEvent(v56);
          v13 = v75;
          goto LABEL_28;
        }
        v13 = v75;
        if ( ++v25 >= v73 )
          goto LABEL_28;
      }
      v57 = (_QWORD *)WdLogNewEntry5_WdError(v28);
      v57[4] = a7;
      goto LABEL_51;
    }
LABEL_28:
    v34 = WdLogNewEntry5_WdDmmEvent(v21);
    v25 = a7;
    *(_QWORD *)(v34 + 24) = a7;
    *(_QWORD *)(v34 + 32) = a5;
  }
  WdLogEvent5_WdDmmEvent(v34);
  memset(v81, 255, sizeof(v81));
  if ( v18 )
  {
    if ( !a8 )
    {
      v58 = WdLogNewEntry5_WdDmmEvent(v36);
      *(_QWORD *)(v58 + 24) = v25;
      *(_QWORD *)(v58 + 32) = a2;
      WdLogEvent5_WdDmmEvent(v58);
      return 3223192403LL;
    }
    if ( v73 )
    {
      v59 = (*((__int64 (__fastcall **)(struct D3DKMDT_HVIDPNTOPOLOGY__ *, _QWORD))v13 + 7))(a5, a7);
      v31 = v59;
      if ( v59 < 0 )
      {
        v57 = (_QWORD *)WdLogNewEntry5_WdError(v60);
        v57[4] = a5;
LABEL_51:
        v57[3] = v25;
        v57[5] = v31;
LABEL_53:
        WdLogEvent5_WdError(v57);
        return (unsigned int)v31;
      }
    }
    v40 = v75;
    v74 = 0LL;
    v61 = AugmentVidPnTopology(v78, v77, a5, v75, a2, v76, a7, a10, &v74, (unsigned int (*)[4])v81);
    v31 = v61;
    if ( v61 == -1071774925 )
    {
      v66 = WdLogNewEntry5_WdDmmEvent(v63);
      *(_QWORD *)(v66 + 24) = a5;
      *(_QWORD *)(v66 + 32) = v25;
      WdLogEvent5_WdDmmEvent(v66);
      return (unsigned int)v31;
    }
    if ( v61 == -1071774886 )
    {
      v67 = WdLogNewEntry5_WdDmmEvent(v63);
      *(_QWORD *)(v67 + 24) = a5;
      *(_QWORD *)(v67 + 32) = v25;
      WdLogEvent5_WdDmmEvent(v67);
      return 3223192410LL;
    }
    if ( v61 < 0 )
    {
      v57 = (_QWORD *)WdLogNewEntry5_WdError(v63);
      v57[3] = v25;
LABEL_48:
      v57[4] = v31;
      goto LABEL_53;
    }
    v39 = v74;
    if ( !v74 )
    {
      v68 = WdLogNewEntry5_WdAssertion(v63, v62, v64, v65);
      *(_QWORD *)(v68 + 24) = 4013LL;
      WdLogEvent5_WdAssertion(v68);
    }
    v69 = (_QWORD *)WdLogNewEntry5_WdDmmEvent(v63);
    v69[3] = a2;
    v69[4] = v39;
    v69[5] = v25;
    v69[6] = v73;
    WdLogEvent5_WdDmmEvent(v69);
    v73 = v39;
  }
  else
  {
    v39 = v73;
    v40 = v75;
  }
  if ( !v39 )
  {
    v70 = WdLogNewEntry5_WdAssertion(v36, v35, v37, v38);
    *(_QWORD *)(v70 + 24) = 4023LL;
    WdLogEvent5_WdAssertion(v70);
    v39 = v73;
  }
  if ( a9 )
  {
    v41 = v78;
    v42 = UnpinCofuncModalityOnPathsFromSource(v78, v77, a5, v40, a7, v39);
    v31 = v42;
    if ( v42 < 0 )
    {
      v57 = (_QWORD *)WdLogNewEntry5_WdError(v43);
      v57[3] = v73;
      v57[4] = v25;
      v57[5] = v41;
      v57[6] = a2;
      v57[7] = v31;
      goto LABEL_53;
    }
    v39 = v73;
  }
  *v79 = v39;
  if ( a12 )
    *(_OWORD *)a12 = *(_OWORD *)v81;
  if ( v80 )
    *v80 = v71;
  return 0LL;
}
