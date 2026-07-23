/*
 * XREFs of sub_14078DFA4 @ 0x14078DFA4
 * Callers:
 *     <none>
 * Callees:
 *     ObfReferenceObject @ 0x140069BE0 (ObfReferenceObject.c)
 *     PsQueryThreadStartAddress @ 0x140074C20 (PsQueryThreadStartAddress.c)
 */

__int64 __fastcall sub_14078DFA4(__int64 a1, void *a2, __int64 a3)
{
  __int64 v3; // rax
  void *v6; // rdi

  v3 = *(_QWORD *)(a3 + 1760);
  if ( v3 )
  {
    if ( v3 != 1 )
      return 0LL;
    v6 = PopIrpWorkerControl;
  }
  else
  {
    v6 = CcQueueLazyWriteScanThread;
  }
  if ( (void *)PsQueryThreadStartAddress((__int64)a2, 0) == v6 )
  {
    ObfReferenceObject(a2);
    *(_QWORD *)(a3 + 1760) = a2;
  }
  return 0LL;
}
