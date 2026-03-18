/*
 * XREFs of GetDPIMETRICSForDpiUnsafe @ 0x1401D0AE8
 * Callers:
 *     GetWindowNCMetricsForDpi @ 0x1400322BC (GetWindowNCMetricsForDpi.c)
 *     _SystemParametersInfoForDpi @ 0x1401D0720 (_SystemParametersInfoForDpi.c)
 *     GetScaledLogFontForDpi @ 0x1401D087C (GetScaledLogFontForDpi.c)
 *     GetDpiMetricsForDpi @ 0x140302424 (GetDpiMetricsForDpi.c)
 * Callees:
 *     ?RefreshDpiKMMetricsCacheNode@@YAXPEAUtagDpiKMMetricsCacheNode@@@Z @ 0x1401D0B4C (-RefreshDpiKMMetricsCacheNode@@YAXPEAUtagDpiKMMetricsCacheNode@@@Z.c)
 *     ?EnsureKMDpiMetricsCacheNode@@YAPEAUtagDpiKMMetricsCacheNode@@H@Z @ 0x1401D0B84 (-EnsureKMDpiMetricsCacheNode@@YAPEAUtagDpiKMMetricsCacheNode@@H@Z.c)
 *     Get96DpiMetrics @ 0x140302300 (Get96DpiMetrics.c)
 *     GetSessionDpiMetrics @ 0x140302624 (GetSessionDpiMetrics.c)
 */

struct tagDpiKMMetricsCacheNode *__fastcall GetDPIMETRICSForDpiUnsafe(__int64 a1, __int64 a2)
{
  int v2; // ebx
  __int64 v3; // rcx
  struct tagDpiKMMetricsCacheNode *result; // rax
  struct tagDpiKMMetricsCacheNode *v5; // rbx

  v2 = a1;
  if ( (_DWORD)a1 == *(unsigned __int16 *)(*(_QWORD *)(W32GetUserSessionState(a1, a2) + 19904) + 6998LL) )
    return (struct tagDpiKMMetricsCacheNode *)GetSessionDpiMetrics(v3);
  if ( v2 == 96 )
    return (struct tagDpiKMMetricsCacheNode *)Get96DpiMetrics();
  result = EnsureKMDpiMetricsCacheNode(v2);
  v5 = result;
  if ( result )
  {
    RefreshDpiKMMetricsCacheNode(result);
    return (struct tagDpiKMMetricsCacheNode *)((char *)v5 + 16);
  }
  return result;
}
