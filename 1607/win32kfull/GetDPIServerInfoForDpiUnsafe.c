/*
 * XREFs of GetDPIServerInfoForDpiUnsafe @ 0x1C00B7700
 * Callers:
 *     GetDPIServerInfoForDpi @ 0x1C00B76E8 (GetDPIServerInfoForDpi.c)
 *     GetScaledLogFontForDpi @ 0x1C01D9140 (GetScaledLogFontForDpi.c)
 * Callees:
 *     ?EnsureKMDpiMetricsCacheNode@@YAPEAUtagDpiKMMetricsCacheNode@@H@Z @ 0x1C01DFB08 (-EnsureKMDpiMetricsCacheNode@@YAPEAUtagDpiKMMetricsCacheNode@@H@Z.c)
 *     ?RefreshDpiKMMetricsCacheNode@@YAXPEAUtagDpiKMMetricsCacheNode@@@Z @ 0x1C01DFC64 (-RefreshDpiKMMetricsCacheNode@@YAXPEAUtagDpiKMMetricsCacheNode@@@Z.c)
 */

struct tagDpiKMMetricsCacheNode *__fastcall GetDPIServerInfoForDpiUnsafe(int a1)
{
  struct tagDpiKMMetricsCacheNode *result; // rax
  struct tagDpiKMMetricsCacheNode *v2; // rbx

  if ( a1 == *(unsigned __int16 *)(gpsi + 8678LL) )
    return (struct tagDpiKMMetricsCacheNode *)(gpsi + 5416LL);
  if ( a1 == 96 )
    return (struct tagDpiKMMetricsCacheNode *)(gpsi + 5520LL);
  result = EnsureKMDpiMetricsCacheNode(a1);
  v2 = result;
  if ( result )
  {
    RefreshDpiKMMetricsCacheNode(result);
    return (struct tagDpiKMMetricsCacheNode *)((char *)v2 + 16);
  }
  return result;
}
