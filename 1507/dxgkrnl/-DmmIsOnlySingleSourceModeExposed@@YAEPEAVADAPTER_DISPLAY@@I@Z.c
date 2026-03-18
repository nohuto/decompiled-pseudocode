/*
 * XREFs of ?DmmIsOnlySingleSourceModeExposed@@YAEPEAVADAPTER_DISPLAY@@I@Z @ 0x1C017283C
 * Callers:
 *     ?_GetMonitorCCDMonitorID@DXGMONITOR@@QEAAJEKPEAG@Z @ 0x1C00980C8 (-_GetMonitorCCDMonitorID@DXGMONITOR@@QEAAJEKPEAG@Z.c)
 * Callees:
 *     ?Own@?$AutoRelease@PEBU_D3DKMDT_VIDPN_PRESENT_PATH@@P6AJPEAUD3DKMDT_HVIDPNTOPOLOGY__@@PEBU1@@ZPEAU2@@DXGDMM@@QEAAXPEBU_D3DKMDT_VIDPN_PRESENT_PATH@@Q6AJPEAUD3DKMDT_HVIDPNTOPOLOGY__@@0@Z1@Z @ 0x1C0009E4C (-Own@-$AutoRelease@PEBU_D3DKMDT_VIDPN_PRESENT_PATH@@P6AJPEAUD3DKMDT_HVIDPNTOPOLOGY__@@PEBU1@@ZPE.c)
 *     _guard_dispatch_icall_nop @ 0x1C0010930 (_guard_dispatch_icall_nop.c)
 *     ?QueryDxgDmmInterface@VIDPN_MGR@@QEAAXPEAPEBU_DXGDMM_INTERFACE@@@Z @ 0x1C0097090 (-QueryDxgDmmInterface@VIDPN_MGR@@QEAAXPEAPEBU_DXGDMM_INTERFACE@@@Z.c)
 */

char __fastcall DmmIsOnlySingleSourceModeExposed(struct ADAPTER_DISPLAY *a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rbx
  VIDPN_MGR *v5; // rcx
  struct _DXGDMM_INTERFACE *v6; // rsi
  __int64 (__fastcall *v7)(__int64, __int64 *, __int64 *); // rax
  int v8; // eax
  __int64 v9; // rcx
  __int64 v10; // rdi
  __int64 v11; // rax
  int v12; // ebx
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r9
  __int64 v17; // rax
  char v18; // bl
  struct _DXGDMM_INTERFACE *v20; // [rsp+30h] [rbp-40h] BYREF
  __int64 (__fastcall **v21)(__int64, __int64 *); // [rsp+38h] [rbp-38h] BYREF
  __int64 v22; // [rsp+40h] [rbp-30h] BYREF
  _BYTE v23[8]; // [rsp+48h] [rbp-28h] BYREF
  __int64 v24; // [rsp+50h] [rbp-20h]
  void (__fastcall *v25)(__int64, __int64); // [rsp+58h] [rbp-18h]
  __int64 v26; // [rsp+60h] [rbp-10h]
  int v27; // [rsp+68h] [rbp-8h]
  __int64 v28; // [rsp+A0h] [rbp+30h] BYREF
  __int64 v29; // [rsp+B0h] [rbp+40h] BYREF
  __int64 v30; // [rsp+B8h] [rbp+48h] BYREF

  v4 = *((_QWORD *)a1 + 2);
  v5 = (VIDPN_MGR *)*((_QWORD *)a1 + 11);
  v22 = 0LL;
  v28 = 0LL;
  v30 = 0LL;
  v20 = 0LL;
  v21 = 0LL;
  VIDPN_MGR::QueryDxgDmmInterface(v5, &v20, a3, a4);
  v6 = v20;
  v29 = 0LL;
  v24 = 0LL;
  v25 = 0LL;
  v7 = (__int64 (__fastcall *)(__int64, __int64 *, __int64 *))*((_QWORD *)v20 + 6);
  v26 = 0LL;
  v27 = 0;
  v23[0] = 0;
  v8 = v7(v4, &v28, &v29);
  v10 = v8;
  if ( v8 < 0 )
  {
    v11 = WdLogNewEntry5_WdError(v9);
    *(_QWORD *)(v11 + 24) = v4;
    *(_QWORD *)(v11 + 32) = v10;
    WdLogEvent5_WdError(v11);
LABEL_8:
    v18 = 0;
    goto LABEL_9;
  }
  DXGDMM::AutoRelease<_D3DKMDT_VIDPN_PRESENT_PATH const *,long (*)(D3DKMDT_HVIDPNTOPOLOGY__ *,_D3DKMDT_VIDPN_PRESENT_PATH const *),D3DKMDT_HVIDPNTOPOLOGY__ *>::Own(
    (__int64)v23,
    v28,
    *((_QWORD *)v6 + 8),
    v4);
  if ( (*(int (__fastcall **)(__int64, _QWORD, __int64 *, __int64 (__fastcall ***)(__int64, __int64 *)))(v29 + 8))(
         v28,
         0LL,
         &v30,
         &v21) < 0 )
    goto LABEL_8;
  v12 = (*v21)(v30, &v22);
  if ( (*(int (__fastcall **)(__int64, __int64))(v29 + 16))(v28, v30) < 0 )
  {
    v17 = WdLogNewEntry5_WdAssertion(v14, v13, v15, v16);
    *(_QWORD *)(v17 + 24) = 16492LL;
    WdLogEvent5_WdAssertion(v17);
  }
  if ( v12 < 0 )
    goto LABEL_8;
  v18 = 1;
  if ( v22 != 1 )
    goto LABEL_8;
LABEL_9:
  if ( v23[0] )
    v25(v26, v24);
  return v18;
}
