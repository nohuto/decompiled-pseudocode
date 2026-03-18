/*
 * XREFs of ?DxgkCddSubscribeWnfStateChange@@YAPEAU_CDD_WNF_CALLBACK_CONTEXT@@P6AJPEAU_EX_WNF_SUBSCRIPTION@@PEBU_WNF_STATE_NAME@@KKPEBU_WNF_TYPE_ID@@PEAX@ZPEAU_EPROCESS@@1K3@Z @ 0x1C00C5F90
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1C0065F88 (--3@YAXPEAX@Z.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0065FA0 (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 */

struct _CDD_WNF_CALLBACK_CONTEXT *__fastcall DxgkCddSubscribeWnfStateChange(
        int (*a1)(struct _EX_WNF_SUBSCRIPTION *, const struct _WNF_STATE_NAME *, unsigned int, unsigned int, const struct _WNF_TYPE_ID *, void *),
        struct _EPROCESS *a2,
        const struct _WNF_STATE_NAME *a3,
        unsigned int a4,
        void *a5)
{
  _QWORD *v9; // rax
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  void *v14; // rbx
  int v15; // eax
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // r9
  __int64 v20; // rsi
  __int64 v22; // rax
  __int64 v23; // rax

  v9 = operator new[](0x20uLL, 0x4B677844u, PagedPool);
  v14 = v9;
  if ( v9 )
  {
    v9[2] = a5;
    v9[3] = a2;
    v9[1] = a1;
    v15 = ExSubscribeWnfStateChange(v9, a3, a4, 0LL, DxgkWnfStateChangeCallback, v9);
    v20 = v15;
    if ( v15 >= 0 )
      return (struct _CDD_WNF_CALLBACK_CONTEXT *)v14;
    v23 = WdLogNewEntry5_WdWarning(v17, v16, v18, v19);
    *(_QWORD *)(v23 + 24) = v20;
    *(_QWORD *)(v23 + 32) = a5;
    WdLogEvent5_WdWarning(v23);
    operator delete(v14);
  }
  else
  {
    v22 = WdLogNewEntry5_WdLowResource(v11, v10, v12, v13);
    *(_QWORD *)(v22 + 24) = a5;
    WdLogEvent5_WdLowResource(v22);
  }
  return 0LL;
}
