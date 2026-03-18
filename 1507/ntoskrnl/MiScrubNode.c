/*
 * XREFs of MiScrubNode @ 0x140232B18
 * Callers:
 *     MiScrubMemoryWorker @ 0x1406AA94C (MiScrubMemoryWorker.c)
 * Callees:
 *     MiClaimPhysicalRun @ 0x14005ACA0 (MiClaimPhysicalRun.c)
 *     MiPfnsWorthTrying @ 0x14005CAD0 (MiPfnsWorthTrying.c)
 *     MiInsertPageInFreeOrZeroedList @ 0x1400C80C0 (MiInsertPageInFreeOrZeroedList.c)
 *     MiEmptyKernelStackCache @ 0x14012FF64 (MiEmptyKernelStackCache.c)
 *     HvlNotifyLongSpinWait @ 0x14017DFB0 (HvlNotifyLongSpinWait.c)
 *     MiMakePageBad @ 0x140232438 (MiMakePageBad.c)
 *     MiScrubPage @ 0x140232D48 (MiScrubPage.c)
 *     MiScrubNonPagedPool @ 0x1406A49A4 (MiScrubNonPagedPool.c)
 *     MiScrubNodeLargePages @ 0x1406A97C0 (MiScrubNodeLargePages.c)
 */

__int64 __fastcall MiScrubNode(__int64 a1)
{
  unsigned int *v1; // rax
  __int64 v2; // r12
  __int64 v4; // rdx
  unsigned int *v5; // rdi
  __int64 v6; // rax
  ULONG_PTR v7; // r13
  ULONG_PTR v8; // r14
  __int64 v9; // rbp
  __int64 v10; // rsi
  __int64 result; // rax
  int v12; // eax
  unsigned int v13; // r15d
  int v14; // [rsp+90h] [rbp+8h] BYREF
  int v15; // [rsp+98h] [rbp+10h]
  __int64 CurrentIrql; // [rsp+A0h] [rbp+18h]
  __int64 v17; // [rsp+A8h] [rbp+20h] BYREF

  v1 = *(unsigned int **)(a1 + 48);
  v2 = 0LL;
  v4 = *v1;
  v5 = &v1[4 * v4 + 4];
  if ( (_DWORD)v4 )
  {
    do
    {
      if ( *((unsigned __int8 *)v5 + 2 * v2) == *(_DWORD *)(a1 + 56) )
      {
        v6 = *(_QWORD *)(a1 + 48);
        v7 = *(_QWORD *)(v6 + 16LL * (unsigned int)v2 + 16);
        v8 = v7 + *(_QWORD *)(v6 + 16LL * (unsigned int)v2 + 24) - 1LL;
        v9 = 48 * v8 - 0x58000000000LL;
        if ( v8 >= v7 )
        {
          v10 = v9 + 24;
          do
          {
            if ( !v7 )
              break;
            result = *(_QWORD *)(a1 + 32);
            if ( *(_DWORD *)(result + 4) )
              return result;
            v14 = 0;
            if ( !MiPfnsWorthTrying(MiSystemPartition[0], v9, 1LL, 100663296, &v14, &v17) )
            {
              if ( v14 == 1 )
                MiEmptyKernelStackCache();
              if ( !MiClaimPhysicalRun(MiSystemPartition, v8, 1LL, a1, 0x6000000u, -1, 0LL) )
              {
                v12 = MiScrubPage(a1, 0LL, v9);
                v15 = v12;
                CurrentIrql = KeGetCurrentIrql();
                __writecr8(2uLL);
                v13 = 0;
                if ( _interlockedbittestandset64((volatile signed __int32 *)v10, 0x3FuLL) )
                {
                  do
                  {
                    if ( (++v13 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
                      _mm_pause();
                    else
                      HvlNotifyLongSpinWait(v13);
                  }
                  while ( *(__int64 *)v10 < 0 || _interlockedbittestandset64((volatile signed __int32 *)v10, 0x3FuLL) );
                  v12 = v15;
                }
                if ( v12 < 0 || (*(_BYTE *)(v10 + 11) & 0x40) != 0 )
                  MiMakePageBad(v9, 1);
                else
                  MiInsertPageInFreeOrZeroedList(v8, 2);
                _InterlockedAnd64((volatile signed __int64 *)v10, 0x7FFFFFFFFFFFFFFFuLL);
                __writecr8((unsigned __int8)CurrentIrql);
              }
            }
            --v8;
            v9 -= 48LL;
            v10 -= 48LL;
          }
          while ( v8 >= v7 );
        }
      }
      v2 = (unsigned int)(v2 + 1);
    }
    while ( (unsigned int)v2 < **(_DWORD **)(a1 + 48) );
  }
  MiScrubNonPagedPool(a1, *(unsigned int *)(a1 + 56), *(_QWORD *)(a1 + 32));
  return MiScrubNodeLargePages(a1, *(unsigned int *)(a1 + 56), *(_QWORD *)(a1 + 32));
}
