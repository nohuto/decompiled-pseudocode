/*
 * XREFs of RtlTryEndReadTickLock @ 0x14002D5B0
 * Callers:
 *     KeQueryCpuSetInformation @ 0x14061ACFC (KeQueryCpuSetInformation.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall RtlTryEndReadTickLock(_QWORD *a1, __int64 a2)
{
  return *a1 == a2;
}
