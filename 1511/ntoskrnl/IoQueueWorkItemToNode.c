/*
 * XREFs of IoQueueWorkItemToNode @ 0x1401BBC04
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x1400423C0 (ObfDereferenceObjectWithTag.c)
 *     ExQueueWorkItemEx @ 0x140100640 (ExQueueWorkItemEx.c)
 *     IopQueueWorkItemProlog @ 0x140101A80 (IopQueueWorkItemProlog.c)
 */

char __fastcall IoQueueWorkItemToNode(__int64 a1, __int64 a2, unsigned int a3, __int64 a4, unsigned int a5)
{
  ULONG_PTR v7; // rax
  char v8; // bl

  v7 = IopQueueWorkItemProlog(a1, a2, a4);
  v8 = ExQueueWorkItemEx(v7, a3, a5);
  if ( !v8 )
    ObfDereferenceObjectWithTag(*(PVOID *)(a1 + 40), 0x746C6644u);
  return v8;
}
