/*
 * XREFs of WindowStationOpenProcedure @ 0x1C00EE910
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall WindowStationOpenProcedure(__int64 a1)
{
  _DWORD *v1; // rdi

  v1 = *(_DWORD **)(a1 + 16);
  if ( (v1[8] & 0x100) != 0
    || (unsigned __int16)*(_DWORD *)(a1 + 24)
    && !(unsigned __int8)PsIsSystemProcess(*(_QWORD *)(a1 + 8))
    && (unsigned int)PsGetProcessSessionId(*(_QWORD *)(a1 + 8)) != *v1 )
  {
    return 3221225506LL;
  }
  else
  {
    return 0LL;
  }
}
