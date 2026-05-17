/*
 * XREFs of RtlRunOnceBeginInitialize @ 0x180034D90
 * Callers:
 *     RtlpHeapGenerateRandomValue32 @ 0x180034CA8 (RtlpHeapGenerateRandomValue32.c)
 *     RtlRunOnceExecuteOnce @ 0x180034E70 (RtlRunOnceExecuteOnce.c)
 * Callees:
 *     RtlpRunOnceWaitForInit @ 0x180077DEC (RtlpRunOnceWaitForInit.c)
 */

__int64 __fastcall RtlRunOnceBeginInitialize(volatile signed __int64 *a1, int a2, unsigned __int64 *a3)
{
  signed __int64 v5; // rax
  unsigned int v6; // ebx
  int v8; // edi
  signed __int64 v9; // rtt

  if ( ((a2 - 1) & a2) != 0 || (a2 & 0xFFFFFFFC) != 0 )
    return 3221225712LL;
  v5 = *a1;
  v6 = 0;
  if ( (*a1 & 3) == 2 )
  {
LABEL_3:
    if ( a3 )
      *a3 = v5 & 0xFFFFFFFFFFFFFFFCuLL;
    return v6;
  }
  if ( (a2 & 1) == 0 )
  {
    v8 = ((unsigned __int8)~(_BYTE)a2 >> 1) & 1;
    while ( 1 )
    {
      while ( (v5 & 3) == 0 )
      {
        v9 = v5;
        v5 = _InterlockedCompareExchange64(a1, (v8 != 0 ? 1 : 3) & 3, v5);
        if ( v9 == v5 )
          return 259;
      }
      if ( (v5 & 3) != 1 )
        break;
      if ( !v8 )
        return (unsigned int)-1073741584;
      v5 = RtlpRunOnceWaitForInit(v5, a1);
    }
    if ( v5 != 3 )
      goto LABEL_3;
    return v8 != 0 ? -1073741584 : 259;
  }
  return 3221225473LL;
}
