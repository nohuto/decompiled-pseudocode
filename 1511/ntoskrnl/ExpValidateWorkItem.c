/*
 * XREFs of ExpValidateWorkItem @ 0x140101574
 * Callers:
 *     ExTryQueueWorkItem @ 0x140100504 (ExTryQueueWorkItem.c)
 *     ExQueueWorkItemEx @ 0x140100640 (ExQueueWorkItemEx.c)
 *     ExQueueWorkItem @ 0x140101400 (ExQueueWorkItem.c)
 *     ExQueueWorkItemToPrivatePool @ 0x140116144 (ExQueueWorkItemToPrivatePool.c)
 * Callees:
 *     KeBugCheckEx @ 0x140153DC0 (KeBugCheckEx.c)
 */

__int64 __fastcall ExpValidateWorkItem(_QWORD *BugCheckParameter2, int a2)
{
  __int64 result; // rax
  ULONG64 v3; // r9

  if ( *BugCheckParameter2 )
    KeBugCheckEx(0xE4u, 1uLL, (ULONG_PTR)BugCheckParameter2, a2, 0LL);
  result = (unsigned int)(a2 - 7);
  if ( (unsigned int)result <= 0x18 || a2 >= 64 )
    KeBugCheckEx(0xE4u, 6uLL, (ULONG_PTR)BugCheckParameter2, a2, 0LL);
  v3 = BugCheckParameter2[2];
  if ( v3 <= MmUserProbeAddress )
    KeBugCheckEx(0xE4u, 7uLL, (ULONG_PTR)BugCheckParameter2, v3, 0LL);
  return result;
}
