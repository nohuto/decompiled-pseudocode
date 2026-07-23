/*
 * XREFs of ExpGetPoolTagInfoTarget @ 0x140095220
 * Callers:
 *     <none>
 * Callees:
 *     KeYieldProcessorEx @ 0x14002E830 (KeYieldProcessorEx.c)
 *     memmove @ 0x140171780 (memmove.c)
 *     HvlNotifyLongSpinWait @ 0x1401BAD4C (HvlNotifyLongSpinWait.c)
 */

__int64 __fastcall ExpGetPoolTagInfoTarget(__int64 a1, __int64 a2, volatile signed __int32 *a3, __int64 a4)
{
  signed __int32 v7; // eax
  unsigned int v8; // ebx
  unsigned int v9; // edi
  __int64 v10; // rax
  signed __int32 v11; // ebp
  unsigned int v12; // edi
  __int64 result; // rax
  __int64 *v14; // r9
  __int64 v15; // r10
  __int64 v16; // r8
  __int64 v17; // rdx
  _DWORD *i; // rcx
  int v19; // [rsp+48h] [rbp+10h] BYREF

  v7 = _InterlockedDecrement((volatile signed __int32 *)a4);
  v8 = 0;
  v9 = ~v7 & 0x80000000;
  if ( (v7 & 0x7FFFFFFF) != 0 )
  {
    v19 = 0;
    while ( (*(_DWORD *)a4 & 0x80000000) != v9 )
      KeYieldProcessorEx(&v19);
  }
  else
  {
    *(_DWORD *)a4 = v9 | *(_DWORD *)(a4 + 4);
    memmove(*(void **)a2, ExPoolTagTables, 40LL * *(_QWORD *)(a2 + 8));
    v14 = (__int64 *)&unk_1402FB708;
    v15 = 639LL;
    v16 = *(_QWORD *)a2 + 40LL * *(_QWORD *)(a2 + 8);
    do
    {
      v17 = *v14;
      if ( *v14 )
      {
        for ( i = *(_DWORD **)a2; i != (_DWORD *)v16; v17 += 40LL )
        {
          if ( *(_DWORD *)v17 )
          {
            i[1] += *(_DWORD *)(v17 + 4);
            i[2] += *(_DWORD *)(v17 + 8);
            *((_QWORD *)i + 2) += *(_QWORD *)(v17 + 16);
            i[6] += *(_DWORD *)(v17 + 24);
            i[7] += *(_DWORD *)(v17 + 28);
            *((_QWORD *)i + 4) += *(_QWORD *)(v17 + 32);
          }
          i += 10;
        }
      }
      ++v14;
      --v15;
    }
    while ( v15 );
    v10 = *(_QWORD *)(a2 + 24);
    if ( v10 )
      memmove(*(void **)(a2 + 16), PoolTrackTableExpansion, 40 * v10);
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
        HvlNotifyLongSpinWait(v8);
    }
  }
  else
  {
    result = v12 | *(_DWORD *)(a4 + 4);
    *(_DWORD *)a4 = result;
  }
  _InterlockedDecrement(a3);
  return result;
}
