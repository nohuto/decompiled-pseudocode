/*
 * XREFs of PpmCheckStart @ 0x140075F90
 * Callers:
 *     PpmCheckPeriodicStart @ 0x140075C50 (PpmCheckPeriodicStart.c)
 *     PpmCheckCustomRun @ 0x140106504 (PpmCheckCustomRun.c)
 * Callees:
 *     EtwpLevelKeywordEnabled @ 0x140076480 (EtwpLevelKeywordEnabled.c)
 *     PpmReleaseLock @ 0x140097098 (PpmReleaseLock.c)
 *     EtwWrite @ 0x14009DEC0 (EtwWrite.c)
 *     PpmEventTracePerfCheckStop @ 0x1400E9ABC (PpmEventTracePerfCheckStop.c)
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 */

__int64 __fastcall PpmCheckStart(int a1)
{
  __int64 v1; // rsi
  __int64 v2; // r14
  __int64 v3; // rbx
  unsigned __int64 v4; // rbp
  __int64 v5; // r15
  unsigned __int128 v6; // rax
  int v7; // edi
  __int64 v8; // rdx
  __int64 v9; // rdx
  __int64 v10; // r8
  REGHANDLE v11; // r10
  int v12; // eax
  __int64 v13; // rcx
  __int64 (__fastcall *v14)(__int64); // r8
  __int64 result; // rax
  int v16; // [rsp+30h] [rbp-78h] BYREF
  __int64 v17; // [rsp+38h] [rbp-70h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+40h] [rbp-68h] BYREF
  __int64 *v19; // [rsp+50h] [rbp-58h]
  __int64 v20; // [rsp+58h] [rbp-50h]
  int *v21; // [rsp+60h] [rbp-48h]
  __int64 v22; // [rsp+68h] [rbp-40h]

  v1 = a1;
  v2 = 0LL;
  PpmCheckCurrentPipelineId = a1;
  while ( 1 )
  {
    v3 = MEMORY[0xFFFFF78000000340];
    if ( (MEMORY[0xFFFFF78000000340] & 1) == 0 )
    {
      v4 = MEMORY[0xFFFFF78000000350];
      v5 = MEMORY[0xFFFFF78000000008];
      *((LARGE_INTEGER *)&v6 + 1) = KeQueryPerformanceCounter(0LL);
      if ( MEMORY[0xFFFFF78000000340] == v3 )
        break;
    }
    _mm_pause();
  }
  v7 = 0;
  if ( *((_QWORD *)&v6 + 1) > v4 )
  {
    v8 = *((_QWORD *)&v6 + 1) - v4 - 1;
    if ( MEMORY[0xFFFFF78000000369] )
      v8 <<= MEMORY[0xFFFFF78000000369];
    v6 = (unsigned __int64)v8 * (unsigned __int128)MEMORY[0xFFFFF78000000360];
    v2 = *((_QWORD *)&v6 + 1);
  }
  PpmCheckTime = v5 + v2;
  v17 = PpmCheckLastExecutionTime;
  v16 = v1;
  if ( PpmEtwRegistered )
  {
    if ( PpmEtwHandle )
    {
      BYTE8(v6) = 5;
      if ( (unsigned __int8)EtwpLevelKeywordEnabled(*(_QWORD *)(PpmEtwHandle + 32) + 80LL, *((_QWORD *)&v6 + 1), 2LL)
        || *(_BYTE *)(v11 + 100) && (unsigned __int8)EtwpLevelKeywordEnabled(*(_QWORD *)(v11 + 40) + 80LL, v9, v10) )
      {
        *(_QWORD *)&UserData.Size = 8LL;
        UserData.Ptr = (ULONGLONG)&PpmCheckTime;
        v20 = 8LL;
        v19 = &v17;
        v22 = 4LL;
        v21 = &v16;
        EtwWrite(v11, &PPM_ETW_PERF_CHECK_START, 0LL, 3u, &UserData);
      }
    }
  }
  PpmCheckPipeline = *(_QWORD *)(PpmCheckPipelines + 8 * v1);
  if ( !PpmCheckPipeline )
    PpmCheckPipeline = *(_QWORD *)PpmCheckPipelines;
  PpmCheckPipelineIndex = 0;
  v12 = 0;
  v13 = PpmCheckPipeline;
  if ( (unsigned __int64)PpmPerfLatencyBoostExpiration >= MEMORY[0xFFFFF78000000008] )
    v7 = 1;
  PpmCheckLatencyBoostActive = v7;
  v14 = *(__int64 (__fastcall **)(__int64))PpmCheckPipeline;
  if ( *(_QWORD *)PpmCheckPipeline )
  {
    while ( 1 )
    {
      PpmCheckPipelineIndex = v12 + 1;
      result = v14(v13);
      if ( !(_BYTE)result )
        break;
      v12 = PpmCheckPipelineIndex;
      v13 = PpmCheckPipeline;
      v14 = *(__int64 (__fastcall **)(__int64))(PpmCheckPipeline + 8LL * (unsigned int)PpmCheckPipelineIndex);
      if ( !v14 )
        goto LABEL_19;
    }
  }
  else
  {
LABEL_19:
    PpmReleaseLock(&PpmPerfPolicyLock);
    return PpmEventTracePerfCheckStop();
  }
  return result;
}
