/*
 * XREFs of ExpValidateWorkItem @ 0x14005FA2C
 * Callers:
 *     ExQueueWorkItem @ 0x14005F9DC (ExQueueWorkItem.c)
 *     ExQueueWorkItemEx @ 0x1400A6F80 (ExQueueWorkItemEx.c)
 *     ExTryQueueWorkItem @ 0x1400C0F70 (ExTryQueueWorkItem.c)
 *     ExQueueWorkItemFromIo @ 0x1400CF014 (ExQueueWorkItemFromIo.c)
 *     ExTryQueueWorkItemFromIo @ 0x14010DC50 (ExTryQueueWorkItemFromIo.c)
 *     ExQueueWorkItemToPrivatePool @ 0x140124FD8 (ExQueueWorkItemToPrivatePool.c)
 *     ExQueueWorkItemExFromIo @ 0x14022E688 (ExQueueWorkItemExFromIo.c)
 * Callees:
 *     KeBugCheckEx @ 0x14015DA70 (KeBugCheckEx.c)
 */

__int64 __fastcall ExpValidateWorkItem(_QWORD *BugCheckParameter2, int a2)
{
  ULONG_PTR v2; // r9
  __int64 result; // rax

  if ( *BugCheckParameter2 )
    KeBugCheckEx(0xE4u, 1uLL, (ULONG_PTR)BugCheckParameter2, a2, 0LL);
  if ( (unsigned int)(a2 - 7) <= 0x18 || a2 >= 64 )
    KeBugCheckEx(0xE4u, 6uLL, (ULONG_PTR)BugCheckParameter2, a2, 0LL);
  v2 = BugCheckParameter2[2];
  result = 0x7FFFFFFF0000LL;
  if ( v2 <= 0x7FFFFFFF0000LL )
    KeBugCheckEx(0xE4u, 7uLL, (ULONG_PTR)BugCheckParameter2, v2, 0LL);
  return result;
}
