/*
 * XREFs of StorpTelemetrySendUnitErrorData @ 0x1C0040640
 * Callers:
 *     StorpLogPerUnitStatistics @ 0x1C003D150 (StorpLogPerUnitStatistics.c)
 * Callees:
 *     StorpAreTelemetryErrorsEqual @ 0x1C0007B78 (StorpAreTelemetryErrorsEqual.c)
 *     __security_check_cookie @ 0x1C001A7E0 (__security_check_cookie.c)
 *     memset @ 0x1C001AD80 (memset.c)
 *     StorpTelemetryLogUnitErrorDataCriticalData @ 0x1C003E604 (StorpTelemetryLogUnitErrorDataCriticalData.c)
 *     StorpTelemetryLogUnitErrorDataMeasures @ 0x1C003E888 (StorpTelemetryLogUnitErrorDataMeasures.c)
 *     Template_qcccjqqccccccqqxq @ 0x1C0042430 (Template_qcccjqqccccccqqxq.c)
 */

__int64 __fastcall StorpTelemetrySendUnitErrorData(__int64 a1)
{
  __int64 result; // rax
  _WORD *v2; // rsi
  unsigned __int8 i; // di
  __int64 v5; // r14
  __int64 v6; // r8
  __int64 v7; // r11
  __int64 v8; // rcx
  unsigned int v9; // [rsp+40h] [rbp-E0h]
  __int64 v10; // [rsp+98h] [rbp-88h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+A0h] [rbp-80h] BYREF
  _BYTE v12[40]; // [rsp+B8h] [rbp-68h] BYREF
  _BYTE v13[9]; // [rsp+E0h] [rbp-40h] BYREF
  __int128 v14; // [rsp+E9h] [rbp-37h]
  char v15[7]; // [rsp+F9h] [rbp-27h] BYREF

  result = 0LL;
  memset(&LockHandle, 0, sizeof(LockHandle));
  v2 = (_WORD *)(a1 + 1888);
  memset(v13, 0, sizeof(v13));
  v14 = 0uLL;
  memset(v15, 0, 5);
  if ( *(_DWORD *)(a1 + 1888) )
  {
    KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(a1 + 1880), &LockHandle);
    *(_WORD *)&v15[1] = *v2 - 1;
    if ( *(_WORD *)&v15[1] >= 0xAu )
      strcpy(&v15[1], "\n");
    for ( i = 0; i < 5u; ++i )
    {
      memset(v12, 0, sizeof(v12));
      v5 = a1 + 40LL * i;
      if ( StorpAreTelemetryErrorsEqual((_BYTE *)(v5 + 2336), v12) )
        break;
      ++*(_WORD *)&v15[3];
      if ( (Microsoft_Windows_StorPortEnableBits & 0x200000000LL) != 0 )
      {
        LODWORD(v10) = *(_DWORD *)(a1 + 8 * v7 + 2368);
        v9 = *(_DWORD *)(a1 + 8 * v7 + 2348) / 0x2710u;
        Template_qcccjqqccccccqqxq(
          5 * v6,
          v9,
          a1 + 1688,
          *(_DWORD *)(*(_QWORD *)(a1 + 24) + 56LL),
          *(_BYTE *)(a1 + 88),
          *(_BYTE *)(a1 + 89),
          *(_BYTE *)(a1 + 90),
          a1 + 1688,
          v9,
          *(_DWORD *)(a1 + 8 * v7 + 2352) / 0x2710u,
          *(_BYTE *)(a1 + 8 * v7 + 2341),
          *(_BYTE *)(v5 + 2336),
          *(_BYTE *)(a1 + 8 * v7 + 2337),
          *(_BYTE *)(a1 + 8 * v7 + 2338),
          *(_BYTE *)(a1 + 8 * v7 + 2339),
          *(_BYTE *)(a1 + 8 * v7 + 2340),
          *(_DWORD *)(a1 + 8 * v7 + 2344),
          *(_DWORD *)(a1 + 8 * v7 + 2356),
          *(_QWORD *)(a1 + 40 * v6 + 2360),
          v10,
          LockHandle.LockQueue.Next,
          LockHandle.LockQueue.Lock,
          *(_QWORD *)&LockHandle.OldIrql);
      }
    }
    v8 = *(_QWORD *)(a1 + 96);
    if ( v8 )
    {
      *(_QWORD *)v13 = *(_QWORD *)(v8 + 8);
      v14 = *(_OWORD *)(v8 + 16);
    }
    if ( *(unsigned __int8 *)(a1 + 1704) < (unsigned int)g_StorpTraceLoggingCriticalEventMaximum
      && (*(_BYTE *)(a1 + 1705) || *(_BYTE *)(a1 + 1706) || (*(_BYTE *)(a1 + 154) & 2) != 0) )
    {
      StorpTelemetryLogUnitErrorDataCriticalData(a1, (__int64)v13);
    }
    else
    {
      StorpTelemetryLogUnitErrorDataMeasures((const struct _TlgProvider_t *)a1, (__int64)v13);
    }
    memset(v2, 0, 0x1C0uLL);
    memset((void *)(a1 + 2336), 0, 0xC8uLL);
    KeReleaseInStackQueuedSpinLock(&LockHandle);
    return 0LL;
  }
  return result;
}
