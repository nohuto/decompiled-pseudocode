/*
 * XREFs of PfpRpCHashAddEntries @ 0x1403E6B30
 * Callers:
 *     PfpRpControlRequestUpdate @ 0x1403E6534 (PfpRpControlRequestUpdate.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140069880 (KeLeaveCriticalRegion.c)
 *     KeAbPostRelease @ 0x14006AA40 (KeAbPostRelease.c)
 *     FsRtlAcquirePushLockExclusive @ 0x14007B208 (FsRtlAcquirePushLockExclusive.c)
 *     ExfTryToWakePushLock @ 0x1400C65D8 (ExfTryToWakePushLock.c)
 *     memmove @ 0x140171780 (memmove.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     PfpRpCHashGrow @ 0x14052BB4C (PfpRpCHashGrow.c)
 */

__int64 __fastcall PfpRpCHashAddEntries(
        __int64 a1,
        __int64 a2,
        volatile signed __int32 *a3,
        __int64 *a4,
        unsigned int a5)
{
  _QWORD *v5; // rbx
  __int64 v6; // r12
  int v7; // ecx
  __int64 *v8; // r15
  unsigned __int64 v9; // rbp
  unsigned int v10; // r13d
  int v13; // r12d
  void *v14; // rcx
  __int64 v16; // r8
  int v17; // r10d
  unsigned __int64 v18; // r11
  __int64 i; // rdx
  _QWORD *v20; // r9
  __int64 v22; // [rsp+68h] [rbp+10h]
  _QWORD *v23; // [rsp+78h] [rbp+20h] BYREF

  v5 = 0LL;
  v6 = a1;
  v23 = 0LL;
  v7 = *(_DWORD *)(a2 + 8);
  v8 = a4;
  v9 = (unsigned __int64)a4 + ((unsigned __int64)a5 << v7);
  v10 = 1 << v7;
  if ( a5 )
    FsRtlAcquirePushLockExclusive(a3);
  if ( (unsigned __int64)v8 < v9 )
  {
    while ( 1 )
    {
      if ( (unsigned int)(2 * *(_DWORD *)(a2 + 16)) >= *(_DWORD *)(a2 + 12) )
      {
        if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)a3, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
          ExfTryToWakePushLock((volatile signed __int64 *)a3);
        KeAbPostRelease((ULONG_PTR)a3);
        KeLeaveCriticalRegion();
        v13 = PfpRpCHashGrow(v6, a2, a3, &v23);
        if ( v13 < 0 )
        {
          v5 = v23;
          goto LABEL_6;
        }
      }
      v16 = *v8;
      v17 = *(_DWORD *)(a2 + 12);
      if ( !v17 )
        break;
      v22 = *v8;
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
        v20 = (_QWORD *)(*(_QWORD *)a2 + (v18 << *(_DWORD *)(a2 + 8)));
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
        goto LABEL_21;
LABEL_19:
      v8 = (__int64 *)((char *)v8 + v10);
      if ( (unsigned __int64)v8 >= v9 )
      {
        v5 = v23;
        goto LABEL_4;
      }
      v6 = a1;
    }
    v20 = 0LL;
LABEL_21:
    memmove(v20, v8, v10);
    ++*(_DWORD *)(a2 + 16);
    goto LABEL_19;
  }
LABEL_4:
  if ( a5 )
  {
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)a3, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)a3);
    KeAbPostRelease((ULONG_PTR)a3);
    KeLeaveCriticalRegion();
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
