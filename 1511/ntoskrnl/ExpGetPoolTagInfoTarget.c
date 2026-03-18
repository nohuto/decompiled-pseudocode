/*
 * XREFs of ExpGetPoolTagInfoTarget @ 0x1400D8090
 * Callers:
 *     <none>
 * Callees:
 *     KeYieldProcessorEx @ 0x14007CAC0 (KeYieldProcessorEx.c)
 *     memmove @ 0x140166980 (memmove.c)
 *     HvlNotifyLongSpinWait @ 0x1401AE950 (HvlNotifyLongSpinWait.c)
 */

__int64 __fastcall ExpGetPoolTagInfoTarget(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  volatile signed __int32 *v5; // r15
  __int64 v6; // r14
  signed __int32 v7; // eax
  unsigned int v8; // ebx
  unsigned int v9; // edi
  __int64 v10; // rax
  signed __int32 v11; // ebp
  unsigned int v12; // edi
  __int64 result; // rax
  __int64 *v14; // r9
  __int64 v15; // r10
  __int64 i; // rcx
  int v17; // [rsp+48h] [rbp+10h] BYREF

  v5 = (volatile signed __int32 *)a3;
  v6 = a2;
  v7 = _InterlockedDecrement((volatile signed __int32 *)a4);
  v8 = 0;
  v9 = ~v7 & 0x80000000;
  if ( (v7 & 0x7FFFFFFF) != 0 )
  {
    v17 = 0;
    while ( (*(_DWORD *)a4 & 0x80000000) != v9 )
      KeYieldProcessorEx(&v17, a2, a3);
  }
  else
  {
    *(_DWORD *)a4 = v9 | *(_DWORD *)(a4 + 4);
    memmove(*(void **)a2, ExPoolTagTables, 40LL * *(_QWORD *)(a2 + 8));
    v14 = (__int64 *)&unk_1402D6828;
    v15 = 639LL;
    a3 = *(_QWORD *)v6 + 40LL * *(_QWORD *)(v6 + 8);
    do
    {
      a2 = *v14;
      if ( *v14 )
      {
        for ( i = *(_QWORD *)v6; i != a3; a2 += 40LL )
        {
          if ( *(_DWORD *)a2 )
          {
            *(_DWORD *)(i + 4) += *(_DWORD *)(a2 + 4);
            *(_DWORD *)(i + 8) += *(_DWORD *)(a2 + 8);
            *(_QWORD *)(i + 16) += *(_QWORD *)(a2 + 16);
            *(_DWORD *)(i + 24) += *(_DWORD *)(a2 + 24);
            *(_DWORD *)(i + 28) += *(_DWORD *)(a2 + 28);
            *(_QWORD *)(i + 32) += *(_QWORD *)(a2 + 32);
          }
          i += 40LL;
        }
      }
      ++v14;
      --v15;
    }
    while ( v15 );
    v10 = *(_QWORD *)(v6 + 24);
    if ( v10 )
      memmove(*(void **)(v6 + 16), PoolTrackTableExpansion, 40 * v10);
  }
  v11 = _InterlockedDecrement((volatile signed __int32 *)a4);
  v12 = ~v11 & 0x80000000;
  if ( (v11 & 0x7FFFFFFF) != 0 )
  {
    while ( 1 )
    {
      result = *(_DWORD *)a4 & 0x80000000;
      if ( (_DWORD)result == v12 )
        break;
      if ( (++v8 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
        _mm_pause();
      else
        HvlNotifyLongSpinWait(v8, a2, a3);
    }
  }
  else
  {
    result = v12 | *(_DWORD *)(a4 + 4);
    *(_DWORD *)a4 = result;
  }
  _InterlockedDecrement(v5);
  return result;
}
