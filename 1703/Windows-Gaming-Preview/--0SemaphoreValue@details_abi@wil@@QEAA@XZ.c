/*
 * XREFs of ??0SemaphoreValue@details_abi@wil@@QEAA@XZ @ 0x180003E98
 * Callers:
 *     ?Acquire@?$ProcessLocalStorageData@VFeatureStateData@details_abi@wil@@@details_abi@wil@@SAJPEBDPEAPEAV123@@Z @ 0x180026BB8 (-Acquire@-$ProcessLocalStorageData@VFeatureStateData@details_abi@wil@@@details_abi@wil@@SAJPEBDP.c)
 * Callees:
 *     <none>
 */

wil::details_abi::SemaphoreValue *__fastcall wil::details_abi::SemaphoreValue::SemaphoreValue(
        wil::details_abi::SemaphoreValue *this)
{
  wil::details_abi::SemaphoreValue *result; // rax

  *(_QWORD *)this = 0LL;
  result = this;
  *((_QWORD *)this + 1) = 0LL;
  return result;
}
