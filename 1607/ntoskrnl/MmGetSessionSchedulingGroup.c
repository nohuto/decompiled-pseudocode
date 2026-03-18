/*
 * XREFs of MmGetSessionSchedulingGroup @ 0x140581A98
 * Callers:
 *     PsSetCpuQuotaInformation @ 0x14020ED78 (PsSetCpuQuotaInformation.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MmGetSessionSchedulingGroup(__int64 a1)
{
  return *(_QWORD *)(a1 + 32);
}
