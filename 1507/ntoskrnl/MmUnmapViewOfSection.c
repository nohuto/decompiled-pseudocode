/*
 * XREFs of MmUnmapViewOfSection @ 0x140546ABC
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall MmUnmapViewOfSection(_KPROCESS *a1, __int64 a2)
{
  return MiUnmapViewOfSection(a1, a2, 0);
}
