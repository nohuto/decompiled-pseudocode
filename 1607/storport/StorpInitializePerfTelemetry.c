/*
 * XREFs of StorpInitializePerfTelemetry @ 0x1C000CC0C
 * Callers:
 *     StorpRegisterTraceLogging @ 0x1C00578F0 (StorpRegisterTraceLogging.c)
 * Callees:
 *     memset @ 0x1C001AD80 (memset.c)
 *     StorpUninitializePerfTelemetry @ 0x1C0041E64 (StorpUninitializePerfTelemetry.c)
 */

__int64 StorpInitializePerfTelemetry()
{
  __int64 v0; // rbx
  LARGE_INTEGER PerformanceCounter; // rax
  __int64 v2; // rcx
  __int64 v3; // rdx
  bool v4; // zf
  unsigned int v5; // ebx
  union _LARGE_INTEGER PerformanceFrequency; // [rsp+30h] [rbp+8h] BYREF

  memset(&TelemetryPerfContext, 0, 0x80uLL);
  memset(&TelemetryPerfContext, 0, 0x30uLL);
  dword_1C004F448 = 40;
  dword_1C004F424 = 5;
  TelemetryPerfContext = 262146;
  v0 = 2LL;
  memset(&qword_1C004F450, 0, 0x30uLL);
  dword_1C004F47C = 40;
  dword_1C004F480 = 46;
  qword_1C004F450 = 196610LL;
  dword_1C004F478 = 6;
  dword_1C004F44C = 0;
  LODWORD(dword_1C004F484) = 384;
  g_RaidNumberProcessors = KeQueryActiveProcessorCountEx(0xFFFFu);
  LODWORD(Size) = dword_1C004F484 * g_RaidNumberProcessors;
  if ( UseQPCTime )
    PerformanceCounter = KeQueryPerformanceCounter(0LL);
  else
    PerformanceCounter.QuadPart = KeQueryUnbiasedInterruptTime();
  qword_1C004F490 = PerformanceCounter.QuadPart;
  if ( (_WORD)TelemetryPerfContext )
  {
    P = ExAllocatePoolWithTag(NonPagedPoolNxCacheAligned, 8LL * (unsigned __int16)TelemetryPerfContext, 0x65546152u);
    if ( !P )
      goto LABEL_38;
  }
  else
  {
    P = 0LL;
  }
  if ( HIWORD(TelemetryPerfContext) )
  {
    qword_1C004F430 = ExAllocatePoolWithTag(NonPagedPoolNxCacheAligned, 8LL * HIWORD(TelemetryPerfContext), 0x65546152u);
    if ( !qword_1C004F430 )
      goto LABEL_38;
  }
  else
  {
    qword_1C004F430 = 0LL;
  }
  if ( (_WORD)dword_1C004F424 )
  {
    qword_1C004F438 = ExAllocatePoolWithTag(
                        NonPagedPoolNxCacheAligned,
                        8LL * (unsigned __int16)dword_1C004F424,
                        0x65546152u);
    if ( !qword_1C004F438 )
      goto LABEL_38;
  }
  else
  {
    qword_1C004F438 = 0LL;
  }
  if ( HIWORD(dword_1C004F424) )
  {
    qword_1C004F440 = ExAllocatePoolWithTag(NonPagedPoolNxCacheAligned, 8LL * HIWORD(dword_1C004F424), 0x65546152u);
    if ( !qword_1C004F440 )
      goto LABEL_38;
  }
  else
  {
    qword_1C004F440 = 0LL;
  }
  if ( (_WORD)qword_1C004F450 )
  {
    qword_1C004F458 = ExAllocatePoolWithTag(
                        NonPagedPoolNxCacheAligned,
                        8LL * (unsigned __int16)qword_1C004F450,
                        0x65546152u);
    if ( !qword_1C004F458 )
      goto LABEL_38;
  }
  else
  {
    qword_1C004F458 = 0LL;
  }
  if ( WORD1(qword_1C004F450) )
  {
    qword_1C004F460 = ExAllocatePoolWithTag(NonPagedPoolNxCacheAligned, 8LL * WORD1(qword_1C004F450), 0x65546152u);
    if ( !qword_1C004F460 )
      goto LABEL_38;
  }
  else
  {
    qword_1C004F460 = 0LL;
  }
  if ( WORD2(qword_1C004F450) )
  {
    qword_1C004F468 = ExAllocatePoolWithTag(NonPagedPoolNxCacheAligned, 8LL * WORD2(qword_1C004F450), 0x65546152u);
    if ( !qword_1C004F468 )
      goto LABEL_38;
  }
  else
  {
    qword_1C004F468 = 0LL;
  }
  if ( !HIWORD(qword_1C004F450) )
  {
    qword_1C004F470 = 0LL;
    goto LABEL_19;
  }
  qword_1C004F470 = ExAllocatePoolWithTag(NonPagedPoolNxCacheAligned, 8LL * HIWORD(qword_1C004F450), 0x65546152u);
  if ( !qword_1C004F470 )
  {
LABEL_38:
    v5 = -1073741801;
    StorpUninitializePerfTelemetry();
    g_StorpTraceLoggingPerformanceEnabled = 0;
    return v5;
  }
LABEL_19:
  v2 = 0LL;
  v3 = 0LL;
  do
  {
    *(_QWORD *)((char *)P + v2) = v3;
    *(_QWORD *)((char *)qword_1C004F458 + v2) = v3++;
    v2 += 8LL;
    --v0;
  }
  while ( v0 );
  v4 = g_StorpTraceLoggingPerformanceHighResolutionTimer == 0;
  *(_QWORD *)qword_1C004F430 = 4096LL;
  *((_QWORD *)qword_1C004F430 + 1) = 0x10000LL;
  *((_QWORD *)qword_1C004F430 + 2) = 0x100000LL;
  *((_QWORD *)qword_1C004F430 + 3) = 0x7FFFFFFFFFFFFFFFLL;
  if ( v4 || !UseQPCTime )
  {
    *(_QWORD *)qword_1C004F438 = 160000LL;
    *((_QWORD *)qword_1C004F438 + 1) = 640000LL;
    *((_QWORD *)qword_1C004F438 + 2) = 20480000LL;
    *((_QWORD *)qword_1C004F438 + 3) = 51200000LL;
    *((_QWORD *)qword_1C004F438 + 4) = 0x7FFFFFFFFFFFFFFFLL;
    *(_QWORD *)qword_1C004F460 = 640000LL;
    *((_QWORD *)qword_1C004F460 + 1) = 1000000LL;
  }
  else
  {
    KeQueryPerformanceCounter(&PerformanceFrequency);
    *(_QWORD *)qword_1C004F438 = 2 * PerformanceFrequency.QuadPart / 1000;
    *((_QWORD *)qword_1C004F438 + 1) = (PerformanceFrequency.QuadPart << 6) / 1000;
    *((_QWORD *)qword_1C004F438 + 2) = (PerformanceFrequency.QuadPart << 11) / 1000;
    *((_QWORD *)qword_1C004F438 + 3) = 5120 * PerformanceFrequency.QuadPart / 1000;
    *((_QWORD *)qword_1C004F438 + 4) = 0x7FFFFFFFFFFFFFFFLL;
    *(_QWORD *)qword_1C004F460 = (PerformanceFrequency.QuadPart << 6) / 1000;
    *((_QWORD *)qword_1C004F460 + 1) = 100 * PerformanceFrequency.QuadPart / 1000;
  }
  *((_QWORD *)qword_1C004F460 + 2) = 0x7FFFFFFFFFFFFFFFLL;
  dword_1C004F498 = 8;
  v5 = 0;
  g_RaidNumaHighestNodeNumber = KeQueryHighestNodeNumber();
  LODWORD(dword_1C004F49C) = dword_1C004F498 * ((unsigned __int16)g_RaidNumaHighestNodeNumber + 1);
  return v5;
}
