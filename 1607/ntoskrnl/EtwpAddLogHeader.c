/*
 * XREFs of EtwpAddLogHeader @ 0x1404948D8
 * Callers:
 *     EtwpUpdateFileHeader @ 0x140495264 (EtwpUpdateFileHeader.c)
 *     EtwpPreserveLogger @ 0x1406A9FC4 (EtwpPreserveLogger.c)
 * Callees:
 *     EtwpQueryUsedProcessorCount @ 0x140086EF8 (EtwpQueryUsedProcessorCount.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     memmove @ 0x140171780 (memmove.c)
 *     memset @ 0x140171AC0 (memset.c)
 *     EtwpPrepareHeader @ 0x140491E78 (EtwpPrepareHeader.c)
 *     EtwpAddDebugInfoEvents @ 0x14049393C (EtwpAddDebugInfoEvents.c)
 *     EtwpIsWow64Logger @ 0x140494D18 (EtwpIsWow64Logger.c)
 *     RtlpQueryTimeZoneInformationWorker @ 0x140494D2C (RtlpQueryTimeZoneInformationWorker.c)
 *     xHalSetSystemInformation @ 0x140581DF0 (xHalSetSystemInformation.c)
 *     EtwpAddBinaryInfoEvents @ 0x1406A6750 (EtwpAddBinaryInfoEvents.c)
 */

unsigned __int64 __fastcall EtwpAddLogHeader(__int64 a1, unsigned int *a2)
{
  __int64 v4; // rcx
  __int16 v5; // r14
  unsigned __int64 result; // rax
  unsigned __int16 v7; // r14
  struct _KTHREAD *CurrentThread; // r15
  unsigned int UsedProcessorCount; // eax
  bool v10; // zf
  LARGE_INTEGER v11; // rax
  unsigned int *v12; // r13
  char *v13; // rdi
  __int64 v14; // rdx
  unsigned __int64 v15; // xmm0_8
  __int64 v16; // rdx
  unsigned __int64 v17; // xmm0_8
  unsigned int v18; // r8d
  char *v19; // rcx
  __int64 v20; // rax
  __int128 v21; // xmm1
  LARGE_INTEGER PerformanceFrequency; // [rsp+38h] [rbp-28h] BYREF
  void *v23; // [rsp+40h] [rbp-20h]
  __int64 v24; // [rsp+48h] [rbp-18h]
  unsigned int v25; // [rsp+50h] [rbp-10h]

  v5 = 272;
  if ( !(unsigned __int8)EtwpIsWow64Logger(a1) )
    v5 = 280;
  result = *(unsigned int *)(a1 + 4);
  v7 = *(_WORD *)(v4 + 152) + 4 + *(_WORD *)(v4 + 136) + v5;
  if ( result >= (unsigned __int64)v7 + 104 )
  {
    if ( (int)off_1402F37E8() < 0 )
    {
      v24 = 0LL;
      v25 = 0;
    }
    CurrentThread = KeGetCurrentThread();
    *((_WORD *)a2 + 39) = 0;
    *((_WORD *)a2 + 38) = v7 + 32;
    a2[18] = -1073610750;
    a2[20] = (unsigned int)CurrentThread[1].KernelStack;
    a2[21] = CurrentThread[1].CurrentRunTime;
    a2[24] = CurrentThread->SchedulerApc.SpareLong0;
    a2[25] = CurrentThread->UserTime;
    *((_QWORD *)a2 + 11) = *(_QWORD *)(a1 + 312);
    memset(a2 + 26, 0, v7);
    a2[26] = *(_DWORD *)(a1 + 4);
    *((_WORD *)a2 + 54) = 10;
    a2[28] = 14393;
    UsedProcessorCount = EtwpQueryUsedProcessorCount(a1);
    a2[29] = UsedProcessorCount;
    if ( (*(_DWORD *)(a1 + 12) & 0x4000000) != 0 || *(_DWORD *)(a1 + 4) > 0x100000u || UsedProcessorCount > 0x100 )
      *((_WORD *)a2 + 55) = 2;
    else
      *((_WORD *)a2 + 55) = 1281;
    a2[36] = 1;
    a2[34] = *(_DWORD *)(a1 + 12) & 0xFF3FFEFF;
    a2[33] = *(_DWORD *)(a1 + 292);
    a2[32] = KeMaximumIncrement;
    a2[39] = EtwCPUSpeedInMHz;
    KeQueryPerformanceCounter(&PerformanceFrequency);
    _InterlockedExchange64((volatile __int64 *)&EtwPerfFreq, PerformanceFrequency.QuadPart);
    v10 = (unsigned __int8)EtwpIsWow64Logger(a1) == 0;
    v11 = PerformanceFrequency;
    if ( v10 )
    {
      *((LARGE_INTEGER *)a2 + 45) = PerformanceFrequency;
      v12 = a2 + 44;
      *((_QWORD *)a2 + 46) = *(_QWORD *)(a1 + 304);
      *((_QWORD *)a2 + 44) = EtwpBootTime;
      a2[37] = 8;
      a2[94] = *(_DWORD *)(a1 + 200);
      *((_QWORD *)a2 + 20) = HIDWORD(v24);
      *((_QWORD *)a2 + 21) = v25;
      v13 = (char *)(a2 + 96);
    }
    else
    {
      a2[18] = -1073676286;
      v12 = a2 + 42;
      *((LARGE_INTEGER *)a2 + 44) = v11;
      a2[37] = 4;
      *((_QWORD *)a2 + 45) = *(_QWORD *)(a1 + 304);
      *((_QWORD *)a2 + 43) = EtwpBootTime;
      a2[92] = *(_DWORD *)(a1 + 200);
      a2[40] = HIDWORD(v24);
      a2[41] = v25;
      v13 = (char *)(a2 + 94);
    }
    v23 = &v13[*(unsigned __int16 *)(a1 + 136) + 2];
    RtlpQueryTimeZoneInformationWorker(v12, 0xACuLL);
    v14 = *(_QWORD *)(v12 + 17);
    v15 = _mm_srli_si128(*(__m128i *)(v12 + 17), 8).m128i_u64[0];
    *((_WORD *)v12 + 34) = v14;
    *((_WORD *)v12 + 39) = v15;
    *((_WORD *)v12 + 35) = WORD1(v14);
    *((_WORD *)v12 + 37) = WORD2(v14);
    *((_WORD *)v12 + 36) = HIWORD(v15);
    *((_WORD *)v12 + 40) = WORD1(v15);
    *((_WORD *)v12 + 38) = HIWORD(v14);
    *((_WORD *)v12 + 41) = WORD2(v15);
    v16 = *((_QWORD *)v12 + 19);
    v17 = _mm_srli_si128(*(__m128i *)(v12 + 38), 8).m128i_u64[0];
    *((_WORD *)v12 + 76) = v16;
    *((_WORD *)v12 + 81) = v17;
    *((_WORD *)v12 + 77) = WORD1(v16);
    *((_WORD *)v12 + 79) = WORD2(v16);
    *((_WORD *)v12 + 78) = HIWORD(v17);
    *((_WORD *)v12 + 83) = WORD2(v17);
    *((_WORD *)v12 + 80) = HIWORD(v16);
    *((_WORD *)v12 + 82) = WORD1(v17);
    memmove(v13, *(const void **)(a1 + 144), *(unsigned __int16 *)(a1 + 136) + 2LL);
    memmove(v23, *(const void **)(a1 + 160), *(unsigned __int16 *)(a1 + 152) + 2LL);
    a2[2] += (v7 + 39) & 0xFFFFFFF8;
    if ( (*(_DWORD *)(a1 + 12) & 0x2000000) != 0 && a2[2] + 68 <= *a2 )
    {
      v19 = (char *)a2 + a2[2];
      *((_DWORD *)v19 + 1) = 327748;
      *(_DWORD *)v19 = -1073610750;
      *((_DWORD *)v19 + 2) = CurrentThread[1].KernelStack;
      *((_DWORD *)v19 + 3) = CurrentThread[1].CurrentRunTime;
      *((_DWORD *)v19 + 6) = CurrentThread->SchedulerApc.SpareLong0;
      *((_DWORD *)v19 + 7) = CurrentThread->UserTime;
      *((_QWORD *)v19 + 2) = *(_QWORD *)(a1 + 312);
      v20 = 32LL * *(unsigned __int8 *)(a1 + 818);
      *((_OWORD *)v19 + 2) = *(_OWORD *)((char *)&EtwpGroupMasks + v20);
      v21 = *(_OWORD *)((char *)&EtwpGroupMasks + v20 + 16);
      *((_DWORD *)v19 + 16) = 65;
      *((_OWORD *)v19 + 3) = v21;
      a2[2] += 72;
    }
    v18 = *a2;
    a2[12] = a2[2];
    if ( a2[2] < v18 )
    {
      if ( *(_QWORD *)(a1 + 112) != a1 + 112 )
        EtwpAddDebugInfoEvents(a1, (__int64)a2, v18, (__int64 *)(a1 + 312), 3);
      if ( *(_QWORD *)(a1 + 856) != a1 + 856 )
        EtwpAddBinaryInfoEvents(a1, a2, *a2);
    }
    a2[1] = a2[12];
    a2[11] = 3;
    EtwpPrepareHeader(a1, (__int64)a2, 1);
    result = a2[2];
    a2[1] = result;
  }
  return result;
}
