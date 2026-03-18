/*
 * XREFs of RtlTryEndReadTickLock @ 0x1400F21E0
 * Callers:
 *     KeQueryCpuSetInformation @ 0x140578728 (KeQueryCpuSetInformation.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall RtlTryEndReadTickLock(_QWORD *a1, __int64 a2)
{
  return *a1 == a2;
}
