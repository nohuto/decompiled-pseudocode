/*
 * XREFs of ?UnpinCofuncModalityOnPathsFromSource@@YAJPEAUD3DKMDT_HVIDPN__@@PEBU_DXGDMM_VIDPN_INTERFACE@@PEAUD3DKMDT_HVIDPNTOPOLOGY__@@PEBU_DXGDMM_VIDPNTOPOLOGY_INTERFACE@@I_K@Z @ 0x1C00D3CB8
 * Callers:
 *     ?PrepareUnpinnedPathsFromSource@@YAJQEBU_DXGDMM_INTERFACE@@QEAXPEAUD3DKMDT_HVIDPN__@@PEBU_DXGDMM_VIDPN_INTERFACE@@PEAUD3DKMDT_HVIDPNTOPOLOGY__@@QEBU_DXGDMM_VIDPNTOPOLOGY_INTERFACE@@IEEEQEA_KPEAY03IPEAE@Z @ 0x1C00D3A7C (-PrepareUnpinnedPathsFromSource@@YAJQEBU_DXGDMM_INTERFACE@@QEAXPEAUD3DKMDT_HVIDPN__@@PEBU_DXGDMM.c)
 * Callees:
 *     ?Own@?$AutoRelease@PEBU_D3DKMDT_VIDPN_PRESENT_PATH@@P6AJPEAUD3DKMDT_HVIDPNTOPOLOGY__@@PEBU1@@ZPEAU2@@DXGDMM@@QEAAXPEBU_D3DKMDT_VIDPN_PRESENT_PATH@@Q6AJPEAUD3DKMDT_HVIDPNTOPOLOGY__@@0@Z1@Z @ 0x1C0009E4C (-Own@-$AutoRelease@PEBU_D3DKMDT_VIDPN_PRESENT_PATH@@P6AJPEAUD3DKMDT_HVIDPNTOPOLOGY__@@PEBU1@@ZPE.c)
 *     _guard_dispatch_icall_nop @ 0x1C0010930 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall UnpinCofuncModalityOnPathsFromSource(
        struct D3DKMDT_HVIDPN__ *a1,
        const struct _DXGDMM_VIDPN_INTERFACE *a2,
        struct D3DKMDT_HVIDPNTOPOLOGY__ *a3,
        const struct _DXGDMM_VIDPNTOPOLOGY_INTERFACE *a4,
        unsigned int a5,
        unsigned __int64 a6)
{
  const struct _DXGDMM_VIDPN_INTERFACE *v8; // r12
  __int64 v10; // rdi
  __int64 (__fastcall *v11)(struct D3DKMDT_HVIDPN__ *, _QWORD, __int64 *, __int64 *); // rax
  int v12; // eax
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r9
  __int64 v17; // rbx
  __int64 v18; // rdx
  __int64 v19; // r14
  int v20; // eax
  __int64 v21; // rcx
  __int64 v22; // r14
  __int64 (__fastcall *v23)(struct D3DKMDT_HVIDPNTOPOLOGY__ *, _QWORD, __int64, unsigned int *); // rax
  int v24; // eax
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // r9
  int v28; // eax
  __int64 v29; // rcx
  int v30; // eax
  __int64 v31; // rdx
  __int64 v32; // rcx
  __int64 v33; // r8
  __int64 v34; // r9
  __int64 v35; // rdx
  __int64 v36; // r12
  int v37; // eax
  __int64 v38; // rcx
  __int64 v39; // r9
  int v40; // eax
  __int64 v41; // r9
  int v42; // eax
  __int64 v44; // rax
  __int64 v45; // rax
  __int64 v46; // rax
  __int64 v47; // rax
  __int64 v48; // rax
  _QWORD *v49; // rax
  __int64 v50; // rax
  __int64 v51; // rax
  __int64 v52; // rax
  __int64 v53; // rax
  __int64 v54; // rax
  __int64 v55; // rax
  _BYTE v56[8]; // [rsp+30h] [rbp-49h] BYREF
  __int64 v57; // [rsp+38h] [rbp-41h]
  void (__fastcall *v58)(__int64, __int64); // [rsp+40h] [rbp-39h]
  __int64 v59; // [rsp+48h] [rbp-31h]
  int v60; // [rsp+50h] [rbp-29h]
  _BYTE v61[8]; // [rsp+58h] [rbp-21h] BYREF
  __int64 v62; // [rsp+60h] [rbp-19h]
  void (__fastcall *v63)(__int64, __int64); // [rsp+68h] [rbp-11h]
  __int64 v64; // [rsp+70h] [rbp-9h]
  int v65; // [rsp+78h] [rbp-1h]
  __int64 v66; // [rsp+D0h] [rbp+57h] BYREF
  const struct _DXGDMM_VIDPN_INTERFACE *v67; // [rsp+D8h] [rbp+5Fh]
  __int64 v68; // [rsp+E0h] [rbp+67h] BYREF
  __int64 v69; // [rsp+E8h] [rbp+6Fh] BYREF

  v67 = a2;
  v8 = a2;
  if ( !a1 )
  {
    v44 = WdLogNewEntry5_WdAssertion(0LL, a2, a3, a4);
    *(_QWORD *)(v44 + 24) = 3030LL;
    WdLogEvent5_WdAssertion(v44);
  }
  if ( !v8 )
  {
    v45 = WdLogNewEntry5_WdAssertion(a1, a2, a3, a4);
    *(_QWORD *)(v45 + 24) = 3031LL;
    WdLogEvent5_WdAssertion(v45);
  }
  if ( !a3 )
  {
    v46 = WdLogNewEntry5_WdAssertion(a1, a2, a3, a4);
    *(_QWORD *)(v46 + 24) = 3032LL;
    WdLogEvent5_WdAssertion(v46);
  }
  if ( !a4 )
  {
    v47 = WdLogNewEntry5_WdAssertion(a1, a2, a3, a4);
    *(_QWORD *)(v47 + 24) = 3033LL;
    WdLogEvent5_WdAssertion(v47);
  }
  v10 = a5;
  if ( a5 == -1 )
  {
    v48 = WdLogNewEntry5_WdAssertion(a1, a2, a3, a4);
    *(_QWORD *)(v48 + 24) = 3034LL;
    WdLogEvent5_WdAssertion(v48);
  }
  v11 = (__int64 (__fastcall *)(struct D3DKMDT_HVIDPN__ *, _QWORD, __int64 *, __int64 *))*((_QWORD *)v8 + 1);
  v68 = 0LL;
  v62 = 0LL;
  v63 = 0LL;
  v64 = 0LL;
  v65 = 0;
  v61[0] = 0;
  v66 = 0LL;
  v12 = v11(a1, (unsigned int)v10, &v66, &v68);
  v17 = v12;
  if ( v12 < 0 )
  {
    v49 = (_QWORD *)WdLogNewEntry5_WdError(v14);
    v49[3] = v10;
    v49[4] = a1;
    v49[5] = v17;
LABEL_46:
    WdLogEvent5_WdError(v49);
    goto LABEL_34;
  }
  if ( !v66 )
  {
    v50 = WdLogNewEntry5_WdAssertion(v14, v13, v15, v16);
    *(_QWORD *)(v50 + 24) = 3059LL;
    WdLogEvent5_WdAssertion(v50);
  }
  if ( !v68 )
  {
    v51 = WdLogNewEntry5_WdAssertion(v14, v13, v15, v16);
    *(_QWORD *)(v51 + 24) = 3060LL;
    WdLogEvent5_WdAssertion(v51);
  }
  DXGDMM::AutoRelease<_D3DKMDT_VIDPN_PRESENT_PATH const *,long (*)(D3DKMDT_HVIDPNTOPOLOGY__ *,_D3DKMDT_VIDPN_PRESENT_PATH const *),D3DKMDT_HVIDPNTOPOLOGY__ *>::Own(
    (__int64)v61,
    v66,
    *((_QWORD *)v8 + 2),
    (__int64)a1);
  LOBYTE(v18) = 1;
  v19 = v62;
  v20 = (*(__int64 (__fastcall **)(__int64, __int64))(v68 + 48))(v62, v18);
  v17 = v20;
  if ( v20 < 0 )
  {
    v49 = (_QWORD *)WdLogNewEntry5_WdError(v21);
    v49[3] = v19;
    v49[4] = v17;
    goto LABEL_46;
  }
  v22 = 0LL;
  if ( !a6 )
  {
LABEL_33:
    LODWORD(v17) = 0;
    goto LABEL_34;
  }
  while ( 1 )
  {
    v23 = (__int64 (__fastcall *)(struct D3DKMDT_HVIDPNTOPOLOGY__ *, _QWORD, __int64, unsigned int *))*((_QWORD *)a4 + 1);
    a5 = -1;
    v24 = v23(a3, (unsigned int)v10, v22, &a5);
    v17 = v24;
    if ( v24 < 0 )
    {
      v49 = (_QWORD *)WdLogNewEntry5_WdError(v26);
      v49[3] = v22;
      v49[4] = v10;
      goto LABEL_45;
    }
    if ( a5 == -1 )
    {
      v52 = WdLogNewEntry5_WdAssertion(v26, v25, 0xFFFFFFFFLL, v27);
      *(_QWORD *)(v52 + 24) = 3114LL;
      WdLogEvent5_WdAssertion(v52);
    }
    v28 = (*((__int64 (__fastcall **)(struct D3DKMDT_HVIDPNTOPOLOGY__ *, _QWORD))a4 + 14))(a3, (unsigned int)v10);
    v17 = v28;
    if ( v28 < 0 )
    {
LABEL_40:
      v49 = (_QWORD *)WdLogNewEntry5_WdError(v29);
      v49[3] = v10;
      v49[4] = a5;
LABEL_45:
      v49[5] = a3;
      v49[6] = v17;
      goto LABEL_46;
    }
    v69 = 0LL;
    v57 = 0LL;
    v58 = 0LL;
    v59 = 0LL;
    v60 = 0;
    v56[0] = 0;
    v66 = 0LL;
    v30 = (*((__int64 (__fastcall **)(struct D3DKMDT_HVIDPN__ *, _QWORD, __int64 *, __int64 *))v8 + 3))(
            a1,
            a5,
            &v66,
            &v69);
    v17 = v30;
    if ( v30 < 0 )
    {
      v49 = (_QWORD *)WdLogNewEntry5_WdError(v32);
      v49[3] = v17;
      goto LABEL_46;
    }
    if ( !v66 )
    {
      v53 = WdLogNewEntry5_WdAssertion(v32, v31, v33, v34);
      *(_QWORD *)(v53 + 24) = 3159LL;
      WdLogEvent5_WdAssertion(v53);
    }
    if ( !v69 )
    {
      v54 = WdLogNewEntry5_WdAssertion(v32, v31, v33, v34);
      *(_QWORD *)(v54 + 24) = 3160LL;
      WdLogEvent5_WdAssertion(v54);
    }
    DXGDMM::AutoRelease<_D3DKMDT_VIDPN_PRESENT_PATH const *,long (*)(D3DKMDT_HVIDPNTOPOLOGY__ *,_D3DKMDT_VIDPN_PRESENT_PATH const *),D3DKMDT_HVIDPNTOPOLOGY__ *>::Own(
      (__int64)v56,
      v66,
      *((_QWORD *)v8 + 4),
      (__int64)a1);
    LOBYTE(v35) = 1;
    v36 = v57;
    v37 = (*(__int64 (__fastcall **)(__int64, __int64))(v69 + 56))(v57, v35);
    v17 = v37;
    if ( v37 < 0 )
      break;
    if ( v56[0] )
      v58(v59, v36);
    LOBYTE(v39) = 1;
    v40 = (*((__int64 (__fastcall **)(struct D3DKMDT_HVIDPNTOPOLOGY__ *, _QWORD, _QWORD, __int64))a4 + 9))(
            a3,
            (unsigned int)v10,
            a5,
            v39);
    v17 = v40;
    if ( v40 < 0 )
      goto LABEL_40;
    LOBYTE(v41) = 1;
    v42 = (*((__int64 (__fastcall **)(struct D3DKMDT_HVIDPNTOPOLOGY__ *, _QWORD, _QWORD, __int64))a4 + 11))(
            a3,
            (unsigned int)v10,
            a5,
            v41);
    v17 = v42;
    if ( v42 < 0 )
      goto LABEL_40;
    if ( ++v22 >= a6 )
      goto LABEL_33;
    v8 = v67;
  }
  v55 = WdLogNewEntry5_WdError(v38);
  *(_QWORD *)(v55 + 24) = v17;
  WdLogEvent5_WdError(v55);
  if ( v56[0] )
    v58(v59, v36);
LABEL_34:
  if ( v61[0] )
    v63(v64, v62);
  return (unsigned int)v17;
}
