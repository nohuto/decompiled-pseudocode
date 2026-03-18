/*
 * XREFs of DpiEnumSystemFirmwareTables @ 0x1C01700B0
 * Callers:
 *     <none>
 * Callees:
 *     DpiQuerySystemFirmwareTables @ 0x1C00E8170 (DpiQuerySystemFirmwareTables.c)
 */

__int64 __fastcall DpiEnumSystemFirmwareTables(__int64 a1, __int64 a2, unsigned int a3, void *a4, unsigned int *a5)
{
  __int64 v6; // r10
  _QWORD *v8; // rax

  if ( a1
    && (v6 = *(_QWORD *)(a1 + 64)) != 0
    && *(_DWORD *)(v6 + 16) == 1953656900
    && (unsigned int)(*(_DWORD *)(v6 + 20) - 2) <= 1 )
  {
    if ( *(_BYTE *)(v6 + 1479) )
    {
      *a5 = 0;
      return 3221226599LL;
    }
    else
    {
      return DpiQuerySystemFirmwareTables(0LL, a2, 0LL, a3, a4, a5);
    }
  }
  else
  {
    v8 = (_QWORD *)WdLogNewEntry5_WdError(a1);
    v8[4] = a1;
    v8[3] = &DpiEnumSystemFirmwareTables;
    v8[5] = -1073741585LL;
    WdLogEvent5_WdError(v8);
    return 3221225711LL;
  }
}
