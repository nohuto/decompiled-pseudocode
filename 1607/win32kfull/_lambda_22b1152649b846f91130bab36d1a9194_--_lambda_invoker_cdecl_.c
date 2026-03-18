/*
 * XREFs of _lambda_22b1152649b846f91130bab36d1a9194_::_lambda_invoker_cdecl_ @ 0x1C023C820
 * Callers:
 *     <none>
 * Callees:
 *     ?Instance@InteractiveControlManager@@SAPEAV1@XZ @ 0x1C0123D24 (-Instance@InteractiveControlManager@@SAPEAV1@XZ.c)
 */

__int64 __fastcall lambda_22b1152649b846f91130bab36d1a9194_::_lambda_invoker_cdecl_(
        __int64 a1,
        __int64 a2,
        unsigned int a3)
{
  InteractiveControlManager *v4; // rax

  v4 = InteractiveControlManager::Instance();
  return InteractiveControlManager::OnDeviceTimerNotification(v4, a3);
}
