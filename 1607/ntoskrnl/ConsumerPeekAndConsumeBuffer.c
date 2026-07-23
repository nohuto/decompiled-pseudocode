/*
 * XREFs of ConsumerPeekAndConsumeBuffer @ 0x1403CE3B0
 * Callers:
 *     PopDecompressHiberBlocks @ 0x1403CDE5C (PopDecompressHiberBlocks.c)
 * Callees:
 *     KdCheckForDebugBreak @ 0x140114668 (KdCheckForDebugBreak.c)
 *     PopHiberPeekRangeTable @ 0x1403CDE1C (PopHiberPeekRangeTable.c)
 *     PopHiberCheckForDebugBreak @ 0x1403CEA18 (PopHiberCheckForDebugBreak.c)
 */

unsigned __int64 __fastcall ConsumerPeekAndConsumeBuffer(__int64 a1, unsigned int *a2, char a3, __int64 a4, __int64 a5)
{
  unsigned __int64 v6; // r15
  unsigned __int64 v8; // rsi
  unsigned int v9; // ebp
  unsigned int v10; // edi
  unsigned int v11; // eax
  __int64 v12; // rcx
  unsigned __int64 result; // rax
  unsigned int v14; // ecx
  int v15; // edx

  v6 = 0LL;
  while ( _InterlockedCompareExchange((volatile signed __int32 *)(a1 + 24), 1, 0) )
  {
    do
    {
      _mm_pause();
      PopHiberCheckForDebugBreak();
    }
    while ( *(_DWORD *)(a1 + 24) );
  }
  while ( 1 )
  {
    v8 = *(_QWORD *)(a1 + 48);
    v9 = *(_DWORD *)(a1 + 40) - v8;
    if ( !*(_QWORD *)(a1 + 16) )
    {
      v14 = *(_DWORD *)(a1 + 32) - v8;
      if ( *a2 < v14 )
        v14 = *a2;
      *a2 = v14;
    }
    v10 = *a2;
    if ( *a2 <= v9 )
    {
      if ( !v10 )
        goto LABEL_7;
      v6 = *(_QWORD *)a1 + v8 % *(unsigned int *)(a1 + 8);
      v11 = PopHiberPeekRangeTable(*(_DWORD *)a1 + (unsigned int)(v8 % *(unsigned int *)(a1 + 8)), v10, a5);
      v10 = v11;
      if ( v11 <= v9 )
        break;
    }
    if ( (a3 & 1) != 0 )
      goto LABEL_11;
    *(_DWORD *)(a1 + 24) = 0;
    do
    {
      _mm_pause();
      if ( !KeGetCurrentPrcb()->Number && (++PopDebugCount & 0x3F) == 0 )
      {
        KdCheckForDebugBreak();
        KeQueryPerformanceCounter(0LL);
      }
      v15 = *(_DWORD *)(a1 + 48);
      if ( !*(_QWORD *)(a1 + 16) && v10 >= *(_DWORD *)(a1 + 32) - v15 )
        v10 = *(_DWORD *)(a1 + 32) - v15;
    }
    while ( v10 > *(_DWORD *)(a1 + 40) - v15 && *(_QWORD *)(a1 + 48) == v8 );
    while ( _InterlockedCompareExchange((volatile signed __int32 *)(a1 + 24), 1, 0) )
    {
      do
      {
        _mm_pause();
        PopHiberCheckForDebugBreak();
      }
      while ( *(_DWORD *)(a1 + 24) );
    }
  }
  *a2 = v11;
LABEL_7:
  v12 = *a2;
  if ( (_DWORD)v12 )
  {
    *(_QWORD *)(a1 + 48) += v12;
    result = v6;
    goto LABEL_9;
  }
LABEL_11:
  result = 0LL;
LABEL_9:
  *(_DWORD *)(a1 + 24) = 0;
  return result;
}
