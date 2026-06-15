/*
 * XREFs of ??1?$lock_guard@Vmutex@std@@@std@@QEAA@XZ @ 0x180050578
 * Callers:
 *     _CPdcActivationClient::AcquirePdcTimerActivation_::_1_::dtor$1 @ 0x180039AC3 (_CPdcActivationClient--AcquirePdcTimerActivation_--_1_--dtor$1.c)
 *     _CPdcActivationClient::ActivatorCallback_::_1_::dtor$0 @ 0x180079951 (_CPdcActivationClient--ActivatorCallback_--_1_--dtor$0.c)
 * Callees:
 *     <none>
 */

void __fastcall std::lock_guard<std::mutex>::~lock_guard<std::mutex>(_Mtx_t *a1)
{
  int v1; // eax

  v1 = _Mtx_unlock(*a1);
  if ( v1 )
    std::_Throw_C_error(v1);
}
