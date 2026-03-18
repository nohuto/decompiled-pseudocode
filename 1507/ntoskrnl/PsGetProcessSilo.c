/*
 * XREFs of PsGetProcessSilo @ 0x1400EFF80
 * Callers:
 *     PsGetProcessServerSilo @ 0x14050C11C (PsGetProcessServerSilo.c)
 *     PsIsProcessInAppSilo @ 0x1406C0FEC (PsIsProcessInAppSilo.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PsGetProcessSilo(__int64 a1)
{
  return *(_QWORD *)(a1 + 1832);
}
