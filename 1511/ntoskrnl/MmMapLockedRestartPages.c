/*
 * XREFs of MmMapLockedRestartPages @ 0x140620E68
 * Callers:
 *     <none>
 * Callees:
 *     MiMapMdlCommon @ 0x1401D35FC (MiMapMdlCommon.c)
 *     MiReserveDriverPtes @ 0x1404A6DA8 (MiReserveDriverPtes.c)
 */

__int64 *__fastcall MmMapLockedRestartPages(_DWORD *a1, int a2)
{
  __int64 *result; // rax

  result = (__int64 *)MiReserveDriverPtes(
                        0,
                        (((a1[8] + a1[11]) & 0xFFF) + (unsigned __int64)(unsigned int)a1[10] + 4095) >> 12);
  if ( result )
    return (__int64 *)MiMapMdlCommon((__int64)a1, result, 2 * (((MiFlags & 0x10000) == 0) | 2u), a2);
  return result;
}
