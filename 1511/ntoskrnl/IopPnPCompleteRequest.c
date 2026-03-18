/*
 * XREFs of IopPnPCompleteRequest @ 0x140102D80
 * Callers:
 *     IopPnPDispatch @ 0x1404E2670 (IopPnPDispatch.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall IopPnPCompleteRequest(__int64 a1, int a2, __int64 a3)
{
  *(_DWORD *)(a1 + 48) = a2;
  *(_QWORD *)(a1 + 56) = a3;
  return pIofCompleteRequest(a1, 0LL);
}
