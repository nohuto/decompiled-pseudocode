/*
 * XREFs of IoQueueWorkItemToNode @ 0x1401F71B8
 * Callers:
 *     <none>
 * Callees:
 *     ExQueueWorkItemEx @ 0x14000CD94 (ExQueueWorkItemEx.c)
 *     IopQueueWorkItemProlog @ 0x14000DA70 (IopQueueWorkItemProlog.c)
 *     ObfDereferenceObjectWithTag @ 0x14004FD20 (ObfDereferenceObjectWithTag.c)
 */

char __fastcall IoQueueWorkItemToNode(__int64 a1, __int64 a2, int a3, __int64 a4, unsigned int a5)
{
  _QWORD *v7; // rax
  char v8; // bl

  v7 = (_QWORD *)IopQueueWorkItemProlog(a1, a2, a4);
  v8 = ExQueueWorkItemEx(v7, a3, a5);
  if ( !v8 )
    ObfDereferenceObjectWithTag(*(PVOID *)(a1 + 40), 0x746C6644u);
  return v8;
}
