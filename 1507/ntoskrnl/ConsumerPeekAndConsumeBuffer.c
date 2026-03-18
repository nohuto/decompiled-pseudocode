/*
 * XREFs of ConsumerPeekAndConsumeBuffer @ 0x1403F5960
 * Callers:
 *     PopDecompressHiberBlocks @ 0x1403F53D4 (PopDecompressHiberBlocks.c)
 * Callees:
 *     KdCheckForDebugBreak @ 0x14014E92C (KdCheckForDebugBreak.c)
 *     PopHiberPeekRangeTable @ 0x1403F5394 (PopHiberPeekRangeTable.c)
 *     PopHiberCheckForDebugBreak @ 0x1403F5FEC (PopHiberCheckForDebugBreak.c)
 */

unsigned __int64 __fastcall ConsumerPeekAndConsumeBuffer(__int64 a1, unsigned int *a2, char a3, __int64 a4, __int64 a5)
{
  unsigned __int64 v5; // r15
  unsigned __int64 v8; // rbp
  unsigned int v9; // esi
  unsigned int v10; // ecx
  unsigned int v11; // edi
  unsigned int v12; // eax
  int v13; // edx
  __int64 v14; // rcx
  __int64 v15; // rcx
  unsigned __int64 result; // rax

  v5 = 0LL;
  while ( _InterlockedCompareExchange((volatile signed __int32 *)(a1 + 24), 1, 0) )
  {
    do
    {
      _mm_pause();
      ((void (*)(void))PopHiberCheckForDebugBreak)();
    }
    while ( *(_DWORD *)(a1 + 24) );
  }
  while ( 1 )
  {
    v8 = *(_QWORD *)(a1 + 48);
    v9 = *(_DWORD *)(a1 + 40) - v8;
    if ( !*(_QWORD *)(a1 + 16) )
    {
      v10 = *(_DWORD *)(a1 + 32) - v8;
      if ( *a2 < v10 )
        v10 = *a2;
      *a2 = v10;
    }
    v11 = *a2;
    if ( *a2 <= v9 )
    {
      if ( !v11 )
        goto LABEL_26;
      v5 = *(_QWORD *)a1 + v8 % *(unsigned int *)(a1 + 8);
      v12 = PopHiberPeekRangeTable(*(_DWORD *)a1 + (unsigned int)(v8 % *(unsigned int *)(a1 + 8)), v11, a5);
      v11 = v12;
      if ( v12 <= v9 )
        break;
    }
    if ( (a3 & 1) != 0 )
      goto LABEL_28;
    *(_DWORD *)(a1 + 24) = 0;
    do
    {
      _mm_pause();
      if ( !KeGetCurrentPrcb()->Number && (++PopDebugCount & 0x3F) == 0 )
      {
        KdCheckForDebugBreak();
        KeQueryPerformanceCounter(0LL);
      }
      v13 = *(_DWORD *)(a1 + 48);
      v14 = (unsigned int)(*(_DWORD *)(a1 + 40) - v13);
      if ( !*(_QWORD *)(a1 + 16) && v11 >= *(_DWORD *)(a1 + 32) - v13 )
        v11 = *(_DWORD *)(a1 + 32) - v13;
    }
    while ( *(_QWORD *)(a1 + 48) == v8 && v11 > (unsigned int)v14 );
    while ( _InterlockedCompareExchange((volatile signed __int32 *)(a1 + 24), 1, 0) )
    {
      do
      {
        _mm_pause();
        PopHiberCheckForDebugBreak(v14);
      }
      while ( *(_DWORD *)(a1 + 24) );
    }
  }
  *a2 = v12;
LABEL_26:
  v15 = *a2;
  if ( (_DWORD)v15 )
  {
    *(_QWORD *)(a1 + 48) += v15;
    result = v5;
    goto LABEL_29;
  }
LABEL_28:
  result = 0LL;
LABEL_29:
  *(_DWORD *)(a1 + 24) = 0;
  return result;
}
