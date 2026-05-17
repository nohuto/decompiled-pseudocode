/*
 * XREFs of EtwEventUnregister @ 0x18000E360
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall EtwEventUnregister(__int64 a1)
{
  return EtwNotificationUnregister(a1, 0LL);
}
