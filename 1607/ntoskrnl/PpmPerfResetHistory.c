/*
 * XREFs of PpmPerfResetHistory @ 0x1401447E8
 * Callers:
 *     PpmPerfRecordUtility @ 0x1400D5420 (PpmPerfRecordUtility.c)
 *     PpmPerfResetHistoryAll @ 0x14056B160 (PpmPerfResetHistoryAll.c)
 *     PpmPerfResizeHistoryAll @ 0x14056B1B4 (PpmPerfResizeHistoryAll.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PpmPerfResetHistory(__int64 a1)
{
  __int64 v1; // r8
  unsigned __int16 v2; // r9
  int v3; // eax
  int v4; // r10d
  unsigned int v5; // ecx
  __int64 result; // rax

  v1 = *(_QWORD *)(a1 + 24208);
  if ( v1 )
  {
    v2 = *(_WORD *)(a1 + 24236);
    *(_DWORD *)(v1 + 4) = 0;
    v3 = *(_DWORD *)v1 * v2;
    *(_DWORD *)(v1 + 12) = 0;
    *(_DWORD *)(v1 + 8) = v3;
    v4 = *(_DWORD *)(a1 + 24224);
    v5 = 0;
    *(_DWORD *)(v1 + 16) = *(_DWORD *)v1 * v4;
    result = 0LL;
    for ( *(_QWORD *)(v1 + 20) = 0LL; v5 < *(_DWORD *)v1; *(_WORD *)(v1 + 8 * result + 33) = 0 )
    {
      result = v5++;
      *(_WORD *)(v1 + 8 * result + 30) = 0;
      *(_WORD *)(v1 + 8 * result + 28) = v2;
      *(_BYTE *)(v1 + 8 * result + 32) = v4;
    }
  }
  return result;
}
