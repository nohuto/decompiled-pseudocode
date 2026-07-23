/*
 * XREFs of PpmCheckPeriodicStart @ 0x1400D5130
 * Callers:
 *     <none>
 * Callees:
 *     EtwWrite @ 0x140012EA0 (EtwWrite.c)
 *     KeWaitForSingleObject @ 0x14005C400 (KeWaitForSingleObject.c)
 *     PpmEventTraceFailedPerfCheckStart @ 0x1400AAE48 (PpmEventTraceFailedPerfCheckStart.c)
 *     PpmReleaseLock @ 0x1400D2574 (PpmReleaseLock.c)
 *     EtwEventEnabled @ 0x1400D3370 (EtwEventEnabled.c)
 *     RtlGetInterruptTimePrecise @ 0x1400D5040 (RtlGetInterruptTimePrecise.c)
 *     EtwpLevelKeywordEnabled @ 0x1400D6090 (EtwpLevelKeywordEnabled.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 */

void __fastcall PpmCheckPeriodicStart(__int64 a1, __int64 a2, int a3)
{
  LARGE_INTEGER v4; // rdx
  __int64 v5; // rdx
  __int64 v6; // r8
  REGHANDLE v7; // r10
  int v8; // eax
  unsigned __int8 (*v9)(void); // r8
  REGHANDLE v10; // rbx
  int v11; // [rsp+30h] [rbp-78h] BYREF
  LARGE_INTEGER Timeout; // [rsp+38h] [rbp-70h] BYREF
  __int64 v13; // [rsp+40h] [rbp-68h] BYREF
  LARGE_INTEGER PerformanceCounter; // [rsp+48h] [rbp-60h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v15; // [rsp+50h] [rbp-58h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+60h] [rbp-48h] BYREF
  __int64 *v17; // [rsp+70h] [rbp-38h]
  __int64 v18; // [rsp+78h] [rbp-30h]
  int *v19; // [rsp+80h] [rbp-28h]
  __int64 v20; // [rsp+88h] [rbp-20h]

  Timeout.QuadPart = 0LL;
  if ( KeWaitForSingleObject(&Object, Executive, 0, 0, &Timeout) )
  {
    PpmEventTraceFailedPerfCheckStart(PpmCheckLastExecutionTime);
  }
  else
  {
    PpmCheckMakeupCount = a3;
    PpmCheckCurrentPipelineId = 0;
    PpmCheckTime = RtlGetInterruptTimePrecise(&PerformanceCounter).QuadPart;
    v13 = PpmCheckLastExecutionTime;
    v11 = 0;
    if ( PpmEtwRegistered )
    {
      if ( PpmEtwHandle )
      {
        LOBYTE(v4.LowPart) = 5;
        if ( (unsigned __int8)((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD))EtwpLevelKeywordEnabled)(
                                *(_QWORD *)(PpmEtwHandle + 32) + 80LL,
                                (LARGE_INTEGER)v4.QuadPart,
                                2LL)
          || *(_BYTE *)(v7 + 101) && (unsigned __int8)EtwpLevelKeywordEnabled(*(_QWORD *)(v7 + 40) + 80LL, v5, v6) )
        {
          UserData.Ptr = (ULONGLONG)&PpmCheckTime;
          v17 = &v13;
          *(_QWORD *)&UserData.Size = 8LL;
          v19 = &v11;
          v18 = 8LL;
          v20 = 4LL;
          EtwWrite(v7, &PPM_ETW_PERF_CHECK_START, 0LL, 3u, &UserData);
        }
      }
    }
    PpmCheckPipeline = *(_QWORD *)PpmCheckPipelines;
    if ( !PpmCheckPipeline )
      PpmCheckPipeline = 0LL;
    PpmCheckPipelineIndex = 0;
    v8 = 0;
    PpmCheckLatencyBoostActive = (unsigned __int64)PpmPerfLatencyBoostExpiration >= MEMORY[0xFFFFF78000000008];
    v9 = *(unsigned __int8 (**)(void))PpmCheckPipeline;
    if ( *(_QWORD *)PpmCheckPipeline )
    {
      while ( 1 )
      {
        PpmCheckPipelineIndex = v8 + 1;
        if ( !v9() )
          break;
        v8 = PpmCheckPipelineIndex;
        v9 = *(unsigned __int8 (**)(void))(PpmCheckPipeline + 8LL * (unsigned int)PpmCheckPipelineIndex);
        if ( !v9 )
          goto LABEL_11;
      }
    }
    else
    {
LABEL_11:
      PpmReleaseLock(&PpmPerfPolicyLock);
      if ( PpmEtwRegistered )
      {
        v10 = PpmEtwHandle;
        if ( EtwEventEnabled(PpmEtwHandle, &PPM_ETW_PERF_CHECK_STOP) )
        {
          v15.Ptr = (ULONGLONG)&PpmCheckTime;
          *(_QWORD *)&v15.Size = 8LL;
          EtwWrite(v10, &PPM_ETW_PERF_CHECK_STOP, 0LL, 1u, &v15);
        }
      }
    }
  }
}
