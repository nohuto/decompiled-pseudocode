/*
 * XREFs of PpmPerfResetHistory @ 0x140167DA4
 * Callers:
 *     PpmPerfRecordUtility @ 0x1400E9720 (PpmPerfRecordUtility.c)
 *     PpmPerfResetHistoryAll @ 0x1405B1174 (PpmPerfResetHistoryAll.c)
 *     PpmPerfResizeHistoryAll @ 0x1405B1208 (PpmPerfResizeHistoryAll.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PpmPerfResetHistory(__int64 a1)
{
  __int64 v1; // r8
  unsigned int v3; // edx
  int v4; // r10d
  __int64 result; // rax
  __int64 v6; // rcx

  v1 = *(_QWORD *)(a1 + 24208);
  if ( v1 )
  {
    *(_DWORD *)(v1 + 4) = 0;
    v3 = 0;
    *(_DWORD *)(v1 + 12) = 0;
    *(_DWORD *)(v1 + 8) = *(_DWORD *)v1 * *(_DWORD *)(a1 + 24236);
    v4 = *(_DWORD *)(a1 + 24224);
    *(_DWORD *)(v1 + 16) = *(_DWORD *)v1 * v4;
    result = 0LL;
    for ( *(_QWORD *)(v1 + 20) = 0LL; v3 < *(_DWORD *)v1; *(_WORD *)(v1 + 8 * v6 + 33) = 0 )
    {
      v6 = v3++;
      *(_WORD *)(v1 + 8 * v6 + 30) = 0;
      *(_WORD *)(v1 + 8 * v6 + 28) = *(_WORD *)(a1 + 24236);
      result = 0LL;
      *(_BYTE *)(v1 + 8 * v6 + 32) = v4;
    }
  }
  return result;
}
