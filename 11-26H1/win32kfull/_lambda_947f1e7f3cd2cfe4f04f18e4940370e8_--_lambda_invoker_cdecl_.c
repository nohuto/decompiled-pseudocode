/*
 * XREFs of _lambda_947f1e7f3cd2cfe4f04f18e4940370e8_::_lambda_invoker_cdecl_ @ 0x1402FC6F0
 * Callers:
 *     <none>
 * Callees:
 *     ?Instance@InteractiveControlManager@@SAPEAV1@XZ @ 0x14013DB10 (-Instance@InteractiveControlManager@@SAPEAV1@XZ.c)
 *     ?OnDeviceTimerNotification@InteractiveControlManager@@QEAAJK@Z @ 0x1402F1D74 (-OnDeviceTimerNotification@InteractiveControlManager@@QEAAJK@Z.c)
 */

__int64 __fastcall lambda_947f1e7f3cd2cfe4f04f18e4940370e8_::_lambda_invoker_cdecl_(
        __int64 a1,
        __int64 a2,
        unsigned int a3)
{
  InteractiveControlManager *v4; // rax

  v4 = InteractiveControlManager::Instance(a1, a2);
  return InteractiveControlManager::OnDeviceTimerNotification(v4, a3);
}
