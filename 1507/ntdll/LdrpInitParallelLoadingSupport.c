/*
 * XREFs of LdrpInitParallelLoadingSupport @ 0x18000489C
 * Callers:
 *     LdrpInitializeProcess @ 0x1800BEA44 (LdrpInitializeProcess.c)
 * Callees:
 *     RtlInitializeCriticalSectionEx @ 0x180007900 (RtlInitializeCriticalSectionEx.c)
 *     ZwCreateEvent @ 0x180093D80 (ZwCreateEvent.c)
 */

__int64 LdrpInitParallelLoadingSupport()
{
  __int64 result; // rax
  char v1; // [rsp+20h] [rbp-18h]
  int v2; // [rsp+20h] [rbp-18h]

  qword_180146158 = (__int64)&LdrpWorkQueue;
  LdrpWorkQueue = (__int64)&LdrpWorkQueue;
  RtlInitializeCriticalSectionEx(&LdrpWorkQueueLock, 0LL, 0LL);
  v1 = 0;
  result = ZwCreateEvent(&LdrpLoadCompleteEvent, 2031619LL, 0LL, 1LL, v1);
  if ( (int)result >= 0 )
  {
    LOBYTE(v2) = 0;
    return ZwCreateEvent(&LdrpWorkCompleteEvent, 2031619LL, 0LL, 1LL, v2);
  }
  return result;
}
