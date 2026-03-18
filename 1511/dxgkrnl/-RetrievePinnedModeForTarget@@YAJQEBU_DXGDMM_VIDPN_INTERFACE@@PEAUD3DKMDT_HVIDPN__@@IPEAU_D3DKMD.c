/*
 * XREFs of ?RetrievePinnedModeForTarget@@YAJQEBU_DXGDMM_VIDPN_INTERFACE@@PEAUD3DKMDT_HVIDPN__@@IPEAU_D3DKMDT_VIDPN_TARGET_MODE@@@Z @ 0x1C01419BC
 * Callers:
 *     ?PinPresentPathModalityFromMode@@YAJPEBU_DXGDMM_INTERFACE@@QEAXPEAUD3DKMDT_HVIDPN__@@QEBU_DXGDMM_VIDPN_INTERFACE@@PEAUD3DKMDT_HVIDPNTOPOLOGY__@@QEBU_DXGDMM_VIDPNTOPOLOGY_INTERFACE@@I_KPEAU_D3DKMT_DISPLAYMODE@@W4_D3DKMDT_VIDPN_PRESENT_PATH_SCALING@@EEPEAPEAU2@@Z @ 0x1C01410A0 (-PinPresentPathModalityFromMode@@YAJPEBU_DXGDMM_INTERFACE@@QEAXPEAUD3DKMDT_HVIDPN__@@QEBU_DXGDMM.c)
 * Callees:
 *     ?Own@?$AutoRelease@PEBU_D3DKMDT_VIDPN_PRESENT_PATH@@P6AJPEAUD3DKMDT_HVIDPNTOPOLOGY__@@PEBU1@@ZPEAU2@@DXGDMM@@QEAAXPEBU_D3DKMDT_VIDPN_PRESENT_PATH@@Q6AJPEAUD3DKMDT_HVIDPNTOPOLOGY__@@0@Z1@Z @ 0x1C000A5E8 (-Own@-$AutoRelease@PEBU_D3DKMDT_VIDPN_PRESENT_PATH@@P6AJPEAUD3DKMDT_HVIDPNTOPOLOGY__@@PEBU1@@ZPE.c)
 *     _guard_dispatch_icall_nop @ 0x1C00120A0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall RetrievePinnedModeForTarget(
        const struct _DXGDMM_VIDPN_INTERFACE *const a1,
        struct D3DKMDT_HVIDPN__ *a2,
        unsigned int a3,
        struct _D3DKMDT_VIDPN_TARGET_MODE *a4)
{
  __int64 v5; // rsi
  int v8; // eax
  __int64 v9; // rcx
  __int64 v10; // rbx
  _QWORD *v11; // rax
  __int64 v12; // r8
  int v13; // eax
  __int64 v14; // rcx
  __int64 v15; // rdi
  __int64 v16; // rax
  _OWORD *v17; // rdx
  __int64 v18; // rax
  __int64 v19; // rcx
  __int64 v21; // [rsp+30h] [rbp-40h] BYREF
  _OWORD *v22; // [rsp+38h] [rbp-38h] BYREF
  _BYTE v23[8]; // [rsp+40h] [rbp-30h] BYREF
  __int64 v24; // [rsp+48h] [rbp-28h]
  void (__fastcall *v25)(__int64, __int64); // [rsp+50h] [rbp-20h]
  __int64 v26; // [rsp+58h] [rbp-18h]
  int v27; // [rsp+60h] [rbp-10h]
  __int64 v28; // [rsp+90h] [rbp+20h] BYREF

  v5 = a3;
  v8 = (*((__int64 (__fastcall **)(struct D3DKMDT_HVIDPN__ *, _QWORD, __int64 *, __int64 *))a1 + 3))(a2, a3, &v28, &v21);
  v10 = v8;
  if ( v8 < 0 )
  {
    v11 = (_QWORD *)WdLogNewEntry5_WdError(v9);
    v11[3] = v5;
    v11[4] = a2;
    v11[5] = v10;
    WdLogEvent5_WdError(v11);
    return (unsigned int)v10;
  }
  v12 = *((_QWORD *)a1 + 4);
  v24 = 0LL;
  v25 = 0LL;
  v26 = 0LL;
  v27 = 0;
  v23[0] = 0;
  DXGDMM::AutoRelease<_D3DKMDT_VIDPN_PRESENT_PATH const *,long (*)(D3DKMDT_HVIDPNTOPOLOGY__ *,_D3DKMDT_VIDPN_PRESENT_PATH const *),D3DKMDT_HVIDPNTOPOLOGY__ *>::Own(
    (__int64)v23,
    v28,
    v12,
    (__int64)a2);
  v13 = (*(__int64 (__fastcall **)(__int64, _OWORD **))(v21 + 24))(v28, &v22);
  v15 = v24;
  v10 = v13;
  if ( v13 < 0 )
    goto LABEL_6;
  if ( v13 == 1075708679 )
  {
    v10 = -1071774970LL;
LABEL_6:
    v16 = WdLogNewEntry5_WdError(v14);
    *(_QWORD *)(v16 + 24) = v15;
    *(_QWORD *)(v16 + 32) = v10;
    WdLogEvent5_WdError(v16);
    goto LABEL_8;
  }
  v17 = v22;
  v18 = v21;
  v19 = v28;
  *(_OWORD *)&a4->Id = *v22;
  *(_OWORD *)&a4->VideoSignalInfo.TotalSize.cy = v17[1];
  *(_OWORD *)&a4->VideoSignalInfo.VSyncFreq.Denominator = v17[2];
  *(_OWORD *)&a4->VideoSignalInfo.PixelRate = v17[3];
  *(_QWORD *)&a4->WireFormatAndPreference.0 = *((_QWORD *)v17 + 8);
  (*(void (__fastcall **)(__int64))(v18 + 32))(v19);
LABEL_8:
  if ( v23[0] )
    v25(v26, v15);
  return (unsigned int)v10;
}
