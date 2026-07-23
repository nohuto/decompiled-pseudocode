/*
 * XREFs of MiScrubNode @ 0x1401FE48C
 * Callers:
 *     MiScrubMemoryWorker @ 0x140664E9C (MiScrubMemoryWorker.c)
 * Callees:
 *     MiEmptyKernelStackCache @ 0x14000196C (MiEmptyKernelStackCache.c)
 *     MiLockPageInline @ 0x1400229F0 (MiLockPageInline.c)
 *     MiInsertPageInFreeOrZeroedList @ 0x140066D40 (MiInsertPageInFreeOrZeroedList.c)
 *     MiPfnsWorthTrying @ 0x1401029B0 (MiPfnsWorthTrying.c)
 *     MiClaimPhysicalRun @ 0x14010415C (MiClaimPhysicalRun.c)
 *     MiMakePageBad @ 0x1401FDFCC (MiMakePageBad.c)
 *     MiScrubPage @ 0x1401FE690 (MiScrubPage.c)
 *     MiScrubNonPagedPool @ 0x140659F44 (MiScrubNonPagedPool.c)
 *     MiScrubNodeLargePages @ 0x140664BE4 (MiScrubNodeLargePages.c)
 */

_DWORD *__fastcall MiScrubNode(int *a1, __int64 a2)
{
  __int64 v4; // rbp
  _DWORD *result; // rax
  __int64 i; // r15
  __int64 v7; // rax
  unsigned __int64 v8; // r12
  ULONG_PTR v9; // r14
  __int64 v10; // rsi
  unsigned __int64 v11; // rax
  int v12; // ebx
  unsigned __int8 v13; // [rsp+80h] [rbp+8h]
  int v14; // [rsp+88h] [rbp+10h] BYREF

  v4 = *(_QWORD *)(a2 + 48) + 16 * (**(unsigned int **)(a2 + 48) + 1LL);
  if ( a1 == MiSystemPartition )
    MiScrubNonPagedPool(a2, *(unsigned int *)(a2 + 56), *(_QWORD *)(a2 + 32));
  MiScrubNodeLargePages(a2, a1, *(unsigned int *)(a2 + 56), *(_QWORD *)(a2 + 32));
  result = *(_DWORD **)(a2 + 48);
  for ( i = 0LL; (unsigned int)i < *result; i = (unsigned int)(i + 1) )
  {
    if ( *(unsigned __int8 *)(v4 + 2 * i) == *(_DWORD *)(a2 + 56) )
    {
      v7 = *(_QWORD *)(a2 + 48);
      v8 = *(_QWORD *)(v7 + 16LL * (unsigned int)i + 16);
      v9 = v8 + *(_QWORD *)(v7 + 16LL * (unsigned int)i + 24) - 1LL;
      v10 = 48 * v9 - 0x58000000000LL;
      while ( v9 >= v8 && v8 )
      {
        result = *(_DWORD **)(a2 + 32);
        if ( result[1] )
          return result;
        v14 = 0;
        v11 = MiPfnsWorthTrying((__int16 *)a1, v10, 1LL, 117440512, &v14);
        if ( v11 )
        {
          if ( v11 >= v9 - v8 + 1 )
            break;
          v10 += 48 - 48 * v11;
          v9 += 1 - v11;
        }
        else
        {
          if ( v14 == 1 )
            MiEmptyKernelStackCache();
          if ( !MiClaimPhysicalRun(a1, v9, 1LL, a2, 0x7000000u, -1, 0LL) )
          {
            v12 = MiScrubPage(a2, 0LL, v10, 0LL);
            v13 = MiLockPageInline(v10);
            if ( v12 < 0 || (*(_BYTE *)(v10 + 35) & 0x40) != 0 )
              MiMakePageBad(v10, 1);
            else
              MiInsertPageInFreeOrZeroedList(v9, 2);
            _InterlockedAnd64((volatile signed __int64 *)(v10 + 24), 0x7FFFFFFFFFFFFFFFuLL);
            __writecr8(v13);
          }
        }
        --v9;
        v10 -= 48LL;
      }
    }
    result = *(_DWORD **)(a2 + 48);
  }
  return result;
}
