/*
 * XREFs of IoTryQueueWorkItem @ 0x140132764
 * Callers:
 *     <none>
 * Callees:
 *     IopQueueWorkItemProlog @ 0x14000DA70 (IopQueueWorkItemProlog.c)
 *     ExTryQueueWorkItem @ 0x1400292FC (ExTryQueueWorkItem.c)
 *     ObfDereferenceObjectWithTag @ 0x14004FD20 (ObfDereferenceObjectWithTag.c)
 */

char __fastcall IoTryQueueWorkItem(__int64 a1, __int64 a2, int a3, __int64 a4)
{
  _QWORD *v6; // rax
  char v7; // bl
  __int64 v9; // rcx

  v6 = (_QWORD *)IopQueueWorkItemProlog(a1, a2, a4);
  v7 = ExTryQueueWorkItem(v6, a3);
  if ( !v7 )
  {
    ObfDereferenceObjectWithTag(*(PVOID *)(a1 + 40), 0x746C6644u);
    v9 = *(_QWORD *)(a1 + 56);
    if ( v9 )
    {
      ObfDereferenceObjectWithTag((PVOID)(v9 & 0xFFFFFFFFFFFFFFFEuLL), 0x746C6644u);
      *(_QWORD *)(a1 + 56) = 0LL;
    }
  }
  return v7;
}
