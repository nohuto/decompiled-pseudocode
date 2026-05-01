/*
 * XREFs of RmpClientSubscriptionAllocateState @ 0x180009E58
 * Callers:
 *     RmpClientConnectionAllocateState @ 0x180009AC0 (RmpClientConnectionAllocateState.c)
 * Callees:
 *     RmpClientWnfCreateSubscription @ 0x1800050E0 (RmpClientWnfCreateSubscription.c)
 *     RmpFreeHeapForHashTable @ 0x18000CE20 (RmpFreeHeapForHashTable.c)
 */

__int64 __fastcall RmpClientSubscriptionAllocateState(__int64 a1, _QWORD *a2)
{
  char v4; // si
  unsigned __int64 v5; // rbx
  struct _PEB *v6; // rcx
  __int64 *Heap; // r9
  __int64 *v8; // r8
  unsigned __int64 v9; // r10
  unsigned __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r10
  __int64 v13; // r14
  _QWORD *v14; // r11
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 result; // rax
  __int64 v18; // [rsp+50h] [rbp+8h]

  if ( *(_DWORD *)(a1 + 24) >= (unsigned int)(2 * (*(_DWORD *)(a1 + 28) >> 5)) )
  {
    v4 = -1;
    v5 = 2 * ((unsigned __int64)*(unsigned int *)(a1 + 28) >> 5);
    if ( v5 <= 0xFFFFFFFF )
    {
      v6 = NtCurrentPeb();
      if ( (unsigned int)v5 < 4 )
        v5 = 4LL;
      Heap = (__int64 *)RtlAllocateHeap(v6->ProcessHeap, 0, 8LL * (unsigned int)v5);
      if ( Heap )
      {
        if ( (((_DWORD)v5 - 1) & (unsigned int)v5) != 0 )
        {
          do
          {
            ++v4;
            LODWORD(v5) = (unsigned int)v5 >> 1;
          }
          while ( (_DWORD)v5 );
          v5 = (unsigned int)(1 << v4);
        }
        v8 = Heap;
        v9 = 0LL;
        if ( (unsigned int)v5 > 0x4000000 )
          v5 = 0x4000000LL;
        v10 = (8 * v5 + 7) >> 3;
        if ( Heap > &Heap[v5] )
          v10 = 0LL;
        if ( v10 )
        {
          do
          {
            ++v9;
            *v8++ = (a1 + 24) | 1;
          }
          while ( v9 < v10 );
        }
        v11 = 0LL;
        v12 = -1LL << (*(_BYTE *)(a1 + 28) & 0x1F);
        if ( (*(_DWORD *)(a1 + 28) & 0xFFFFFFE0) != 0 )
        {
          do
          {
            v13 = *(_QWORD *)(a1 + 32);
            while ( 1 )
            {
              v14 = *(_QWORD **)(v13 + 8LL * (unsigned int)v11);
              if ( ((unsigned __int8)v14 & 1) != 0 )
                break;
              *(_QWORD *)(v13 + 8LL * (unsigned int)v11) = *v14;
              v18 = v12 & v14[1];
              v15 = (37
                   * (BYTE6(v18)
                    + 37
                    * (BYTE5(v18)
                     + 37
                     * (BYTE4(v18)
                      + 37
                      * (BYTE3(v18) + 37 * (BYTE2(v18) + 37 * (BYTE1(v18) + 37 * ((unsigned __int8)v18 + 11623883)))))))
                   + HIBYTE(v18)) & (unsigned int)(v5 - 1);
              *v14 = Heap[v15];
              Heap[v15] = (__int64)v14;
            }
            v11 = (unsigned int)(v11 + 1);
          }
          while ( (unsigned int)v11 < *(_DWORD *)(a1 + 28) >> 5 );
        }
        *(_DWORD *)(a1 + 28) &= 0x1Fu;
        v16 = *(_QWORD *)(a1 + 32);
        *(_DWORD *)(a1 + 28) |= 32 * v5;
        *(_QWORD *)(a1 + 32) = Heap;
        if ( v16 )
          RmpFreeHeapForHashTable(v16, 0LL, v11);
      }
      else if ( (*(_DWORD *)(a1 + 28) & 0xFFFFFFE0) == 0 )
      {
        return 3221225495LL;
      }
    }
  }
  result = RmpClientWnfCreateSubscription(a2, (__int64)RmpClientSubscriptionWnfCallback, a1, (_QWORD *)a1);
  if ( (int)result >= 0 )
    return 0LL;
  return result;
}
