/*
 * XREFs of IopAbortRequest @ 0x1405F7080
 * Callers:
 *     <none>
 * Callees:
 *     IopCompleteRequest @ 0x140086090 (IopCompleteRequest.c)
 */

int __fastcall IopAbortRequest(__int64 a1)
{
  return IopCompleteRequest(a1, a1 + 48, a1 + 56, (ULONG_PTR *)(a1 + 64), (_QWORD *)(a1 + 72));
}
