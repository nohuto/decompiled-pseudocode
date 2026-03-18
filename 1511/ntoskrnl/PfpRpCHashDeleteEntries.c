/*
 * XREFs of PfpRpCHashDeleteEntries @ 0x1404AC980
 * Callers:
 *     PfpRpControlRequestUpdate @ 0x1404D4144 (PfpRpControlRequestUpdate.c)
 * Callees:
 *     ExfReleasePushLockShared @ 0x1400309E0 (ExfReleasePushLockShared.c)
 *     ExfTryToWakePushLock @ 0x140030AD8 (ExfTryToWakePushLock.c)
 *     KeAbPostRelease @ 0x140042090 (KeAbPostRelease.c)
 *     KeLeaveCriticalRegion @ 0x140042660 (KeLeaveCriticalRegion.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x140088F60 (KiLeaveCriticalRegionUnsafe.c)
 *     ExfAcquireReleasePushLockExclusive @ 0x1400F45B8 (ExfAcquireReleasePushLockExclusive.c)
 *     PfLockSharedAcquire @ 0x1400FAF50 (PfLockSharedAcquire.c)
 *     PfLockExclusiveAcquire @ 0x1400FEFB4 (PfLockExclusiveAcquire.c)
 *     memmove @ 0x140166980 (memmove.c)
 *     memset @ 0x140166CC0 (memset.c)
 *     ExAllocatePoolWithTag @ 0x140238380 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PfpRpCHashDeleteEntries(
        __int64 a1,
        __m128i *a2,
        volatile signed __int64 *a3,
        unsigned int a4,
        __int64 a5)
{
  volatile signed __int64 *v5; // r12
  volatile signed __int64 *v6; // r14
  unsigned int v8; // edi
  unsigned __int32 v9; // esi
  char v10; // dl
  char v11; // r15
  char v12; // cl
  unsigned int v13; // ebp
  unsigned int v14; // eax
  unsigned int v15; // esi
  __int64 *v16; // r12
  __int32 v17; // ebx
  __int64 v18; // r8
  struct _KTHREAD *CurrentThread; // rax
  unsigned int v21; // ecx
  __int64 v22; // rax
  int i; // edx
  __int64 v24; // rdx
  _QWORD *v25; // r9
  signed __int32 v26[8]; // [rsp+0h] [rbp-98h] BYREF
  void *PoolWithTag; // [rsp+20h] [rbp-78h]
  volatile signed __int64 *v28; // [rsp+30h] [rbp-68h]
  PVOID P[2]; // [rsp+38h] [rbp-60h]
  __int32 v30; // [rsp+A0h] [rbp+8h]
  __int64 v31; // [rsp+A0h] [rbp+8h]
  char v32; // [rsp+A8h] [rbp+10h]

  v5 = (volatile signed __int64 *)(a1 + 128);
  v6 = a3;
  v28 = (volatile signed __int64 *)(a1 + 128);
  PfLockExclusiveAcquire((unsigned __int64 *)(a1 + 128));
  v8 = 0;
  v9 = a2->m128i_i32[3] << a2->m128i_i32[2];
  if ( v9 )
  {
    PoolWithTag = ExAllocatePoolWithTag(PagedPool, v9, 0x48436650u);
    if ( PoolWithTag )
    {
      PfLockSharedAcquire(v6);
      v10 = -1;
      v11 = -1;
      v12 = _mm_cvtsi128_si32(_mm_srli_si128(*a2, 8));
      *(__m128i *)P = *a2;
      v13 = 1 << v12;
      v32 = v12;
      v14 = 1 << v12;
      if ( 1 << v12 )
      {
        do
        {
          ++v11;
          v14 >>= 1;
        }
        while ( v14 );
      }
      if ( ((v13 - 1) & v13) != 0 )
        ++v11;
      v15 = v9 >> v11;
      if ( ((v15 - 1) & v15) != 0 )
      {
        for ( ; v15; v15 >>= 1 )
          ++v10;
        v15 = 1 << v10;
      }
      v30 = 0;
      memset(PoolWithTag, 0, v15 << v11);
      if ( P[0] < (char *)P[0] + (unsigned int)(HIDWORD(P[1]) << v32) )
      {
        v16 = (__int64 *)P[0];
        v17 = 0;
        do
        {
          v18 = *v16;
          if ( *v16 )
          {
            if ( !a5 )
              goto LABEL_26;
            v21 = 0;
            if ( !a4 )
              goto LABEL_26;
            do
            {
              if ( *(_QWORD *)(a5 + 8LL * v21) == v18 )
                break;
              ++v21;
            }
            while ( v21 < a4 );
            if ( v21 >= a4 )
            {
LABEL_26:
              if ( v15 )
              {
                v22 = 0LL;
                v31 = *v16;
                for ( i = HIBYTE(v31)
                        + 37
                        * (BYTE6(v31)
                         + 37
                         * (BYTE5(v31)
                          + 37
                          * (BYTE4(v31)
                           + 37
                           * (BYTE3(v31) + 37
                                         * (BYTE2(v31) + 37 * (BYTE1(v31) + 37 * ((unsigned __int8)v18 + 11623883)))))));
                      ;
                      i = v22 + v24 )
                {
                  v24 = (v15 - 1) & i;
                  v25 = (char *)PoolWithTag + (v24 << v11);
                  if ( !*v25 || *v25 == v18 )
                    break;
                  if ( !v22 )
                  {
                    v22 = 2654435761LL * v18;
                    if ( ((-79 * (_BYTE)v18) & 1) == 0 )
                      ++v22;
                  }
                }
              }
              else
              {
                v25 = 0LL;
              }
              memmove(v25, v16, v13);
              ++v17;
            }
          }
          v16 = (__int64 *)((char *)v16 + v13);
        }
        while ( v16 < (__int64 *)((char *)P[0] + (unsigned int)(HIDWORD(P[1]) << v32)) );
        v6 = a3;
        v5 = v28;
        v30 = v17;
      }
      a2->m128i_i64[0] = (__int64)PoolWithTag;
      a2[1].m128i_i32[0] = v30;
      if ( _InterlockedCompareExchange64(v6, 0LL, 17LL) != 17 )
        ExfReleasePushLockShared((signed __int64 *)v6);
      KeAbPostRelease((ULONG_PTR)v6);
      KeLeaveCriticalRegion();
      CurrentThread = KeGetCurrentThread();
      --CurrentThread->KernelApcDisable;
      _InterlockedOr(v26, 0);
      if ( (*v6 & 1) != 0 )
        ExfAcquireReleasePushLockExclusive((unsigned __int64 *)v6);
      KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
      ExFreePoolWithTag(P[0], 0);
    }
    else
    {
      v8 = -1073741670;
    }
  }
  if ( (_InterlockedExchangeAdd64(v5, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(v5);
  KeAbPostRelease((ULONG_PTR)v5);
  KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
  return v8;
}
