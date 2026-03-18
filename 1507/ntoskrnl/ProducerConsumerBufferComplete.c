/*
 * XREFs of ProducerConsumerBufferComplete @ 0x1403F5AE8
 * Callers:
 *     PopCountDataAsProduced @ 0x1403F3EF4 (PopCountDataAsProduced.c)
 *     PopRequestWrite @ 0x1403F4B2C (PopRequestWrite.c)
 *     PopDecompressHiberBlocks @ 0x1403F53D4 (PopDecompressHiberBlocks.c)
 *     PopRequestRead @ 0x1403F5BC4 (PopRequestRead.c)
 * Callees:
 *     PopHiberCheckForDebugBreak @ 0x1403F5FEC (PopHiberCheckForDebugBreak.c)
 */

__int64 __fastcall ProducerConsumerBufferComplete(__int64 a1, __int64 a2, int a3, unsigned int a4)
{
  unsigned __int64 v4; // r10
  unsigned int v6; // r8d
  __int64 v8; // rbp
  unsigned __int64 v9; // rcx
  __int64 v10; // rsi
  __int64 result; // rax

  v4 = *(_QWORD *)(a2 + 8);
  v6 = a3 - *(_DWORD *)a1;
  v8 = a4;
  v9 = *(unsigned int *)(a1 + 8);
  if ( (unsigned int)(v4 % v9) > v6 )
    v6 += v9;
  v10 = v4 + v6 - (unsigned int)(v4 % v9);
  while ( 1 )
  {
    result = (unsigned int)_InterlockedCompareExchange((volatile signed __int32 *)(a1 + 24), 1, 0);
    if ( !(_DWORD)result )
      break;
    do
    {
      _mm_pause();
      PopHiberCheckForDebugBreak(v9);
    }
    while ( *(_DWORD *)(a1 + 24) );
  }
  while ( v10 != *(_QWORD *)(a2 + 8) )
  {
    *(_DWORD *)(a1 + 24) = 0;
    do
    {
      _mm_pause();
      PopHiberCheckForDebugBreak(v9);
    }
    while ( v10 != *(_QWORD *)(a2 + 8) );
    while ( 1 )
    {
      result = (unsigned int)_InterlockedCompareExchange((volatile signed __int32 *)(a1 + 24), 1, 0);
      if ( !(_DWORD)result )
        break;
      do
      {
        _mm_pause();
        PopHiberCheckForDebugBreak(v9);
      }
      while ( *(_DWORD *)(a1 + 24) );
    }
  }
  *(_QWORD *)(a2 + 8) += v8;
  *(_DWORD *)(a1 + 24) = 0;
  return result;
}
