/*
 * XREFs of PfpRpCHashGrow @ 0x14052BB4C
 * Callers:
 *     PfpRpCHashAddEntries @ 0x1403E6B30 (PfpRpCHashAddEntries.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140069880 (KeLeaveCriticalRegion.c)
 *     KeAbPostRelease @ 0x14006AA40 (KeAbPostRelease.c)
 *     FsRtlAcquirePushLockExclusive @ 0x14007B208 (FsRtlAcquirePushLockExclusive.c)
 *     ExfTryToWakePushLock @ 0x1400C65D8 (ExfTryToWakePushLock.c)
 *     memmove @ 0x140171780 (memmove.c)
 *     memset @ 0x140171AC0 (memset.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall PfpRpCHashGrow(__int64 a1, __m128i *a2, volatile signed __int32 *a3, __int64 *a4)
{
  volatile signed __int64 *v4; // r13
  __m128i *v6; // r15
  unsigned int v7; // ebx
  unsigned int v8; // ebx
  unsigned int v9; // ebx
  unsigned int v10; // edi
  char v11; // dl
  int v12; // esi
  char v13; // cl
  unsigned int v14; // r14d
  unsigned int v15; // eax
  unsigned int v16; // ebx
  __int64 *v17; // r12
  unsigned __int64 v18; // rax
  int v19; // r13d
  __int64 v20; // r8
  __int64 v21; // rax
  int i; // edx
  __int64 v23; // rdx
  char *v24; // r9
  char *PoolWithTag; // [rsp+28h] [rbp-50h]
  unsigned __int64 v27; // [rsp+30h] [rbp-48h]
  volatile signed __int64 *v28; // [rsp+38h] [rbp-40h]
  __m128i v29; // [rsp+40h] [rbp-38h]
  __int64 v30; // [rsp+50h] [rbp-28h]
  __m128i Src; // [rsp+58h] [rbp-20h]
  char v32; // [rsp+C0h] [rbp+48h]
  __int64 v33; // [rsp+C0h] [rbp+48h]

  v4 = (volatile signed __int64 *)(a1 + 128);
  v28 = (volatile signed __int64 *)(a1 + 128);
  v6 = a2;
  FsRtlAcquirePushLockExclusive((volatile signed __int32 *)(a1 + 128));
  v7 = v6->m128i_u32[3];
  if ( 2 * v6[1].m128i_i32[0] < v7 )
  {
    v10 = 0;
    FsRtlAcquirePushLockExclusive(a3);
  }
  else
  {
    v8 = 2 * v7;
    if ( v8 < 8 )
      v8 = 8;
    v9 = v8 << v6->m128i_i32[2];
    v10 = 0;
    PoolWithTag = (char *)ExAllocatePoolWithTag(PagedPool, v9, 0x48436650u);
    if ( PoolWithTag )
    {
      v11 = -1;
      v12 = -1;
      v13 = _mm_cvtsi128_si32(_mm_srli_si128(*v6, 8));
      Src = *v6;
      v14 = 1 << v13;
      v32 = v13;
      v15 = 1 << v13;
      if ( 1 << v13 )
      {
        do
        {
          ++v12;
          v15 >>= 1;
        }
        while ( v15 );
      }
      if ( ((v14 - 1) & v14) != 0 )
        ++v12;
      v16 = v9 >> v12;
      if ( ((v16 - 1) & v16) != 0 )
      {
        for ( ; v16; v16 >>= 1 )
          ++v11;
        v16 = 1 << v11;
      }
      LODWORD(v30) = 0;
      v29.m128i_i64[1] = __PAIR64__(v16, v12);
      v29.m128i_i64[0] = (__int64)PoolWithTag;
      memset(PoolWithTag, 0, (unsigned __int64)v16 << v12);
      v17 = (__int64 *)Src.m128i_i64[0];
      v18 = Src.m128i_i64[0] + ((unsigned __int64)Src.m128i_u32[3] << v32);
      v27 = v18;
      if ( Src.m128i_i64[0] < v18 )
      {
        v19 = 0;
        do
        {
          v20 = *v17;
          if ( *v17 )
          {
            if ( v16 )
            {
              v21 = 0LL;
              v33 = *v17;
              for ( i = HIBYTE(v33)
                      + 37
                      * (BYTE6(v33)
                       + 37
                       * (BYTE5(v33)
                        + 37
                        * (BYTE4(v33)
                         + 37
                         * (BYTE3(v33) + 37 * (BYTE2(v33) + 37 * (BYTE1(v33) + 37 * ((unsigned __int8)v20 + 11623883)))))));
                    ;
                    i = v21 + v23 )
              {
                v23 = (v16 - 1) & i;
                v24 = &PoolWithTag[v23 << v12];
                if ( !*(_QWORD *)v24 || *(_QWORD *)v24 == v20 )
                  break;
                if ( !v21 )
                {
                  v21 = 2654435761LL * v20;
                  if ( ((-79 * (_BYTE)v20) & 1) == 0 )
                    ++v21;
                }
              }
            }
            else
            {
              v24 = 0LL;
            }
            memmove(v24, v17, v14);
            v18 = v27;
            LODWORD(v30) = ++v19;
          }
          v17 = (__int64 *)((char *)v17 + v14);
        }
        while ( (unsigned __int64)v17 < v18 );
        v6 = a2;
        v17 = (__int64 *)Src.m128i_i64[0];
        v4 = v28;
      }
      FsRtlAcquirePushLockExclusive(a3);
      *v6 = v29;
      v6[1].m128i_i64[0] = v30;
      if ( v17 )
      {
        *v17 = *a4;
        *a4 = (__int64)v17;
      }
    }
    else
    {
      v10 = -1073741670;
    }
  }
  if ( (_InterlockedExchangeAdd64(v4, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(v4);
  KeAbPostRelease((ULONG_PTR)v4);
  KeLeaveCriticalRegion();
  return v10;
}
