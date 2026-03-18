/*
 * XREFs of EtwProviderEnabled @ 0x1400DCD78
 * Callers:
 *     EtwTraceMemoryAcg @ 0x1400DCD2C (EtwTraceMemoryAcg.c)
 *     EtwTraceWorkingSetSwap @ 0x1404FAFD8 (EtwTraceWorkingSetSwap.c)
 *     EtwpCrimsonProvEnableCallback @ 0x1404FB194 (EtwpCrimsonProvEnableCallback.c)
 *     EtwpPsProvTraceProcess @ 0x14050BCA8 (EtwpPsProvTraceProcess.c)
 *     EtwTraceWorkingSetInSwapStoreFail @ 0x14055D504 (EtwTraceWorkingSetInSwapStoreFail.c)
 *     EtwpPsProvTraceThread @ 0x1406E4CDC (EtwpPsProvTraceThread.c)
 * Callees:
 *     <none>
 */

BOOLEAN __stdcall EtwProviderEnabled(REGHANDLE RegHandle, UCHAR Level, ULONGLONG Keyword)
{
  BOOLEAN v3; // r9
  __int64 v5; // rcx
  UCHAR v7; // al
  __int64 v8; // rcx
  UCHAR v9; // al

  v3 = 0;
  if ( !RegHandle )
    return 0;
  v5 = *(_QWORD *)(RegHandle + 32);
  if ( *(_DWORD *)(v5 + 80) )
  {
    v7 = *(_BYTE *)(v5 + 84);
    if ( (Level <= v7 || !v7)
      && ((*(_DWORD *)(v5 + 88) & 0x40) != 0 && !Keyword
       || (*(_QWORD *)(v5 + 96) & Keyword) != 0 && (Keyword & *(_QWORD *)(v5 + 104)) == *(_QWORD *)(v5 + 104)) )
    {
      return 1;
    }
  }
  if ( *(_BYTE *)(RegHandle + 100) )
  {
    v8 = *(_QWORD *)(RegHandle + 40);
    if ( *(_DWORD *)(v8 + 80) )
    {
      v9 = *(_BYTE *)(v8 + 84);
      if ( (Level <= v9 || !v9)
        && ((*(_DWORD *)(v8 + 88) & 0x40) != 0 && !Keyword
         || (*(_QWORD *)(v8 + 96) & Keyword) != 0 && (Keyword & *(_QWORD *)(v8 + 104)) == *(_QWORD *)(v8 + 104)) )
      {
        return 1;
      }
    }
  }
  return v3;
}
