/*
 * XREFs of MmMapLockedRestartPages @ 0x1406A04E4
 * Callers:
 *     <none>
 * Callees:
 *     MiMapMdlCommon @ 0x140214A44 (MiMapMdlCommon.c)
 *     MiReserveDriverPtes @ 0x140579058 (MiReserveDriverPtes.c)
 */

__int64 *__fastcall MmMapLockedRestartPages(_DWORD *a1, int a2, __int64 a3, __int64 a4)
{
  __int64 v6; // r8
  __int64 *result; // rax

  v6 = (a1[8] + a1[11]) & 0xFFF;
  result = (__int64 *)MiReserveDriverPtes(0, (v6 + (unsigned __int64)(unsigned int)a1[10] + 4095) >> 12, v6, a4);
  if ( result )
    return (__int64 *)MiMapMdlCommon((__int64)a1, result, (MiFlags & 0x30000) != 0 ? 4 : 6, a2);
  return result;
}
