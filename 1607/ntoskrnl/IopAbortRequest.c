/*
 * XREFs of IopAbortRequest @ 0x140620E3C
 * Callers:
 *     <none>
 * Callees:
 *     IopCompleteRequest @ 0x1400543C0 (IopCompleteRequest.c)
 */

void __fastcall IopAbortRequest(_QWORD *a1)
{
  IopCompleteRequest((__int64)a1, (__int64)(a1 + 6), a1 + 7, a1 + 8, a1 + 9);
}
