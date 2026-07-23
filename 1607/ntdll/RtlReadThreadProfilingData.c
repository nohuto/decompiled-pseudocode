/*
 * XREFs of RtlReadThreadProfilingData @ 0x1800CF880
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl RtlReadThreadProfilingData(
        HANDLE PerformanceDataHandle,
        ULONG Flags,
        PPERFORMANCE_DATA PerformanceData)
{
  int v3; // ebp
  __int64 v5; // r13
  unsigned __int64 v6; // rax
  __int64 v7; // r12
  int v8; // r14d
  unsigned int i; // esi
  __int64 v10; // r10
  unsigned __int64 v11; // rax

  v3 = 0;
  if ( PerformanceData->Size != 288 )
    return -1073741306;
  if ( PerformanceData->Version != 1 )
    return -1073741583;
  if ( (Flags & 0xFFFFFFFC) != 0 )
    return -1073741584;
  PerformanceData->WaitReasonBitMap = 0LL;
  do
  {
    v5 = *((_QWORD *)PerformanceDataHandle + 2);
    v6 = __rdtsc();
    PerformanceData->CycleTime = *((_QWORD *)PerformanceDataHandle + 7)
                               - *((_QWORD *)PerformanceDataHandle + 6)
                               + (((unsigned __int64)HIDWORD(v6) << 32) | (unsigned int)v6);
    if ( (Flags & 1) != 0 )
    {
      PerformanceData->ContextSwitchCount = *((_DWORD *)PerformanceDataHandle + 2);
      if ( *((_QWORD *)PerformanceDataHandle + 3) )
        PerformanceData->WaitReasonBitMap |= _InterlockedExchange64((volatile __int64 *)PerformanceDataHandle + 3, 0LL);
    }
    if ( (Flags & 2) != 0 )
    {
      v7 = *((_QWORD *)PerformanceDataHandle + 4);
      if ( v7 )
      {
        v8 = 1;
        for ( i = 0; i < *((_DWORD *)PerformanceDataHandle + 3); ++i )
        {
          if ( (v8 & (unsigned int)v7) != 0 )
          {
            v10 = i;
            PerformanceData->HwCounters[v10].Reserved = 0;
            PerformanceData->HwCounters[i].Type = PMCCounter;
            v11 = __readpmc(*((_DWORD *)PerformanceDataHandle + 6 * i + 17));
            PerformanceData->HwCounters[v10].Value = *((_QWORD *)PerformanceDataHandle + 3 * i + 10)
                                                   + (unsigned int)(v11 - *((_DWORD *)PerformanceDataHandle + 6 * i + 18));
          }
          v8 *= 2;
        }
      }
      PerformanceData->HwCountersCount = *((_BYTE *)PerformanceDataHandle + 12);
    }
    ++v3;
  }
  while ( v5 != *((_QWORD *)PerformanceDataHandle + 2) );
  PerformanceData->RetryCount = v3 - 1;
  return 0;
}
