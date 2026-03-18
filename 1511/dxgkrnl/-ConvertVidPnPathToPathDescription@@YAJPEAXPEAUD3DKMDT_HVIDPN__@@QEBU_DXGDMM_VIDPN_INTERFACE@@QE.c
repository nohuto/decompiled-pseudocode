/*
 * XREFs of ?ConvertVidPnPathToPathDescription@@YAJPEAXPEAUD3DKMDT_HVIDPN__@@QEBU_DXGDMM_VIDPN_INTERFACE@@QEBU_DXGDMM_VIDPNTOPOLOGY_INTERFACE@@PEAUD3DKMDT_HVIDPNTOPOLOGY__@@IIPEAU_D3DKMT_PATHMODALITY_DESCRIPTOR@@@Z @ 0x1C0140020
 * Callers:
 *     ?PinPresentPathModalityFromMode@@YAJPEBU_DXGDMM_INTERFACE@@QEAXPEAUD3DKMDT_HVIDPN__@@QEBU_DXGDMM_VIDPN_INTERFACE@@PEAUD3DKMDT_HVIDPNTOPOLOGY__@@QEBU_DXGDMM_VIDPNTOPOLOGY_INTERFACE@@I_KPEAU_D3DKMT_DISPLAYMODE@@W4_D3DKMDT_VIDPN_PRESENT_PATH_SCALING@@EEPEAPEAU2@@Z @ 0x1C01410A0 (-PinPresentPathModalityFromMode@@YAJPEBU_DXGDMM_INTERFACE@@QEAXPEAUD3DKMDT_HVIDPN__@@QEBU_DXGDMM.c)
 * Callees:
 *     ?Own@?$AutoRelease@PEBU_D3DKMDT_VIDPN_PRESENT_PATH@@P6AJPEAUD3DKMDT_HVIDPNTOPOLOGY__@@PEBU1@@ZPEAU2@@DXGDMM@@QEAAXPEBU_D3DKMDT_VIDPN_PRESENT_PATH@@Q6AJPEAUD3DKMDT_HVIDPNTOPOLOGY__@@0@Z1@Z @ 0x1C000A5E8 (-Own@-$AutoRelease@PEBU_D3DKMDT_VIDPN_PRESENT_PATH@@P6AJPEAUD3DKMDT_HVIDPNTOPOLOGY__@@PEBU1@@ZPE.c)
 *     _guard_dispatch_icall_nop @ 0x1C00120A0 (_guard_dispatch_icall_nop.c)
 *     DxgkQueryMonitorTypeLockHeld @ 0x1C00E7F40 (DxgkQueryMonitorTypeLockHeld.c)
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
  __int64 v14; // rax
  bool v16; // al
  struct _D3DKMT_PATHMODALITY_DESCRIPTOR *v17; // rbx
  __int64 v18; // rdx
  int v19; // eax
  int v20; // eax
  int v21; // eax
  int v22; // eax
  __int64 v23; // rcx
  __int64 v24; // rdi
  _QWORD *v25; // rax
  __int64 v26; // rcx
  __int64 v27; // r8
  int v28; // eax
  __int64 v29; // rcx
  _QWORD *v30; // rax
  __int64 v31; // rbx
  __int64 v32; // rdx
  const struct _DXGDMM_VIDPNTOPOLOGY_INTERFACE *v33; // rcx
  __int64 v34; // rax
  __int128 v35; // xmm1
  int v36; // eax
  __int64 v37; // rcx
  __int64 v38; // r8
  int v39; // eax
  __int64 v40; // rcx
  __int64 v41; // rdx
  __int64 v42; // rax
  const struct _DXGDMM_VIDPNTOPOLOGY_INTERFACE *v43; // rcx
  __int64 v44; // xmm1_8
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
    v14 = WdLogNewEntry5_WdError(0LL);
    *(_QWORD *)(v14 + 24) = v9;
    *(_QWORD *)(v14 + 32) = v13;
    WdLogEvent5_WdError(v14);
    return (unsigned int)v13;
  }
  v16 = (int)DxgkQueryMonitorTypeLockHeld(this, a7, 0LL, 0LL, 0LL, 0LL, 0LL, (bool *)&v45, (bool *)&v45 + 1) >= 0
     && (_WORD)v45;
  v17 = a8;
  v18 = v47;
  *((_BYTE *)a8 + 117) = v16;
  v19 = *(_DWORD *)(v18 + 12);
  if ( v19 != 254 )
  {
    *((_DWORD *)v17 + 32) = v19;
    v20 = *(_DWORD *)(v18 + 12);
    *(_DWORD *)v17 |= 0x10400u;
    *((_DWORD *)v17 + 31) = v20;
  }
  v21 = *(_DWORD *)(v18 + 20);
  if ( v21 != 254 )
  {
    *(_DWORD *)v17 |= 0x200u;
    *((_DWORD *)v17 + 30) = v21;
  }
  (*((void (__fastcall **)(struct D3DKMDT_HVIDPNTOPOLOGY__ *))v54 + 4))(v9);
  v22 = (*((__int64 (__fastcall **)(struct D3DKMDT_HVIDPN__ *, _QWORD, const struct _DXGDMM_VIDPNTOPOLOGY_INTERFACE **, __int64 *))a3
         + 1))(
          a2,
          a6,
          &v54,
          &v46);
  v24 = v22;
  if ( v22 < 0 )
  {
    v25 = (_QWORD *)WdLogNewEntry5_WdError(v23);
    v26 = a6;
LABEL_13:
    v25[3] = v26;
    v25[4] = a2;
    v25[5] = v24;
    WdLogEvent5_WdError(v25);
    return (unsigned int)v24;
  }
  v27 = *((_QWORD *)a3 + 2);
  v50 = 0LL;
  v51 = 0LL;
  v52 = 0LL;
  v53 = 0;
  v49[0] = 0;
  DXGDMM::AutoRelease<_D3DKMDT_VIDPN_PRESENT_PATH const *,long (*)(D3DKMDT_HVIDPNTOPOLOGY__ *,_D3DKMDT_VIDPN_PRESENT_PATH const *),D3DKMDT_HVIDPNTOPOLOGY__ *>::Own(
    (__int64)v49,
    (__int64)v54,
    v27,
    (__int64)a2);
  v28 = (*(__int64 (__fastcall **)(const struct _DXGDMM_VIDPNTOPOLOGY_INTERFACE *, __int64 *))(v46 + 24))(v54, &v48);
  v24 = v28;
  if ( v28 < 0 )
  {
    v30 = (_QWORD *)WdLogNewEntry5_WdError(v29);
    v31 = v50;
    v30[3] = a6;
    v30[4] = v31;
    v30[5] = v24;
    goto LABEL_17;
  }
  if ( v28 != 1075708679 )
  {
    v32 = v48;
    v33 = v54;
    *((_BYTE *)v17 + 116) = (unsigned int)(*(_DWORD *)(v48 + 4) - 3) <= 1;
    v34 = v46;
    *(_OWORD *)((char *)v17 + 84) = *(_OWORD *)(v32 + 8);
    v35 = *(_OWORD *)(v32 + 24);
    *(_DWORD *)v17 |= 0x100u;
    *(_OWORD *)((char *)v17 + 100) = v35;
    (*(void (__fastcall **)(const struct _DXGDMM_VIDPNTOPOLOGY_INTERFACE *))(v34 + 32))(v33);
  }
  if ( v49[0] )
    v51(v52, v50);
  v36 = (*((__int64 (__fastcall **)(struct D3DKMDT_HVIDPN__ *, _QWORD, const struct _DXGDMM_VIDPNTOPOLOGY_INTERFACE **, __int64 *))a3
         + 3))(
          a2,
          a7,
          &v54,
          &v46);
  v24 = v36;
  if ( v36 < 0 )
  {
    v25 = (_QWORD *)WdLogNewEntry5_WdError(v37);
    v26 = a7;
    goto LABEL_13;
  }
  v38 = *((_QWORD *)a3 + 4);
  v50 = 0LL;
  v51 = 0LL;
  v52 = 0LL;
  v53 = 0;
  v49[0] = 0;
  DXGDMM::AutoRelease<_D3DKMDT_VIDPN_PRESENT_PATH const *,long (*)(D3DKMDT_HVIDPNTOPOLOGY__ *,_D3DKMDT_VIDPN_PRESENT_PATH const *),D3DKMDT_HVIDPNTOPOLOGY__ *>::Own(
    (__int64)v49,
    (__int64)v54,
    v38,
    (__int64)a2);
  v39 = (*(__int64 (__fastcall **)(const struct _DXGDMM_VIDPNTOPOLOGY_INTERFACE *, __int64 *))(v46 + 24))(v54, &v48);
  v24 = v39;
  if ( v39 < 0 )
  {
    v30 = (_QWORD *)WdLogNewEntry5_WdError(v40);
    v31 = v50;
    v30[3] = v50;
    v30[4] = v24;
LABEL_17:
    WdLogEvent5_WdError(v30);
    if ( v49[0] )
      v51(v52, v31);
    return (unsigned int)v24;
  }
  if ( v39 != 1075708679 )
  {
    v41 = v48;
    v42 = v46;
    v43 = v54;
    *(_OWORD *)((char *)v17 + 24) = *(_OWORD *)(v48 + 8);
    *(_OWORD *)((char *)v17 + 40) = *(_OWORD *)(v41 + 24);
    *(_OWORD *)((char *)v17 + 56) = *(_OWORD *)(v41 + 40);
    v44 = *(_QWORD *)(v41 + 56);
    *(_DWORD *)v17 |= 0x87u;
    *((_QWORD *)v17 + 9) = v44;
    (*(void (__fastcall **)(const struct _DXGDMM_VIDPNTOPOLOGY_INTERFACE *))(v42 + 32))(v43);
  }
  if ( v49[0] )
    v51(v52, v50);
  return 0LL;
}
