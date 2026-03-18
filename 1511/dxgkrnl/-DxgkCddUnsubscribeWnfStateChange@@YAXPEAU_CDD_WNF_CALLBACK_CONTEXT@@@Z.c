/*
 * XREFs of ?DxgkCddUnsubscribeWnfStateChange@@YAXPEAU_CDD_WNF_CALLBACK_CONTEXT@@@Z @ 0x1C00C6A80
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall DxgkCddUnsubscribeWnfStateChange(struct _CDD_WNF_CALLBACK_CONTEXT *a1)
{
  ExUnsubscribeWnfStateChange(*(_QWORD *)a1);
  operator delete(a1);
}
