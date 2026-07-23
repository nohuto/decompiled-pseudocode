/*
 * XREFs of LdrRegisterDllNotification @ 0x1800884C0
 * Callers:
 *     RtlSetIoCompletionCallback @ 0x180090290 (RtlSetIoCompletionCallback.c)
 * Callees:
 *     RtlEnterCriticalSection @ 0x180019B40 (RtlEnterCriticalSection.c)
 *     RtlLeaveCriticalSection @ 0x180019DB0 (RtlLeaveCriticalSection.c)
 *     RtlAllocateHeap @ 0x180022DA0 (RtlAllocateHeap.c)
 */

NTSTATUS __cdecl LdrRegisterDllNotification(
        ULONG Flags,
        PLDR_DLL_NOTIFICATION_FUNCTION NotificationFunction,
        PVOID Context,
        PVOID *Cookie)
{
  _QWORD *Heap; // rax
  _QWORD *v8; // rbx
  _QWORD *v9; // rax
  NTSTATUS result; // eax

  if ( Flags || !Cookie || !NotificationFunction )
    return -1073741811;
  Heap = RtlAllocateHeap(LdrpHeap, NtdllBaseTag + 0x40000, 0x20uLL);
  v8 = Heap;
  if ( !Heap )
    return -1073741801;
  Heap[2] = NotificationFunction;
  Heap[3] = Context;
  RtlEnterCriticalSection(&LdrpDllNotificationLock);
  v9 = off_18014C5D8;
  if ( *off_18014C5D8 != (_UNKNOWN *)&LdrpDllNotificationList )
    __fastfail(3u);
  *v8 = &LdrpDllNotificationList;
  v8[1] = v9;
  *v9 = v8;
  off_18014C5D8 = (_UNKNOWN **)v8;
  RtlLeaveCriticalSection(&LdrpDllNotificationLock);
  result = 0;
  *Cookie = v8;
  return result;
}
