/*
 * XREFs of SdbpInitializeSearchDBContext @ 0x1406C395C
 * Callers:
 *     SdbpCheckMatchingFiles @ 0x1406C22E4 (SdbpCheckMatchingFiles.c)
 *     SdbpCheckMatchingTextEntry @ 0x1406C2C20 (SdbpCheckMatchingTextEntry.c)
 * Callees:
 *     memmove @ 0x140171780 (memmove.c)
 *     AslAlloc @ 0x1405148D4 (AslAlloc.c)
 *     SdbpCreateSearchPathPartsFromPath @ 0x1406C193C (SdbpCreateSearchPathPartsFromPath.c)
 *     SdbpGetProcessHistory @ 0x1406C4148 (SdbpGetProcessHistory.c)
 *     AslLogCallPrintf @ 0x1406C593C (AslLogCallPrintf.c)
 */

__int64 __fastcall SdbpInitializeSearchDBContext(__int64 a1)
{
  __int64 v1; // r14
  __int64 result; // rax
  const wchar_t *ProcessHistory; // r15
  const char *v4; // r9
  int v5; // r8d
  __int64 v6; // rbx
  __int64 v7; // rdi
  wchar_t *v8; // rax
  __int64 v9; // rsi
  size_t v10; // rdi

  v1 = a1;
  if ( *(_QWORD *)(a1 + 72) )
    return 1LL;
  ProcessHistory = *(const wchar_t **)(a1 + 64);
  if ( !ProcessHistory )
  {
    if ( (*(_DWORD *)a1 & 2) != 0 || (a1 = *(_QWORD *)(a1 + 56)) == 0 )
    {
      v6 = -1LL;
      v7 = -1LL;
      do
        ++v7;
      while ( *(_WORD *)(*(_QWORD *)(v1 + 32) + 2 * v7) );
      do
        ++v6;
      while ( *(_WORD *)(*(_QWORD *)(v1 + 40) + 2 * v6) );
      v8 = (wchar_t *)AslAlloc(a1, 2LL * (unsigned int)(v6 + v7 + 1));
      ProcessHistory = v8;
      if ( !v8 )
      {
        v4 = "Failed to allocate process history buffer";
        v5 = 305;
        goto LABEL_13;
      }
      v9 = (unsigned int)v7;
      v10 = (unsigned int)v7;
      memmove(v8, *(const void **)(v1 + 32), v10 * 2);
      memmove((void *)&ProcessHistory[v10], *(const void **)(v1 + 40), 2LL * (unsigned int)v6);
      ProcessHistory[(unsigned int)v6 + v9] = 0;
    }
    else
    {
      ProcessHistory = (const wchar_t *)SdbpGetProcessHistory(a1, *(_QWORD *)(v1 + 32), *(_QWORD *)(v1 + 40));
      if ( !ProcessHistory )
      {
        v4 = "Failed to retrieve process history";
        v5 = 320;
LABEL_13:
        AslLogCallPrintf(1, (unsigned int)"SdbpInitializeSearchDBContext", v5, (_DWORD)v4);
        return 0LL;
      }
    }
  }
  *(_QWORD *)(v1 + 64) = ProcessHistory;
  result = SdbpCreateSearchPathPartsFromPath(ProcessHistory, (_QWORD *)(v1 + 72));
  if ( (_DWORD)result )
    *(_DWORD *)v1 |= 1u;
  return result;
}
