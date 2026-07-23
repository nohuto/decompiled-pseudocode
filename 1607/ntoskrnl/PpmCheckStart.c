/*
 * XREFs of PpmCheckStart @ 0x140111A34
 * Callers:
 *     PpmCheckCustomRun @ 0x1401119F8 (PpmCheckCustomRun.c)
 * Callees:
 *     EtwWrite @ 0x140012EA0 (EtwWrite.c)
 *     PpmCheckRun @ 0x1400D24B0 (PpmCheckRun.c)
 *     EtwEventEnabled @ 0x1400D3370 (EtwEventEnabled.c)
 *     RtlGetInterruptTimePrecise @ 0x1400D5040 (RtlGetInterruptTimePrecise.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 */

char __fastcall PpmCheckStart(int a1)
{
  __int64 v1; // rdi
  int v2; // ebx
  REGHANDLE v3; // rsi
  int v5; // [rsp+30h] [rbp-50h] BYREF
  __int64 v6; // [rsp+38h] [rbp-48h] BYREF
  LARGE_INTEGER PerformanceCounter; // [rsp+40h] [rbp-40h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+48h] [rbp-38h] BYREF
  __int64 *v9; // [rsp+58h] [rbp-28h]
  __int64 v10; // [rsp+60h] [rbp-20h]
  int *v11; // [rsp+68h] [rbp-18h]
  __int64 v12; // [rsp+70h] [rbp-10h]

  v1 = a1;
  PpmCheckCurrentPipelineId = a1;
  PpmCheckTime = RtlGetInterruptTimePrecise(&PerformanceCounter).QuadPart;
  v2 = 0;
  v6 = PpmCheckLastExecutionTime;
  v5 = v1;
  if ( PpmEtwRegistered )
  {
    v3 = PpmEtwHandle;
    if ( EtwEventEnabled(PpmEtwHandle, &PPM_ETW_PERF_CHECK_START) )
    {
      *(_QWORD *)&UserData.Size = 8LL;
      UserData.Ptr = (ULONGLONG)&PpmCheckTime;
      v10 = 8LL;
      v9 = &v6;
      v12 = 4LL;
      v11 = &v5;
      EtwWrite(v3, &PPM_ETW_PERF_CHECK_START, 0LL, 3u, &UserData);
    }
  }
  PpmCheckPipeline = *(_QWORD *)(PpmCheckPipelines + 8 * v1);
  if ( !PpmCheckPipeline )
    PpmCheckPipeline = *(_QWORD *)PpmCheckPipelines;
  PpmCheckPipelineIndex = 0;
  LOBYTE(v2) = (unsigned __int64)PpmPerfLatencyBoostExpiration >= MEMORY[0xFFFFF78000000008];
  PpmCheckLatencyBoostActive = v2;
  return PpmCheckRun();
}
