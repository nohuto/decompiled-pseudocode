/*
 * XREFs of PfpRpCHashDeleteEntries @ 0x1403E6240
 * Callers:
 *     PfpRpControlRequestUpdate @ 0x1403E6534 (PfpRpControlRequestUpdate.c)
 * Callees:
 *     PfLockSharedAcquire @ 0x140006614 (PfLockSharedAcquire.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x140055B20 (KiLeaveCriticalRegionUnsafe.c)
 *     KeLeaveCriticalRegion @ 0x140069880 (KeLeaveCriticalRegion.c)
 *     KeAbPostRelease @ 0x14006AA40 (KeAbPostRelease.c)
 *     FsRtlAcquirePushLockExclusive @ 0x14007B208 (FsRtlAcquirePushLockExclusive.c)
 *     ExfAcquireReleasePushLockExclusive @ 0x1400A8F6C (ExfAcquireReleasePushLockExclusive.c)
 *     ExfReleasePushLockShared @ 0x1400C64E0 (ExfReleasePushLockShared.c)
 *     ExfTryToWakePushLock @ 0x1400C65D8 (ExfTryToWakePushLock.c)
 *     memmove @ 0x140171780 (memmove.c)
 *     memset @ 0x140171AC0 (memset.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall PfpRpCHashDeleteEntries(
        __int64 a1,
        __m128i *a2,
        volatile signed __int64 *a3,
        unsigned int a4,
        __int64 a5)
{
  volatile signed __int64 *v5; // r12
  unsigned int v8; // edi
  unsigned __int32 v9; // esi
  char v10; // dl
  char v11; // r15
  char v12; // cl
  size_t v13; // rbp
  unsigned int i; // eax
  unsigned int v15; // esi
  char *v16; // rdx
  char *v17; // r12
  __int32 v18; // ebx
  __int64 v19; // r8
  __int64 v20; // rdx
  __int64 v21; // r8
  __int64 v22; // r9
  struct _KTHREAD *CurrentThread; // rax
  unsigned int v25; // ecx
  __int64 v26; // rax
  int j; // edx
  __int64 v28; // rdx
  _QWORD *v29; // r9
  signed __int32 v30[8]; // [rsp+0h] [rbp-88h] BYREF
  void *PoolWithTag; // [rsp+20h] [rbp-68h]
  volatile signed __int64 *v32; // [rsp+30h] [rbp-58h]
  PVOID P[2]; // [rsp+38h] [rbp-50h]
  __int32 v34; // [rsp+90h] [rbp+8h]
  __int64 v35; // [rsp+90h] [rbp+8h]
  char v36; // [rsp+98h] [rbp+10h]
  char *v37; // [rsp+98h] [rbp+10h]

  v5 = (volatile signed __int64 *)(a1 + 128);
  v32 = (volatile signed __int64 *)(a1 + 128);
  FsRtlAcquirePushLockExclusive((volatile signed __int32 *)(a1 + 128));
  v8 = 0;
  v9 = a2->m128i_i32[3] << a2->m128i_i32[2];
  if ( v9 )
  {
    PoolWithTag = ExAllocatePoolWithTag(PagedPool, v9, 0x48436650u);
    if ( PoolWithTag )
    {
      PfLockSharedAcquire(a3);
      v10 = -1;
      v11 = -1;
      v12 = _mm_cvtsi128_si32(_mm_srli_si128(*a2, 8));
      *(__m128i *)P = *a2;
      v13 = (unsigned int)(1 << v12);
      v36 = v12;
      for ( i = v13; i; i >>= 1 )
        ++v11;
      if ( (((_DWORD)v13 - 1) & (unsigned int)v13) != 0 )
        ++v11;
      v15 = v9 >> v11;
      if ( ((v15 - 1) & v15) != 0 )
      {
        for ( ; v15; v15 >>= 1 )
          ++v10;
        v15 = 1 << v10;
      }
      v34 = 0;
      memset(PoolWithTag, 0, (unsigned __int64)v15 << v11);
      v16 = (char *)P[0] + ((unsigned __int64)HIDWORD(P[1]) << v36);
      v37 = v16;
      if ( P[0] < v16 )
      {
        v17 = (char *)P[0];
        v18 = 0;
        do
        {
          v19 = *(_QWORD *)v17;
          if ( *(_QWORD *)v17 )
          {
            if ( !a5 )
              goto LABEL_26;
            v25 = 0;
            if ( !a4 )
              goto LABEL_26;
            do
            {
              if ( *(_QWORD *)(a5 + 8LL * v25) == v19 )
                break;
              ++v25;
            }
            while ( v25 < a4 );
            if ( v25 >= a4 )
            {
LABEL_26:
              if ( v15 )
              {
                v26 = 0LL;
                v35 = *(_QWORD *)v17;
                for ( j = HIBYTE(v35)
                        + 37
                        * (BYTE6(v35)
                         + 37
                         * (BYTE5(v35)
                          + 37
                          * (BYTE4(v35)
                           + 37
                           * (BYTE3(v35) + 37
                                         * (BYTE2(v35) + 37 * (BYTE1(v35) + 37 * ((unsigned __int8)v19 + 11623883)))))));
                      ;
                      j = v26 + v28 )
                {
                  v28 = (v15 - 1) & j;
                  v29 = (char *)PoolWithTag + (v28 << v11);
                  if ( !*v29 || *v29 == v19 )
                    break;
                  if ( !v26 )
                  {
                    v26 = 2654435761LL * v19;
                    if ( ((-79 * (_BYTE)v19) & 1) == 0 )
                      ++v26;
                  }
                }
              }
              else
              {
                v29 = 0LL;
              }
              memmove(v29, v17, v13);
              v16 = v37;
              ++v18;
            }
          }
          v17 += v13;
        }
        while ( v17 < v16 );
        v5 = v32;
        v34 = v18;
      }
      a2->m128i_i64[0] = (__int64)PoolWithTag;
      a2[1].m128i_i32[0] = v34;
      if ( _InterlockedCompareExchange64(a3, 0LL, 17LL) != 17 )
        ExfReleasePushLockShared((signed __int64 *)a3);
      KeAbPostRelease((ULONG_PTR)a3);
      KeLeaveCriticalRegion();
      CurrentThread = KeGetCurrentThread();
      --CurrentThread->KernelApcDisable;
      _InterlockedOr(v30, 0);
      if ( (*a3 & 1) != 0 )
        ExfAcquireReleasePushLockExclusive((ULONG_PTR)a3);
      KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread(), v20, v21, v22);
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
  KeLeaveCriticalRegion();
  return v8;
}
