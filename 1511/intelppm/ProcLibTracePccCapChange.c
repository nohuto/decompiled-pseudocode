/*
 * XREFs of ProcLibTracePccCapChange @ 0x1C00040E8
 * Callers:
 *     CpcNotifyWorker @ 0x1C001B308 (CpcNotifyWorker.c)
 * Callees:
 *     ProcLibTraceProcessorSpecificEvent @ 0x1C000410C (ProcLibTraceProcessorSpecificEvent.c)
 */

__int64 __fastcall ProcLibTracePccCapChange(__int64 a1, int a2)
{
  int v3; // [rsp+38h] [rbp+10h] BYREF

  v3 = a2;
  return ProcLibTraceProcessorSpecificEvent(a1, L".", 4LL, &v3);
}
