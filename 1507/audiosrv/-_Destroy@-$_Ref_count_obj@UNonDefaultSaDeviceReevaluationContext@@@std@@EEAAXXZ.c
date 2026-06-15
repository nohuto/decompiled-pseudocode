/*
 * XREFs of ?_Destroy@?$_Ref_count_obj@UNonDefaultSaDeviceReevaluationContext@@@std@@EEAAXXZ @ 0x1800933B0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall std::_Ref_count_obj<NonDefaultSaDeviceReevaluationContext>::_Destroy(__int64 a1)
{
  CoTaskMemFree(*(LPVOID *)(a1 + 16));
  *(_QWORD *)(a1 + 16) = 0LL;
}
