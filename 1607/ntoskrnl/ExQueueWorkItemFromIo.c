/*
 * XREFs of ExQueueWorkItemFromIo @ 0x1400CF014
 * Callers:
 *     IoQueueWorkItemEx @ 0x1400CEFF4 (IoQueueWorkItemEx.c)
 * Callees:
 *     ExpQueueWorkItem @ 0x14005F840 (ExpQueueWorkItem.c)
 *     ExpValidateWorkItem @ 0x14005FA2C (ExpValidateWorkItem.c)
 *     ExpTypeToPriority @ 0x1400CF05C (ExpTypeToPriority.c)
 *     KeBugCheckEx @ 0x14015DA70 (KeBugCheckEx.c)
 */

__int64 __fastcall ExQueueWorkItemFromIo(_QWORD *BugCheckParameter2, int a2)
{
  ULONG_PTR v2; // rbx
  unsigned int v4; // eax
  __int64 result; // rax

  v2 = a2;
  ExpValidateWorkItem(BugCheckParameter2, a2);
  v4 = ExpTypeToPriority((unsigned int)v2);
  result = ExpQueueWorkItem((__int64)BugCheckParameter2, v4, 0xFFFFFFFF, 1u);
  if ( !(_BYTE)result )
    KeBugCheckEx(0xE4u, 5uLL, (ULONG_PTR)BugCheckParameter2, v2, 0xFFFFFFFFFFFFFFFFuLL);
  return result;
}
