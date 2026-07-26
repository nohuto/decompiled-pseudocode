/*
 * XREFs of PplCreateLookasideList @ 0x1C002356C
 * Callers:
 *     ndisMInitializeScatterGatherDma @ 0x1C00B1620 (ndisMInitializeScatterGatherDma.c)
 * Callees:
 *     PplpCreateOneLookasideList @ 0x1C00236D4 (PplpCreateOneLookasideList.c)
 *     memset @ 0x1C0027500 (memset.c)
 *     PplpFreeOneLookasideList @ 0x1C0073F70 (PplpFreeOneLookasideList.c)
 */

_QWORD *__fastcall PplCreateLookasideList(__int64 a1, __int64 a2, __int64 a3, __int64 a4, SIZE_T a5)
{
  _QWORD *PoolWithTagPriority; // rax
  _QWORD *v6; // rdi
  SIZE_T v7; // rbx
  __int64 *v8; // rax
  __int64 *v9; // r14
  ULONG ActiveProcessorCount; // eax
  unsigned int v11; // esi
  ULONG v12; // ebp
  __int64 *v13; // rbx
  __int64 v14; // rax
  _QWORD *result; // rax
  unsigned int i; // ebp
  __int64 v17; // rbx

  PoolWithTagPriority = ExAllocatePoolWithTagPriority(NonPagedPoolNxCacheAligned, 0x40uLL, 0x6264444Eu, LowPoolPriority);
  v6 = PoolWithTagPriority;
  if ( PoolWithTagPriority )
  {
    memset(PoolWithTagPriority, 0, 0x40uLL);
    v7 = 8LL * (KeQueryMaximumProcessorCountEx(0xFFFFu) + 1);
    v8 = (__int64 *)ExAllocatePoolWithTagPriority(NonPagedPoolNxCacheAligned, v7, 0x6264444Eu, LowPoolPriority);
    v9 = v8;
    if ( v8 )
    {
      v6[4] = v8;
      memset(v8, 0, v7);
      ActiveProcessorCount = KeQueryActiveProcessorCountEx(0xFFFFu);
      v11 = 0;
      v12 = ActiveProcessorCount + 1;
      if ( ActiveProcessorCount == -1 )
      {
LABEL_9:
        *(_DWORD *)v6 = v12;
        result = v6;
        *((_DWORD *)v6 + 1) = 0;
        *((_DWORD *)v6 + 2) = 1650738254;
        *((_DWORD *)v6 + 3) = 1650738254;
        v6[2] = a5;
        *((_DWORD *)v6 + 6) = 512;
        *((_WORD *)v6 + 14) = 0;
        return result;
      }
      v13 = v9;
      while ( 1 )
      {
        v14 = v11
            ? PplpCreateOneLookasideList(
                (PALLOCATE_FUNCTION_EX)PplGenericAllocateFunction,
                (PFREE_FUNCTION_EX)PplGenericFreeFunction,
                NonPagedPoolNx,
                0,
                a5,
                0x6264444Eu,
                0,
                0x6264444Eu,
                *v9,
                0)
            : PplpCreateOneLookasideList(0LL, 0LL, NonPagedPoolNx, 0, a5, 0x6264444Eu, 0, 0x6264444Eu, 0LL, 1);
        *v13 = v14;
        if ( !v14 )
          break;
        ++v11;
        ++v13;
        if ( v11 >= v12 )
          goto LABEL_9;
      }
      for ( i = 1; i <= v11; v9[v17] = 0LL )
      {
        v17 = v11 - i;
        PplpFreeOneLookasideList(v9[v17], 1650738254LL);
        ++i;
      }
      ExFreePoolWithTag(v9, 0x6264444Eu);
    }
    ExFreePoolWithTag(v6, 0x6264444Eu);
  }
  return 0LL;
}
