/*
 * XREFs of ?DmmIsOnlySingleSourceModeExposed@@YAEPEAVADAPTER_DISPLAY@@I@Z @ 0x1C01A0908
 * Callers:
 *     ?_GetMonitorCCDMonitorID@DXGMONITOR@@QEAAJEKPEAG@Z @ 0x1C007B3FC (-_GetMonitorCCDMonitorID@DXGMONITOR@@QEAAJEKPEAG@Z.c)
 * Callees:
 *     ?Own@?$AutoRelease@PEBU_D3DKMDT_VIDPN_PRESENT_PATH@@P6AJPEAUD3DKMDT_HVIDPNTOPOLOGY__@@PEBU1@@ZPEAU2@@DXGDMM@@QEAAXPEBU_D3DKMDT_VIDPN_PRESENT_PATH@@Q6AJPEAUD3DKMDT_HVIDPNTOPOLOGY__@@0@Z1@Z @ 0x1C000AC00 (-Own@-$AutoRelease@PEBU_D3DKMDT_VIDPN_PRESENT_PATH@@P6AJPEAUD3DKMDT_HVIDPNTOPOLOGY__@@PEBU1@@ZPE.c)
 *     _guard_dispatch_icall_nop @ 0x1C0012450 (_guard_dispatch_icall_nop.c)
 *     ?QueryDxgDmmInterface@VIDPN_MGR@@QEAAXPEAPEBU_DXGDMM_INTERFACE@@@Z @ 0x1C0084D88 (-QueryDxgDmmInterface@VIDPN_MGR@@QEAAXPEAPEBU_DXGDMM_INTERFACE@@@Z.c)
 */

char __fastcall DmmIsOnlySingleSourceModeExposed(struct ADAPTER_DISPLAY *a1)
{
  __int64 v1; // rbx
  VIDPN_MGR *v2; // rcx
  struct _DXGDMM_INTERFACE *v3; // rsi
  __int64 (__fastcall *v4)(__int64, __int64 *, __int64 *); // rax
  int v5; // eax
  __int64 v6; // rcx
  __int64 v7; // rdi
  __int64 v8; // rax
  int v9; // ebx
  __int64 v10; // rcx
  __int64 v11; // rax
  char v12; // bl
  struct _DXGDMM_INTERFACE *v14; // [rsp+30h] [rbp-40h] BYREF
  __int64 (__fastcall **v15)(__int64, __int64 *); // [rsp+38h] [rbp-38h] BYREF
  __int64 v16; // [rsp+40h] [rbp-30h] BYREF
  _BYTE v17[8]; // [rsp+48h] [rbp-28h] BYREF
  __int64 v18; // [rsp+50h] [rbp-20h]
  void (__fastcall *v19)(__int64, __int64); // [rsp+58h] [rbp-18h]
  __int64 v20; // [rsp+60h] [rbp-10h]
  int v21; // [rsp+68h] [rbp-8h]
  __int64 v22; // [rsp+A0h] [rbp+30h] BYREF
  __int64 v23; // [rsp+B0h] [rbp+40h] BYREF
  __int64 v24; // [rsp+B8h] [rbp+48h] BYREF

  v1 = *((_QWORD *)a1 + 2);
  v2 = (VIDPN_MGR *)*((_QWORD *)a1 + 11);
  v16 = 0LL;
  v22 = 0LL;
  v24 = 0LL;
  v14 = 0LL;
  v15 = 0LL;
  VIDPN_MGR::QueryDxgDmmInterface(v2, &v14);
  v3 = v14;
  v23 = 0LL;
  v18 = 0LL;
  v19 = 0LL;
  v4 = (__int64 (__fastcall *)(__int64, __int64 *, __int64 *))*((_QWORD *)v14 + 6);
  v20 = 0LL;
  v21 = 0;
  v17[0] = 0;
  v5 = v4(v1, &v22, &v23);
  v7 = v5;
  if ( v5 < 0 )
  {
    v8 = WdLogNewEntry5_WdError(v6);
    *(_QWORD *)(v8 + 24) = v1;
    *(_QWORD *)(v8 + 32) = v7;
    WdLogEvent5_WdError(v8);
LABEL_8:
    v12 = 0;
    goto LABEL_9;
  }
  DXGDMM::AutoRelease<_D3DKMDT_VIDPN_PRESENT_PATH const *,long (*)(D3DKMDT_HVIDPNTOPOLOGY__ *,_D3DKMDT_VIDPN_PRESENT_PATH const *),D3DKMDT_HVIDPNTOPOLOGY__ *>::Own(
    (__int64)v17,
    v22,
    *((_QWORD *)v3 + 8),
    v1);
  if ( (*(int (__fastcall **)(__int64, _QWORD, __int64 *, __int64 (__fastcall ***)(__int64, __int64 *)))(v23 + 8))(
         v22,
         0LL,
         &v24,
         &v15) < 0 )
    goto LABEL_8;
  v9 = (*v15)(v24, &v16);
  if ( (*(int (__fastcall **)(__int64, __int64))(v23 + 16))(v22, v24) < 0 )
  {
    v11 = WdLogNewEntry5_WdAssertion(v10);
    *(_QWORD *)(v11 + 24) = 16648LL;
    WdLogEvent5_WdAssertion(v11);
  }
  if ( v9 < 0 )
    goto LABEL_8;
  v12 = 1;
  if ( v16 != 1 )
    goto LABEL_8;
LABEL_9:
  if ( v17[0] )
    v19(v20, v18);
  return v12;
}
