/*
 * XREFs of RtlTryEndReadTickLock @ 0x1400F0030
 * Callers:
 *     KeQueryCpuSetInformation @ 0x140578C68 (KeQueryCpuSetInformation.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall RtlTryEndReadTickLock(_QWORD *a1, __int64 a2)
{
  return *a1 == a2;
}
