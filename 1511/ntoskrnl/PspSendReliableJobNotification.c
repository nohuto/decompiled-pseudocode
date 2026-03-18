/*
 * XREFs of PspSendReliableJobNotification @ 0x140487C50
 * Callers:
 *     PspEvaluateAndNotifyEmptyJob @ 0x1403E9410 (PspEvaluateAndNotifyEmptyJob.c)
 *     PspEnforceLimitsJobPostCallback @ 0x1403EB244 (PspEnforceLimitsJobPostCallback.c)
 *     PspJobNotificationWorker @ 0x1404BC1D8 (PspJobNotificationWorker.c)
 * Callees:
 *     ObfReferenceObjectWithTag @ 0x140042AE0 (ObfReferenceObjectWithTag.c)
 *     IoSetIoCompletionEx @ 0x1400C6954 (IoSetIoCompletionEx.c)
 *     EtwTraceJobSendNotification @ 0x140660BF0 (EtwTraceJobSendNotification.c)
 */

__int64 __fastcall PspSendReliableJobNotification(PVOID Object, unsigned int a2)
{
  __int64 v2; // rdi
  int v4; // ecx
  int v5; // r9d
  signed __int32 i; // edx
  signed __int32 v7; // r8d
  __int64 result; // rax

  v2 = a2;
  v4 = 12;
  if ( a2 == 11 )
  {
    v5 = 0x4000;
  }
  else
  {
    v5 = 0x10000;
    v4 = 8;
    if ( a2 != 12 )
      v5 = 0x8000;
  }
  for ( i = *((_DWORD *)Object + 324); ; i = result )
  {
    v7 = v4 | i;
    if ( (i & 8) != 0 )
      v7 |= v5;
    result = (unsigned int)_InterlockedCompareExchange((volatile signed __int32 *)Object + 324, v7, i);
    if ( i == (_DWORD)result )
      break;
  }
  if ( (i & 8) == 0 )
  {
    ObfReferenceObjectWithTag(Object, 0x624A7350u);
    if ( (PerfGlobalGroupMask & 0x80000) != 0 )
      EtwTraceJobSendNotification(Object, (unsigned int)v2);
    result = IoSetIoCompletionEx(
               *((_QWORD *)Object + 57),
               *((_QWORD *)Object + 58),
               0LL,
               0,
               v2,
               0,
               *((_QWORD *)Object + 124));
    _InterlockedIncrement64((volatile signed __int64 *)Object + 59);
  }
  return result;
}
