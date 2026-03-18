/*
 * XREFs of PsGetProcessSilo @ 0x14020F120
 * Callers:
 *     PsIsProcessInAppSilo @ 0x14067DF9C (PsIsProcessInAppSilo.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PsGetProcessSilo(__int64 a1)
{
  return PspGetJobSilo(*(_QWORD *)(a1 + 944));
}
