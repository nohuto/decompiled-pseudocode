/*
 * XREFs of DbgUiSetThreadDebugObject @ 0x1800D04E0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

struct _TEB *__fastcall DbgUiSetThreadDebugObject(void *a1)
{
  struct _TEB *result; // rax

  result = NtCurrentTeb();
  result->DbgSsReserved[1] = a1;
  return result;
}
