/*
 * XREFs of StLcBucketsCopy @ 0x14021FFA8
 * Callers:
 *     ?StGetStatsWorker@?$ST_STORE@USM_TRAITS@@@@SAJPEAU1@W4_ST_STATS_LEVEL@@PEAU_ST_STATS@@PEAK@Z @ 0x140003434 (-StGetStatsWorker@-$ST_STORE@USM_TRAITS@@@@SAJPEAU1@W4_ST_STATS_LEVEL@@PEAU_ST_STATS@@PEAK@Z.c)
 *     ?SmStEtwFillStoreStatsEvent@?$SMKM_STORE@USM_TRAITS@@@@SAKPEAU1@PEAU_SMKM_EVENT_DESCRIPTOR@@@Z @ 0x140221998 (-SmStEtwFillStoreStatsEvent@-$SMKM_STORE@USM_TRAITS@@@@SAKPEAU1@PEAU_SMKM_EVENT_DESCRIPTOR@@@Z.c)
 * Callees:
 *     <none>
 */

LARGE_INTEGER __fastcall StLcBucketsCopy(unsigned int *a1, __int64 a2, _QWORD *a3, unsigned int a4)
{
  unsigned int v4; // ebx
  LARGE_INTEGER result; // rax
  __int64 v8; // r8
  __int64 v9; // rax
  unsigned int v10; // eax
  LARGE_INTEGER PerformanceFrequency; // [rsp+20h] [rbp-18h] BYREF

  v4 = 8;
  if ( a4 <= 8 )
    v4 = a4;
  result = KeQueryPerformanceCounter(&PerformanceFrequency);
  if ( v4 )
  {
    v8 = v4;
    do
    {
      v9 = 1000000LL * *a3;
      a3 += 2;
      v10 = 10 * (((unsigned int)(v9 / PerformanceFrequency.QuadPart) + 9) / 0xA);
      if ( !v10 )
        v10 = -1;
      *a1 = v10;
      a1 += 2;
      result.QuadPart = *((unsigned int *)a3 - 2);
      *(a1 - 1) = result.LowPart;
      --v8;
    }
    while ( v8 );
  }
  return result;
}
