/*
 * XREFs of PpmCheckStart @ 0x1400E71A0
 * Callers:
 *     PpmCheckPeriodicStart @ 0x1400E7140 (PpmCheckPeriodicStart.c)
 *     PpmCheckCustomRun @ 0x1401399AC (PpmCheckCustomRun.c)
 * Callees:
 *     EtwWrite @ 0x140014D30 (EtwWrite.c)
 *     PpmReleaseLock @ 0x1400E70D0 (PpmReleaseLock.c)
 *     PpmEventTracePerfCheckStop @ 0x1400E8490 (PpmEventTracePerfCheckStop.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 */

__int64 __fastcall PpmCheckStart(int a1)
{
  __int64 v1; // rsi
  __int64 v2; // r14
  __int64 v3; // rbx
  unsigned __int64 v4; // rbp
  __int64 v5; // r15
  LARGE_INTEGER PerformanceCounter; // rdx
  int v7; // edi
  LONGLONG v8; // rdx
  __int64 v9; // rcx
  int v10; // eax
  __int64 v11; // rcx
  __int64 (__fastcall *v12)(__int64); // r8
  __int64 result; // rax
  __int64 v14; // rcx
  int v15; // [rsp+38h] [rbp-70h] BYREF
  __int64 v16; // [rsp+40h] [rbp-68h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+48h] [rbp-60h] BYREF
  __int64 *v18; // [rsp+58h] [rbp-50h]
  __int64 v19; // [rsp+60h] [rbp-48h]
  int *v20; // [rsp+68h] [rbp-40h]
  __int64 v21; // [rsp+70h] [rbp-38h]

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
      PerformanceCounter = KeQueryPerformanceCounter(0LL);
      if ( MEMORY[0xFFFFF78000000340] == v3 )
        break;
    }
    _mm_pause();
  }
  v7 = 0;
  if ( PerformanceCounter.QuadPart > v4 )
  {
    v8 = PerformanceCounter.QuadPart - v4 - 1;
    if ( MEMORY[0xFFFFF78000000369] )
      v8 <<= MEMORY[0xFFFFF78000000369];
    v2 = ((unsigned __int64)v8 * (unsigned __int128)MEMORY[0xFFFFF78000000360]) >> 64;
  }
  PpmCheckTime = v5 + v2;
  v16 = PpmCheckLastExecutionTime;
  v15 = v1;
  if ( PpmEtwRegistered && PpmEtwHandle )
  {
    if ( (v9 = *(_QWORD *)(PpmEtwHandle + 32), *(_DWORD *)(v9 + 80))
      && (unsigned __int8)(*(_BYTE *)(v9 + 84) - 1) > 3u
      && (*(_BYTE *)(v9 + 96) & 2) != 0
      && (*(_QWORD *)(v9 + 104) & 2LL) == *(_QWORD *)(v9 + 104)
      || *(_BYTE *)(PpmEtwHandle + 100)
      && (v14 = *(_QWORD *)(PpmEtwHandle + 40), *(_DWORD *)(v14 + 80))
      && (unsigned __int8)(*(_BYTE *)(v14 + 84) - 1) > 3u
      && (*(_BYTE *)(v14 + 96) & 2) != 0
      && (*(_QWORD *)(v14 + 104) & 2LL) == *(_QWORD *)(v14 + 104) )
    {
      *(_QWORD *)&UserData.Size = 8LL;
      UserData.Ptr = (ULONGLONG)&PpmCheckTime;
      v19 = 8LL;
      v18 = &v16;
      v21 = 4LL;
      v20 = &v15;
      EtwWrite(PpmEtwHandle, &PPM_ETW_PERF_CHECK_START, 0LL, 3u, &UserData);
    }
  }
  PpmCheckPipeline = *(_QWORD *)(PpmCheckPipelines + 8 * v1);
  if ( !PpmCheckPipeline )
    PpmCheckPipeline = *(_QWORD *)PpmCheckPipelines;
  PpmCheckPipelineIndex = 0;
  v10 = 0;
  v11 = PpmCheckPipeline;
  if ( (unsigned __int64)PpmPerfLatencyBoostExpiration >= MEMORY[0xFFFFF78000000008] )
    v7 = 1;
  PpmCheckLatencyBoostActive = v7;
  v12 = *(__int64 (__fastcall **)(__int64))PpmCheckPipeline;
  if ( *(_QWORD *)PpmCheckPipeline )
  {
    while ( 1 )
    {
      PpmCheckPipelineIndex = v10 + 1;
      result = v12(v11);
      if ( !(_BYTE)result )
        break;
      v10 = PpmCheckPipelineIndex;
      v11 = PpmCheckPipeline;
      v12 = *(__int64 (__fastcall **)(__int64))(PpmCheckPipeline + 8LL * (unsigned int)PpmCheckPipelineIndex);
      if ( !v12 )
        goto LABEL_21;
    }
  }
  else
  {
LABEL_21:
    PpmReleaseLock(&PpmPerfPolicyLock);
    return PpmEventTracePerfCheckStop();
  }
  return result;
}
