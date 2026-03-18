/*
 * XREFs of EtwpAddLogHeader @ 0x1404ABC40
 * Callers:
 *     EtwpUpdateFileHeader @ 0x1404AC4DC (EtwpUpdateFileHeader.c)
 * Callees:
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     memmove @ 0x140195740 (memmove.c)
 *     memset @ 0x140195A80 (memset.c)
 *     EtwpPrepareHeader @ 0x1404A2090 (EtwpPrepareHeader.c)
 *     RtlpQueryTimeZoneInformationWorker @ 0x1404A8598 (RtlpQueryTimeZoneInformationWorker.c)
 *     EtwpAddDebugInfoEvents @ 0x1404ABA60 (EtwpAddDebugInfoEvents.c)
 *     EtwpIsWow64Logger @ 0x1404AC0A0 (EtwpIsWow64Logger.c)
 *     xHalSetSystemInformation @ 0x1405C733C (xHalSetSystemInformation.c)
 *     EtwpAddBinaryInfoEvents @ 0x1406E7EB8 (EtwpAddBinaryInfoEvents.c)
 */

unsigned __int64 __fastcall EtwpAddLogHeader(__int64 a1, unsigned int *a2)
{
  __int64 v4; // rcx
  __int16 v5; // r14
  unsigned __int64 result; // rax
  unsigned __int16 v7; // r14
  struct _KTHREAD *CurrentThread; // r15
  unsigned int v9; // ecx
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
  LARGE_INTEGER PerformanceFrequency; // [rsp+30h] [rbp-30h] BYREF
  int v23; // [rsp+38h] [rbp-28h]
  void *v24; // [rsp+40h] [rbp-20h]
  __int64 v25; // [rsp+48h] [rbp-18h]
  unsigned int v26; // [rsp+50h] [rbp-10h]

  v23 = 0;
  v5 = 272;
  if ( !(unsigned __int8)EtwpIsWow64Logger(a1) )
    v5 = 280;
  result = *(unsigned int *)(a1 + 4);
  v7 = *(_WORD *)(v4 + 168) + 4 + *(_WORD *)(v4 + 152) + v5;
  if ( result >= (unsigned __int64)v7 + 104 )
  {
    if ( (int)off_140321B18() < 0 )
    {
      v25 = 0LL;
      v26 = 0;
    }
    CurrentThread = KeGetCurrentThread();
    *((_WORD *)a2 + 39) = 0;
    *((_WORD *)a2 + 38) = v7 + 32;
    a2[18] = -1073610750;
    a2[20] = (unsigned int)CurrentThread[1].KernelStack;
    a2[21] = CurrentThread[1].CurrentRunTime;
    a2[24] = CurrentThread->SchedulerApc.SpareLong0;
    a2[25] = CurrentThread->UserTime;
    *((_QWORD *)a2 + 11) = *(_QWORD *)(a1 + 328);
    memset(a2 + 26, 0, v7);
    a2[26] = *(_DWORD *)(a1 + 4);
    v9 = 1;
    *((_WORD *)a2 + 54) = 10;
    a2[28] = 10240;
    if ( (*(_DWORD *)(a1 + 12) & 0x10000000) == 0 )
      v9 = KeNumberProcessors_0;
    a2[29] = v9;
    if ( (*(_DWORD *)(a1 + 12) & 0x4000000) != 0 || *(_DWORD *)(a1 + 4) > 0x100000u || v9 > 0x100 )
      *((_WORD *)a2 + 55) = 2;
    else
      *((_WORD *)a2 + 55) = 1281;
    a2[36] = 1;
    a2[34] = *(_DWORD *)(a1 + 12) & 0xFF3FFEFF;
    a2[33] = *(_DWORD *)(a1 + 308);
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
      *((_QWORD *)a2 + 46) = *(_QWORD *)(a1 + 320);
      *((_QWORD *)a2 + 44) = EtwpBootTime;
      a2[37] = 8;
      a2[94] = *(_DWORD *)(a1 + 216);
      *((_QWORD *)a2 + 20) = HIDWORD(v25);
      *((_QWORD *)a2 + 21) = v26;
      v13 = (char *)(a2 + 96);
    }
    else
    {
      a2[18] = -1073676286;
      v12 = a2 + 42;
      *((LARGE_INTEGER *)a2 + 44) = v11;
      a2[37] = 4;
      *((_QWORD *)a2 + 45) = *(_QWORD *)(a1 + 320);
      *((_QWORD *)a2 + 43) = EtwpBootTime;
      a2[92] = *(_DWORD *)(a1 + 216);
      a2[40] = HIDWORD(v25);
      a2[41] = v26;
      v13 = (char *)(a2 + 94);
    }
    v24 = &v13[*(unsigned __int16 *)(a1 + 152) + 2];
    RtlpQueryTimeZoneInformationWorker((char *)v12, 0xACuLL);
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
    memmove(v13, *(const void **)(a1 + 160), *(unsigned __int16 *)(a1 + 152) + 2LL);
    memmove(v24, *(const void **)(a1 + 176), *(unsigned __int16 *)(a1 + 168) + 2LL);
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
      *((_QWORD *)v19 + 2) = *(_QWORD *)(a1 + 328);
      v20 = 32LL * *(unsigned __int8 *)(a1 + 834);
      *((_OWORD *)v19 + 2) = *(_OWORD *)((char *)&EtwpGroupMasks + v20);
      v21 = *(_OWORD *)((char *)&EtwpGroupMasks + v20 + 16);
      *((_DWORD *)v19 + 16) = 60;
      *((_OWORD *)v19 + 3) = v21;
      a2[2] += 72;
    }
    v18 = *a2;
    a2[12] = a2[2];
    if ( a2[2] < v18 )
    {
      if ( *(_QWORD *)(a1 + 128) != a1 + 128 )
        EtwpAddDebugInfoEvents(a1, (__int64)a2, v18, a1 + 328, 3);
      if ( *(_QWORD *)(a1 + 872) != a1 + 872 )
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
