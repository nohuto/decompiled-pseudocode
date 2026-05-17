/*
 * XREFs of LdrRegisterDllNotification @ 0x1800884D0
 * Callers:
 *     RtlSetIoCompletionCallback @ 0x1800902A0 (RtlSetIoCompletionCallback.c)
 * Callees:
 *     RtlEnterCriticalSection @ 0x180019B50 (RtlEnterCriticalSection.c)
 *     RtlLeaveCriticalSection @ 0x180019DC0 (RtlLeaveCriticalSection.c)
 *     RtlAllocateHeap @ 0x180022DB0 (RtlAllocateHeap.c)
 */

__int64 __fastcall LdrRegisterDllNotification(int a1, __int64 a2, __int64 a3, __int64 *a4)
{
  __int64 Heap; // rax
  __int64 v8; // rbx
  __int64 *v9; // rax
  __int64 result; // rax

  if ( a1 || !a4 || !a2 )
    return 3221225485LL;
  Heap = RtlAllocateHeap(LdrpHeap, NtdllBaseTag + 0x40000, 0x20uLL);
  v8 = Heap;
  if ( !Heap )
    return 3221225495LL;
  *(_QWORD *)(Heap + 16) = a2;
  *(_QWORD *)(Heap + 24) = a3;
  RtlEnterCriticalSection((__int64)&LdrpDllNotificationLock);
  v9 = (__int64 *)off_18014C5D8;
  if ( *off_18014C5D8 != (_UNKNOWN *)&LdrpDllNotificationList )
    __fastfail(3u);
  *(_QWORD *)v8 = &LdrpDllNotificationList;
  *(_QWORD *)(v8 + 8) = v9;
  *v9 = v8;
  off_18014C5D8 = (_UNKNOWN **)v8;
  RtlLeaveCriticalSection((__int64)&LdrpDllNotificationLock);
  result = 0LL;
  *a4 = v8;
  return result;
}
