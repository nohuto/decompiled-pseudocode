/*
 * XREFs of ConsumerGetBuffer @ 0x1403F4E98
 * Callers:
 *     PopRequestWrite @ 0x1403F4B2C (PopRequestWrite.c)
 * Callees:
 *     PopHiberCheckForDebugBreak @ 0x1403F5FEC (PopHiberCheckForDebugBreak.c)
 */

unsigned __int64 __fastcall ConsumerGetBuffer(__int64 a1, unsigned int *a2, char a3)
{
  int v5; // eax
  unsigned int v6; // edx
  unsigned __int64 result; // rax
  __int64 v8; // r9
  unsigned int v9; // ecx
  int v10; // eax
  unsigned int v11; // edx
  unsigned int v12; // ecx

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
    v5 = *(_DWORD *)(a1 + 48);
    v6 = *(_DWORD *)(a1 + 40) - v5;
    if ( !*(_QWORD *)(a1 + 16) )
    {
      v9 = *(_DWORD *)(a1 + 32) - v5;
      if ( *a2 < v9 )
        v9 = *a2;
      *a2 = v9;
    }
    if ( *a2 <= v6 )
      break;
    if ( (a3 & 1) != 0 )
      goto LABEL_5;
    *(_DWORD *)(a1 + 24) = 0;
    do
    {
      _mm_pause();
      PopHiberCheckForDebugBreak();
      v10 = *(_DWORD *)(a1 + 48);
      v11 = *(_DWORD *)(a1 + 40) - v10;
      if ( !*(_QWORD *)(a1 + 16) )
      {
        v12 = *(_DWORD *)(a1 + 32) - v10;
        if ( *a2 < v12 )
          v12 = *a2;
        *a2 = v12;
      }
    }
    while ( *a2 > v11 );
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
  v8 = *a2;
  if ( !(_DWORD)v8 )
  {
LABEL_5:
    result = 0LL;
    goto LABEL_6;
  }
  result = *(_QWORD *)a1 + *(_QWORD *)(a1 + 48) % (unsigned __int64)*(unsigned int *)(a1 + 8);
  *(_QWORD *)(a1 + 48) += v8;
LABEL_6:
  *(_DWORD *)(a1 + 24) = 0;
  return result;
}
