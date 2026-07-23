/*
 * XREFs of PpmUpdateProcessorPolicyCallback @ 0x140131620
 * Callers:
 *     <none>
 * Callees:
 *     PpmUpdateTargetProcessorPolicy @ 0x14020519C (PpmUpdateTargetProcessorPolicy.c)
 */

__int64 __fastcall PpmUpdateProcessorPolicyCallback(__int64 a1, int a2, int a3)
{
  PpmUpdateTargetProcessorPolicy(*(_QWORD *)(a1 + 24176), *(_QWORD *)(*(_QWORD *)(a1 + 24184) + 8LL), a2, a3, a1);
  return 0LL;
}
