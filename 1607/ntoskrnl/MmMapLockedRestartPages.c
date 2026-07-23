/*
 * XREFs of MmMapLockedRestartPages @ 0x140657500
 * Callers:
 *     <none>
 * Callees:
 *     MiMapMdlCommon @ 0x1401E3694 (MiMapMdlCommon.c)
 *     MiReserveDriverPtes @ 0x1404B2B08 (MiReserveDriverPtes.c)
 */

__int64 __fastcall MmMapLockedRestartPages(_DWORD *a1, int a2)
{
  __int64 result; // rax

  result = MiReserveDriverPtes(0, (((a1[8] + a1[11]) & 0xFFF) + (unsigned __int64)(unsigned int)a1[10] + 4095) >> 12);
  if ( result )
    return MiMapMdlCommon((__int64)a1, result, ~(unsigned __int8)((unsigned int)MiFlags >> 13) & 2 | 4u, a2);
  return result;
}
