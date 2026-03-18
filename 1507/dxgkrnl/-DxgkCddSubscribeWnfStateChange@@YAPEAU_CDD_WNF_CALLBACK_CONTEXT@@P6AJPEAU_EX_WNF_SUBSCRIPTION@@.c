/*
 * XREFs of ?DxgkCddSubscribeWnfStateChange@@YAPEAU_CDD_WNF_CALLBACK_CONTEXT@@P6AJPEAU_EX_WNF_SUBSCRIPTION@@PEBU_WNF_STATE_NAME@@KKPEBU_WNF_TYPE_ID@@PEAX@ZPEAU_EPROCESS@@1K3@Z @ 0x1C00B1710
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1C00689D8 (--3@YAXPEAX@Z.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C008834C (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 */

struct _CDD_WNF_CALLBACK_CONTEXT *__fastcall DxgkCddSubscribeWnfStateChange(
        int (*a1)(struct _EX_WNF_SUBSCRIPTION *, const struct _WNF_STATE_NAME *, unsigned int, unsigned int, const struct _WNF_TYPE_ID *, void *),
        struct _EPROCESS *a2,
        const struct _WNF_STATE_NAME *a3,
        unsigned int a4,
        void *a5)
{
  _QWORD *v9; // rax
  __int64 v10; // rcx
  void *v11; // rbx
  int v12; // eax
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r9
  __int64 v17; // rsi
  __int64 v19; // rax
  __int64 v20; // rax

  v9 = operator new[](0x20uLL, 0x4B677844u, PagedPool);
  v11 = v9;
  if ( v9 )
  {
    v9[2] = a5;
    v9[3] = a2;
    v9[1] = a1;
    v12 = ExSubscribeWnfStateChange(v9, a3, a4, 0LL, DxgkWnfStateChangeCallback, v9);
    v17 = v12;
    if ( v12 >= 0 )
      return (struct _CDD_WNF_CALLBACK_CONTEXT *)v11;
    v20 = WdLogNewEntry5_WdWarning(v14, v13, v15, v16);
    *(_QWORD *)(v20 + 24) = v17;
    *(_QWORD *)(v20 + 32) = a5;
    WdLogEvent5_WdWarning(v20);
    operator delete(v11);
  }
  else
  {
    v19 = WdLogNewEntry5_WdLowResource(v10);
    *(_QWORD *)(v19 + 24) = a5;
    WdLogEvent5_WdLowResource(v19);
  }
  return 0LL;
}
