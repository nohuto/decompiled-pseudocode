/*
 * XREFs of sub_1407B5998 @ 0x1407B5998
 * Callers:
 *     <none>
 * Callees:
 *     ObfReferenceObject @ 0x14004E630 (ObfReferenceObject.c)
 *     PsQueryThreadStartAddress @ 0x14024381C (PsQueryThreadStartAddress.c)
 */

__int64 __fastcall sub_1407B5998(__int64 a1, void *a2, __int64 a3)
{
  __int64 v3; // rax
  void *v6; // rdi

  v3 = *(_QWORD *)(a3 + 1680);
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
    *(_QWORD *)(a3 + 1680) = a2;
  }
  return 0LL;
}
