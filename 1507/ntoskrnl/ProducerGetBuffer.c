/*
 * XREFs of ProducerGetBuffer @ 0x1403F5F10
 * Callers:
 *     PopCountDataAsProduced @ 0x1403F3EF4 (PopCountDataAsProduced.c)
 *     PopRequestRead @ 0x1403F5BC4 (PopRequestRead.c)
 * Callees:
 *     PopHiberCheckForDebugBreak @ 0x1403F5FEC (PopHiberCheckForDebugBreak.c)
 */

__int64 __fastcall ProducerGetBuffer(__int64 a1, unsigned int a2, unsigned int a3, char a4)
{
  __int64 v4; // rsi
  __int64 v6; // rdi
  __int64 v7; // rcx
  __int64 result; // rax
  unsigned __int64 v9; // rax
  unsigned __int64 v10; // rcx

  v4 = a3;
  v6 = a2;
  while ( _InterlockedCompareExchange((volatile signed __int32 *)(a1 + 24), 1, 0) )
  {
    do
    {
      _mm_pause();
      PopHiberCheckForDebugBreak(a1);
    }
    while ( *(_DWORD *)(a1 + 24) );
  }
  while ( 1 )
  {
    v7 = (unsigned int)(*(_DWORD *)(a1 + 8) + *(_DWORD *)(a1 + 56) - *(_DWORD *)(a1 + 32));
    if ( (unsigned int)v6 <= (unsigned int)v7 )
      break;
    if ( (a4 & 1) != 0 )
    {
      result = 0LL;
      goto LABEL_5;
    }
    *(_DWORD *)(a1 + 24) = 0;
    do
    {
      _mm_pause();
      PopHiberCheckForDebugBreak(v7);
      v7 = (unsigned int)(*(_DWORD *)(a1 + 8) + *(_DWORD *)(a1 + 56) - *(_DWORD *)(a1 + 32));
    }
    while ( (unsigned int)v6 > (unsigned int)v7 );
    while ( _InterlockedCompareExchange((volatile signed __int32 *)(a1 + 24), 1, 0) )
    {
      do
      {
        _mm_pause();
        PopHiberCheckForDebugBreak(v7);
      }
      while ( *(_DWORD *)(a1 + 24) );
    }
  }
  v9 = *(_QWORD *)(a1 + 32);
  v10 = *(unsigned int *)(a1 + 8);
  *(_QWORD *)(a1 + 32) = v6 + v9;
  result = *(_QWORD *)a1 + (unsigned int)(v9 % v10);
  *(_QWORD *)(a1 + 16) -= v4;
LABEL_5:
  *(_DWORD *)(a1 + 24) = 0;
  return result;
}
