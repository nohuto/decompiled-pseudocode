/*
 * XREFs of SdbpInitializeSearchDBContext @ 0x1406C3824
 * Callers:
 *     SdbpCheckMatchingFiles @ 0x1406C21AC (SdbpCheckMatchingFiles.c)
 *     SdbpCheckMatchingTextEntry @ 0x1406C2AE8 (SdbpCheckMatchingTextEntry.c)
 * Callees:
 *     memmove @ 0x140171280 (memmove.c)
 *     AslAlloc @ 0x14048554C (AslAlloc.c)
 *     SdbpCreateSearchPathPartsFromPath @ 0x1406C1804 (SdbpCreateSearchPathPartsFromPath.c)
 *     SdbpGetProcessHistory @ 0x1406C4010 (SdbpGetProcessHistory.c)
 *     AslLogCallPrintf @ 0x1406C5804 (AslLogCallPrintf.c)
 */

__int64 __fastcall SdbpInitializeSearchDBContext(__int64 a1)
{
  __int64 v1; // r14
  __int64 result; // rax
  const wchar_t *ProcessHistory; // r15
  __int64 v4; // rbx
  __int64 v5; // rdi
  wchar_t *v6; // rax
  __int64 v7; // rsi
  size_t v8; // rdi

  v1 = a1;
  if ( *(_QWORD *)(a1 + 72) )
    return 1LL;
  ProcessHistory = *(const wchar_t **)(a1 + 64);
  if ( !ProcessHistory )
  {
    if ( (*(_DWORD *)a1 & 2) != 0 || (a1 = *(_QWORD *)(a1 + 56)) == 0 )
    {
      v4 = -1LL;
      v5 = -1LL;
      do
        ++v5;
      while ( *(_WORD *)(*(_QWORD *)(v1 + 32) + 2 * v5) );
      do
        ++v4;
      while ( *(_WORD *)(*(_QWORD *)(v1 + 40) + 2 * v4) );
      v6 = (wchar_t *)AslAlloc(a1, 2LL * (unsigned int)(v4 + v5 + 1));
      ProcessHistory = v6;
      if ( !v6 )
      {
        AslLogCallPrintf(
          1,
          (unsigned int)"SdbpInitializeSearchDBContext",
          305,
          (unsigned int)"Failed to allocate process history buffer");
        return 0LL;
      }
      v7 = (unsigned int)v5;
      v8 = (unsigned int)v5;
      memmove(v6, *(const void **)(v1 + 32), v8 * 2);
      memmove((void *)&ProcessHistory[v8], *(const void **)(v1 + 40), 2LL * (unsigned int)v4);
      ProcessHistory[(unsigned int)v4 + v7] = 0;
    }
    else
    {
      ProcessHistory = (const wchar_t *)SdbpGetProcessHistory(a1, *(_QWORD *)(v1 + 32), *(_QWORD *)(v1 + 40));
      if ( !ProcessHistory )
      {
        AslLogCallPrintf(
          1,
          (unsigned int)"SdbpInitializeSearchDBContext",
          320,
          (unsigned int)"Failed to retrieve process history");
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
