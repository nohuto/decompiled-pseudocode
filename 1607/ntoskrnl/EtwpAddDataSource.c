/*
 * XREFs of EtwpAddDataSource @ 0x140491900
 * Callers:
 *     EtwpQueueNotification @ 0x140491640 (EtwpQueueNotification.c)
 *     EtwpAddNotificationEvent @ 0x140491860 (EtwpAddNotificationEvent.c)
 * Callees:
 *     memset @ 0x140171AC0 (memset.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 */

_QWORD *__fastcall EtwpAddDataSource(__int64 a1)
{
  _QWORD *result; // rax
  _QWORD *v3; // rbx

  result = *(_QWORD **)(a1 + 1080);
  if ( !result )
  {
    result = ExAllocatePoolWithTag(NonPagedPoolNx, 0x28uLL, 0x53777445u);
    v3 = result;
    if ( result )
    {
      memset(result, 0, 0x28uLL);
      v3[4] = v3 + 3;
      v3[3] = v3 + 3;
      v3[2] = 0LL;
      if ( _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 1080), (signed __int64)v3, 0LL) )
        ExFreePoolWithTag(v3, 0);
      return *(_QWORD **)(a1 + 1080);
    }
  }
  return result;
}
