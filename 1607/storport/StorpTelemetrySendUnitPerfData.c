/*
 * XREFs of StorpTelemetrySendUnitPerfData @ 0x1C0040FC0
 * Callers:
 *     StorpLogPerUnitStatistics @ 0x1C003D150 (StorpLogPerUnitStatistics.c)
 * Callees:
 *     RaidAllocatePool @ 0x1C000245C (RaidAllocatePool.c)
 *     __security_check_cookie @ 0x1C001A7E0 (__security_check_cookie.c)
 *     memmove @ 0x1C001AA40 (memmove.c)
 *     memset @ 0x1C001AD80 (memset.c)
 *     StorpTelemetryLogUnitPerfDataCriticalData @ 0x1C003EB10 (StorpTelemetryLogUnitPerfDataCriticalData.c)
 *     StorpTelemetryLogUnitPerfDataMeasures @ 0x1C003EEA0 (StorpTelemetryLogUnitPerfDataMeasures.c)
 *     Template_qcccjczxxxxxqqqb @ 0x1C0041F84 (Template_qcccjczxxxxxqqqb.c)
 */

__int64 __fastcall StorpTelemetrySendUnitPerfData(__int64 a1)
{
  __int64 v2; // rdi
  PVOID Pool; // rsi
  PVOID v4; // r14
  unsigned int v5; // edi
  LARGE_INTEGER v6; // rax
  LARGE_INTEGER v7; // rcx
  __int64 v8; // rdx
  unsigned __int64 v9; // rax
  unsigned __int64 v10; // r10
  const void *v11; // rdx
  unsigned int v12; // r11d
  unsigned int i; // r9d
  _QWORD *v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r10
  _QWORD *v17; // rdx
  signed __int64 v18; // r8
  __int64 v19; // r10
  signed __int64 v20; // r9
  __int64 v21; // rcx
  unsigned __int16 v22; // r10
  unsigned __int16 v23; // r11
  unsigned int v24; // r8d
  unsigned int v25; // r15d
  _QWORD *v26; // r9
  unsigned int v27; // r12d
  unsigned int v28; // eax
  __int64 v29; // r9
  unsigned __int16 v30; // r8
  unsigned __int64 v31; // rdx
  __int64 v32; // rax
  __int64 v33; // rcx
  const wchar_t *v34; // rax
  int v35; // r8d
  void *v36; // rcx
  union _LARGE_INTEGER PerformanceFrequency; // [rsp+A8h] [rbp-80h] BYREF
  _QWORD v39[16]; // [rsp+B8h] [rbp-70h] BYREF

  memset(v39, 0, 0x78uLL);
  v2 = (unsigned int)dword_1C004F480;
  Pool = 0LL;
  v4 = 0LL;
  if ( *(_QWORD *)(a1 + 1848) )
  {
    Pool = RaidAllocatePool(NonPagedPoolNx, (unsigned int)Size, 0x65546152u, *(_QWORD *)(a1 + 8));
    if ( Pool
      && (v4 = RaidAllocatePool(NonPagedPoolNx, (unsigned int)(8 * v2), 0x65546152u, *(_QWORD *)(a1 + 8))) != 0LL )
    {
      if ( UseQPCTime )
        v6 = KeQueryPerformanceCounter(&PerformanceFrequency);
      else
        v6.QuadPart = KeQueryUnbiasedInterruptTime();
      v7 = v6;
      if ( v6.QuadPart <= 0 || (v8 = *(_QWORD *)(a1 + 1856), v6.QuadPart >= v8) )
        v9 = v6.QuadPart - *(_QWORD *)(a1 + 1856);
      else
        v9 = v6.QuadPart - v8 - 1;
      if ( UseQPCTime )
      {
        v10 = 0LL;
        if ( PerformanceFrequency.QuadPart && v9 )
          v10 = 10000
              * (1000 * (v9 % PerformanceFrequency.QuadPart) % PerformanceFrequency.QuadPart)
              / PerformanceFrequency.QuadPart
              + 10000
              * (1000 * (v9 % PerformanceFrequency.QuadPart) / PerformanceFrequency.QuadPart
               + 1000 * (v9 / PerformanceFrequency.QuadPart));
      }
      else
      {
        v10 = v9;
      }
      qword_1C004F490 = v7.QuadPart;
      v11 = *(const void **)(a1 + 1848);
      *(LARGE_INTEGER *)(a1 + 1856) = v7;
      v39[4] = v10;
      memmove(Pool, v11, (unsigned int)Size);
      v12 = g_RaidNumberProcessors;
      for ( i = 1; i < v12; ++i )
      {
        if ( (_DWORD)v2 )
        {
          v14 = Pool;
          v15 = i * (unsigned int)dword_1C004F484;
          v16 = v2;
          do
          {
            *v14 += *(_QWORD *)((char *)v14 + v15);
            ++v14;
            --v16;
          }
          while ( v16 );
        }
      }
      memset(v4, 0, (unsigned int)(8 * v2));
      v17 = *(_QWORD **)(a1 + 1864);
      v39[12] = 0LL;
      if ( (_DWORD)v2 )
      {
        v18 = (_BYTE *)Pool - (_BYTE *)v17;
        v19 = v2;
        v20 = (_BYTE *)v4 - (_BYTE *)v17;
        do
        {
          v21 = *(_QWORD *)((char *)v17 + v18) - *v17;
          *(_QWORD *)((char *)v17++ + v20) = v21;
          v39[12] += v21;
          --v19;
        }
        while ( v19 );
      }
      memmove(*(void **)(a1 + 1864), Pool, (unsigned int)dword_1C004F484);
      if ( v39[12] )
      {
        v22 = TelemetryPerfContext;
        if ( (_WORD)TelemetryPerfContext )
        {
          v23 = HIWORD(TelemetryPerfContext);
          if ( HIWORD(TelemetryPerfContext) )
          {
            v24 = 0;
            if ( (_DWORD)v2 )
            {
              v25 = dword_1C004F47C;
              v26 = v4;
              v27 = dword_1C004F44C;
              do
              {
                if ( v24 >= v27 && v24 < v25 )
                {
                  v28 = v24 / (v22 * (unsigned int)v23);
                  if ( v28 >= 5 )
                    v28 = 4;
                  v39[v28 + 7] += *v26;
                }
                ++v24;
                ++v26;
              }
              while ( v24 < (unsigned int)v2 );
            }
          }
        }
        v29 = *(_QWORD *)(a1 + 1872);
        if ( v29 )
        {
          v30 = 0;
          v31 = v39[14];
          do
          {
            v32 = dword_1C004F498 * (unsigned int)v30;
            if ( *(_QWORD *)(v32 + v29) > v31 )
              v31 = *(_QWORD *)(v32 + v29);
            ++v30;
            v39[14] = v31;
          }
          while ( v30 <= (unsigned __int16)g_RaidNumaHighestNodeNumber );
        }
        v33 = *(_QWORD *)(a1 + 96);
        if ( v33 )
        {
          v39[0] = *(_QWORD *)(v33 + 8);
          *(_OWORD *)((char *)&v39[1] + 1) = *(_OWORD *)(v33 + 16);
        }
        v39[13] = v4;
        if ( g_StorpTraceLoggingPerformanceHighResolutionTimer )
        {
          LOBYTE(v39[5]) = 6;
          v34 = L"2ms, 64ms, 2048ms, 5120ms, 5120+ms";
        }
        else
        {
          LOBYTE(v39[5]) = 5;
          v34 = L"16ms, 64ms, 2048ms, 5120ms, 5120+ms";
        }
        v39[6] = v34;
        if ( *(unsigned __int8 *)(a1 + 1704) < (unsigned int)g_StorpTraceLoggingCriticalEventMaximum
          && (*(_BYTE *)(a1 + 1705) || *(_BYTE *)(a1 + 1706) || (*(_BYTE *)(a1 + 154) & 2) != 0) )
        {
          StorpTelemetryLogUnitPerfDataCriticalData(a1, (__int64)v39);
        }
        else
        {
          StorpTelemetryLogUnitPerfDataMeasures((const struct _TlgProvider_t *)a1, (__int64)v39);
        }
        if ( (Microsoft_Windows_StorPortEnableBits & 0x200000000LL) != 0 )
          Template_qcccjczxxxxxqqqb(
            a1 + 1688,
            *(_QWORD *)(a1 + 24),
            v35,
            *(_DWORD *)(*(_QWORD *)(a1 + 24) + 56LL),
            *(_BYTE *)(a1 + 88),
            *(_BYTE *)(a1 + 89),
            *(_BYTE *)(a1 + 90),
            a1 + 1688,
            v39[5],
            v39[6],
            v39[7],
            v39[8],
            v39[9],
            v39[10],
            v39[11],
            *(_DWORD *)(a1 + 528),
            *(_DWORD *)(a1 + 532),
            8 * v2,
            (__int64)v4);
      }
      v5 = 0;
    }
    else
    {
      v5 = -1073741801;
    }
  }
  else
  {
    v5 = -1073741823;
  }
  *(_QWORD *)(a1 + 528) = 0LL;
  v36 = *(void **)(a1 + 1872);
  if ( v36 )
    memset(v36, 0, (unsigned int)dword_1C004F49C);
  if ( Pool )
    ExFreePoolWithTag(Pool, 0x65546152u);
  if ( v4 )
    ExFreePoolWithTag(v4, 0x65546152u);
  return v5;
}
