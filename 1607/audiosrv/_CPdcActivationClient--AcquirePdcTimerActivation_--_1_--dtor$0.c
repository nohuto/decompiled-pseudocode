/*
 * XREFs of _CPdcActivationClient::AcquirePdcTimerActivation_::_1_::dtor$0 @ 0x180039A9D
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$shared_ptr@USaDeviceReevaluationContext@@@std@@QEAA@XZ @ 0x1800507F8 (--1-$shared_ptr@USaDeviceReevaluationContext@@@std@@QEAA@XZ.c)
 */

__int64 __fastcall CPdcActivationClient::AcquirePdcTimerActivation_::_1_::dtor_0(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  result = *(_DWORD *)(a2 + 32) & 1;
  if ( (_DWORD)result )
  {
    *(_DWORD *)(a2 + 32) &= ~1u;
    return std::shared_ptr<SaDeviceReevaluationContext>::~shared_ptr<SaDeviceReevaluationContext>(*(_QWORD *)(a2 + 120));
  }
  return result;
}
