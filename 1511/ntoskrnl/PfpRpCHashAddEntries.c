/*
 * XREFs of PfpRpCHashAddEntries @ 0x1404D6068
 * Callers:
 *     PfpRpControlRequestUpdate @ 0x1404D4144 (PfpRpControlRequestUpdate.c)
 * Callees:
 *     ExfTryToWakePushLock @ 0x140030AD8 (ExfTryToWakePushLock.c)
 *     KeAbPostRelease @ 0x140042090 (KeAbPostRelease.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x140088F60 (KiLeaveCriticalRegionUnsafe.c)
 *     PfLockExclusiveAcquire @ 0x1400FEFB4 (PfLockExclusiveAcquire.c)
 *     memmove @ 0x140166980 (memmove.c)
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
 *     PfpRpCHashGrow @ 0x1404BA288 (PfpRpCHashGrow.c)
 */

__int64 __fastcall PfpRpCHashAddEntries(__int64 a1, __m128i *a2, unsigned __int64 *a3, __int64 *a4, int a5)
{
  _QWORD *v5; // rbx
  __int64 v6; // rbp
  __int32 v7; // ecx
  __int64 *v9; // r15
  unsigned int v10; // r13d
  unsigned __int64 v11; // r12
  int v13; // ebp
  void *v14; // rcx
  __int64 v16; // r8
  __int32 v17; // r10d
  unsigned __int64 v18; // r11
  __int64 i; // rdx
  _QWORD *v20; // r9
  __int64 v22; // [rsp+68h] [rbp+10h]
  _QWORD *v23; // [rsp+78h] [rbp+20h] BYREF

  v5 = 0LL;
  v6 = a1;
  v7 = a2->m128i_i32[2];
  v9 = a4;
  v23 = 0LL;
  v10 = 1 << v7;
  v11 = (unsigned __int64)a4 + (unsigned int)(a5 << v7);
  if ( a5 )
    PfLockExclusiveAcquire(a3);
  if ( (unsigned __int64)v9 < v11 )
  {
    while ( 1 )
    {
      if ( (unsigned int)(2 * a2[1].m128i_i32[0]) >= a2->m128i_i32[3] )
      {
        if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)a3, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
          ExfTryToWakePushLock((volatile signed __int64 *)a3);
        KeAbPostRelease((ULONG_PTR)a3);
        KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
        v13 = PfpRpCHashGrow(v6, a2, a3, (__int64 *)&v23);
        if ( v13 < 0 )
        {
          v5 = v23;
          goto LABEL_6;
        }
      }
      v16 = *v9;
      v17 = a2->m128i_i32[3];
      if ( !v17 )
        break;
      v22 = *v9;
      v18 = (37
           * (BYTE6(v22)
            + 37
            * (BYTE5(v22)
             + 37
             * (BYTE4(v22)
              + 37 * (BYTE3(v22) + 37 * (BYTE2(v22) + 37 * (BYTE1(v22) + 37 * ((unsigned __int8)v16 + 11623883)))))))
           + HIBYTE(v22)) & (unsigned int)(v17 - 1);
      for ( i = 0LL; ; v18 = (unsigned int)(v17 - 1) & (i + v18) )
      {
        v20 = (_QWORD *)(a2->m128i_i64[0] + (v18 << a2->m128i_i32[2]));
        if ( !*v20 || *v20 == v16 )
          break;
        if ( !i )
        {
          i = 2654435761LL * v16;
          if ( ((-79 * (_BYTE)v16) & 1) == 0 )
            ++i;
        }
      }
      if ( !*v20 )
        goto LABEL_20;
LABEL_18:
      v9 = (__int64 *)((char *)v9 + v10);
      if ( (unsigned __int64)v9 >= v11 )
      {
        v5 = v23;
        goto LABEL_4;
      }
      v6 = a1;
    }
    v20 = 0LL;
LABEL_20:
    memmove(v20, v9, v10);
    ++a2[1].m128i_i32[0];
    goto LABEL_18;
  }
LABEL_4:
  if ( a5 )
  {
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)a3, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)a3);
    KeAbPostRelease((ULONG_PTR)a3);
    KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
    v5 = v23;
  }
  v13 = 0;
LABEL_6:
  while ( 1 )
  {
    v14 = v5;
    if ( !v5 )
      break;
    v5 = (_QWORD *)*v5;
    ExFreePoolWithTag(v14, 0);
  }
  return (unsigned int)v13;
}
