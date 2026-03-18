/*
 * XREFs of MmGetSessionSchedulingGroup @ 0x1405C7494
 * Callers:
 *     PsSetCpuQuotaInformation @ 0x140243470 (PsSetCpuQuotaInformation.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MmGetSessionSchedulingGroup(__int64 a1)
{
  return *(_QWORD *)(a1 + 32);
}
