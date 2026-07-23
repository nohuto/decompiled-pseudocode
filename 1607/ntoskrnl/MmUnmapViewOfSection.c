/*
 * XREFs of MmUnmapViewOfSection @ 0x1404BC290
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall MmUnmapViewOfSection(_KPROCESS *a1, __int64 a2)
{
  return MiUnmapViewOfSection(a1, a2, 0);
}
