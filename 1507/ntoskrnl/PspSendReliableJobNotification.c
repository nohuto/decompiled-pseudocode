/*
 * XREFs of PspSendReliableJobNotification @ 0x140553D20
 * Callers:
 *     PspEvaluateAndNotifyEmptyJob @ 0x140505E20 (PspEvaluateAndNotifyEmptyJob.c)
 *     PspEnforceLimitsJobPostCallback @ 0x140506F48 (PspEnforceLimitsJobPostCallback.c)
 *     PspJobNotificationWorker @ 0x140554D90 (PspJobNotificationWorker.c)
 * Callees:
 *     ObfReferenceObjectWithTag @ 0x14004E670 (ObfReferenceObjectWithTag.c)
 *     IoSetIoCompletionEx @ 0x14012CB98 (IoSetIoCompletionEx.c)
 *     EtwTraceJobSendNotification @ 0x1406E3BD8 (EtwTraceJobSendNotification.c)
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
