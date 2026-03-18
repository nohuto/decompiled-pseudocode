/*
 * XREFs of ?RetrievePinnedModeForTarget@@YAJQEBU_DXGDMM_VIDPN_INTERFACE@@PEAUD3DKMDT_HVIDPN__@@IPEAU_D3DKMDT_VIDPN_TARGET_MODE@@@Z @ 0x1C00E15A8
 * Callers:
 *     ?PinPresentPathModalityFromMode@@YAJPEBU_DXGDMM_INTERFACE@@QEAXPEAUD3DKMDT_HVIDPN__@@QEBU_DXGDMM_VIDPN_INTERFACE@@PEAUD3DKMDT_HVIDPNTOPOLOGY__@@QEBU_DXGDMM_VIDPNTOPOLOGY_INTERFACE@@I_KPEAU_D3DKMT_DISPLAYMODE@@W4_D3DKMDT_VIDPN_PRESENT_PATH_SCALING@@EEPEAPEAU2@@Z @ 0x1C00E1094 (-PinPresentPathModalityFromMode@@YAJPEBU_DXGDMM_INTERFACE@@QEAXPEAUD3DKMDT_HVIDPN__@@QEBU_DXGDMM.c)
 * Callees:
 *     ?Own@?$AutoRelease@PEBU_D3DKMDT_VIDPN_PRESENT_PATH@@P6AJPEAUD3DKMDT_HVIDPNTOPOLOGY__@@PEBU1@@ZPEAU2@@DXGDMM@@QEAAXPEBU_D3DKMDT_VIDPN_PRESENT_PATH@@Q6AJPEAUD3DKMDT_HVIDPNTOPOLOGY__@@0@Z1@Z @ 0x1C000AC00 (-Own@-$AutoRelease@PEBU_D3DKMDT_VIDPN_PRESENT_PATH@@P6AJPEAUD3DKMDT_HVIDPNTOPOLOGY__@@PEBU1@@ZPE.c)
 *     _guard_dispatch_icall_nop @ 0x1C0012450 (_guard_dispatch_icall_nop.c)
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
  __int64 v11; // r8
  int v12; // eax
  __int64 v13; // rcx
  __int64 v14; // rdi
  _OWORD *v15; // rdx
  __int64 v16; // rax
  __int64 v17; // rcx
  _QWORD *v19; // rax
  __int64 v20; // rax
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
    v19 = (_QWORD *)WdLogNewEntry5_WdError(v9);
    v19[3] = v5;
    v19[4] = a2;
    v19[5] = v10;
    WdLogEvent5_WdError(v19);
    return (unsigned int)v10;
  }
  v11 = *((_QWORD *)a1 + 4);
  v24 = 0LL;
  v25 = 0LL;
  v26 = 0LL;
  v27 = 0;
  v23[0] = 0;
  DXGDMM::AutoRelease<_D3DKMDT_VIDPN_PRESENT_PATH const *,long (*)(D3DKMDT_HVIDPNTOPOLOGY__ *,_D3DKMDT_VIDPN_PRESENT_PATH const *),D3DKMDT_HVIDPNTOPOLOGY__ *>::Own(
    (__int64)v23,
    v28,
    v11,
    (__int64)a2);
  v12 = (*(__int64 (__fastcall **)(__int64, _OWORD **))(v21 + 24))(v28, &v22);
  v14 = v24;
  v10 = v12;
  if ( v12 >= 0 )
  {
    if ( v12 != 1075708679 )
    {
      v15 = v22;
      v16 = v21;
      v17 = v28;
      *(_OWORD *)&a4->Id = *v22;
      *(_OWORD *)&a4->VideoSignalInfo.TotalSize.cy = v15[1];
      *(_OWORD *)&a4->VideoSignalInfo.VSyncFreq.Denominator = v15[2];
      *(_OWORD *)&a4->VideoSignalInfo.PixelRate = v15[3];
      *(_QWORD *)&a4->WireFormatAndPreference.0 = *((_QWORD *)v15 + 8);
      (*(void (__fastcall **)(__int64))(v16 + 32))(v17);
      goto LABEL_5;
    }
    v10 = -1071774970LL;
  }
  v20 = WdLogNewEntry5_WdError(v13);
  *(_QWORD *)(v20 + 24) = v14;
  *(_QWORD *)(v20 + 32) = v10;
  WdLogEvent5_WdError(v20);
LABEL_5:
  if ( v23[0] )
    v25(v26, v14);
  return (unsigned int)v10;
}
