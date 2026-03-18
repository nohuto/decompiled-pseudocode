/*
 * XREFs of sub_140742B34 @ 0x140742B34
 * Callers:
 *     <none>
 * Callees:
 *     PsQueryThreadStartAddress @ 0x140007D48 (PsQueryThreadStartAddress.c)
 *     ObfReferenceObject @ 0x140042AA0 (ObfReferenceObject.c)
 */

__int64 __fastcall sub_140742B34(__int64 a1, void *a2, __int64 a3)
{
  __int64 v3; // rax
  void *v6; // rdi

  v3 = *(_QWORD *)(a3 + 1688);
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
    *(_QWORD *)(a3 + 1688) = a2;
  }
  return 0LL;
}
