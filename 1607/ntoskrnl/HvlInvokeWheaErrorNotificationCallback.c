/*
 * XREFs of HvlInvokeWheaErrorNotificationCallback @ 0x1401BCD78
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS __fastcall HvlInvokeWheaErrorNotificationCallback(struct _WHEA_RECOVERY_CONTEXT *a1, BOOLEAN a2, BOOLEAN a3)
{
  NTSTATUS result; // eax

  result = -1073741823;
  if ( HvlpWheaErrorNotificationCallback )
    return HvlpWheaErrorNotificationCallback(a1, a2, a3);
  return result;
}
