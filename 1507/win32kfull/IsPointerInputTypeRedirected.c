/*
 * XREFs of IsPointerInputTypeRedirected @ 0x1C01FBA40
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall IsPointerInputTypeRedirected(int a1)
{
  return IsPointerInputRedirected(gptiCurrent, *(_QWORD *)(grpdeskRitInput + 8LL), a1, 0LL);
}
