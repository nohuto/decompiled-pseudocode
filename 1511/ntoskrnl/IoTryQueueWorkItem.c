/*
 * XREFs of IoTryQueueWorkItem @ 0x14010372C
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x1400423C0 (ObfDereferenceObjectWithTag.c)
 *     ExTryQueueWorkItem @ 0x140100504 (ExTryQueueWorkItem.c)
 *     IopQueueWorkItemProlog @ 0x140101A80 (IopQueueWorkItemProlog.c)
 */

char __fastcall IoTryQueueWorkItem(__int64 a1, __int64 a2, unsigned int a3, __int64 a4)
{
  ULONG_PTR v6; // rax
  char v7; // bl
  __int64 v9; // rcx

  v6 = IopQueueWorkItemProlog(a1, a2, a4);
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
