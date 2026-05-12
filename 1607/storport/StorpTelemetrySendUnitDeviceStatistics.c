/*
 * XREFs of StorpTelemetrySendUnitDeviceStatistics @ 0x1C0040278
 * Callers:
 *     StorpDeviceHealthWorkItemRoutine @ 0x1C003CBE0 (StorpDeviceHealthWorkItemRoutine.c)
 * Callees:
 *     __security_check_cookie @ 0x1C001A7E0 (__security_check_cookie.c)
 *     memset @ 0x1C001AD80 (memset.c)
 *     StorpTelemetryDeviceStatisticsCommand @ 0x1C003DAD4 (StorpTelemetryDeviceStatisticsCommand.c)
 *     StorpTelemetryLogUnitDeviceStatisticsCriticalData @ 0x1C003DBA4 (StorpTelemetryLogUnitDeviceStatisticsCriticalData.c)
 *     StorpTelemetryLogUnitDeviceStatisticsMeasures @ 0x1C003E0D8 (StorpTelemetryLogUnitDeviceStatisticsMeasures.c)
 *     Template_qcccjqqbqbqbqbqbqbqb @ 0x1C0042228 (Template_qcccjqqbqbqbqbqbqbqb.c)
 */

void __fastcall StorpTelemetrySendUnitDeviceStatistics(__int64 a1)
{
  char *PoolWithTag; // rax
  char *v3; // r13
  __int64 v4; // rbx
  char v5; // r8
  void *v6; // rcx
  __int64 v7; // rcx
  _QWORD v8[14]; // [rsp+C0h] [rbp-80h] BYREF

  memset(v8, 0, sizeof(v8));
  PoolWithTag = (char *)ExAllocatePoolWithTag(PagedPool, 0x1000uLL, 0x65546152u);
  v3 = PoolWithTag;
  if ( !PoolWithTag )
    return;
  memset(PoolWithTag, 0, 0x1000uLL);
  v8[4] = v3;
  v8[8] = v3 + 2048;
  v8[5] = v3 + 512;
  v8[9] = v3 + 2560;
  v8[6] = v3 + 1024;
  v8[10] = v3 + 3072;
  v8[7] = v3 + 1536;
  v8[11] = v3 + 3584;
  if ( (int)StorpTelemetryDeviceStatisticsCommand(a1, (__int64)v3, 0) < 0 || *(_BYTE *)(v8[4] + 8LL) <= 1u )
    goto LABEL_46;
  v4 = 0LL;
  while ( (unsigned int)v4 <= 7 )
  {
    v5 = *(_BYTE *)(v4 + v8[4] + 9);
    if ( v5 == 1 )
    {
      if ( (int)StorpTelemetryDeviceStatisticsCommand(a1, v8[5], v5) >= 0 )
      {
        LOWORD(v8[12]) = 88;
        goto LABEL_35;
      }
      v6 = (void *)v8[5];
      goto LABEL_33;
    }
    switch ( *(_BYTE *)(v4 + v8[4] + 9) )
    {
      case 2:
        if ( (int)StorpTelemetryDeviceStatisticsCommand(a1, v8[6], v5) < 0 )
        {
          v6 = (void *)v8[6];
          goto LABEL_33;
        }
        WORD1(v8[12]) = 24;
        break;
      case 3:
        if ( (int)StorpTelemetryDeviceStatisticsCommand(a1, v8[7], v5) < 0 )
        {
          v6 = (void *)v8[7];
          goto LABEL_33;
        }
        WORD2(v8[12]) = 72;
        break;
      case 4:
        if ( (int)StorpTelemetryDeviceStatisticsCommand(a1, v8[8], v5) < 0 )
        {
          v6 = (void *)v8[8];
          goto LABEL_33;
        }
        HIWORD(v8[12]) = 24;
        break;
      case 5:
        if ( (int)StorpTelemetryDeviceStatisticsCommand(a1, v8[9], v5) < 0 )
        {
          v6 = (void *)v8[9];
          goto LABEL_33;
        }
        LOWORD(v8[13]) = 112;
        break;
      case 6:
        if ( (int)StorpTelemetryDeviceStatisticsCommand(a1, v8[10], v5) < 0 )
        {
          v6 = (void *)v8[10];
          goto LABEL_33;
        }
        WORD1(v8[13]) = 32;
        break;
      case 7:
        if ( (int)StorpTelemetryDeviceStatisticsCommand(a1, v8[11], v5) < 0 )
        {
          v6 = (void *)v8[11];
LABEL_33:
          memset(v6, 0, 0x200uLL);
          break;
        }
        WORD2(v8[13]) = 16;
        break;
    }
LABEL_35:
    v4 = (unsigned int)(v4 + 1);
    if ( (unsigned int)v4 >= *(unsigned __int8 *)(v8[4] + 8LL) )
      break;
  }
  v7 = *(_QWORD *)(a1 + 96);
  if ( v7 )
  {
    v8[0] = *(_QWORD *)(v7 + 8);
    *(_OWORD *)((char *)&v8[1] + 1) = *(_OWORD *)(v7 + 16);
  }
  if ( *(unsigned __int8 *)(a1 + 1704) < (unsigned int)g_StorpTraceLoggingCriticalEventMaximum
    && (*(_BYTE *)(a1 + 1705) || *(_BYTE *)(a1 + 1706) || (*(_BYTE *)(a1 + 154) & 2) != 0) )
  {
    StorpTelemetryLogUnitDeviceStatisticsMeasures((const struct _TlgProvider_t *)a1);
  }
  else
  {
    StorpTelemetryLogUnitDeviceStatisticsCriticalData(a1);
  }
  if ( (Microsoft_Windows_StorPortEnableBits & 0x100000000LL) != 0 )
    Template_qcccjqqbqbqbqbqbqbqb(
      WORD2(v8[13]),
      WORD1(v8[13]),
      LOWORD(v8[13]),
      *(_DWORD *)(*(_QWORD *)(a1 + 24) + 56LL),
      *(_BYTE *)(a1 + 88),
      *(_BYTE *)(a1 + 89),
      *(_BYTE *)(a1 + 90),
      a1 + 1688,
      *(_WORD *)v8[4],
      LOWORD(v8[12]),
      v8[5],
      WORD1(v8[12]),
      v8[6],
      WORD2(v8[12]),
      v8[7],
      HIWORD(v8[12]),
      v8[8],
      LOWORD(v8[13]),
      v8[9],
      WORD1(v8[13]),
      v8[10],
      WORD2(v8[13]),
      v8[11]);
LABEL_46:
  ExFreePoolWithTag(v3, 0x65546152u);
}
