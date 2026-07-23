/*
 * XREFs of MmGetSessionSchedulingGroup @ 0x140581F48
 * Callers:
 *     PsSetCpuQuotaInformation @ 0x14020EBA4 (PsSetCpuQuotaInformation.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MmGetSessionSchedulingGroup(__int64 a1)
{
  return *(_QWORD *)(a1 + 32);
}
