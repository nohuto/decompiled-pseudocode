/*
 * XREFs of RecreateTouchInjectionDevices @ 0x1C0100E70
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 RecreateTouchInjectionDevices()
{
  __int64 result; // rax

  result = 1LL;
  gbPendRecreateTouchInjectionDevices = 1;
  return result;
}
