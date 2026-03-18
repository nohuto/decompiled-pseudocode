/*
 * XREFs of PopDispatchCallout @ 0x1405C727C
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

struct _KTHREAD *__fastcall PopDispatchCallout(int a1)
{
  return PopEventCalloutDispatch(a1, 0LL);
}
