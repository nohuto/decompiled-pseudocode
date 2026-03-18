/*
 * XREFs of ?ConvertVidPnPathToPathDescription@@YAJPEAXPEAUD3DKMDT_HVIDPN__@@QEBU_DXGDMM_VIDPN_INTERFACE@@QEBU_DXGDMM_VIDPNTOPOLOGY_INTERFACE@@PEAUD3DKMDT_HVIDPNTOPOLOGY__@@IIPEAU_D3DKMT_PATHMODALITY_DESCRIPTOR@@@Z @ 0x1C013A978
 * Callers:
 *     ?PinPresentPathModalityFromMode@@YAJPEBU_DXGDMM_INTERFACE@@QEAXPEAUD3DKMDT_HVIDPN__@@QEBU_DXGDMM_VIDPN_INTERFACE@@PEAUD3DKMDT_HVIDPNTOPOLOGY__@@QEBU_DXGDMM_VIDPNTOPOLOGY_INTERFACE@@I_KPEAU_D3DKMT_DISPLAYMODE@@W4_D3DKMDT_VIDPN_PRESENT_PATH_SCALING@@EEPEAPEAU2@@Z @ 0x1C013AC74 (-PinPresentPathModalityFromMode@@YAJPEBU_DXGDMM_INTERFACE@@QEAXPEAUD3DKMDT_HVIDPN__@@QEBU_DXGDMM.c)
 * Callees:
 *     ?Own@?$AutoRelease@PEBU_D3DKMDT_VIDPN_PRESENT_PATH@@P6AJPEAUD3DKMDT_HVIDPNTOPOLOGY__@@PEBU1@@ZPEAU2@@DXGDMM@@QEAAXPEBU_D3DKMDT_VIDPN_PRESENT_PATH@@Q6AJPEAUD3DKMDT_HVIDPNTOPOLOGY__@@0@Z1@Z @ 0x1C0009E4C (-Own@-$AutoRelease@PEBU_D3DKMDT_VIDPN_PRESENT_PATH@@P6AJPEAUD3DKMDT_HVIDPNTOPOLOGY__@@PEBU1@@ZPE.c)
 *     _guard_dispatch_icall_nop @ 0x1C0010930 (_guard_dispatch_icall_nop.c)
 *     MonitorIsMonitorVirtualModeDisabled @ 0x1C008D39C (MonitorIsMonitorVirtualModeDisabled.c)
 */

__int64 __fastcall ConvertVidPnPathToPathDescription(
        __int64 a1,
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
  __int64 v13; // rcx
  __int64 v14; // r9
  __int64 v15; // rbx
  __int64 v16; // rax
  char v18; // al
  struct _D3DKMT_PATHMODALITY_DESCRIPTOR *v19; // rbx
  __int64 v20; // rdx
  int v21; // eax
  int v22; // eax
  int v23; // eax
  int v24; // eax
  __int64 v25; // rcx
  __int64 v26; // rdi
  _QWORD *v27; // rax
  __int64 v28; // rcx
  __int64 v29; // r8
  int v30; // eax
  __int64 v31; // rcx
  _QWORD *v32; // rax
  __int64 v33; // rbx
  __int64 v34; // rdx
  const struct _DXGDMM_VIDPNTOPOLOGY_INTERFACE *v35; // rcx
  __int64 v36; // rax
  __int128 v37; // xmm1
  int v38; // eax
  __int64 v39; // rcx
  __int64 v40; // r8
  int v41; // eax
  __int64 v42; // rcx
  __int64 v43; // rdx
  __int64 v44; // rax
  const struct _DXGDMM_VIDPNTOPOLOGY_INTERFACE *v45; // rcx
  __int64 v46; // xmm1_8
  _BYTE v47[8]; // [rsp+30h] [rbp-50h] BYREF
  __int64 v48; // [rsp+38h] [rbp-48h] BYREF
  __int64 v49; // [rsp+40h] [rbp-40h] BYREF
  __int64 v50; // [rsp+48h] [rbp-38h] BYREF
  _BYTE v51[8]; // [rsp+50h] [rbp-30h] BYREF
  __int64 v52; // [rsp+58h] [rbp-28h]
  void (__fastcall *v53)(__int64, __int64); // [rsp+60h] [rbp-20h]
  __int64 v54; // [rsp+68h] [rbp-18h]
  int v55; // [rsp+70h] [rbp-10h]
  const struct _DXGDMM_VIDPNTOPOLOGY_INTERFACE *v56; // [rsp+B8h] [rbp+38h] BYREF

  v56 = a4;
  v9 = a5;
  v12 = (*((__int64 (__fastcall **)(struct D3DKMDT_HVIDPNTOPOLOGY__ *, _QWORD, _QWORD, __int64 *))a4 + 3))(
          a5,
          a6,
          a7,
          &v49);
  v15 = v12;
  if ( v12 < 0 )
  {
    v16 = WdLogNewEntry5_WdError(v13);
    *(_QWORD *)(v16 + 24) = v9;
    *(_QWORD *)(v16 + 32) = v15;
    WdLogEvent5_WdError(v16);
    return (unsigned int)v15;
  }
  if ( (int)MonitorIsMonitorVirtualModeDisabled(a1, a7, (__int64)v47, v14) < 0 || (v18 = 1, v47[0]) )
    v18 = 0;
  v19 = a8;
  v20 = v49;
  *((_BYTE *)a8 + 117) = v18;
  v21 = *(_DWORD *)(v20 + 12);
  if ( v21 != 254 )
  {
    *((_DWORD *)v19 + 32) = v21;
    v22 = *(_DWORD *)(v20 + 12);
    *(_DWORD *)v19 |= 0x10400u;
    *((_DWORD *)v19 + 31) = v22;
  }
  v23 = *(_DWORD *)(v20 + 20);
  if ( v23 != 254 )
  {
    *(_DWORD *)v19 |= 0x200u;
    *((_DWORD *)v19 + 30) = v23;
  }
  (*((void (__fastcall **)(struct D3DKMDT_HVIDPNTOPOLOGY__ *))v56 + 4))(v9);
  v24 = (*((__int64 (__fastcall **)(struct D3DKMDT_HVIDPN__ *, _QWORD, const struct _DXGDMM_VIDPNTOPOLOGY_INTERFACE **, __int64 *))a3
         + 1))(
          a2,
          a6,
          &v56,
          &v48);
  v26 = v24;
  if ( v24 < 0 )
  {
    v27 = (_QWORD *)WdLogNewEntry5_WdError(v25);
    v28 = a6;
LABEL_12:
    v27[3] = v28;
    v27[4] = a2;
    v27[5] = v26;
    WdLogEvent5_WdError(v27);
    return (unsigned int)v26;
  }
  v29 = *((_QWORD *)a3 + 2);
  v52 = 0LL;
  v53 = 0LL;
  v54 = 0LL;
  v55 = 0;
  v51[0] = 0;
  DXGDMM::AutoRelease<_D3DKMDT_VIDPN_PRESENT_PATH const *,long (*)(D3DKMDT_HVIDPNTOPOLOGY__ *,_D3DKMDT_VIDPN_PRESENT_PATH const *),D3DKMDT_HVIDPNTOPOLOGY__ *>::Own(
    (__int64)v51,
    (__int64)v56,
    v29,
    (__int64)a2);
  v30 = (*(__int64 (__fastcall **)(const struct _DXGDMM_VIDPNTOPOLOGY_INTERFACE *, __int64 *))(v48 + 24))(v56, &v50);
  v26 = v30;
  if ( v30 < 0 )
  {
    v32 = (_QWORD *)WdLogNewEntry5_WdError(v31);
    v33 = v52;
    v32[3] = a6;
    v32[4] = v33;
    v32[5] = v26;
    goto LABEL_16;
  }
  if ( v30 != 1075708679 )
  {
    v34 = v50;
    v35 = v56;
    *((_BYTE *)v19 + 116) = (unsigned int)(*(_DWORD *)(v50 + 4) - 3) <= 1;
    v36 = v48;
    *(_OWORD *)((char *)v19 + 84) = *(_OWORD *)(v34 + 8);
    v37 = *(_OWORD *)(v34 + 24);
    *(_DWORD *)v19 |= 0x100u;
    *(_OWORD *)((char *)v19 + 100) = v37;
    (*(void (__fastcall **)(const struct _DXGDMM_VIDPNTOPOLOGY_INTERFACE *))(v36 + 32))(v35);
  }
  if ( v51[0] )
    v53(v54, v52);
  v38 = (*((__int64 (__fastcall **)(struct D3DKMDT_HVIDPN__ *, _QWORD, const struct _DXGDMM_VIDPNTOPOLOGY_INTERFACE **, __int64 *))a3
         + 3))(
          a2,
          a7,
          &v56,
          &v48);
  v26 = v38;
  if ( v38 < 0 )
  {
    v27 = (_QWORD *)WdLogNewEntry5_WdError(v39);
    v28 = a7;
    goto LABEL_12;
  }
  v40 = *((_QWORD *)a3 + 4);
  v52 = 0LL;
  v53 = 0LL;
  v54 = 0LL;
  v55 = 0;
  v51[0] = 0;
  DXGDMM::AutoRelease<_D3DKMDT_VIDPN_PRESENT_PATH const *,long (*)(D3DKMDT_HVIDPNTOPOLOGY__ *,_D3DKMDT_VIDPN_PRESENT_PATH const *),D3DKMDT_HVIDPNTOPOLOGY__ *>::Own(
    (__int64)v51,
    (__int64)v56,
    v40,
    (__int64)a2);
  v41 = (*(__int64 (__fastcall **)(const struct _DXGDMM_VIDPNTOPOLOGY_INTERFACE *, __int64 *))(v48 + 24))(v56, &v50);
  v26 = v41;
  if ( v41 < 0 )
  {
    v32 = (_QWORD *)WdLogNewEntry5_WdError(v42);
    v33 = v52;
    v32[3] = v52;
    v32[4] = v26;
LABEL_16:
    WdLogEvent5_WdError(v32);
    if ( v51[0] )
      v53(v54, v33);
    return (unsigned int)v26;
  }
  if ( v41 != 1075708679 )
  {
    v43 = v50;
    v44 = v48;
    v45 = v56;
    *(_OWORD *)((char *)v19 + 24) = *(_OWORD *)(v50 + 8);
    *(_OWORD *)((char *)v19 + 40) = *(_OWORD *)(v43 + 24);
    *(_OWORD *)((char *)v19 + 56) = *(_OWORD *)(v43 + 40);
    v46 = *(_QWORD *)(v43 + 56);
    *(_DWORD *)v19 |= 0x87u;
    *((_QWORD *)v19 + 9) = v46;
    (*(void (__fastcall **)(const struct _DXGDMM_VIDPNTOPOLOGY_INTERFACE *))(v44 + 32))(v45);
  }
  if ( v51[0] )
    v53(v54, v52);
  return 0LL;
}
