/*
 * XREFs of ExpGetPoolTagInfoTarget @ 0x14010BCC0
 * Callers:
 *     <none>
 * Callees:
 *     HvlNotifyLongSpinWait @ 0x14017DFB0 (HvlNotifyLongSpinWait.c)
 *     memmove @ 0x140195740 (memmove.c)
 */

__int64 __fastcall ExpGetPoolTagInfoTarget(__int64 a1, __int64 a2, volatile signed __int32 *a3, __int64 a4)
{
  signed __int32 v7; // eax
  unsigned int v8; // ebx
  unsigned int v9; // ebp
  unsigned int v10; // edi
  __int64 v11; // rax
  signed __int32 v12; // r14d
  unsigned int v13; // edi
  __int64 result; // rax
  __int64 *v15; // r9
  __int64 v16; // r10
  __int64 v17; // r8
  __int64 v18; // rdx
  _DWORD *i; // rcx

  v7 = _InterlockedDecrement((volatile signed __int32 *)a4);
  v8 = 0;
  v9 = ~v7 & 0x80000000;
  if ( (v7 & 0x7FFFFFFF) != 0 )
  {
    v10 = 0;
    while ( (*(_DWORD *)a4 & 0x80000000) != v9 )
    {
      if ( (++v10 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
        _mm_pause();
      else
        HvlNotifyLongSpinWait(v10);
    }
  }
  else
  {
    *(_DWORD *)a4 = v9 | *(_DWORD *)(a4 + 4);
    memmove(*(void **)a2, ExPoolTagTables, 40LL * *(_QWORD *)(a2 + 8));
    v15 = (__int64 *)&unk_140325988;
    v16 = 639LL;
    v17 = *(_QWORD *)a2 + 40LL * *(_QWORD *)(a2 + 8);
    do
    {
      v18 = *v15;
      if ( *v15 )
      {
        for ( i = *(_DWORD **)a2; i != (_DWORD *)v17; v18 += 40LL )
        {
          if ( *(_DWORD *)v18 )
          {
            i[1] += *(_DWORD *)(v18 + 4);
            i[2] += *(_DWORD *)(v18 + 8);
            *((_QWORD *)i + 2) += *(_QWORD *)(v18 + 16);
            i[6] += *(_DWORD *)(v18 + 24);
            i[7] += *(_DWORD *)(v18 + 28);
            *((_QWORD *)i + 4) += *(_QWORD *)(v18 + 32);
          }
          i += 10;
        }
      }
      ++v15;
      --v16;
    }
    while ( v16 );
    v11 = *(_QWORD *)(a2 + 24);
    if ( v11 )
      memmove(*(void **)(a2 + 16), PoolTrackTableExpansion, 40 * v11);
  }
  v12 = _InterlockedDecrement((volatile signed __int32 *)a4);
  v13 = ~v12 & 0x80000000;
  if ( (v12 & 0x7FFFFFFF) != 0 )
  {
    while ( 1 )
    {
      result = *(_DWORD *)a4 & 0x80000000;
      if ( (_DWORD)result == v13 )
        break;
      if ( (++v8 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
        _mm_pause();
      else
        HvlNotifyLongSpinWait(v8);
    }
  }
  else
  {
    result = v13 | *(_DWORD *)(a4 + 4);
    *(_DWORD *)a4 = result;
  }
  _InterlockedDecrement(a3);
  return result;
}
