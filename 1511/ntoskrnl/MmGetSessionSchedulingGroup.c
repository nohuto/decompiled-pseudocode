/*
 * XREFs of MmGetSessionSchedulingGroup @ 0x14054F6E8
 * Callers:
 *     PsSetCpuQuotaInformation @ 0x1401F50E0 (PsSetCpuQuotaInformation.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MmGetSessionSchedulingGroup(__int64 a1)
{
  return *(_QWORD *)(a1 + 32);
}
