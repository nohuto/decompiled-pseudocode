/*
 * XREFs of PspSendReliableJobNotification @ 0x140471FDC
 * Callers:
 *     PspEnforceLimitsJobPostCallback @ 0x140467790 (PspEnforceLimitsJobPostCallback.c)
 *     PspEvaluateAndNotifyEmptyJob @ 0x140468E34 (PspEvaluateAndNotifyEmptyJob.c)
 *     PspJobNotificationWorker @ 0x1404C6744 (PspJobNotificationWorker.c)
 * Callees:
 *     EtwTraceKernelEvent @ 0x140013D10 (EtwTraceKernelEvent.c)
 *     IoSetIoCompletionEx @ 0x14007E644 (IoSetIoCompletionEx.c)
 *     ObfReferenceObjectWithTag @ 0x1400EC370 (ObfReferenceObjectWithTag.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     EtwpCopyJobGuidSafe @ 0x1406A2104 (EtwpCopyJobGuidSafe.c)
 *     EtwpCopyJobIdSafe @ 0x1406A2120 (EtwpCopyJobIdSafe.c)
 */

__int64 __fastcall PspSendReliableJobNotification(PVOID Object, unsigned int a2)
{
  __int64 v2; // rdi
  int v4; // ecx
  int v5; // r9d
  signed __int32 i; // edx
  signed __int32 v7; // r8d
  __int64 result; // rax
  unsigned int v9; // r8d
  _BYTE v10[16]; // [rsp+40h] [rbp-38h] BYREF
  _BYTE v11[4]; // [rsp+50h] [rbp-28h] BYREF
  int v12; // [rsp+54h] [rbp-24h]
  _BYTE *v13; // [rsp+58h] [rbp-20h] BYREF
  int v14; // [rsp+60h] [rbp-18h]
  int v15; // [rsp+64h] [rbp-14h]

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
  for ( i = *((_DWORD *)Object + 326); ; i = result )
  {
    v7 = v4 | i;
    if ( (i & 8) != 0 )
      v7 |= v5;
    result = (unsigned int)_InterlockedCompareExchange((volatile signed __int32 *)Object + 326, v7, i);
    if ( i == (_DWORD)result )
      break;
  }
  if ( (i & 8) == 0 )
  {
    ObfReferenceObjectWithTag(Object, 0x624A7350u);
    if ( (PerfGlobalGroupMask & 0x80000) != 0 )
    {
      EtwpCopyJobGuidSafe(v10, Object);
      EtwpCopyJobIdSafe(v11);
      v15 = 0;
      v13 = v10;
      v12 = v2;
      v14 = 24;
      EtwTraceKernelEvent((int)&v13, 1, v9, 1834, 5249284);
    }
    result = IoSetIoCompletionEx(
               *((_QWORD *)Object + 57),
               *((_QWORD *)Object + 58),
               0LL,
               0,
               v2,
               0,
               *((_QWORD *)Object + 123));
    _InterlockedIncrement64((volatile signed __int64 *)Object + 59);
  }
  return result;
}
