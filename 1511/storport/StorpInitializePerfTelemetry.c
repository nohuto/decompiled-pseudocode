/*
 * XREFs of StorpInitializePerfTelemetry @ 0x1C000D094
 * Callers:
 *     StorpRegisterTraceLogging @ 0x1C0050978 (StorpRegisterTraceLogging.c)
 * Callees:
 *     memset @ 0x1C0015EC0 (memset.c)
 *     StorpUninitializePerfTelemetry @ 0x1C003BAB4 (StorpUninitializePerfTelemetry.c)
 */

__int64 StorpInitializePerfTelemetry()
{
  __int64 v0; // rbx
  LARGE_INTEGER PerformanceCounter; // rax
  __int64 v2; // rcx
  __int64 v3; // rdx
  __int64 v4; // r8
  __int64 v5; // rcx
  __int64 v6; // rdx
  bool v7; // zf
  unsigned int v8; // ebx
  union _LARGE_INTEGER PerformanceFrequency; // [rsp+30h] [rbp+8h] BYREF

  memset(&TelemetryPerfContext, 0, 0x88uLL);
  dword_1C00483C8 = 40;
  dword_1C00483A4 = 5;
  TelemetryPerfContext = 262146;
  qword_1C00483D0 = 196610LL;
  *(_OWORD *)&xmmword_1C00483B8 = 0LL;
  dword_1C00483F8 = 6;
  v0 = 2LL;
  dword_1C00483CC = 0;
  *(_OWORD *)&xmmword_1C00483A8 = 0LL;
  dword_1C00483FC = 40;
  *(_OWORD *)&xmmword_1C00483D8 = 0LL;
  dword_1C0048400 = 46;
  *(_OWORD *)&xmmword_1C00483E8 = 0LL;
  LODWORD(dword_1C0048404) = 384;
  g_RaidNumberProcessors = KeQueryActiveProcessorCountEx(0xFFFFu);
  LODWORD(Size) = dword_1C0048404 * g_RaidNumberProcessors;
  if ( LOBYTE(WPP_MAIN_CB.DeviceObjectExtension) )
    PerformanceCounter = KeQueryPerformanceCounter(0LL);
  else
    PerformanceCounter.QuadPart = KeQueryUnbiasedInterruptTime();
  qword_1C0048410 = PerformanceCounter.QuadPart;
  if ( (_WORD)TelemetryPerfContext )
  {
    xmmword_1C00483A8 = ExAllocatePoolWithTag(
                          NonPagedPoolNxCacheAligned,
                          8LL * (unsigned __int16)TelemetryPerfContext,
                          0x65546152u);
    if ( !xmmword_1C00483A8 )
      goto LABEL_40;
  }
  else
  {
    xmmword_1C00483A8 = 0LL;
  }
  if ( HIWORD(TelemetryPerfContext) )
  {
    *(&xmmword_1C00483A8 + 1) = ExAllocatePoolWithTag(
                                  NonPagedPoolNxCacheAligned,
                                  8LL * HIWORD(TelemetryPerfContext),
                                  0x65546152u);
    if ( !*(&xmmword_1C00483A8 + 1) )
      goto LABEL_40;
  }
  else
  {
    *(&xmmword_1C00483A8 + 1) = 0LL;
  }
  if ( (_WORD)dword_1C00483A4 )
  {
    xmmword_1C00483B8 = ExAllocatePoolWithTag(
                          NonPagedPoolNxCacheAligned,
                          8LL * (unsigned __int16)dword_1C00483A4,
                          0x65546152u);
    if ( !xmmword_1C00483B8 )
      goto LABEL_40;
  }
  else
  {
    xmmword_1C00483B8 = 0LL;
  }
  if ( HIWORD(dword_1C00483A4) )
  {
    *(&xmmword_1C00483B8 + 1) = ExAllocatePoolWithTag(
                                  NonPagedPoolNxCacheAligned,
                                  8LL * HIWORD(dword_1C00483A4),
                                  0x65546152u);
    if ( !*(&xmmword_1C00483B8 + 1) )
      goto LABEL_40;
  }
  else
  {
    *(&xmmword_1C00483B8 + 1) = 0LL;
  }
  if ( (_WORD)qword_1C00483D0 )
  {
    xmmword_1C00483D8 = ExAllocatePoolWithTag(
                          NonPagedPoolNxCacheAligned,
                          8LL * (unsigned __int16)qword_1C00483D0,
                          0x65546152u);
    if ( !xmmword_1C00483D8 )
      goto LABEL_40;
  }
  else
  {
    xmmword_1C00483D8 = 0LL;
  }
  if ( WORD1(qword_1C00483D0) )
  {
    *(&xmmword_1C00483D8 + 1) = ExAllocatePoolWithTag(
                                  NonPagedPoolNxCacheAligned,
                                  8LL * WORD1(qword_1C00483D0),
                                  0x65546152u);
    if ( !*(&xmmword_1C00483D8 + 1) )
      goto LABEL_40;
  }
  else
  {
    *(&xmmword_1C00483D8 + 1) = 0LL;
  }
  if ( WORD2(qword_1C00483D0) )
  {
    xmmword_1C00483E8 = ExAllocatePoolWithTag(NonPagedPoolNxCacheAligned, 8LL * WORD2(qword_1C00483D0), 0x65546152u);
    if ( !xmmword_1C00483E8 )
      goto LABEL_40;
  }
  else
  {
    xmmword_1C00483E8 = 0LL;
  }
  if ( !HIWORD(qword_1C00483D0) )
  {
    *(&xmmword_1C00483E8 + 1) = 0LL;
    goto LABEL_19;
  }
  *(&xmmword_1C00483E8 + 1) = ExAllocatePoolWithTag(
                                NonPagedPoolNxCacheAligned,
                                8LL * HIWORD(qword_1C00483D0),
                                0x65546152u);
  if ( !*(&xmmword_1C00483E8 + 1) )
  {
LABEL_40:
    v8 = -1073741801;
    StorpUninitializePerfTelemetry();
    g_StorpTraceLoggingPerformanceEnabled = 0;
    return v8;
  }
LABEL_19:
  v2 = 0LL;
  v3 = 0LL;
  v4 = 2LL;
  do
  {
    *(_QWORD *)((char *)xmmword_1C00483A8 + v2) = v3++;
    v2 += 8LL;
    --v4;
  }
  while ( v4 );
  v5 = 0LL;
  v6 = 0LL;
  do
  {
    *(_QWORD *)((char *)xmmword_1C00483D8 + v5) = v6++;
    v5 += 8LL;
    --v0;
  }
  while ( v0 );
  v7 = g_StorpTraceLoggingPerformanceHighResolutionTimer == 0;
  *(_QWORD *)*(&xmmword_1C00483A8 + 1) = 4096LL;
  *((_QWORD *)*(&xmmword_1C00483A8 + 1) + 1) = 0x10000LL;
  *((_QWORD *)*(&xmmword_1C00483A8 + 1) + 2) = 0x100000LL;
  *((_QWORD *)*(&xmmword_1C00483A8 + 1) + 3) = 0x7FFFFFFFFFFFFFFFLL;
  if ( v7 || !LOBYTE(WPP_MAIN_CB.DeviceObjectExtension) )
  {
    *(_QWORD *)xmmword_1C00483B8 = 160000LL;
    *((_QWORD *)xmmword_1C00483B8 + 1) = 640000LL;
    *((_QWORD *)xmmword_1C00483B8 + 2) = 2560000LL;
    *((_QWORD *)xmmword_1C00483B8 + 3) = 20480000LL;
    *((_QWORD *)xmmword_1C00483B8 + 4) = 0x7FFFFFFFFFFFFFFFLL;
    *(_QWORD *)*(&xmmword_1C00483D8 + 1) = 640000LL;
    *((_QWORD *)*(&xmmword_1C00483D8 + 1) + 1) = 1000000LL;
  }
  else
  {
    KeQueryPerformanceCounter(&PerformanceFrequency);
    *(_QWORD *)xmmword_1C00483B8 = 2 * PerformanceFrequency.QuadPart / 1000;
    *((_QWORD *)xmmword_1C00483B8 + 1) = (PerformanceFrequency.QuadPart << 6) / 1000;
    *((_QWORD *)xmmword_1C00483B8 + 2) = (PerformanceFrequency.QuadPart << 8) / 1000;
    *((_QWORD *)xmmword_1C00483B8 + 3) = (PerformanceFrequency.QuadPart << 11) / 1000;
    *((_QWORD *)xmmword_1C00483B8 + 4) = 0x7FFFFFFFFFFFFFFFLL;
    *(_QWORD *)*(&xmmword_1C00483D8 + 1) = (PerformanceFrequency.QuadPart << 6) / 1000;
    *((_QWORD *)*(&xmmword_1C00483D8 + 1) + 1) = 100 * PerformanceFrequency.QuadPart / 1000;
  }
  *((_QWORD *)*(&xmmword_1C00483D8 + 1) + 2) = 0x7FFFFFFFFFFFFFFFLL;
  return 0;
}
