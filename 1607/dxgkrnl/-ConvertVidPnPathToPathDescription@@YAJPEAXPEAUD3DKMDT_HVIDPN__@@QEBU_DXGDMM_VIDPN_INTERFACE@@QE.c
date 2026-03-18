/*
 * XREFs of ?ConvertVidPnPathToPathDescription@@YAJPEAXPEAUD3DKMDT_HVIDPN__@@QEBU_DXGDMM_VIDPN_INTERFACE@@QEBU_DXGDMM_VIDPNTOPOLOGY_INTERFACE@@PEAUD3DKMDT_HVIDPNTOPOLOGY__@@IIPEAU_D3DKMT_PATHMODALITY_DESCRIPTOR@@@Z @ 0x1C00E16C4
 * Callers:
 *     ?PinPresentPathModalityFromMode@@YAJPEBU_DXGDMM_INTERFACE@@QEAXPEAUD3DKMDT_HVIDPN__@@QEBU_DXGDMM_VIDPN_INTERFACE@@PEAUD3DKMDT_HVIDPNTOPOLOGY__@@QEBU_DXGDMM_VIDPNTOPOLOGY_INTERFACE@@I_KPEAU_D3DKMT_DISPLAYMODE@@W4_D3DKMDT_VIDPN_PRESENT_PATH_SCALING@@EEPEAPEAU2@@Z @ 0x1C00E1094 (-PinPresentPathModalityFromMode@@YAJPEBU_DXGDMM_INTERFACE@@QEAXPEAUD3DKMDT_HVIDPN__@@QEBU_DXGDMM.c)
 * Callees:
 *     ?Own@?$AutoRelease@PEBU_D3DKMDT_VIDPN_PRESENT_PATH@@P6AJPEAUD3DKMDT_HVIDPNTOPOLOGY__@@PEBU1@@ZPEAU2@@DXGDMM@@QEAAXPEBU_D3DKMDT_VIDPN_PRESENT_PATH@@Q6AJPEAUD3DKMDT_HVIDPNTOPOLOGY__@@0@Z1@Z @ 0x1C000AC00 (-Own@-$AutoRelease@PEBU_D3DKMDT_VIDPN_PRESENT_PATH@@P6AJPEAUD3DKMDT_HVIDPNTOPOLOGY__@@PEBU1@@ZPE.c)
 *     _guard_dispatch_icall_nop @ 0x1C0012450 (_guard_dispatch_icall_nop.c)
 *     DxgkQueryMonitorTypeLockHeld @ 0x1C00D1C00 (DxgkQueryMonitorTypeLockHeld.c)
 */

__int64 __fastcall ConvertVidPnPathToPathDescription(
        DXGADAPTER *this,
        struct D3DKMDT_HVIDPN__ *a2,
        const struct _DXGDMM_VIDPN_INTERFACE *const a3,
        const struct _DXGDMM_VIDPNTOPOLOGY_INTERFACE *a4,
        struct D3DKMDT_HVIDPNTOPOLOGY__ *a5,
        unsigned int a6,
        unsigned int a7,
        struct _D3DKMT_PATHMODALITY_DESCRIPTOR *a8)
{
  struct D3DKMDT_HVIDPNTOPOLOGY__ *v9; // rdi
  int v12; // eax
  __int64 v13; // rbx
  bool v14; // al
  struct _D3DKMT_PATHMODALITY_DESCRIPTOR *v15; // rbx
  __int64 v16; // rdx
  int v17; // eax
  int v18; // eax
  int v19; // eax
  int v20; // eax
  __int64 v21; // rcx
  __int64 v22; // rdi
  __int64 v23; // r8
  int v24; // eax
  __int64 v25; // rcx
  __int64 v26; // rdx
  const struct _DXGDMM_VIDPNTOPOLOGY_INTERFACE *v27; // rcx
  __int64 v28; // rax
  __int128 v29; // xmm1
  int v30; // eax
  __int64 v31; // rcx
  __int64 v32; // r8
  int v33; // eax
  __int64 v34; // rcx
  __int64 v35; // rdx
  __int64 v36; // rax
  const struct _DXGDMM_VIDPNTOPOLOGY_INTERFACE *v37; // rcx
  __int64 v38; // xmm1_8
  __int64 v40; // rax
  _QWORD *v41; // rax
  __int64 v42; // rcx
  _QWORD *v43; // rax
  __int64 v44; // rbx
  __int64 v45; // [rsp+58h] [rbp-29h] BYREF
  __int64 v46; // [rsp+60h] [rbp-21h] BYREF
  __int64 v47; // [rsp+68h] [rbp-19h] BYREF
  __int64 v48; // [rsp+70h] [rbp-11h] BYREF
  _BYTE v49[8]; // [rsp+78h] [rbp-9h] BYREF
  __int64 v50; // [rsp+80h] [rbp-1h]
  void (__fastcall *v51)(__int64, __int64); // [rsp+88h] [rbp+7h]
  __int64 v52; // [rsp+90h] [rbp+Fh]
  int v53; // [rsp+98h] [rbp+17h]
  const struct _DXGDMM_VIDPNTOPOLOGY_INTERFACE *v54; // [rsp+E0h] [rbp+5Fh] BYREF

  v54 = a4;
  v9 = a5;
  v12 = (*((__int64 (__fastcall **)(struct D3DKMDT_HVIDPNTOPOLOGY__ *, _QWORD, _QWORD, __int64 *))a4 + 3))(
          a5,
          a6,
          a7,
          &v47);
  v13 = v12;
  if ( v12 < 0 )
  {
    v40 = WdLogNewEntry5_WdError(0LL);
    *(_QWORD *)(v40 + 24) = v9;
    *(_QWORD *)(v40 + 32) = v13;
    WdLogEvent5_WdError(v40);
    return (unsigned int)v13;
  }
  v14 = (int)DxgkQueryMonitorTypeLockHeld(this, a7, 0LL, 0LL, 0LL, 0LL, 0LL, (bool *)&v45, (bool *)&v45 + 1) >= 0
     && (_WORD)v45;
  v15 = a8;
  v16 = v47;
  *((_BYTE *)a8 + 121) = v14;
  v17 = *(_DWORD *)(v16 + 12);
  if ( v17 != 254 )
  {
    *((_DWORD *)v15 + 33) = v17;
    v18 = *(_DWORD *)(v16 + 12);
    *(_DWORD *)v15 |= 0x10400u;
    *((_DWORD *)v15 + 32) = v18;
  }
  v19 = *(_DWORD *)(v16 + 20);
  if ( v19 != 254 )
  {
    *(_DWORD *)v15 |= 0x200u;
    *((_DWORD *)v15 + 31) = v19;
  }
  (*((void (__fastcall **)(struct D3DKMDT_HVIDPNTOPOLOGY__ *))v54 + 4))(v9);
  v20 = (*((__int64 (__fastcall **)(struct D3DKMDT_HVIDPN__ *, _QWORD, const struct _DXGDMM_VIDPNTOPOLOGY_INTERFACE **, __int64 *))a3
         + 1))(
          a2,
          a6,
          &v54,
          &v46);
  v22 = v20;
  if ( v20 < 0 )
  {
    v41 = (_QWORD *)WdLogNewEntry5_WdError(v21);
    v42 = a6;
LABEL_26:
    v41[3] = v42;
    v41[4] = a2;
    v41[5] = v22;
    WdLogEvent5_WdError(v41);
    return (unsigned int)v22;
  }
  v23 = *((_QWORD *)a3 + 2);
  v50 = 0LL;
  v51 = 0LL;
  v52 = 0LL;
  v53 = 0;
  v49[0] = 0;
  DXGDMM::AutoRelease<_D3DKMDT_VIDPN_PRESENT_PATH const *,long (*)(D3DKMDT_HVIDPNTOPOLOGY__ *,_D3DKMDT_VIDPN_PRESENT_PATH const *),D3DKMDT_HVIDPNTOPOLOGY__ *>::Own(
    (__int64)v49,
    (__int64)v54,
    v23,
    (__int64)a2);
  v24 = (*(__int64 (__fastcall **)(const struct _DXGDMM_VIDPNTOPOLOGY_INTERFACE *, __int64 *))(v46 + 24))(v54, &v48);
  v22 = v24;
  if ( v24 < 0 )
  {
    v43 = (_QWORD *)WdLogNewEntry5_WdError(v25);
    v44 = v50;
    v43[3] = a6;
    v43[4] = v44;
    v43[5] = v22;
    goto LABEL_30;
  }
  if ( v24 != 1075708679 )
  {
    v26 = v48;
    v27 = v54;
    *((_BYTE *)v15 + 120) = (unsigned int)(*(_DWORD *)(v48 + 4) - 3) <= 1;
    v28 = v46;
    *(_OWORD *)((char *)v15 + 88) = *(_OWORD *)(v26 + 8);
    v29 = *(_OWORD *)(v26 + 24);
    *(_DWORD *)v15 |= 0x100u;
    *(_OWORD *)((char *)v15 + 104) = v29;
    (*(void (__fastcall **)(const struct _DXGDMM_VIDPNTOPOLOGY_INTERFACE *))(v28 + 32))(v27);
  }
  if ( v49[0] )
    v51(v52, v50);
  v30 = (*((__int64 (__fastcall **)(struct D3DKMDT_HVIDPN__ *, _QWORD, const struct _DXGDMM_VIDPNTOPOLOGY_INTERFACE **, __int64 *))a3
         + 3))(
          a2,
          a7,
          &v54,
          &v46);
  v22 = v30;
  if ( v30 < 0 )
  {
    v41 = (_QWORD *)WdLogNewEntry5_WdError(v31);
    v42 = a7;
    goto LABEL_26;
  }
  v32 = *((_QWORD *)a3 + 4);
  v50 = 0LL;
  v51 = 0LL;
  v52 = 0LL;
  v53 = 0;
  v49[0] = 0;
  DXGDMM::AutoRelease<_D3DKMDT_VIDPN_PRESENT_PATH const *,long (*)(D3DKMDT_HVIDPNTOPOLOGY__ *,_D3DKMDT_VIDPN_PRESENT_PATH const *),D3DKMDT_HVIDPNTOPOLOGY__ *>::Own(
    (__int64)v49,
    (__int64)v54,
    v32,
    (__int64)a2);
  v33 = (*(__int64 (__fastcall **)(const struct _DXGDMM_VIDPNTOPOLOGY_INTERFACE *, __int64 *))(v46 + 24))(v54, &v48);
  v22 = v33;
  if ( v33 < 0 )
  {
    v43 = (_QWORD *)WdLogNewEntry5_WdError(v34);
    v44 = v50;
    v43[3] = v50;
    v43[4] = v22;
LABEL_30:
    WdLogEvent5_WdError(v43);
    if ( v49[0] )
      v51(v52, v44);
    return (unsigned int)v22;
  }
  if ( v33 != 1075708679 )
  {
    v35 = v48;
    v36 = v46;
    v37 = v54;
    *(_OWORD *)((char *)v15 + 24) = *(_OWORD *)(v48 + 8);
    *(_OWORD *)((char *)v15 + 40) = *(_OWORD *)(v35 + 24);
    *(_OWORD *)((char *)v15 + 56) = *(_OWORD *)(v35 + 40);
    v38 = *(_QWORD *)(v35 + 56);
    *(_DWORD *)v15 |= 0x87u;
    *((_QWORD *)v15 + 9) = v38;
    (*(void (__fastcall **)(const struct _DXGDMM_VIDPNTOPOLOGY_INTERFACE *))(v36 + 32))(v37);
  }
  if ( v49[0] )
    v51(v52, v50);
  return 0LL;
}
