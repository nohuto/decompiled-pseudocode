/*
 * XREFs of RtlCreateHashTableEx @ 0x1800DBB10
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// attributes: thunk
char __fastcall RtlCreateHashTableEx(_DWORD **a1, unsigned int a2, int a3, int a4)
{
  return RtlpCreateHashTable(a1, a2, a3, a4);
}
