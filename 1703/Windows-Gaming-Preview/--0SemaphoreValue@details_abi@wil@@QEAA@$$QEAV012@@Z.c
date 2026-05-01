/*
 * XREFs of ??0SemaphoreValue@details_abi@wil@@QEAA@$$QEAV012@@Z @ 0x180002B18
 * Callers:
 *     ?Acquire@?$ProcessLocalStorageData@VFeatureStateData@details_abi@wil@@@details_abi@wil@@SAJPEBDPEAPEAV123@@Z @ 0x180026BB8 (-Acquire@-$ProcessLocalStorageData@VFeatureStateData@details_abi@wil@@@details_abi@wil@@SAJPEBDP.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall wil::details_abi::SemaphoreValue::SemaphoreValue(_QWORD *a1, _QWORD *a2)
{
  _QWORD *result; // rax

  *a1 = *a2;
  *a2 = 0LL;
  a1[1] = a2[1];
  result = a1;
  a2[1] = 0LL;
  return result;
}
