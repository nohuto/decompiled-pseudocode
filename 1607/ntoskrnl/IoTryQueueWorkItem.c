/*
 * XREFs of IoTryQueueWorkItem @ 0x14010DC14
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x14006A850 (ObfDereferenceObjectWithTag.c)
 *     IopQueueWorkItemProlog @ 0x1400CF2A8 (IopQueueWorkItemProlog.c)
 *     ExTryQueueWorkItemFromIo @ 0x14010DC50 (ExTryQueueWorkItemFromIo.c)
 */

char __fastcall IoTryQueueWorkItem(__int64 a1, __int64 a2, unsigned int a3, __int64 a4)
{
  __int64 v6; // rax
  char v7; // bl
  void *v9; // rcx

  v6 = IopQueueWorkItemProlog(a1, a2, a4);
  v7 = ExTryQueueWorkItemFromIo(v6, a3);
  if ( !v7 )
  {
    ObfDereferenceObjectWithTag(*(PVOID *)(a1 + 40), 0x746C6644u);
    v9 = *(void **)(a1 + 56);
    if ( v9 )
    {
      ObfDereferenceObjectWithTag(v9, 0x746C6644u);
      *(_QWORD *)(a1 + 56) = 0LL;
    }
  }
  return v7;
}
