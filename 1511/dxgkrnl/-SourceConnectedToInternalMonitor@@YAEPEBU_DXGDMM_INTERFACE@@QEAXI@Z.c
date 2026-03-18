/*
 * XREFs of ?SourceConnectedToInternalMonitor@@YAEPEBU_DXGDMM_INTERFACE@@QEAXI@Z @ 0x1C00ABE0C
 * Callers:
 *     DxgkUpdateGdiInfo @ 0x1C00AD640 (DxgkUpdateGdiInfo.c)
 * Callees:
 *     ?Own@?$AutoRelease@PEBU_D3DKMDT_VIDPN_PRESENT_PATH@@P6AJPEAUD3DKMDT_HVIDPNTOPOLOGY__@@PEBU1@@ZPEAU2@@DXGDMM@@QEAAXPEBU_D3DKMDT_VIDPN_PRESENT_PATH@@Q6AJPEAUD3DKMDT_HVIDPNTOPOLOGY__@@0@Z1@Z @ 0x1C000A5E8 (-Own@-$AutoRelease@PEBU_D3DKMDT_VIDPN_PRESENT_PATH@@P6AJPEAUD3DKMDT_HVIDPNTOPOLOGY__@@PEBU1@@ZPE.c)
 *     _guard_dispatch_icall_nop @ 0x1C00120A0 (_guard_dispatch_icall_nop.c)
 *     ?IsTargetInternalMonitor@@YAEQEAXI@Z @ 0x1C00ABDB0 (-IsTargetInternalMonitor@@YAEQEAXI@Z.c)
 */

char __fastcall SourceConnectedToInternalMonitor(const struct _DXGDMM_INTERFACE *a1, DXGADAPTER *a2, unsigned int a3)
{
  __int64 (__fastcall *v3)(DXGADAPTER *, __int64 *, _QWORD); // rax
  __int64 v5; // rdi
  char v7; // r14
  int v8; // eax
  __int64 v9; // rcx
  __int64 v10; // rbx
  __int64 v11; // r15
  int v12; // eax
  __int64 v13; // rcx
  __int64 v14; // rbx
  int v15; // eax
  __int64 v16; // rcx
  __int64 v17; // rbx
  __int64 v18; // rbx
  int v19; // eax
  __int64 v20; // rcx
  __int64 v21; // r12
  __int64 v23; // rax
  _QWORD *v24; // rax
  _QWORD *v25; // rcx
  unsigned __int64 v26; // [rsp+30h] [rbp-40h] BYREF
  __int64 (__fastcall **v27)(__int64, __int64 *, __int64 *); // [rsp+38h] [rbp-38h] BYREF
  _BYTE v28[8]; // [rsp+40h] [rbp-30h] BYREF
  __int64 v29; // [rsp+48h] [rbp-28h]
  void (__fastcall *v30)(__int64, __int64); // [rsp+50h] [rbp-20h]
  __int64 v31; // [rsp+58h] [rbp-18h]
  int v32; // [rsp+60h] [rbp-10h]
  __int64 v33; // [rsp+B0h] [rbp+40h] BYREF
  __int64 v34; // [rsp+B8h] [rbp+48h] BYREF
  __int64 v35; // [rsp+C8h] [rbp+58h] BYREF

  v3 = (__int64 (__fastcall *)(DXGADAPTER *, __int64 *, _QWORD))*((_QWORD *)a1 + 6);
  v5 = a3;
  v27 = 0LL;
  v29 = 0LL;
  v30 = 0LL;
  v31 = 0LL;
  v7 = 0;
  v32 = 0;
  v28[0] = 0;
  v33 = 0LL;
  v8 = v3(a2, &v33, &v27);
  v10 = v8;
  if ( v8 < 0 )
  {
    v23 = WdLogNewEntry5_WdError(v9);
    *(_QWORD *)(v23 + 24) = a2;
    *(_QWORD *)(v23 + 32) = v10;
    WdLogEvent5_WdError(v23);
    return v7;
  }
  DXGDMM::AutoRelease<_D3DKMDT_VIDPN_PRESENT_PATH const *,long (*)(D3DKMDT_HVIDPNTOPOLOGY__ *,_D3DKMDT_VIDPN_PRESENT_PATH const *),D3DKMDT_HVIDPNTOPOLOGY__ *>::Own(
    (__int64)v28,
    v33,
    *((_QWORD *)a1 + 8),
    (__int64)a2);
  v11 = v29;
  v34 = 0LL;
  v35 = 0LL;
  v12 = (*v27)(v29, &v34, &v35);
  v14 = v12;
  if ( v12 < 0 )
  {
    v24 = (_QWORD *)WdLogNewEntry5_WdError(v13);
    v24[3] = v11;
    v24[4] = v14;
LABEL_16:
    v25 = v24;
    goto LABEL_17;
  }
  v26 = 0LL;
  v15 = (*(__int64 (__fastcall **)(__int64, _QWORD, unsigned __int64 *))v35)(v34, (unsigned int)v5, &v26);
  v17 = v15;
  if ( v15 >= 0 )
  {
    v18 = 0LL;
    if ( !v26 )
      goto LABEL_8;
    while ( 1 )
    {
      LODWORD(v33) = -1;
      v19 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64, __int64 *))(v35 + 8))(v34, (unsigned int)v5, v18, &v33);
      v21 = v19;
      if ( v19 < 0 )
        break;
      if ( IsTargetInternalMonitor(a2, v33) )
      {
        v7 = 1;
        goto LABEL_8;
      }
      if ( ++v18 >= v26 )
        goto LABEL_8;
    }
    v24 = (_QWORD *)WdLogNewEntry5_WdError(v20);
    v24[3] = v18;
    v24[4] = v5;
    v24[5] = v21;
    goto LABEL_16;
  }
  v25 = (_QWORD *)WdLogNewEntry5_WdError(v16);
  v25[3] = v5;
  v25[4] = v34;
  v25[5] = v17;
LABEL_17:
  WdLogEvent5_WdError(v25);
LABEL_8:
  if ( v28[0] )
    v30(v31, v11);
  return v7;
}
