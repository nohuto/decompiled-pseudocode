/*
 * XREFs of _std::make_shared_NonDefaultSaDeviceReevaluationContext__::_1_::dtor$1 @ 0x18008F1B3
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$shared_ptr@UNonDefaultSaDeviceReevaluationContext@@@std@@QEAA@XZ @ 0x18008F218 (--1-$shared_ptr@UNonDefaultSaDeviceReevaluationContext@@@std@@QEAA@XZ.c)
 */

__int64 __fastcall std::make_shared_NonDefaultSaDeviceReevaluationContext__::_1_::dtor_1(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  result = *(_DWORD *)(a2 + 32) & 1;
  if ( (_DWORD)result )
  {
    *(_DWORD *)(a2 + 32) &= ~1u;
    return std::shared_ptr<NonDefaultSaDeviceReevaluationContext>::~shared_ptr<NonDefaultSaDeviceReevaluationContext>(*(_QWORD *)(a2 + 64));
  }
  return result;
}
